// Copyright (c) 2021 Corintho Assuncao
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Noop by default, this should never be actually built
[_BASE] = LAYOUT_ortho_2x4(
    KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO
)

};
