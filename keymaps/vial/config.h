/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xD3, 0x73, 0x34, 0x3F, 0x58, 0xD2, 0xE0, 0x0A}

#define VIAL_UNLOCK_COMBO_COLS { 1, 1}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 9}

#define VIAL_COMBO_ENTRIES 32
#define VIAL_TAP_DANCE_ENTRIES 32

#define RGB_DI_PIN GP25
#undef RGBLED_NUM
#define RGBLED_NUM 8
#define RGBLIGHT_LIMIT_VAL 240
#define RGBLIGHT_ANIMATIONS