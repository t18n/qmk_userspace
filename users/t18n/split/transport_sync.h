// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <stdint.h>
#include "t18n.h"
#ifdef OLED_ENABLE
#    include "oled/oled_stuff.h"
#endif

typedef union {
    uint32_t raw;
    struct {
        bool     audio_enable         : 1;
        bool     audio_clicky_enable  : 1;
        bool     tap_toggling         : 1;
        uint8_t  unicode_mode         : 3;
        bool     swap_hands           : 1;
        bool     host_driver_disabled : 1;
        uint8_t  unicode_typing_mode  : 3;
        uint32_t reserved             : 21;
    };
} user_runtime_config_t;

extern user_runtime_config_t user_state;

void keyboard_post_init_transport_sync(void);
void housekeeping_task_transport_sync(void);
void send_device_suspend_state(bool status);
