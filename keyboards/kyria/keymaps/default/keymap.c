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

#include "./keymap_gen.h"

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

