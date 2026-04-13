// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "eeconfig_users.h"
#include "eeconfig.h"
#include <string.h>

#if (EECONFIG_USER_DATA_SIZE) != 0 && (EECONFIG_USER_DATA_SIZE) < 4
#    error "Not enough EEPROM configured for user config."
#endif

void eeconfig_read_user_config(uint32_t *data) {
#if (EECONFIG_USER_DATA_SIZE) > 0
    if (!eeconfig_is_user_datablock_valid()) {
        memset(data, 0, 4);
    } else {
        eeconfig_read_user_datablock(data, 0, 4);
    }
#else
    *data = eeconfig_read_user();
#endif
}

void eeconfig_update_user_config(const uint32_t *data) {
#if (EECONFIG_USER_DATA_SIZE) > 0
    eeconfig_update_user_datablock(data, 0, 4);
#else
    eeconfig_update_user(*data);
#endif
}

void eeconfig_read_user_data(void *data) {
#if (EECONFIG_USER_DATA_SIZE) > 4
    if (eeconfig_is_user_datablock_valid()) {
        eeconfig_read_user_datablock(data, 4, (EECONFIG_USER_DATA_SIZE)-4);
    } else {
        memset(data, 0, (EECONFIG_USER_DATA_SIZE));
    }
#endif
}

void eeconfig_update_user_data(const void *data) {
#if (EECONFIG_USER_DATA_SIZE) > 4
    eeconfig_update_user_datablock(data, 4, (EECONFIG_USER_DATA_SIZE)-4);
#endif
}
