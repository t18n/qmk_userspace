CUSTOM_POINTING_DEVICE ?= yes
ifeq ($(strip $(POINTING_DEVICE_ENABLE)), yes)
    ifeq ($(strip $(CUSTOM_POINTING_DEVICE)), yes)
        SRC += $(USER_PATH)/pointing/pointing.c
        OPT_DEFS += -DCUSTOM_POINTING_DEVICE
        POINTING_MODE_MAP_ENABLE ?= yes
    endif
    POINTING_DEVICE_MOUSE_JIGGLER_ENABLE ?= yes
    ifeq ($(strip $(POINTING_DEVICE_MOUSE_JIGGLER_ENABLE)), yes)
        OPT_DEFS += -DPOINTING_DEVICE_MOUSE_JIGGLER_ENABLE
    endif
endif
