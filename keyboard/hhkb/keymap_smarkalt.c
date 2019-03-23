/*
 * HHKB SapceFn Layout
 */
#include "keymap_common.h"
#define SPACEFN_LAYER 3
enum function_id {
    DUAL_ALT,
    ALT_LAYER_KEY,
};
//define SCTL FN6
/*define SCTL LCTL*/

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |FN4|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space         |FN2  |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN4,             \
                LGUI, FN0,          SPC,                FN2,RGUI),

    /* Layer 1: SpaceFn Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|LCK|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Med|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |        SpaceFn        |FN2  |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN4,             \
                LGUI,LALT,          FN3,                FN2,RGUI),

    /* Layer 2: RAltFn Mode 
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
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,INS,DEL,   \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,HOME,UP,  END, TRNS,TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,PENT,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: SpaceFn Mode 
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

    /* Layer 4: Media Mode 
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

    /* Layer 5: LAlt Fn Mode 
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
    KEYMAP(TRNS,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,FN20,   \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN20,FN20, FN20, TRNS,TRNS,TRNS,TRNS,     \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN20,FN20,FN20,FN20,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,SPC, FN20,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
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
    [1]  = ACTION_DEFAULT_LAYER_TOGGLE(1),
    [2]  = ACTION_LAYER_TAP_TOGGLE(2),//AltFn
    [3]  = ACTION_LAYER_TAP_KEY(3, KC_SPC),//SpaceFn
    [4]  = ACTION_LAYER_MOMENTARY(4),//SapceFn

    [0]  = ACTION_FUNCTION(DUAL_ALT),

    [20] = ACTION_FUNCTION(ALT_LAYER_KEY),
};

/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("-P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");
    dprintf("real: %u\n", get_mods());
    dprintf("weak: %u\n", get_weak_mods());

    switch (id) {
        case DUAL_ALT:
            if (record->event.pressed) {
                add_weak_mods(MOD_BIT(KC_LALT));
                layer_invert(5);
            }else
            {
                send_keyboard_report();
                layer_invert(5);
                del_weak_mods(MOD_BIT(KC_LALT));
                send_keyboard_report();
            }
            break;

        case ALT_LAYER_KEY:
            if (record->event.pressed) {
                dprintf("key at position %" PRIu16 " is pressed\n", record->event.key);
                del_weak_mods(MOD_BIT(KC_LALT));
                uint8_t keycode = keymap_key_to_keycode(SPACEFN_LAYER, record->event.key);
                add_key(keycode);
                send_keyboard_report();
            } else {
                //todo switch
                uint8_t keycode = keymap_key_to_keycode(SPACEFN_LAYER, record->event.key);
                del_key(keycode);
                send_keyboard_report();
            }
            break;
    }
}
