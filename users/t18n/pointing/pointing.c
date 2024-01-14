// Copyright 2021 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "pointing.h"
#include "math.h"

static uint16_t mouse_debounce_timer = 0;
bool            enable_acceleration  = false;

#ifdef TAPPING_TERM_PER_KEY
#    define TAP_CHECK get_tapping_term(KC_BTN1, NULL)
#else
#    ifndef TAPPING_TERM
#        define TAPPING_TERM 200
#    endif
#    define TAP_CHECK TAPPING_TERM
#endif

__attribute__((weak)) void pointing_device_init_keymap(void) {}

void pointing_device_init_user(void) {
    set_auto_mouse_layer(_MOUSE);
    set_auto_mouse_enable(true);

    pointing_device_init_keymap();
}

__attribute__((weak)) report_mouse_t pointing_device_task_keymap(report_mouse_t mouse_report) {
    return mouse_report;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    mouse_xy_report_t x = mouse_report.x, y = mouse_report.y;
    mouse_report.x = 0;
    mouse_report.y = 0;

    if (x != 0 && y != 0 && (timer_elapsed(mouse_debounce_timer) > TAP_CHECK)) {
        if (enable_acceleration) {
            float magnitude          = sqrtf(mouse_report.x * mouse_report.x + mouse_report.y * mouse_report.y);
            float adjusted_magnitude = powf(magnitude, 1.2f);
            x                        = (mouse_xy_report_t)(x * adjusted_magnitude);
            y                        = (mouse_xy_report_t)(y * adjusted_magnitude);
            //            x = (mouse_xy_report_t)(x > 0 ? x * x / 16 + x : -x * x / 16 + x);
            //            y = (mouse_xy_report_t)(y > 0 ? y * y / 16 + y : -y * y / 16 + y);
        }
        mouse_report.x = x;
        mouse_report.y = y;
    }

    return pointing_device_task_keymap(mouse_report);
}

bool process_record_pointing(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case KC_ACCEL:
            enable_acceleration = record->event.pressed;
            break;
#if defined(POINTING_DEVICE_MOUSE_JIGGLER_ENABLE)
        case PD_JIGGLER:
            if (record->event.pressed) {
                pointing_device_mouse_jiggler_toggle();
            }
#endif
        default:
            mouse_debounce_timer = timer_read();
            break;
    }
    return true;
}

layer_state_t layer_state_set_pointing(layer_state_t state) {
    if (layer_state_cmp(state, _GAMEPAD) || layer_state_cmp(state, _DIABLO) || layer_state_cmp(state, _DIABLOII)) {
        state |= ((layer_state_t)1 << _MOUSE);
        set_auto_mouse_enable(false); // auto mouse can be disabled any time during run time
    } else {
        set_auto_mouse_enable(true);
    }
    return state;
}

#if defined(POINTING_DEVICE_MOUSE_JIGGLER_ENABLE)
static uint16_t mouse_jiggler_timer;

bool has_mouse_report_changed(report_mouse_t* new_report, report_mouse_t* old_report) {
    // Only report every 5 seconds.
    if (userspace_config.mouse_jiggler && timer_elapsed(mouse_jiggler_timer) > 5000) {
        mouse_jiggler_timer = timer_read();
        return true;
    }
    return ((new_report->buttons != old_report->buttons) || (new_report->x != 0 && new_report->x != old_report->x) ||
            (new_report->y != 0 && new_report->y != old_report->y) ||
            (new_report->h != 0 && new_report->h != old_report->h) ||
            (new_report->v != 0 && new_report->v != old_report->v));
}

void pointing_device_mouse_jiggler_toggle(void) {
    mouse_jiggler_timer            = timer_read();
    userspace_config.mouse_jiggler = !userspace_config.mouse_jiggler;
}

#endif

#if defined(POINTING_DEVICE_AUTO_MOUSE_ENABLE)
__attribute__((weak)) bool is_mouse_record_keymap(uint16_t keycode, keyrecord_t* record) {
    return false;
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
    if (is_mouse_record_keymap(keycode, record)) {
        return true;
    }
    switch (keycode) {
#    if defined(KEYBOARD_ploopy)
        case DPI_CONFIG:
#    elif (defined(KEYBOARD_bastardkb_charybdis) || defined(KEYBOARD_handwired_tractyl_manuform)) && \
            !defined(NO_CHARYBDIS_KEYCODES) ||                                                       \
        (defined(KEYBOARD_bastardkb_dilemma) && !defined(NO_DILEMMA_KEYCODES))
        case QK_KB ... QK_KB_MAX:
#    endif
        case KC_ACCEL:
        case PD_JIGGLER:
            return true;
    }
    return false;
}
#endif

#ifdef POINTING_MODE_MAP_ENABLE
enum keymap_pointing_mode_ids {
    PM_BROW = POINTING_MODE_MAP_START, // BROWSER TAB Manipulation                      [mode id  6]
    PM_APP,                            // Open App browsing                             [mode id  7]
    POSTMAP_PM_SAFE_RANGE              // To avoid overlap when adding additional modes [mode id  8]
};
// (optional) enum to make things easier to read (index numbers can be used directly)
// Must be in the same order as the above modes
enum keymap_pointing_mode_maps_index {
    _PM_BROW, // first mode map  [index  0]
    _PM_APP   // second mode map [index  1]
};

const uint16_t PROGMEM pointing_mode_maps[POINTING_MODE_MAP_COUNT][POINTING_NUM_DIRECTIONS] = {
    [_PM_BROW] = POINTING_MODE_LAYOUT(C(S(KC_PGUP)), C(S(KC_TAB)), C(KC_TAB), C(S(KC_PGDN))),
    [_PM_APP]  = POINTING_MODE_LAYOUT(KC_NO, A(S(KC_TAB)), A(KC_TAB), KC_NO)};
#endif
