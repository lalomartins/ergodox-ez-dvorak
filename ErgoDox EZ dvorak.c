#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "led.h"

#define KC_QUESTION_MARK LSFT(KC_SLASH)   // ?
// #define KC_KP_BSPACE 0xBB

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // If it accepts an argument (i.e, is a function), it doesn't need KC_.
  // Otherwise, it needs KC_*

  [0] = KEYMAP(
    // left main
    KC_GRAVE,
    KC_1,
    KC_2,
    KC_3,
    KC_4,
    KC_5,
    KC_WWW_BACK,

    LT(2, KC_DELETE),
    KC_QUOTE,
    KC_COMMA,
    KC_DOT,
    KC_P,
    KC_Y,
    TG(2),

    KC_CAPSLOCK,   // XXX should do something with the LEDs
    KC_A,
    KC_O,
    KC_E,
    KC_U,
    KC_I,

    KC_LSHIFT,
    KC_SCOLON,
    KC_Q,
    KC_J,
    KC_K,
    KC_X,
    TG(3),

    KC_LCTRL,
    KC_LGUI,
    KC_LALT,
    KC_LEFT,
    KC_RIGHT,

    // left thumb
    KC_APP,
    KC_LGUI,
    KC_UP,
    KC_SPACE,
    KC_BSPACE,
    KC_DOWN,

    // right main
    KC_WWW_FORWARD,
    KC_6,
    KC_7,
    KC_8,
    KC_9,
    KC_0,
    LT(3, KC_EQUAL),

    TG(2),
    KC_F,
    KC_G,
    KC_C,
    KC_R,
    KC_L,
    KC_SLASH,

    KC_D,
    KC_H,
    KC_T,
    KC_N,
    KC_S,
    KC_MINUS,

    KC_RGUI,
    KC_B,
    KC_M,
    KC_W,
    KC_V,
    KC_Z,
    // KC_RSHIFT,
    SFT_T(KC_RO),        // JP: \_, kanna: ro

    KC_HOME,
    KC_END,
    KC_LBRACKET,
    KC_RBRACKET,
    CTL_T(KC_BSLASH),

    // right thumb
    ALT_T(KC_JYEN),      // on Ubuntu, with JA keymap, types \| instead of the ¥ it's supposed to type. In kana, it's the long dash.
    // KC_LALT,
    KC_ESCAPE,
    KC_PGUP,
    KC_PGDOWN,
    KC_TAB,
    KC_ENTER
  ),

  [1] = KEYMAP(
    // left main
    KC_TRANSPARENT,      // JP: Zenkaku_Hankaku
    KC_TRANSPARENT,
    KC_TRANSPARENT,      // JP: 2"
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_Q,
    KC_W,
    KC_E,
    KC_R,
    KC_T,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_A,
    KC_S,
    KC_D,
    KC_F,
    KC_G,

    KC_TRANSPARENT,
    KC_Z,
    KC_X,
    KC_C,
    KC_V,
    KC_B,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // left thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // right main
    KC_TRANSPARENT,
    KC_TRANSPARENT,      // JP: 6&
    KC_TRANSPARENT,      // JP: 7'
    KC_TRANSPARENT,      // JP: 8(
    KC_TRANSPARENT,      // JP: 9)
    KC_TRANSPARENT,      // JP: 0~
    LT(3, KC_RBRACKET),  // JP: [{

    KC_TRANSPARENT,
    KC_Y,
    KC_U,
    KC_I,
    KC_O,
    KC_P,
    KC_LBRACKET,         // JP: @`

    KC_H,
    KC_J,
    KC_K,
    KC_L,
    KC_SCOLON,           // JP: ;+
    KC_QUOTE,            // JP: :*

    KC_TRANSPARENT,
    KC_N,
    KC_M,
    KC_COMMA,
    KC_DOT,
    KC_SLASH,
    KC_TRANSPARENT,
    // SFT_T(KC_RO),        // JP: \_, kanna: ro

    KC_HOME,
    KC_END,
    KC_MINUS,            // JP: -=
    KC_EQUAL,            // JP: ^~
    CTL_T(KC_BSLASH),    // JP: ]}

    // right thumb
    // ALT_T(KC_JYEN),      // on Ubuntu, with JA keymap, types \| instead of the ¥ it's supposed to type. In kana, it's the long dash.
    KC_TRANSPARENT,
    KC_ESCAPE,
    KC_PGUP,
    KC_PGDOWN,
    KC_TAB,
    KC_ENTER
  ),

  [2] = KEYMAP(
    // left main
    KC_PSCREEN,
    KC_F1,
    KC_F2,
    KC_F3,
    KC_F4,
    KC_F5,
    KC_F11,

    KC_TRANSPARENT,
    KC_EXCLAIM,
    KC_AT,
    KC_LEFT_CURLY_BRACE,
    KC_RIGHT_CURLY_BRACE,
    KC_QUESTION_MARK,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_HASH,
    KC_DOLLAR,
    KC_LEFT_PAREN,
    KC_RIGHT_PAREN,
    KC_GRAVE,

    KC_TRANSPARENT,
    KC_PERCENT,
    KC_CIRCUMFLEX,
    KC_LBRACKET,
    KC_RBRACKET,
    KC_TILDE,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // left thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // right main
    KC_F12,
    KC_F6,
    KC_F7,
    KC_F8,
    KC_F9,
    KC_F10,
    KC_PSCREEN,

    KC_TRANSPARENT,
    KC_UP,
    KC_KP_7,
    KC_KP_8,
    KC_KP_9,
    KC_KP_ASTERISK,
    KC_KP_SLASH,

    KC_DOWN,
    KC_KP_4,
    KC_KP_5,
    KC_KP_6,
    KC_KP_PLUS,
    KC_KP_MINUS,

    KC_NUMLOCK,
    KC_COMMA,      // XXX should be KC_KP_COMMA but that inserts . because of course it does
    KC_KP_1,
    KC_KP_2,
    KC_KP_3,
    KC_KP_ENTER,
    KC_TRANSPARENT,

    KC_KP_0,
    KC_KP_0,
    KC_KP_DOT,
    KC_KP_EQUAL,
    KC_BSPACE,     // XXX should be KC_KP_BSPACE (0xbb) but it's not supported

    // right thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT
  ),

  [3] = KEYMAP(
    // left main
    KC_MS_ACCEL0,
    KC_MS_ACCEL1,
    KC_MS_ACCEL2,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,

    KC_NO,
    KC_NO,
    KC_MS_WH_LEFT,
    KC_MS_UP,
    KC_MS_WH_RIGHT,
    KC_NO,
    KC_NO,

    KC_NO,
    KC_MS_BTN3,
    KC_MS_LEFT,
    KC_MS_DOWN,
    KC_MS_RIGHT,
    KC_MS_WH_UP,

    KC_TRANSPARENT, // shift
    KC_NO,
    KC_NO,
    KC_MS_DOWN,
    KC_NO,
    KC_MS_WH_DOWN,
    KC_TRANSPARENT,

    KC_TRANSPARENT, // ctrl
    KC_TRANSPARENT, // gui
    KC_TRANSPARENT, // alt
    KC_MS_BTN1,
    KC_MS_BTN2,

    // left thumb
    KC_NO,
    KC_NO,
    KC_NO,
    KC_MS_BTN1,
    KC_MS_BTN2,
    KC_NO,

    // right main
    TG(1),
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_TRANSPARENT, // for the LT() on base

    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,

    KC_NO,
    KC_MEDIA_REWIND,
    KC_MEDIA_FAST_FORWARD,
    KC_NO,
    KC_NO,
    KC_MEDIA_PLAY_PAUSE,

    KC_NO,
    KC_NO,
    KC_MEDIA_PREV_TRACK,
    KC_MEDIA_NEXT_TRACK,
    KC_NO,
    KC_NO,
    KC_NO,

    KC_AUDIO_VOL_UP,
    KC_AUDIO_VOL_DOWN,
    KC_AUDIO_MUTE,
    KC_NO,
    KC_NO,

    // right thumb
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO,
    KC_NO
  ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(1)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void * matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void * matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1: // qwerty/japanese mode
            ergodox_right_led_3_on();
            ergodox_right_led_3_set(7);

            if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
              ergodox_right_led_2_on();
              ergodox_right_led_2_set(31);
            }
            break;
        case 2: // symbols
            ergodox_right_led_1_on();
            ergodox_right_led_1_set(15);
            if (!(host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))) {
              ergodox_right_led_2_on();
              ergodox_right_led_2_set(127);
            }
            break;
        case 3: // mouse & media
            ergodox_right_led_1_on();
            ergodox_right_led_1_set(127);
            break;
        default:
            if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
              ergodox_right_led_2_on();
              ergodox_right_led_2_set(31);
            }
            break;
    }
};
