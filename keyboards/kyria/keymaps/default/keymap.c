/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum custom_keycodes {
    DEL_WORD = SAFE_RANGE,
    PIPE_ARROW,
    ARROW_LEFT,
    ARROW_RIGHT,
    ELIXIR_MAP
};


#include QMK_KEYBOARD_H
#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_SCLN, KC_NO, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_P, KC_RSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, LCTL(KC_SPC), KC_NO, MO(8), KC_GRV, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_LALT, MO(3), MO(1), KC_ENT, MO(4), KC_LGUI, KC_SPC, MO(2), KC_LCTL, KC_NO),
	[1] = LAYOUT(LCTL(KC_TAB), LCTL(KC_Q), LCTL(KC_W), LCTL(KC_E), LCTL(KC_R), LCTL(KC_T), KC_NO, KC_UNDS, KC_QUOT, LCTL(KC_O), KC_NO, DEL_WORD, KC_NO, LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F), LCTL(KC_G), KC_NO, KC_LPRN, KC_RPRN, KC_BSLS, KC_NO, KC_LSFT, KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B), KC_NO, KC_NO, KC_NO, LSFT(KC_INS), KC_NO, KC_EQL, KC_MINS, KC_DQUO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, LCTL(KC_LEFT), LCTL(KC_RGHT), KC_BSPC, KC_NO, KC_NO),
	[2] = LAYOUT(LGUI(KC_GRV), LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_TAB), LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G), KC_NO, KC_DOWN, KC_UP, KC_NO, KC_NO, KC_LSFT, KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_RGHT, KC_NO, KC_NO, KC_NO, LGUI(KC_3), LGUI(KC_2), LGUI(KC_1), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO),
	[3] = LAYOUT(LGUI(KC_GRV), LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, LGUI(KC_TAB), LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G), KC_NO, KC_PERC, KC_HASH, KC_AMPR, KC_NO, KC_LSFT, KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), KC_NO, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_DLR, KC_TILD, KC_EXLM, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, ELIXIR_MAP, PIPE_ARROW, ARROW_LEFT, ARROW_RIGHT, KC_NO),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_DOWN, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_LSFT, KC_LSFT, KC_NO, KC_NO, KC_LEFT, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_0, KC_DOT, KC_NO),
	[5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN2, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};



#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}


#endif

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
#endif



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case DEL_WORD:
        if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          tap_code(KC_LEFT);
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          tap_code(KC_DELETE);
        }
        break;
    case ELIXIR_MAP:
        if (record->event.pressed) {
            register_code(KC_LSFT);
            tap_code(KC_5);
            tap_code(KC_LBRC);
            tap_code(KC_RBRC);
            unregister_code(KC_LSFT);
            tap_code(KC_LEFT);
        }
        break;
    case PIPE_ARROW:
        if (record->event.pressed) {
            register_code(KC_LSFT);
            tap_code(KC_BSLS);
            tap_code(KC_DOT);
            unregister_code(KC_LSFT);
        }
        break;
    case ARROW_LEFT:
        if (record->event.pressed) {
            register_code(KC_LSFT);
            tap_code(KC_COMM);
            unregister_code(KC_LSFT);
            tap_code(KC_MINS);
        }
        break;
    case ARROW_RIGHT:
        if (record->event.pressed) {
            tap_code(KC_MINS);
            register_code(KC_LSFT);
            tap_code(KC_DOT);
            unregister_code(KC_LSFT);
        }
        break;
    }
    return true;
};

