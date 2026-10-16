// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,       KC_2,
        KC_3, KC_4, KC_5
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

void matrix_init_user(void) {
    setPinOutput(LED_PIN_LAYER_1);
    setPinOutput(LED_PIN_LAYER_2);
    setPinOutput(LED_PIN_LAYER_3);

    // LED off (initial)
    writePin(LED_PIN_LAYER_1, 0);
    writePin(LED_PIN_LAYER_2, 0);
    writePin(LED_PIN_LAYER_3, 0);
}

bool led_update_user(led_t led_state) {
    uint8_t current_layer = get_highest_layer(layer_state);

    writePin(LED_PIN_LAYER_1, 0);
    writePin(LED_PIN_LAYER_2, 0);
    writePin(LED_PIN_LAYER_3, 0);

    if (current_layer == 0) {
        writePin(LED_PIN_LAYER_1, 1);
    }
    else if (current_layer == 1) {
        writePin(LED_PIN_LAYER_2, 1);
    }
    else if (current_layer == 2) {
        writePin(LED_PIN_LAYER_3, 1);
    }
    else {
    }

    // Continue QMK LED process
    return true;
}

