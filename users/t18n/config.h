// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "keyrecords/keyrecord_config.h"

#if defined(SPLIT_KEYBOARD)
#    include "split/split_config.h"
#endif
#ifdef RGBLIGHT_ENABLE
#    include "rgb/rgblight_config.h"
#endif // RGBLIGHT_ENABLE

#ifdef RGB_MATRIX_ENABLE
#    include "rgb/rgb_matrix_config.h"
#endif // RGB_MATRIX_ENABLE

#ifdef OLED_ENABLE
#    include "oled/oled_config.h"
#endif

#ifdef POINTING_DEVICE_ENABLE
#    include "pointing/pointing_config.h"
#endif // POINTING_DEVICE_ENABLE

#ifdef AUDIO_ENABLE
#    include "audio_config.h"
#endif // AUDIO_ENABLE

#ifdef RTC_ENABLE
#    include "rtc/rtc_config.h"
#endif // RTC_ENABLE

#if defined(WPM_ENABLE)
// #    define WPM_LAUNCH_CONTROL
// #    define WPM_UNFILTERED
#    define WPM_ALLOW_COUNT_REGRESSION
#    define WPM_SAMPLE_SECONDS      10
#    define WPM_SAMPLE_PERIODS      50
#    define WPM_ESTIMATED_WORD_SIZE 5
#endif

#ifdef CONVERT_TO_PROTON_C
// pins that are available but not present on Pro Micro
#    define A3  PAL_LINE(GPIOA, 3)
#    define A4  PAL_LINE(GPIOA, 4)
#    define A5  PAL_LINE(GPIOA, 5)
#    define A6  PAL_LINE(GPIOA, 6)
#    define A7  PAL_LINE(GPIOA, 7)
#    define A8  PAL_LINE(GPIOA, 8)
#    define A13 PAL_LINE(GPIOA, 13)
#    define A14 PAL_LINE(GPIOA, 14)
#    define A15 PAL_LINE(GPIOA, 15)
#    define B10 PAL_LINE(GPIOB, 10)
#    define B11 PAL_LINE(GPIOB, 11)
#    define B12 PAL_LINE(GPIOB, 12)
#    define C13 PAL_LINE(GPIOC, 13)
#    define C14 PAL_LINE(GPIOC, 14)
#    define C15 PAL_LINE(GPIOC, 15)
#endif

/* --- PRINTF_BYTE_TO_BINARY macro's --- */
#define PRINTF_BINARY_PATTERN_INT8 "%c%c%c%c%c%c%c%c"
#define PRINTF_BYTE_TO_BINARY_INT8(i)                                                             \
    (((i) & 0x80ll) ? '1' : '0'), (((i) & 0x40ll) ? '1' : '0'), (((i) & 0x20ll) ? '1' : '0'),     \
        (((i) & 0x10ll) ? '1' : '0'), (((i) & 0x08ll) ? '1' : '0'), (((i) & 0x04ll) ? '1' : '0'), \
        (((i) & 0x02ll) ? '1' : '0'), (((i) & 0x01ll) ? '1' : '0')

#define PRINTF_BINARY_PATTERN_INT16    PRINTF_BINARY_PATTERN_INT8 " " PRINTF_BINARY_PATTERN_INT8
#define PRINTF_BYTE_TO_BINARY_INT16(i) PRINTF_BYTE_TO_BINARY_INT8((i) >> 8), PRINTF_BYTE_TO_BINARY_INT8(i)
#define PRINTF_BINARY_PATTERN_INT32    PRINTF_BINARY_PATTERN_INT16 " " PRINTF_BINARY_PATTERN_INT16
#define PRINTF_BYTE_TO_BINARY_INT32(i) PRINTF_BYTE_TO_BINARY_INT16((i) >> 16), PRINTF_BYTE_TO_BINARY_INT16(i)
#define PRINTF_BINARY_PATTERN_INT64    PRINTF_BINARY_PATTERN_INT32 " " PRINTF_BINARY_PATTERN_INT32
#define PRINTF_BYTE_TO_BINARY_INT64(i) PRINTF_BYTE_TO_BINARY_INT32((i) >> 32), PRINTF_BYTE_TO_BINARY_INT32(i)
/* --- end macros --- */

#ifndef EECONFIG_USER_DATA_SIZE
#    define EECONFIG_USER_DATA_SIZE 8
#endif
