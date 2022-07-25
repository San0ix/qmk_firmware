#include QMK_KEYBOARD_H

enum layer_number {
  DVORAK = 0,
  SYMBOLS,
  MATH,
  NAVIGATION,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
// first row
// left hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// right hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

// second row
// left hand
KC_NO, KC_SCLN, KC_COMM, KC_DOT, KC_P, KC_Y,
// right hand
KC_F, KC_G, KC_C, KC_R, KC_L, KC_GRV,

// third row
// left hand
KC_BSLS, LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), KC_U, KC_I,
// right hand
KC_D, KC_H, RCTL_T(KC_T), LALT_T(KC_N), RGUI_T(KC_S), KC_ENT,

// fourth row
// left hand
KC_TAB, KC_QUOT, KC_Q, KC_J, KC_K, KC_X,
// thumb keys
OSM(MOD_RALT), OSM(MOD_RALT),
// right hand
KC_B, KC_M, KC_W, KC_V, KC_Z, KC_NO,

// thumb keys
OSM(MOD_RALT), OSL(1), OSM(MOD_LSFT), KC_SPC,
KC_BSPC, OSM(MOD_RSFT), OSL(1), KC_ESC
),

[1] = LAYOUT(
// first row
// left hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// right hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

// second row
// left hand
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_NO,
// right hand
KC_NO, KC_TILD, KC_AMPR, KC_PIPE, KC_HASH, KC_NO,

// third row
// left hand
TO(3), KC_CIRC, KC_UNDS, KC_PMNS, KC_PSLS, KC_PEQL,
// right hand
KC_LCBR, KC_LBRC, KC_LPRN, KC_MINS, KC_AT, KC_DLR,

// fourth row
// left hand
KC_NO, KC_PERC, KC_PPLS, KC_EXLM, KC_QUES, KC_NO,
// thumb keys
TO(4), TO(4),
// right hand
KC_RCBR, KC_RBRC, KC_RPRN, KC_UNDS, KC_ENT, KC_NO,

// thumb row
KC_TRNS, OSL(2), TO(0), KC_TRNS,
KC_TRNS, TO(0), OSL(2), KC_TRNS
),

[2] = LAYOUT(
// first row
// left hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// right hand
KC_NO, KC_NLCK, KC_NO, KC_NO, KC_NO, KC_NO,

// second row
// left hand
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_COLON,
// right hand
KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO,

// third row
// left hand
TO(3), KC_CIRC, KC_UNDS, KC_PMNS, KC_PSLS, KC_PEQL,
// right hand
KC_0, KC_4, KC_5, KC_6, KC_NO, KC_NO,

// fourth row
// left hand
KC_NO, KC_PERC, KC_PPLS, KC_EXLM, KC_QUES, KC_NO,
// thumb keys
TO(4), TO(4),
// right hand
KC_NO, KC_1, KC_2, KC_3, KC_ENT, KC_NO,

// thumb row
KC_TRNS, OSL(1), TO(0), KC_TRNS,
KC_TRNS, TO(0), OSL(1), KC_TRNS
),

[3] = LAYOUT(
// first row
// left hand
KC_PWR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// right hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR,

// second row
// left hand
KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
// right hand
KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,

// third row
// left hand
KC_MSTP, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,
// right hand
KC_HOME, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END,

// fourth row
// left hand
KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO,
// thumb keys
TO(4), TO(4),
// right hand
KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_ENT, KC_NO,

// thumb row
KC_TRNS, OSL(1), TO(0), KC_TRNS,
KC_TRNS, TO(0), OSL(1), KC_TRNS
),

[4] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, TO(0), TO(0), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, KC_LGUI, KC_NO, LT(5,KC_TAB), KC_TRNS, KC_TRNS, LT(5,KC_ENT), KC_NO, KC_RGUI),

[5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

/* layer_state_t layer_state_set_user(layer_state_t state) { */
/*   return update_tri_layer_state(state, SYMBOLS, MATH, NAVIGATION); */
/* } */

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
