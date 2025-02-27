/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _BASE,
  _META,
  _LOWER,
  _RAISE,
  _GAME,
};

enum preonic_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  META,
  GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,   KC_6,   KC_7,         KC_8,         KC_9,          KC_0,           KC_BSPC,
  KC_TAB,  KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,   KC_Y,   KC_U,         KC_I,         KC_O,          KC_P,           KC_DEL,
  KC_ESC,  LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,   KC_H,   LSFT_T(KC_J), LGUI_T(KC_K), LALT_T(KC_L),  LCTL_T(KC_SCLN),KC_ENT,
  KC_LSFT, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,   KC_N,   KC_M,         KC_COMM,      KC_DOT,        KC_SLSH,        KC_RSFT,
  META,    KC_LCTL,      KC_LALT,      KC_LGUI,      LOWER,        KC_LSFT,KC_SPC, RAISE,        KC_LEFT,      KC_DOWN,       KC_UP,          KC_RGHT
),

[_META] = LAYOUT_preonic_grid(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_LSFT, RGB_TOG, RGB_HUD, RGB_HUI, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_MPLY, KC_BRID, KC_BRIU, KC_RSFT,
  _______, _______, _______, _______, _______, _______, _______, GAME,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
),

[_LOWER] = LAYOUT_preonic_grid(
  KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
  KC_TAB,     KC_EXLM,    KC_AMPR,    KC_LT,      KC_GT,      _______,    _______,    KC_LBRC,    KC_RBRC,    KC_PLUS,    KC_EQL,     KC_DEL,
  KC_ESC,     S(KC_NUBS), KC_UNDS,    KC_LPRN,    KC_RPRN,    _______,    _______,    KC_LCBR,    KC_RCBR,    KC_COLN,    KC_SCLN,    KC_ENT,
  KC_LSFT,    KC_NUBS,    S(KC_QUOT), KC_QUOT,    S(KC_2),    _______,    _______,    KC_MINS,    S(KC_NUHS), KC_NUHS,    S(KC_SLSH), KC_RSFT,
  _______,    KC_LCTL,    KC_LALT,    KC_LGUI,    _______,    KC_LSFT,    KC_SPC,     _______,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
),

[_RAISE] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______,  G(C(KC_F)),C(KC_LEFT),C(KC_RGHT),A(KC_BSPC),
  _______, _______, _______, _______, _______, _______, _______, _______,  G(KC_X),   G(KC_C),   G(KC_V),   A(KC_DEL),
  _______, _______, _______, _______, _______, _______, _______, C(KC_SPC),C(KC_HOME),C(KC_PGUP),C(KC_PGDN),G(KC_ENT),
  _______, _______, _______, _______, _______, _______, _______, A(KC_SPC),G(KC_LEFT),KC_PGDN,   KC_PGUP,   G(KC_RGHT),
  _______, _______, _______, _______, _______, _______, _______, _______,  A(KC_LEFT),A(KC_DOWN),A(KC_UP),  A(KC_RGHT)
),

[_GAME] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,     KC_2,     KC_3,     KC_4,   KC_5,   KC_6,   KC_7,   KC_8,      KC_9,      KC_0,      KC_BSPC,
  KC_TAB,  KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,      KC_O,      KC_P,      KC_DEL,
  KC_ESC,  KC_A,     KC_S,     KC_D,     KC_F,   KC_G,   KC_H,   KC_J,   KC_K,      KC_L,      KC_SCLN,   KC_ENT,
  KC_LSFT, KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,
  META,    KC_LCTL,  KC_LALT,  KC_LGUI,  LOWER,  KC_LSFT,KC_SPC, BASE,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case BASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BASE);
                return false;
                break;
            }
        case GAME:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAME);
                return false;
                break;
            }
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
            } else {
                layer_off(_LOWER);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
            }
            return false;
            break;
        case META:
            if (record->event.pressed) {
                layer_on(_META);
            } else {
                layer_off(_META);
            }
            return false;
            break;
      }
    return true;
};
