// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once
#include QMK_KEYBOARD_H

#ifndef RGB_TOG
#    define RGB_TOG UG_TOGG
#endif
#ifndef RGB_MOD
#    define RGB_MOD UG_NEXT
#endif
#ifndef RGB_RMOD
#    define RGB_RMOD UG_PREV
#endif
#ifndef RGB_HUI
#    define RGB_HUI UG_HUEU
#endif
#ifndef RGB_HUD
#    define RGB_HUD UG_HUED
#endif
#ifndef RGB_SAI
#    define RGB_SAI UG_SATU
#endif
#ifndef RGB_SAD
#    define RGB_SAD UG_SATD
#endif
#ifndef RGB_VAI
#    define RGB_VAI UG_VALU
#endif
#ifndef RGB_VAD
#    define RGB_VAD UG_VALD
#endif
#ifndef RGB_SPI
#    define RGB_SPI UG_SPDU
#endif
#ifndef RGB_SPD
#    define RGB_SPD UG_SPDD
#endif
#ifndef KC_MS_BTN1
#    define KC_MS_BTN1 MS_BTN1
#endif
#ifndef KC_MS_BTN2
#    define KC_MS_BTN2 MS_BTN2
#endif
#ifndef KC_MS_BTN3
#    define KC_MS_BTN3 MS_BTN3
#endif
#ifndef KC_MS_BTN4
#    define KC_MS_BTN4 MS_BTN4
#endif
#ifndef KC_MS_BTN5
#    define KC_MS_BTN5 MS_BTN5
#endif
#ifndef KC_MS_BTN6
#    define KC_MS_BTN6 MS_BTN6
#endif
#ifndef KC_MS_BTN7
#    define KC_MS_BTN7 MS_BTN7
#endif
#ifndef KC_MS_BTN8
#    define KC_MS_BTN8 MS_BTN8
#endif
#ifndef KC_MS_U
#    define KC_MS_U MS_UP
#endif
#ifndef KC_MS_D
#    define KC_MS_D MS_DOWN
#endif
#ifndef KC_MS_L
#    define KC_MS_L MS_LEFT
#endif
#ifndef KC_MS_R
#    define KC_MS_R MS_RGHT
#endif
#ifndef KC_WH_U
#    define KC_WH_U MS_WHLU
#endif
#ifndef KC_WH_D
#    define KC_WH_D MS_WHLD
#endif
#ifndef KC_WH_L
#    define KC_WH_L MS_WHLL
#endif
#ifndef KC_WH_R
#    define KC_WH_R MS_WHLR
#endif
#ifndef KC_BTN1
#    define KC_BTN1 MS_BTN1
#endif
#ifndef KC_BTN2
#    define KC_BTN2 MS_BTN2
#endif
#ifndef KC_BTN3
#    define KC_BTN3 MS_BTN3
#endif
#ifndef KC_BTN4
#    define KC_BTN4 MS_BTN4
#endif
#ifndef KC_BTN5
#    define KC_BTN5 MS_BTN5
#endif
#ifndef KC_BTN6
#    define KC_BTN6 MS_BTN6
#endif
#ifndef KC_BTN7
#    define KC_BTN7 MS_BTN7
#endif
#ifndef KC_BTN8
#    define KC_BTN8 MS_BTN8
#endif

#include "eeconfig_users.h"
#include "keyrecords/wrappers.h"
#include "keyrecords/process_records.h"
#include "callbacks.h"

#if defined(RGBLIGHT_ENABLE)
#    include "rgb/rgb_stuff.h"
#endif
#if defined(RGB_MATRIX_ENABLE)
#    include "rgb/rgb_matrix_stuff.h"
#endif
#if defined(OLED_ENABLE)
#    include "oled/oled_stuff.h"
#endif
#ifdef SPLIT_KEYBOARD
#    include "split/transport_sync.h"
#endif
#ifdef POINTING_DEVICE_ENABLE
#    include "pointing/pointing.h"
#endif
#ifdef OS_DETECTION_ENABLE
#    include "os_detection.h"
#endif
#ifdef ORBITAL_MOUSE_ENABLE
#    include "orbital_mouse.h"
#endif

/* Define layer names */
enum userspace_layers {
    _QWERTY             = 0,
    _NUMLOCK            = 0,
    FIRST_DEFAULT_LAYER = 0,
    _COLEMAK_DH,
    _COLEMAK,
    _DVORAK,
    LAST_DEFAULT_LAYER = _DVORAK,
    _GAMEPAD,
    _DIABLO,
    _DIABLOII,
    _MOUSE,
    _MEDIA,
    _LOWER,
    _RAISE,
    _ADJUST,
};

#define _MACROS          _MOUSE
#define _DEFAULT_LAYER_1 FIRST_DEFAULT_LAYER
#define _DEFAULT_LAYER_2 (FIRST_DEFAULT_LAYER + 1)
#define _DEFAULT_LAYER_3 (FIRST_DEFAULT_LAYER + 2)
#define _DEFAULT_LAYER_4 (FIRST_DEFAULT_LAYER + 3)
#if LAST_DEFAULT_LAYER > (FIRST_DEFAULT_LAYER + 3)
#    define _DEFAULT_LAYER_2 (FIRST_DEFAULT_LAYER + 4)
#    define _DEFAULT_LAYER_3 (FIRST_DEFAULT_LAYER + 5)
#    define _DEFAULT_LAYER_4 (FIRST_DEFAULT_LAYER + 6)
#    define _DEFAULT_LAYER_2 (FIRST_DEFAULT_LAYER + 7)
#    if LAST_DEFAULT_LAYER > (FIRST_DEFAULT_LAYER + 7)
#        define _DEFAULT_LAYER_2 (FIRST_DEFAULT_LAYER + 8)
#        define _DEFAULT_LAYER_3 (FIRST_DEFAULT_LAYER + 9)
#        define _DEFAULT_LAYER_4 (FIRST_DEFAULT_LAYER + 10)
#        define _DEFAULT_LAYER_4 (FIRST_DEFAULT_LAYER + 11)
#    endif
#endif

#define DEFAULT_LAYER_1_HSV HSV_CYAN
#define DEFAULT_LAYER_2_HSV HSV_CHARTREUSE
#define DEFAULT_LAYER_3_HSV HSV_MAGENTA
#define DEFAULT_LAYER_4_HSV HSV_GOLDENROD

#define DEFAULT_LAYER_1_RGB RGB_CYAN
#define DEFAULT_LAYER_2_RGB RGB_CHARTREUSE
#define DEFAULT_LAYER_3_RGB RGB_MAGENTA
#define DEFAULT_LAYER_4_RGB RGB_GOLDENROD

bool mod_key_press_timer(uint16_t code, uint16_t mod_code, bool pressed);
bool mod_key_press(uint16_t code, uint16_t mod_code, bool pressed, uint16_t this_timer);
bool hasAllBitsInMask(uint8_t value, uint8_t mask);
void tap_code16_nomods(uint16_t kc);
void format_layer_bitmap_string(char *buffer, layer_state_t state, layer_state_t default_state);
void center_text(const char *text, char *output, uint8_t width);

// clang-format off
typedef union {
    uint32_t raw;
    struct {
        bool     rgb_layer_change     :1;
        bool     is_overwatch         :1;
        bool     nuke_switch          :1;
        bool     swapped_numbers      :1;
        bool     rgb_matrix_idle_anim :1;
        bool     mouse_jiggler        :1;
        bool     matrix_scan_print    :1;
        bool     align_reserved       :1;
        uint8_t  oled_brightness      :8;
        bool     oled_lock            :1;
        uint32_t reserved             :14;
        bool     check                :1;
    };
} userspace_config_t;
// clang-format on

_Static_assert(sizeof(userspace_config_t) == sizeof(uint32_t), "Userspace EECONFIG out of spec.");

extern userspace_config_t userspace_config;

void        set_keyboard_lock(bool enable);
bool        get_keyboard_lock(void);
void        toggle_keyboard_lock(void);
const char *get_layer_name_string(layer_state_t state, bool alt_name);

bool is_device_suspended(void);
void set_is_device_suspended(bool status);
