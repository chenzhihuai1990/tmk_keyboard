/*
 * HHKB SapceFn Layout
 */
#include "keymap_common.h"

enum function_id {
    SPACEFN_ENABLE,
};

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
           FN6 ,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN4,             \
                LGUI,LALT,          SPC,                FN2,RGUI),

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
           FN6 ,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN4,             \
                LGUI,LALT,          FN3,                FN2,RGUI),

    /* Layer 2: RAltFn Mode 
     * ,-----------------------------------------------------------.
     * |Fn5| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |   |   |Esc|   |   |   |   |   |Hom|Up |End|   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |PgU|Lef|Dow|Rig|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |PgD|   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(FN5,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,INS,DEL,   \
           TRNS,TRNS,TRNS, ESC,TRNS,TRNS,TRNS,TRNS,PSCR,HOME,UP,  END, TRNS,TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,PENT,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: SpaceFn Mode 
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |   |   |LCK|   |   |   |Hom|Up |End|   |   |   |     |
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
     * |        |VoD|VoU|Mut|   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |       SPCFN_EN        |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(FN0 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          FN1,               TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_DEFAULT_LAYER_SET(0),
    [1]  = ACTION_DEFAULT_LAYER_SET(1),
    [2]  = ACTION_LAYER_TAP_TOGGLE(2),
    [3]  = ACTION_LAYER_TAP_KEY(3, KC_SPC),
    [4]  = ACTION_LAYER_TAP(4, KC_APP),
    [5]  = ACTION_LAYER_OFF(2, ON_PRESS),
    [6]  = ACTION_FUNCTION_TAP(SPACEFN_ENABLE),
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

    switch (id) {
        case SPACEFN_ENABLE:
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        register_mods(MOD_BIT(KC_LCTL));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LCTL));
                }
            } else {
                if (record->tap.count > 1 && !(record->tap.interrupted)) {
                    default_layer_xor(1UL<<1);
                    record->tap.count = 0;   //ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LCTL));
                }
            }
            break;
    }
}
#else
const action_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
};
#endif
