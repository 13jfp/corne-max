// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    M1 = SAFE_RANGE,
    M2, M3, M4, M5, M6, M7, M8, M9, M10, M11, M12, M13,
    M14, M15, M16, M17, M18, M19, M20,
    M21, M22, M23, M24, M25, M26, M27,

    M100, M101, M102, M103, M104, M105, M106, M107, M108, M109,
    M110, M111, M112, M113, M114, M115, M116, M117, M118, M119,
    M120, M121, M122, M123, M124, M125, M126, M127, M128, M129,
    M130, M131, M132, M133, M134,
    M150, M151, M152, M153, M154, M155, M156, M157, M158,

    M200, M201, M202, M203, M204, M205, M206, M207, M208, M209,
    M210, M211, M212, M213, M214, M215, M216, M217, M218, M219,
    M220,       M222, M223, M224, M225, M226, M227, M228, M229,
    M230, M231, M232, M233, M234, M235, M236, M237, M238, M239,
    M240, M241, M242, M243, M244, M245, M246, M247, M248, M249,
    M250,

    M300, M301, M302, M303, M304, M305, M306, M307, M308, M309,
    M310, M311, M312, M313, M314, M315, M316, M317, M318, M319,
    M320, M321, M322, M323, M324, M325, M326, M327, M328, M329,
    M330, M331, M332, M333, M334, M335, M336, M337, M338, M339,
    M340, M341, M342, M343, M344, M345, M346, M347, M348, M349,
    M350, M351,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───────┬───┬───┬───┬───┬───┬───┐
     0 │ A │ B │ C │ D │ E │ F │ G │   H   │ J │ K │ L │ M │ N │ O │
     * ├───┼───┼───┼───┼───┼───┼───┼───────┼───┼───┼───┼───┼───┼───┤
     1 │ A │ B │ C │ D │ E │ F │ G │   H   │ J │ K │ L │ M │ N │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┬───┼───┼───┼───┼───┼───┤ O │
     2 │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     3 │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │   │
     * ├───┼───┼───┼───┼───┼───┴───┴───┼───┼───┼───┼───┴───┼───┤ O │
     4 │ A │ B │ C │ D │ E │     G     │ I │ J │ K │   M   │ N │   │
     * └───┴───┴───┴───┴───┴───────────┴───┴───┴───┴───────┴───┴───┘
     */

    [0] = LAYOUT_ortho_5x15(
    KC_ESC,  	C(KC_1), 	    C(KC_2), 	    C(KC_3), 	    C(KC_4), 	    C(KC_5),    	M1,    		M2,    	    KC_BSPC,   	                KC_MUTE, 		KC_CALC, 	KC_PSLS,  	KC_PAST,    KC_PMNS,
    KC_TAB,  	M3,             M4,	    	    M5,	    	    M6,	    	    M7,	    	    M8,	    	M9,	       	KC_DEL,    	                KC_VOLU,        KC_P7, 	    KC_P8, 	  	KC_P9,
    TO(0), 	    M10,            M11,            M12,    	    M13,    	    M14,    	    M15,    	M16,    	M17,    	    M18,    	KC_VOLD,	 	KC_P4,   	KC_P5,   	KC_P6,   	KC_PPLS,
    KC_LSFT, 	M19,            M20,            M21,    	    M22,    	    M23,    	    M24,    	M25,    	M26,            KC_UP,  	M27,            KC_P1,   	KC_P2,   	KC_P3,
    KC_LCTL, 	KC_LALT, 	    OSL(1),   	    OSL(2),   	    OSL(3),  	  	                KC_SPC,  	  	        KC_LEFT,  	    KC_DOWN, 	KC_RIGHT, 		KC_P0,  	            KC_PDOT, 	KC_PENT
    ),

    [1] = LAYOUT_ortho_5x15(
    KC_TRNS,  	S(KC_1), 	    S(KC_2), 	    S(KC_3), 	    S(KC_4), 	    S(KC_5),    	M101,    	M102,    	KC_TRNS,   	                KC_MPLY, 		G(KC_1), 	G(KC_2),  	G(KC_3),    M134,
    KC_TRNS,  	M103,           M104,	    	M105,	    	M106,	    	M107,	    	M108,	    M109,	    KC_TRNS,    	            KC_MNXT,        M150, 	    M151, 	  	M152,
    KC_TRNS, 	M110,           M111,           M112,    	    M113,    	    M114,    	    M115,    	M116,    	M117,    	    M118,    	KC_MPRV,	 	M153,   	M154,       M155,       M133,
    KC_TRNS, 	M119,           M120,           C(KC_Z),    	M121,    	    M122,    	    M123,    	M124,    	M125,           M126,  	    M127,           M156,   	M157,       M158,
    KC_TRNS, 	KC_TRNS, 	    KC_TRNS,   	    KC_TRNS,   	    KC_TRNS,  	  	                KC_TRNS,  	  	        M128,    	    M129, 		M130,  	        M131, 	                M132,       KC_TRNS
    ),

    [2] = LAYOUT_ortho_5x15(
    KC_TRNS,  	RCS(KC_1), 	    RCS(KC_2), 	    RCS(KC_3), 	    RCS(KC_4), 	    RCS(KC_5),    	M201,    	M202,    	KC_TRNS,   	                M230, 	        M231,  	    M232,       M233,       M234,
    KC_TRNS,  	M203,           M204,	    	M205,	    	M206,	    	M207,	    	M208,	    M209,	    KC_TRNS,    	            M235,           M236, 	    M237, 	  	M238,
    KC_TRNS, 	M210,           M211,           M212,    	    M213,    	    M214,    	    M215,    	M216,    	M217,    	    M218,    	M239,	 	    M240,   	M241,       M242,       M243,
    KC_TRNS, 	M219,           M220,           C(KC_P),    	M222,    	    M223,    	    M224,    	M225,       M226,  	        M227,       M244,           M245,   	M246,       M247,
    KC_TRNS, 	KC_TRNS, 	    KC_TRNS,   	    KC_TRNS,   	    KC_TRNS,  	  	                KC_TRNS,  	  	        M228,    	    M229, 		M248,           M249,                   M250,       KC_TRNS
    ),

    [3] = LAYOUT_ortho_5x15(
    KC_TRNS,  	M301, 	       	M302,    	    M303,           M304,           M305,           M306,       M307,       KC_TRNS,   	                M331, 	        M332,  	    M333,       M334,       M335,
    KC_TRNS,  	M308,	    	M309,	    	M310,           M311,           M312,           M313,    	M314,	    KC_TRNS,    	            M336,           M337, 	    M338, 	  	M339,
    KC_TRNS, 	M315,    	    M316,    	    M317,    	    M318,    	    M319,           M320,       M321,       M322,    	    M323,       M340,	 	    M341,   	M342,       M343,       M344,
    KC_TRNS, 	C(KC_P),        C(KC_C),    	C(KC_V),    	C(KC_Y),    	M324,    	    M325,       M326,  	    M327,           M328,       M345,           M346,   	M347,       M348,
    KC_TRNS, 	KC_TRNS, 	    KC_TRNS,   	    KC_TRNS,   	    KC_TRNS,  	  	                KC_TRNS,  	  	        M329,    	    M330, 		M349,           M350,                   M351,       KC_TRNS
    ),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case M1:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_A);
            }   
            break;
        case M2:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_B);
            }   
            break;
        case M3:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_C);
            }   
            break;
        case M4:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_D);
            }   
            break;
        case M5:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_E);
            }   
            break;
        case M6:
            if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_F);
            }   
            break;
            case M7:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_G);
                }   
                break;
            case M8:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_H);
                }   
                break;
            case M9:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_I);
                }   
                break;
            case M10:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_J);
                }   
                break;
            case M11:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_K);
                }   
                break;
            case M12:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_L);
                }   
                break;
            case M13:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_M);
                }   
                break;
            case M14:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_N);
                }   
                break;
            case M15:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_O);
                }   
                break;
            case M16:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_P);
                }   
                break;
            case M17:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_Q);
                }   
                break;
            case M18:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_R);
                }   
                break;
            case M19:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_S);
                }   
                break;
            case M20:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_T);
                }   
                break;
            case M21:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_U);
                }   
                break;
            case M22:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_V);
                }   
                break;
            case M23:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_W);
                }   
                break;
            case M24:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_X);
                }   
                break;
            case M25:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_Y);
                }   
                break;
            case M26:
                if (record->event.pressed) {
                    tap_code16(KC_F13);
                    tap_code16(KC_Z);
                }   
                break;
            case M27:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_A);
                }   
                break;
            
            case M100:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_B);
                }   
                break;
            case M101:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_C);
                }   
                break;
            case M102:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_D);
                }   
                break;
            case M103:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_E);
                }   
                break;
            case M104:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_F);
                }   
                break;
            case M105:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_G);
                }   
                break;
            case M106:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_H);
                }   
                break;
            case M107:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_I);
                }   
                break;
            case M108:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_J);
                }   
                break;
            case M109:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_K);
                }   
                break;
            case M110:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_L);
                }   
                break;
            case M111:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_M);
                }   
                break;
            case M112:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_N);
                }   
                break;
            case M113:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_O);
                }   
                break;
            case M114:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_P);
                }   
                break;
            case M115:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_Q);
                }   
                break;
            case M116:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_R);
                }   
                break;
            case M117:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_S);
                }   
                break;
            case M118:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_T);
                }   
                break;
            case M119:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_U);
                }   
                break;
            case M120:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_V);
                }   
                break;
            case M121:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_W);
                }   
                break;
            case M122:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_X);
                }   
                break;
            case M123:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_Y);
                }   
                break;
            case M124:
                if (record->event.pressed) {
                    tap_code16(KC_F14);
                    tap_code16(KC_Z);
                }   
                break;
            case M125:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_A);
                }   
                break;
            case M126:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_B);
                }   
                break;
            case M127:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_C);
                }   
                break;
            case M128:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_D);
                }   
                break;
            case M129:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_E);
                }   
                break;
            case M130:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_F);
                }   
                break;
            case M131:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_G);
                }   
                break;
            case M132:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_H);
                }   
                break;
            case M133:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_I);
                }   
                break;
            case M134:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_J);
                }   
                break;

            case M150:
                if (record->event.pressed) {
                send_string("PLT");
                }   
                break;
            case M151:
                if (record->event.pressed) {
                send_string("UKB");
                }   
                break;
            case M152:
                if (record->event.pressed) {
                send_string("UKC");
                }   
                break;
            case M153:
                if (record->event.pressed) {
                send_string("SHS");
                }   
                break;
            case M154:
                if (record->event.pressed) {
                send_string("RHS");
                }   
                break;
            case M155:
                if (record->event.pressed) {
                send_string("CHS");
                }   
                break;
            case M156:
                if (record->event.pressed) {
                send_string("UB");
                }   
                break;
            case M157:
                if (record->event.pressed) {
                send_string("UC");
                }   
                break;
            case M158:
                if (record->event.pressed) {
                send_string("PFC");
                }   
                break;

            case M200:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_K);
                }   
                break;
            case M201:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_L);
                }   
                break;
            case M202:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_M);
                }   
                break;
            case M203:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_N);
                }   
                break;
            case M204:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_O);
                }   
                break;
            case M205:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_P);
                }   
                break;
            case M206:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_Q);
                }   
                break;
            case M207:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_R);
                }   
                break;
            case M208:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_S);
                }   
                break;
            case M209:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_T);
                }   
                break;
            case M210:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_U);
                }   
                break;
            case M211:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_V);
                }   
                break;
            case M212:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_W);
                }   
                break;
            case M213:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_X);
                }   
                break;
            case M214:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_Y);
                }   
                break;
            case M215:
                if (record->event.pressed) {
                    tap_code16(KC_F15);
                    tap_code16(KC_Z);
                }   
                break;
            case M216:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_A);
                }   
                break;
            case M217:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_B);
                }   
                break;
            case M218:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_C);
                }   
                break;
            case M219:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_D);
                }   
                break;
            case M220:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_E);
                }   
                break;
            case M222:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_F);
                }   
                break;
            case M223:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_G);
                }   
                break;
            case M224:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_H);
                }   
                break;
            case M225:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_I);
                }   
                break;
            case M226:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_J);
                }   
                break;
            case M227:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_K);
                }   
                break;
            case M228:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_L);
                }   
                break;
            case M229:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_M);
                }   
                break;
            case M230:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_N);
                }   
                break;
            case M231:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_O);
                }   
                break;
            case M232:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_P);
                }   
                break;
            case M233:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_Q);
                }   
                break;
            case M234:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_R);
                }   
                break;
            case M235:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_S);
                }   
                break;
            case M236:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_T);
                }   
                break;
            case M237:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_U);
                }   
                break;
            case M238:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_V);
                }   
                break;
            case M239:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_W);
                }   
                break;
            case M240:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_X);
                }   
                break;
            case M241:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_Y);
                }   
                break;
            case M242:
                if (record->event.pressed) {
                    tap_code16(KC_F16);
                    tap_code16(KC_Z);
                }   
                break;
            case M243:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_A);
                }   
                break;
            case M244:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_B);
                }   
                break;
            case M245:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_C);
                }   
                break;
            case M246:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_D);
                }   
                break;
            case M247:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_E);
                }   
                break;
            case M248:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_F);
                }   
                break;
            case M249:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_G);
                }   
                break;
            case M250:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_H);
                }   
                break;


            case M300:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_I);
                }   
                break;
            case M301:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_J);
                }   
                break;
            case M302:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_K);
                }   
                break;
            case M303:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_L);
                }   
                break;
            case M304:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_M);
                }   
                break;
            case M305:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_N);
                }   
                break;
            case M306:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_O);
                }   
                break;
            case M307:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_P);
                }   
                break;
            case M308:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_Q);
                }   
                break;
            case M309:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_R);
                }   
                break;
            case M310:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_S);
                }   
                break;
            case M311:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_T);
                }   
                break;
            case M312:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_U);
                }   
                break;
            case M313:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_V);
                }   
                break;
            case M314:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_W);
                }   
                break;
            case M315:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_X);
                }   
                break;
            case M316:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_Y);
                }   
                break;
            case M317:
                if (record->event.pressed) {
                    tap_code16(KC_F17);
                    tap_code16(KC_Z);
                }   
                break;
            case M318:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_A);
                }   
                break;
            case M319:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_B);
                }   
                break;
            case M320:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_C);
                }   
                break;
            case M321:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_D);
                }   
                break;
            case M322:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_E);
                }   
                break;
            case M323:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_F);
                }   
                break;
            case M324:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_G);
                }   
                break;
            case M325:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_H);
                }   
                break;
            case M326:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_I);
                }   
                break;
            case M327:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_J);
                }   
                break;
            case M328:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_K);
                }   
                break;
            case M329:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_L);
                }   
                break;
            case M330:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_M);
                }   
                break;
            case M331:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_N);
                }   
                break;
            case M332:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_O);
                }   
                break;
            case M333:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_P);
                }   
                break;
            case M334:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_Q);
                }   
                break;
            case M335:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_R);
                }   
                break;
            case M336:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_S);
                }   
                break;
            case M337:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_T);
                }   
                break;
            case M338:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_U);
                }   
                break;
            case M339:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_V);
                }   
                break;
            case M340:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_W);
                }   
                break;
            case M341:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_X);
                }   
                break;
            case M342:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_Y);
                }   
                break;
            case M343:
                if (record->event.pressed) {
                    tap_code16(KC_F18);
                    tap_code16(KC_Z);
                }   
                break;
            case M344:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_A);
                }   
                break;
            case M345:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_B);
                }   
                break;
            case M346:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_C);
                }   
                break;
            case M347:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_D);
                }   
                break;
            case M348:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_E);
                }   
                break;
            case M349:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_F);
                }   
                break;
            case M350:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_G);
                }   
                break;
            case M351:
                if (record->event.pressed) {
                    tap_code16(KC_F19);
                    tap_code16(KC_H);
                }   
                break;
    }
    return true;
}
