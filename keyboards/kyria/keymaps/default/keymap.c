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

enum custom_keycodes { DEL_WORD = SAFE_RANGE, PIPE_ARROW, ARROW_LEFT, ARROW_RIGHT, ELIXIR_MAP , KC_SE_AO, KC_SE_AE, KC_SE_OE};

#include "./keymap_gen.h"

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

#endif

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        switch (biton32(layer_state)) {
            case 0:
                if (clockwise) {
                    tap_code(KC_UP);
                } else {
                    tap_code(KC_DOWN);
                }
                break;
            case 1:
                register_code(KC_LCTL);
                if (clockwise) {
                    register_code(KC_LSFT);
                    tap_code(KC_TAB);
                    unregister_code(KC_LSFT);
                } else {
                    tap_code(KC_TAB);
                }
                unregister_code(KC_LCTL);
                break;
            case 3:
                register_code(KC_LGUI);
                if (clockwise) {
                    tap_code(KC_I);
                } else {
                    register_code(KC_LSFT);
                    tap_code(KC_I);
                    unregister_code(KC_LSFT);
                }
                unregister_code(KC_LGUI);
                break;
            case 4:
                register_code(KC_LCTL);
                if (clockwise) {
                    tap_code(KC_MINS);
                } else {
                    register_code(KC_LSFT);
                    tap_code(KC_EQUAL);
                    unregister_code(KC_LSFT);
                }
                unregister_code(KC_LCTL);
                break;
            case 5:
                    if (clockwise) {
                        tap_code(KC_MS_L);
                    } else {
                        tap_code(KC_MS_R);
                    }
                break;
            case 6:
                    if (clockwise) {
                        tap_code(KC_MS_U);
                    } else {
                        tap_code(KC_MS_D);
                    }
                break;
            case 7:
            case 8:
                for (int i = 0; i < 4; ++i) {
                    if (clockwise) {
                        tap_code(KC_WH_U);
                    } else {
                        tap_code(KC_WH_D);
                    }
                }
                break;
        }

        // Page up/Page down
    }
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_SE_OE:
            if (record->event.pressed) {
                register_code(KC_RALT);
                tap_code(KC_O);
                unregister_code(KC_RALT);
                register_code(KC_LSFT);
                tap_code(KC_QUOT);
                unregister_code(KC_LSFT);
            }
            break;
        case KC_SE_AO:
            if (record->event.pressed) {
                register_code(KC_RALT);
                tap_code(KC_O);
                unregister_code(KC_RALT);
                tap_code(KC_A);
            }
            break;
        case KC_SE_AE:
            if (record->event.pressed) {
                register_code(KC_RALT);
                tap_code(KC_A);
                unregister_code(KC_RALT);
                register_code(KC_LSFT);
                tap_code(KC_QUOT);
                unregister_code(KC_LSFT);
            }
            break;
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
                tap_code(KC_SPACE);
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
