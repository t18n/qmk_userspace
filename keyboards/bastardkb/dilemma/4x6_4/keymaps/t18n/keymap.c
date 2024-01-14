// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2023 @t18n
// SPDX-License-Identifier: GPL-3.0-or-later

#include "t18n.h"

// Custom keycodes can be found in userspace_custom_keycodes process_records.h

// Keycodes: https://github.com/samhocevar-forks/qmk-firmware/blob/master/docs/keycodes.md

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
    ) \
    LAYOUT_wrapper ( \
     MT(MOD_LALT,KC_ESC),  ____NUMBER_LEFT____,            ____NUMBER_RIGHT____, KC_MINUS, \
     KC_TAB,    K01,    K02,    K03,    K04,    K05,                K06,    K07,    K08,    K09,        K0A,    KC_EQUAL, \
     KC_LSFT, K11,    K12,    K13,    K14,    K15,                K16,    K17,    K18,    K19,        K1A,    KC_QUOTE, \
     KC_LCTL,  K21,    K22,    K23,    K24,    K25,                K26,    K27,    K28,    K29,        K2A,    KC_GRAVE, \
            KC_MUTE, KC_LGUI,  LT(_RAISE, KC_SPC),  KC_BSPC,                 MEH_T(KC_SPC),  MO(_LOWER),  KC_ENTER,   RGB_MODE_FORWARD \
    )

#define LAYOUT_base_wrapper(...)       LAYOUT_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT_LAYER_1] = LAYOUT_base_wrapper(
        ____QWERTY_L1____, ____QWERTY_R1____,
        ____QWERTY_L2____, ____QWERTY_R2____,
        ____QWERTY_L3____, ____QWERTY_R3____
    ),
    [_LOWER] = LAYOUT_wrapper(
        _______,  ____FUNC_LEFT____,    ____FUNC_RIGHT____, KC_F11,
        _______, ____LOWER_L1____,    ____LOWER_R1____, KC_F12,
        _______, ____LOWER_L2____,    ____LOWER_R2____, _______,
        _______, ____LOWER_L3____,    ____LOWER_R3____, KC_CAPS,
                          _______, _______, _______, _______,    _______, _______, _______, _______
    ),
    [_RAISE] = LAYOUT_wrapper(
        KC_F12,  ____FUNC_LEFT____,    ____FUNC_RIGHT____, KC_F11,
        KC_GRV,  ____RAISE_L1____,    ____RAISE_R1____, _______,
        _______, ____RAISE_L2____,    ____RAISE_R2____, KC_BSLS,
        _______, ____RAISE_L3____,    ____RAISE_R3____, _______,
                          _______, _______, _______, _______,    _______, _______, _______, _______
    )
};
// clang-format on

#ifdef ENCODER_MAP_ENABLE
// clang-format off
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_DEFAULT_LAYER_1] = { ENCODER_CCW_CW( KC_VOLD, KC_VOLU ), ENCODER_CCW_CW( KC_BRID, KC_BRIU ) },
    [_RAISE]           = { ENCODER_CCW_CW( KC_PGDN, KC_PGUP ), ENCODER_CCW_CW( OL_BINC, OL_BDEC ) },
    [_LOWER]           = { ENCODER_CCW_CW( RGB_MOD, RGB_RMOD), ENCODER_CCW_CW( RGB_HUI, RGB_HUD ) },
};
// clang-format on
#endif // ENCODER_MAP_ENABLE

#if defined(OLED_ENABLE) && defined(OLED_DISPLAY_128X128)
#    ifdef UNICODE_COMMON_ENABLE
#        include "process_unicode_common.h"
#        include "keyrecords/unicode.h"
#    endif

extern const char PROGMEM display_border[3+1];

extern bool is_oled_enabled;

bool oled_task_keymap(void) {
    // No right side oled, so just exit.
    if (!is_keyboard_left()) {
        return false;
    }

    oled_write_raw_P(header_image, sizeof(header_image));
    oled_set_cursor(4, 0);
    oled_write_P(PSTR(" Dilemma Max"), true);

    render_default_layer_state(1, 1);
    render_layer_state(1, 2);
    render_pet(0, 5);
    render_wpm(1, 7, 5);
#    if defined(POINTING_DEVICE_ENABLE)
    render_pointing_dpi_status(
        dilemma_get_pointer_sniping_enabled() ? dilemma_get_pointer_sniping_dpi() : dilemma_get_pointer_default_dpi(),
        1, 7, 6);
    render_mouse_mode(17, 6);
#    else
    render_matrix_scan_rate(1, 7, 6);
#    endif
    render_bootmagic_status(7, 7);
    render_user_status(1, 9);

    render_mod_status(get_mods() | get_oneshot_mods(), 1, 10);
    render_keylock_status(host_keyboard_led_state(), 1, 11);
    render_unicode_mode(1, 12);

    render_os(1, 13);
    render_rgb_mode(1, 14);

    for (uint8_t i = 1; i < 15; i++) {
        oled_set_cursor(0, i);
        oled_write_raw_P(display_border, sizeof(display_border));
        oled_set_cursor(21, i);
        oled_write_raw_P(display_border, sizeof(display_border));
    }

    oled_set_cursor(0, 15);
    oled_write_raw_P(footer_image2, sizeof(footer_image2));
    oled_set_cursor(4, 15);
    oled_write(oled_keylog_str, true);

    return false;
}
#endif

void keyboard_post_init_keymap(void) {
#ifdef RGB_MATRIX_ENABLE
    g_led_config.flags[48] = g_led_config.flags[50] = g_led_config.flags[51] = g_led_config.flags[100] =
        g_led_config.flags[101] = g_led_config.flags[102] = g_led_config.flags[103] = LED_FLAG_MODIFIER;
#endif
}

#ifdef RGB_MATRIX_ENABLE
void check_default_layer(uint8_t mode, uint8_t type, uint8_t led_min, uint8_t led_max) {
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            rgb_matrix_layer_helper(DEFAULT_LAYER_1_HSV, mode, rgb_matrix_config.speed, type, led_min, led_max);
            break;
    }
}

bool rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max) {
    if (userspace_config.rgb_layer_change) {
        switch (get_highest_layer(layer_state)) {
            case _RAISE:
                rgb_matrix_layer_helper(HSV_YELLOW, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW, led_min, led_max);
                break;
            case _LOWER:
                rgb_matrix_layer_helper(HSV_GREEN, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW, led_min, led_max);
                break;
            default:
                {
                    check_default_layer(0, LED_FLAG_UNDERGLOW, led_min, led_max);
                    break;
                }
        }
        check_default_layer(0, LED_FLAG_MODIFIER, led_min, led_max);
    }
    return false;
}
#endif

uint16_t get_tapping_term_keymap(uint16_t keycode, keyrecord_t *record) {
    if ((record->event.key.row == 4 || record->event.key.row == 9) && record->event.key.col == 3) {
        return 400;
    }
    return TAPPING_TERM;
}
