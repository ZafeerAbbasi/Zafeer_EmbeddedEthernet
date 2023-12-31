/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.28.                           *
*        Compiled Jan 30 2015, 16:40:04                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: NextPressed                                           *
* Dimensions:  40 * 42                                               *
* NumColors:   65536 colors + 8 bit alpha channel                    *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmNextPressedButton;

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned char _acNextPressed[] = {
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xEE,0xFF,0xFF, 0x8B,0xFF,0xFF, 0x3C,0xFF,0xDF, 0x17,0xFF,0xFF, 0x01,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x01,0xFF,0xFF, 0x18,0xFF,0xFF, 0x3D,0xFF,0xDF, 0x8B,0xFF,0xFF, 0xEE,0xFF,0xFF, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0x9B,0xFF,0xDF, 0x11,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x12,0xFF,0xFF, 0x9D,0xFF,0xDF, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0x76,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0x9E, 0x00,0xED,0x19, 0x00,0xE3,0x75, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 
        0x00,0xE2,0xF4, 0x00,0xE2,0xF5, 0x00,0xE2,0xF5, 0x00,0xE2,0xF5, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x56, 
        0x00,0xE3,0x56, 0x00,0xE3,0x77, 0x00,0xEB,0xF8, 0x00,0xF5,0x7B, 0x00,0xFF,0x9E, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x77,0xFF,0xFF, 0xFF,0x00,0x00, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0x9B,0xFF,0xDF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xF5,0xDA, 0x00,0xD9,0x71, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE2,0x75, 0x00,0xF6,0x3C, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x9E,0xFF,0xDF, 0xFF,0x00,0x00,
  0xEE,0xFF,0xFF, 0x11,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xF5,0xDA, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xF4, 0x00,0xF6,0x3C, 0x00,0xFF,0xFF, 0x12,0xFF,0xFF, 0xEF,0xFF,0xFF,
  0x8B,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0x9E, 0x00,0xD9,0x50, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE2,0x75, 0x00,0xFF,0x9E, 0x00,0xFF,0xFF, 0x8D,0xFF,0xFF,
  0x3D,0xFF,0xDF, 0x00,0xFF,0xFF, 0x00,0xED,0x18, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xF5,0x9B, 0x00,0xFF,0xFF, 0x3F,0xFF,0xDF,
  0x17,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE3,0x55, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEC,0x38, 0x00,0xFF,0xFF, 0x18,0xFF,0xFF,
  0x02,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x02,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x51, 0x00,0xF6,0x1B, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xF6,0x5C, 0x00,0xE2,0x33, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xF6,0x3B, 0x00,0xFF,0xBE, 0x00,0xFF,0xBF, 0x00,0xEC,0x37, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xE2,0x13, 0x00,0xF6,0x1B, 0x00,0xFF,0xFF, 0x00,0xF6,0x7C, 0x00,0xE2,0x54, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xE3,0x76, 0x00,0xFF,0x7E, 0x00,0xFF,0xBF, 0x00,0xEC,0x78, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xE1,0xF3, 0x00,0xF5,0xDB, 0x00,0xFF,0xFF, 0x00,0xF6,0xBD, 0x00,0xE2,0xB5, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xEB,0x96, 0x00,0xFF,0x7E, 0x00,0xFF,0xDF, 0x00,0xEC,0xF9, 0x00,0xE1,0xB3, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xE2,0x13, 0x00,0xF5,0xFB, 0x00,0xFF,0xFF, 0x00,0xF6,0x9C, 0x00,0xE1,0xB3, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xE2,0x13, 0x00,0xF5,0xFB, 0x00,0xFF,0xFF, 0x00,0xF6,0x9C, 0x00,0xE1,0xB3, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xEB,0x96, 0x00,0xFF,0x7E, 0x00,0xFF,0xDF, 0x00,0xEC,0xF9, 0x00,0xE1,0xB3, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xE1,0xF3, 0x00,0xF5,0xDB, 0x00,0xFF,0xFF, 0x00,0xF6,0x9C, 0x00,0xE2,0x74, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xE3,0x76, 0x00,0xFF,0x7E, 0x00,0xFF,0xBF, 0x00,0xEC,0x78, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xEB,0xF7, 0x00,0xE2,0x13, 0x00,0xF6,0x1B, 0x00,0xFF,0xFF, 0x00,0xF6,0x7C, 0x00,0xE2,0x54, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xF6,0x3B, 0x00,0xFF,0x9E, 0x00,0xFF,0xBF, 0x00,0xEC,0x37, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xE1,0xD2, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xF6,0x5C, 0x00,0xE2,0x33, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x51, 0x00,0xF6,0x1B, 
        0x00,0xEB,0xF7, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF,
  0x02,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE2,0xB3, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEB,0x97, 0x00,0xFF,0xFF, 0x02,0xFF,0xFF,
  0x16,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xE3,0x55, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xEC,0x38, 0x00,0xFF,0xFF, 0x18,0xFF,0xFF,
  0x3D,0xFF,0xDF, 0x00,0xFF,0xFF, 0x00,0xED,0x19, 0x00,0xD8,0xAF, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xF5,0x9B, 0x00,0xFF,0xFF, 0x40,0xFF,0xDF,
  0x8B,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0x9E, 0x00,0xD9,0x70, 0x00,0xD8,0xAF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE2,0x75, 0x00,0xFF,0xBE, 0x00,0xFF,0xFF, 0x8D,0xFF,0xFF,
  0xEE,0xFF,0xFF, 0x12,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xF5,0xDA, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE1,0xD4, 0x00,0xE1,0xF4, 0x00,0xF6,0x3C, 0x00,0xFF,0xFF, 0x13,0xFF,0xFF, 0xEF,0xFF,0xFF,
  0xFF,0x00,0x00, 0x9D,0xFF,0xDF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xF5,0xDA, 0x00,0xD9,0x71, 0x00,0xD8,0xCF, 0x00,0xD8,0xCF, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD8,0xF0, 0x00,0xD9,0x10, 0x00,0xD9,0x10, 0x00,0xD9,0x11, 
        0x00,0xD9,0x11, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x31, 0x00,0xD9,0x51, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x52, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x72, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 0x00,0xD9,0x93, 
        0x00,0xD9,0xB3, 0x00,0xE1,0xB3, 0x00,0xE1,0xB4, 0x00,0xE1,0xD4, 0x00,0xE2,0x75, 0x00,0xF6,0x3C, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0xA0,0xFF,0xDF, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0x77,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0x9E, 0x00,0xED,0x39, 0x00,0xE3,0x75, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 0x00,0xE2,0xD4, 
        0x00,0xE2,0xF4, 0x00,0xE2,0xF5, 0x00,0xE2,0xF5, 0x00,0xE2,0xF5, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x15, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x36, 0x00,0xE3,0x56, 
        0x00,0xE3,0x56, 0x00,0xE3,0x77, 0x00,0xEC,0x18, 0x00,0xF5,0x9B, 0x00,0xFF,0x9E, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x79,0xFF,0xFF, 0xFF,0x00,0x00, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0x9E,0xFF,0xDF, 0x12,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x13,0xFF,0xFF, 0x9F,0xFF,0xDF, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00,
  0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xEF,0xFF,0xFF, 0x8D,0xFF,0xFF, 0x3F,0xFF,0xDF, 0x18,0xFF,0xFF, 0x01,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xFF,0xFF, 0x02,0xFF,0xFF, 0x18,0xFF,0xFF, 0x3F,0xFF,0xDF, 0x8D,0xFF,0xFF, 0xEF,0xFF,0xFF, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00, 0xFF,0x00,0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmNextPressedButton = {
  40, /* xSize */
  42, /* ySize */
  120, /* BytesPerLine */
  24, /* BitsPerPixel */
  (unsigned char *)_acNextPressed,  /* Pointer to picture data */
  NULL,  /* Pointer to palette */
  GUI_DRAW_BMPA565
};

/*************************** End of file ****************************/
