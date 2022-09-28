#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8, RA1, RA2, RA3, RA4, RA5, RA6,       RA8, \
	LB1, LB2, LB3, LB4, LB5, LB6, LB7,       RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, \
	LC1,       LC3, LC4, LC5, LC6, LC7,       RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8, \
	LD1,       LD3, LD4, LD5, LD6, LD7,       RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8, \
	      LE2, LE3, LE4, LE5, LE6, LE7,       RE1, RE2, RE3, RE4, RE5, RE6, RE7, RE8, \
	LF1, LF2, LF3, LF4,       LF6,             RF1,       RF3, RF4, RF5, RF6, RF7, RF8  \
) { \
    { LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8}, \
    {LB1, LB2, LB3, LB4, LB5, LB6, LB7, KC_NO}, \
    { LC1, KC_NO, LC3, LC4, LC5, LC6, LC7, KC_NO}, \
    { LD1, KC_NO, LD3, LD4, LD5, LD6, LD7, KC_NO }, \
    { KC_NO, LE2, LE3, LE4, LE5, LE6, LE7, KC_NO }, \
    { LF1, LF2, LF3, LF4, KC_NO, LF6, KC_NO, KC_NO }, \
\
    { RA1, RA2, RA3, RA4, RA5, RA6, KC_NO, RA8 }, \
    { RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8 }, \
    { RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8 }, \
    { RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8 }, \
    { RE1, RE2, RE3, RE4, RE5, RE6, RE7, RE8 }, \
    { RF1, KC_NO, RF3, RF4, RF5, RF6, RF7, RF8 } \
  }

#endif