// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │TOG│MOD│
     * └───┴───┘
     */
    [0] = LAYOUT(
        RGB_TOG, RGB_MOD
    ),

    [1] = LAYOUT(
        _______, _______
    ),

    [2] = LAYOUT(
        _______, _______
    ),

    [3] = LAYOUT(
        _______, _______
    )
};
