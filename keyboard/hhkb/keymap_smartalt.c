/*
 * HHKB SmartAlt Layout (with RAlt as Fn)
 * Alt+Space will behavior as Alt
 */
#include "keymap_common.h"
#define        DEFAULT_LAYER   0
#define   SPACEFN_MODE_LAYER   1
#define        SPACEFN_LAYER   2

#define       SMARTALT_LAYER   3
#define      ALT_SPACE_LAYER   4

#define         RALTFN_LAYER   5
#define          MEDIA_LAYER   6
#define       FUNCTION_LAYER   7
/*
 * Note that if a key i is pressed on layer j, then even layer j is off, releasing key i still send i on layer j 
 * */
enum function_id {
    SMART_ALT,              //press Smart Alt
    SMART_ALT_EXTRA_KEYS,   //functions key and naviation keys
    SMART_ALT_NORMAL,       //press other key except ijkl/hnuo after press smart alt
    SMART_ALT_PENDING_MODS, //press shift etc. after press smart alt
    SMART_ALT_SPACE,        //Alt+Space
    SMART_ALT_ESC,          //activate function keys (use function keys instead of number keys)
    SMART_ALT_SCLN,         //Alt+uiohjkln
};

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: Default Layer (SmartAlt Mode)
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |FN5|
     * `-----------------------------------------------------------'
     *       |Gui|SAlt |         Space         |FN4  |ALT|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN6,             \
                LGUI, FN3,          SPC,                FN4,RALT),

    /* Layer 1: SpaceFn Mode
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|LCK|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Med|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |        SpaceFn        |FN4  |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN5,             \
                LGUI,LALT,          FN2,                FN4,RGUI),

    /* Layer 2: SpaceFn Layer 
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Hom|Up |End|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,INS,DEL,   \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,  UP, END, TRNS,TRNS,TRNS,TRNS,     \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,SPC, PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: SmartAlt Layer 
     * ,-----------------------------------------------------------.
     * |LCK| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Hom|Up |End|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP( FN7,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,  \
           FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN20,FN20,FN20,FN21,FN21,FN21,FN21,       \
           FN21,FN21,FN21,FN21,FN21,FN21,FN20,FN20,FN20,FN20,FN21,FN21,FN21,            \
           FN22,FN21,FN21,FN21,FN21,FN21,FN20,FN21,FN21,FN21,FN21,FN21,FN21,            \
                FN21,FN21,          FN10,               FN4,FN21),

    /* Layer 4: Smart Alt+Space Layer 
     * ,-----------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     | 1 | 2 | 3 | 4 | 5 |   |   |   |   |   | - | = |     |
     * |-----------------------------------------------------------|
     * |      | 6 | 7 | 8 | 9 | 0 |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    /*KEYMAP( ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,INS,DEL,   \
           TRNS,   1,   2,   3,   4,   5,TRNS,   U,   I,   O, TRNS,MINS, EQL,TRNS,     \
           TRNS,   6,   7,   8,   9,   0,   H,   J,   K,   L,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,SPC,    N,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),*/

    KEYMAP( ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,INS,DEL,   \
           TRNS,   1,   2,   3,   4,   5,TRNS,HOME,  UP, END, TRNS,MINS, EQL,TRNS,     \
           TRNS,   6,   7,   8,   9,   0,PGUP,LEFT,DOWN,RGHT,SCLN,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,SPC, PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 5: RAltFn Layer 
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |Hom|Up |End|   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |PgU|Lef|Dow|Rig|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |PgD|   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS,DEL,    \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   HOME,UP,  END, RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   PGUP,LEFT,DOWN,RGHT, ENT,            \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   PGDN,DOT, SLSH,RSFT,RCTL,            \
                LGUI, LALT,          SPC,                TRNS,RALT),

    /* Layer 6: Media Layer 
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |PSC|SLC|PAU|   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |MPR|MPL|MNX|   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |VoD|VoU|Mut|   |   |   |   |   |   |APP|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |       SPCFN_EN        |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,APP ,TRNS,TRNS,           \
                TRNS,TRNS,          FN1,               TRNS,TRNS),

    /* Layer 7: Function Layer (Locked by LAlt + Esc)
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP( FN7, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [1]  = ACTION_DEFAULT_LAYER_TOGGLE ( SPACEFN_MODE_LAYER        ) ,//Toggle SpaceFn Mode
    [2]  = ACTION_LAYER_TAP_KEY        ( SPACEFN_LAYER, KC_SPC     ) ,//SpaceFn Key
    [3]  = ACTION_FUNCTION             ( SMART_ALT                 ) ,
    [4]  = ACTION_LAYER_TAP_TOGGLE     ( RALTFN_LAYER              ) ,//AltFn

    [6]  = ACTION_LAYER_MOMENTARY      ( MEDIA_LAYER               ) ,//Media Layer

    //following keys is available only if SMARTALT layer was activated
    [7]  = ACTION_FUNCTION             ( SMART_ALT_ESC             ) ,
    [10] = ACTION_LAYER_TAP_KEY        ( ALT_SPACE_LAYER, KC_SPACE ) ,//Tapping send alt+space while hold acitivate complement layer (alt+space layer)
    [20] = ACTION_FUNCTION             ( SMART_ALT_EXTRA_KEYS      ) ,//arrow keys and home/end/pgup/pgdown and F1-F12
    [21] = ACTION_FUNCTION             ( SMART_ALT_NORMAL          ) ,//modifier LALT is sent with when it is pressed
    [22] = ACTION_FUNCTION             ( SMART_ALT_PENDING_MODS    ) ,//when modifier(such as ctrl or shift) is pressed, just suspend themself untill other key is press.(avoid sending alt when you press them).
};

/*
 * user defined action function
 */

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case SMART_ALT:
            if (record->event.pressed) {
                add_weak_mods(MOD_BIT(KC_LALT));
                layer_invert(SMARTALT_LAYER);
            }else
            {
                send_keyboard_report();// send previous event: D(KC_LALT)
                layer_invert(SMARTALT_LAYER);
                del_weak_mods(MOD_BIT(KC_LALT));
                send_keyboard_report();
            }
            break;

        case SMART_ALT_EXTRA_KEYS:
            if (record->event.pressed) {
                del_weak_mods(MOD_BIT(KC_LALT));
                uint8_t keycode = keymap_key_to_keycode(SPACEFN_LAYER, record->event.key);
                add_key(keycode);
                send_keyboard_report();
            } else {
                uint8_t keycode = keymap_key_to_keycode(SPACEFN_LAYER, record->event.key);
                del_key(keycode);
                send_keyboard_report();
            }
            break;
        case SMART_ALT_SPACE:
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        layer_invert(SMARTALT_LAYER);
                    }
                } else {
                    layer_off(SMARTALT_LAYER);
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    type_code(KC_SPC);
                    record->tap.count = 0;
                } else {
                    layer_invert(SMARTALT_LAYER);
                }
            }
            break;
        case SMART_ALT_ESC:
            if (record->event.pressed) {
                del_weak_mods(MOD_BIT(KC_LALT));
            } else {
                layer_invert(FUNCTION_LAYER);
            }
            break;
        case SMART_ALT_NORMAL:
            if (record->event.pressed) {
                add_weak_mods(MOD_BIT(KC_LALT));
                uint8_t keycode = keymap_key_to_keycode(0, record->event.key);
                add_key(keycode);
                send_keyboard_report();
            } else {
                uint8_t keycode = keymap_key_to_keycode(0, record->event.key);
                del_key(keycode);
                send_keyboard_report();
            }
            break;
        case SMART_ALT_PENDING_MODS:
            if (record->event.pressed) {
                uint8_t keycode = keymap_key_to_keycode(0, record->event.key);
                add_weak_mods(MOD_BIT(keycode));
            } else {
                uint8_t keycode = keymap_key_to_keycode(0, record->event.key);
                del_weak_mods(MOD_BIT(keycode));
                send_keyboard_report();
            }
            break;
    }
}
