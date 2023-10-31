// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ B │ C │ D │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D
    ),
    [1] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D
    ),
    [2] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D
    ),
    [3] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D
    )
};
