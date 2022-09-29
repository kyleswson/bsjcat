#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    kyle son
#define PRODUCT         bsjcat
#define DESCRIPTION     bsjkbd

// #define MASTER_RIGHT // Comment this line for the left half firmware
#define MASTER_LEFT // Comment this line for the right half firmware

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS { B2, B6, B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS_RIGHT { B2, B6, B5, B4, E6, D7, C6, D4 }
#define UNUSED_PINS
// #define USE_I2C
#define SOFT_SERIAL_PIN D3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A { D1 }
#define ENCODERS_PAD_B { D0 }
#define ENCODERS_PAD_A_RIGHT { D2 }
#define ENCODERS_PAD_B_RIGHT { D5 }
#define ENCODER_RESOLUTION 4

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#define OLED_TIMEOUT 300000

#endif
