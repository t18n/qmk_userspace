// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2020 @t18n
// Copyright 2020 @jola5
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once
#include "t18n.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts

NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/
// clang-format off

// Buttons are defined for Windows/Linux first, where CMD becomes Ctrl on Mac
#define ___BTN_WIN_SUPER__      KC_LCTL
#define ___BTN_WIN_CTRL__       KC_LGUI
// #define ___BTN_WIN_MEH__        KC_LCTL | MOD_LSFT | MOD_LALT

#define ____QWERTY_L1____       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define ____QWERTY_L2____       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define ____QWERTY_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____QWERTY_R1____       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define ____QWERTY_R2____       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT
#define ____QWERTY_R3____       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____COLEMAK_L1____       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define ____COLEMAK_L2____       KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define ____COLEMAK_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____COLEMAK_R1____       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ____COLEMAK_R2____       KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT
#define ____COLEMAK_R3____       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _____COLEMAK_MOD_DH_L1____       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define _____COLEMAK_MOD_DH_L2____       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define _____COLEMAK_MOD_DH_L3____       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define _____COLEMAK_MOD_DH_R1____       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _____COLEMAK_MOD_DH_R2____       KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT
#define _____COLEMAK_MOD_DH_R3____       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH


#define ____DVORAK_L1____       KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define ____DVORAK_L2____       KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define ____DVORAK_L3____       KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define ____DVORAK_R1____       KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define ____DVORAK_R2____       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH
#define ____DVORAK_R3____       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z


#define ____DVORAK_AU_L1____       KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define ____DVORAK_AU_L2____       KC_O,    KC_A,    KC_E,   KC_I,     KC_U
#define ____DVORAK_AU_L3____       KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define ____DVORAK_AU_R1____       KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define ____DVORAK_AU_R2____       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH
#define ____DVORAK_AU_R3____       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z

#define ____WORKMAN_L1____       KC_Q,    KC_D,    KC_R,   KC_W,     KC_B
#define ____WORKMAN_L2____       KC_A,    KC_S,    KC_H,   KC_T,     KC_G
#define ____WORKMAN_L3____       KC_Z,    KC_X,    KC_M,   KC_C,     KC_V

#define ____WORKMAN_R1____       KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN
#define ____WORKMAN_R2____       KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT
#define ____WORKMAN_R3____       KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH


#define ____NORMAN_L1____       KC_Q,    KC_W,    KC_D,    KC_F,    KC_K
#define ____NORMAN_L2____       KC_A,    KC_S,    KC_E,    KC_T,    KC_G
#define ____NORMAN_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____NORMAN_R1____       KC_J,    KC_U,    KC_R,    KC_L,    KC_SCLN
#define ____NORMAN_R2____       KC_Y,    KC_N,    KC_I,    KC_O,    KC_U,    KC_QUOT
#define ____NORMAN_R3____       KC_P,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____MALTRON_L1____       KC_Q,    KC_P,    KC_Y,    KC_C,    KC_B
#define ____MALTRON_L2____       KC_A,    KC_N,    KC_I,    KC_S,    KC_F
#define ____MALTRON_L3____       KC_SCLN, KC_SLSH, KC_J,    KC_G,    KC_COMM

#define ____MALTRON_R1____       KC_V,    KC_M,    KC_U,    KC_Z,    KC_L
#define ____MALTRON_R2____       KC_D,    KC_T,    KC_D,    KC_O,    KC_R,    KC_QUOT
#define ____MALTRON_R3____       KC_DOT,  KC_W,    KC_K,    KC_MINS, KC_X


#define ____EUCALYN_L1____       KC_Q,    KC_W,    KC_COMM, KC_DOT,  KC_SCLN
#define ____EUCALYN_L2____       KC_A,    KC_O,    KC_E,    KC_I,    KC_U
#define ____EUCALYN_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_F

#define ____EUCALYN_R1____       KC_M,    KC_R,    KC_D,    KC_Y,    KC_P
#define ____EUCALYN_R2____       KC_G,    KC_T,    KC_K,    KC_S,    KC_N,    KC_QUOT
#define ____EUCALYN_R3____       KC_B,    KC_H,    KC_J,    KC_L,    KC_SLSH


// Vim-like nav
#define ____VIM_NAV____                 KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
#define ____VIM_NAV_MOUSE____           KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
#define ____VIM_NAV_MOUSE_WHEEL____     KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R
#define ____VIM_NAV_PAGE____            KC_HOME, KC_PGDN, KC_PGUP, KC_END

// Qwerty-like
#define ____CARPLAX_QFMLWY_L1____       KC_Q,    KC_F,    KC_M,    KC_L,    KC_W
#define ____CARPLAX_QFMLWY_L2____       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define ____CARPLAX_QFMLWY_L3____       KC_Z,    KC_V,    KC_G,    KC_C,    KC_X

#define ____CARPLAX_QFMLWY_R1____       KC_Y,    KC_U,    KC_O,    KC_B,    KC_J
#define ____CARPLAX_QFMLWY_R2____       KC_I,    KC_A,    KC_E,    KC_H,    KC_SCLN, KC_QUOT
#define ____CARPLAX_QFMLWY_R3____       KC_P,    KC_K,    KC_COMM, KC_DOT,  KC_SLSH

// Colemak like
#define ____CARPLAX_QGMLWB_L1____       KC_Q,    KC_G,    KC_M,    KC_L,    KC_W
#define ____CARPLAX_QGMLWB_L2____       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define ____CARPLAX_QGMLWB_L3____       KC_Z,    KC_X,    KC_C,    KC_F,    KC_J

#define ____CARPLAX_QGMLWB_R1____       KC_B,    KC_Y,    KC_U,    KC_V,    KC_SCLN
#define ____CARPLAX_QGMLWB_R2____       KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_QUOT
#define ____CARPLAX_QGMLWB_R3____       KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

// colemak like, zxcv fixed
#define ____CARPLAX_QGMLWY_L1____       KC_Q,    KC_G,    KC_M,    KC_L,    KC_W
#define ____CARPLAX_QGMLWY_L2____       KC_D,    KC_S,    KC_T,    KC_N,    KC_R
#define ____CARPLAX_QGMLWY_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_J

#define ____CARPLAX_QGMLWY_R1____       KC_Y,    KC_F,    KC_U,    KC_B,    KC_SCLN
#define ____CARPLAX_QGMLWY_R2____       KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_QUOT
#define ____CARPLAX_QGMLWY_R3____       KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

// teeheehee
#define ____CARPLAX_TNWCLR_L1____       KC_T,    KC_N,    KC_W,    KC_C,    KC_L
#define ____CARPLAX_TNWCLR_L2____       KC_S,    KC_K,    KC_J,    KC_X,    KC_G
#define ____CARPLAX_TNWCLR_L3____       KC_E,    KC_O,    KC_D,    KC_I,    KC_A

#define ____CARPLAX_TNWCLR_R1____       KC_R,    KC_B,    KC_F,    KC_M,    KC_H
#define ____CARPLAX_TNWCLR_R2____       KC_P,    KC_Q,    KC_Z,    KC_V,    KC_SCLN, KC_QUOT
#define ____CARPLAX_TNWCLR_R3____       KC_U,    KC_Y,    KC_COMM, KC_DOT,  KC_SLSH


#define ____WHITE_R1____       KC_V,    KC_Y,    KC_D,    KC_COMM, KC_QUOT
#define ____WHITE_R2____       KC_A,    KC_T,    KC_H,    KC_E,    KC_B
#define ____WHITE_R3____       KC_P,    KC_K,    KC_G,    KC_W,    KC_Q

#define ____WHITE_L1____       KC_INT1, KC_J,    KC_M,    KC_L,    KC_U
#define ____WHITE_L2____       KC_MINS, KC_C,    KC_S,    KC_N,    KC_O,    KC_I
#define ____WHITE_L3____       KC_X,    KC_R,    KC_F,    KC_DOT,  KC_Z


#define ____HALMAK_L1____       KC_W,    KC_L,    KC_R,    KC_B,    KC_Z
#define ____HALMAK_L2____       KC_S,    KC_H,    KC_N,    KC_T,    KC_COMM
#define ____HALMAK_L3____       KC_F,    KC_M,    KC_V,    KC_V,    KC_SLASH

#define ____HALMAK_R1____       KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J
#define ____HALMAK_R2____       KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,    KC_QUOTE
#define ____HALMAK_R3____       KC_G,    KC_P,    KC_X,    KC_K,    KC_Y


#define ____ISRT_L1____       KC_W,    KC_C,    KC_L,    KC_M,    KC_K
#define ____ISRT_L2____       KC_I,    KC_S,    KC_R,    KC_T,    KC_G
#define ____ISRT_L3____       KC_Q,    KC_V,    KC_W,    KC_D,    KC_J

#define ____ISRT_R1____       KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOTE
#define ____ISRT_R2____       KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN
#define ____ISRT_R3____       KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X


#define ____SOUL_L1____       KC_Q,    KC_W,    KC_L,    KC_D,    KC_P
#define ____SOUL_L2____       KC_A,    KC_S,    KC_R,    KC_T,    KC_G
#define ____SOUL_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_J

#define ____SOUL_R1____       KC_K,    KC_M,    KC_U,    KC_Y,    KC_SCLN
#define ____SOUL_R2____       KC_F,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOTE
#define ____SOUL_R3____       KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH


#define ____NIRO_L1____       KC_Q,    KC_W,    KC_U,    KC_D,    KC_P
#define ____NIRO_L2____       KC_A,    KC_S,    KC_E,    KC_T,    KC_G
#define ____NIRO_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____NIRO_R1____       KC_J,    KC_F,    KC_Y,    KC_L,    KC_SCLN
#define ____NIRO_R2____       KC_H,    KC_N,    KC_I,    KC_R,    KC_O,    KC_QUOTE
#define ____NIRO_R3____       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____ASSET_L1____       KC_Q,    KC_W,    KC_J,    KC_F,    KC_G
#define ____ASSET_L2____       KC_A,    KC_S,    KC_E,    KC_T,    KC_D
#define ____ASSET_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____ASSET_R1____       KC_Y,    KC_P,    KC_U,    KC_L,    KC_SCLN
#define ____ASSET_R2____       KC_H,    KC_N,    KC_I,    KC_O,    KC_R,    KC_QUOTE
#define ____ASSET_R3____       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____MTGAP_L1____       KC_Y,    KC_P,    KC_O,    KC_U,    KC_J
#define ____MTGAP_L2____       KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM
#define ____MTGAP_L3____       KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN

#define ____MTGAP_R1____       KC_K,    KC_D,    KC_L,    KC_C,    KC_W
#define ____MTGAP_R2____       KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    KC_QUOTE
#define ____MTGAP_R3____       KC_B,    KC_F,    KC_G,    KC_V,    KC_X


#define ____MINIMAK_L1____       KC_Q,    KC_W,    KC_D,    KC_R,    KC_K
#define ____MINIMAK_L2____       KC_A,    KC_S,    KC_T,    KC_F,    KC_G
#define ____MINIMAK_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____MINIMAK_R1____       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define ____MINIMAK_R2____       KC_H,    KC_J,    KC_E,    KC_L,    KC_SCLN, KC_QUOT
#define ____MINIMAK_R3____       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____MINIMAK_8_L1____       KC_Q,    KC_W,    KC_D,    KC_R,    KC_K
#define ____MINIMAK_8_L2____       KC_A,    KC_S,    KC_T,    KC_F,    KC_G
#define ____MINIMAK_8_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____MINIMAK_8_R1____       KC_Y,    KC_U,    KC_I,    KC_L,    KC_P
#define ____MINIMAK_8_R2____       KC_H,    KC_N,    KC_E,    KC_O,    KC_SCLN, KC_QUOT
#define ____MINIMAK_8_R3____       KC_J,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____MINIMAK_12_L1____       KC_Q,    KC_W,    KC_D,    KC_F,    KC_K
#define ____MINIMAK_12_L2____       KC_A,    KC_S,    KC_T,    KC_R,    KC_G
#define ____MINIMAK_12_L3____       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ____MINIMAK_12_R1____       KC_Y,    KC_U,    KC_I,    KC_L,    KC_SCLN
#define ____MINIMAK_12_R2____       KC_H,    KC_N,    KC_E,    KC_O,    KC_P,    KC_QUOT
#define ____MINIMAK_12_R3____       KC_J,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define ____NUMBER_LEFT____       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ____NUMBER_RIGHT____       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ____FUNC_LEFT____       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define ____FUNC_RIGHT____       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define _____BLANK_____       _______, _______, _______, _______, _______


#define ____LOWER_L1____       _____BLANK_____
#define ____LOWER_L2____       _____BLANK_____
#define ____LOWER_L3____       _____BLANK_____

#define ____LOWER_R1____       KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3, _______,  _______
#define ____LOWER_R2____       KC_LCBR, KC_RCBR, KC_PIPE, _______,  _______
#define ____LOWER_R3____       KC_LBRC, KC_RBRC, KC_BSLS, _______,  _______

#define ____RAISE_L1____       _______,  _______, KC_MS_BTN3, KC_MS_BTN2, KC_MS_BTN1
#define ____RAISE_L2____       ____VIM_NAV_MOUSE____, _______
#define ____RAISE_L3____       ____VIM_NAV_MOUSE_WHEEL____, _______

#define ____RAISE_R1____       _____BLANK_____
#define ____RAISE_R2____       ____VIM_NAV____, _______
#define ____RAISE_R3____       ____VIM_NAV_PAGE____, _______

#define ____ADJUST_L1____       RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG
#define ____ADJUST_L2____       MU_TOGG, CK_TOGG, AU_ON,   AU_OFF,  CG_NORM
#define ____ADJUST_L3____       RGB_RMOD,RGB_HUD,RGB_SAD, RGB_VAD, KC_RGB_T

#define ____ADJUST_R1____       KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5
#define ____ADJUST_R2____       CG_SWAP, QWERTY,  CLMKDH,  COLEMAK, DVORAK
#define ____ADJUST_R3____       MG_NKRO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT

// clang-format on
