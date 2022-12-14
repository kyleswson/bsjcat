#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1028
#define PRODUCT_ID      0x1028
#define DEVICE_VER      0x0001
#define MANUFACTURER    kyle son
#define PRODUCT         bsj-6meow
#define DESCRIPTION     bsjkbd

#define MASTER_RIGHT
#define SPLIT_USB_DETECT

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS { B2, B6, B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS_RIGHT { B2, B6, B5, B4, E6, D7, C6, D4 }
// #define USE_I2C
#define SOFT_SERIAL_PIN D3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D5 }
#define ENCODERS_PAD_A_RIGHT { D2 }
#define ENCODERS_PAD_B_RIGHT { D5 }
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define SPLIT_OLED_ENABLE
#define OLED_TIMEOUT 300000

#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define OLED_FONT_H "oled/oledfont.c"

#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4

#endif
