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
* Source file: ApplyFilterPressed                                    *
* Dimensions:  100 * 32                                              *
* NumColors:   65536 colors + 8 bit alpha channel                    *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmApplyFilterPressed;

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned char _acApplyFilterPressed[] = {
  0xFA,0xAD,0x75, 0xB9,0xFF,0xFF, 0x32,0xFF,0xDF, 0x02,0xF7,0xBF, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x02,0xF7,0xBF, 0x33,0xFF,0xDF, 0xBA,0xFF,0xFF, 0xFA,0xAD,0x75,
  0xE4,0xFF,0xFF, 0x5F,0xFF,0xDF, 0x0C,0xF7,0x5F, 0x00,0xE6,0x7E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 
        0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xE6,0x5E, 
        0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 
        0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xEE,0xBE, 0x0C,0xF7,0x7F, 0x60,0xFF,0xDF, 0xE5,0xFF,0xFF,
  0xB7,0xFF,0xFF, 0x23,0xF7,0x7F, 0x01,0xCD,0x7E, 0x00,0xB3,0xDD, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xB3,0x9C, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 
        0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xBB,0xDD, 0x00,0xBB,0xDD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 
        0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBC,0x1D, 0x00,0xBC,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 
        0x00,0xC4,0x1D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xCC,0x9D, 0x01,0xDD,0xDE, 0x23,0xF7,0x9F, 0xB8,0xFF,0xFF,
  0x71,0xFF,0xDF, 0x06,0xDE,0x3E, 0x00,0x9A,0x7C, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xFB, 0x00,0x78,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 
        0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 
        0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x9B, 0x00,0x91,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xDC, 
        0x00,0x99,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xA1,0xFC, 0x00,0xA1,0xFC, 0x00,0xAA,0x1C, 0x00,0xBB,0x5C, 0x06,0xE6,0x7E, 0x72,0xFF,0xDF,
  0x36,0xF7,0xBF, 0x01,0xBC,0x7D, 0x00,0x81,0x1B, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xAA,0x5C, 0x01,0xD5,0x1D, 0x37,0xF7,0xBF,
  0x12,0xF7,0x7F, 0x00,0xA3,0x1C, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA9,0xFC, 0x01,0xC3,0xFD, 0x12,0xF7,0x7F,
  0x03,0xEF,0x1E, 0x00,0x92,0x5C, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xBB,0x3C, 0x03,0xF7,0x3E,
  0x00,0xE6,0xDE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEF,0x1E,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xB3,0xBD, 0x00,0xD5,0x7E, 0x00,0xD5,0x7E, 0x00,0x9A,0x3C, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0xA2,0x7C, 0x00,0xDD,0x9E, 0x00,0xB3,0x7D, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xA2,0xBC, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x92,0x3C, 
        0x00,0xFF,0xDF, 0x00,0xC4,0xDD, 0x00,0xF7,0x5F, 0x00,0xE6,0x9E, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xEF,0x3F, 0x00,0xEE,0xFF, 0x00,0xE6,0x5E, 0x00,0xFF,0xDF, 0x00,0xE6,0x7E, 0x00,0x91,0xDC, 0x00,0x91,0xBB, 0x00,0xFF,0xDF, 0x00,0xE6,0x7E, 
        0x00,0xEE,0xFF, 0x00,0xFF,0xDF, 0x00,0xDD,0xFE, 0x00,0x91,0x9B, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0xF7,0x7F, 0x00,0xE6,0x3E, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0xC3,0xFD, 0x00,0xFF,0xDF, 0x00,0xBB,0x9D, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0xAB,0x7C, 
        0x00,0xFF,0xDF, 0x00,0xB3,0x9D, 0x00,0xDE,0x1E, 0x00,0xEF,0x1F, 0x00,0x91,0xDC, 0x00,0x89,0x1B, 0x00,0xF7,0x5F, 0x00,0xF7,0x9F, 0x00,0xB3,0x9D, 0x00,0xBB,0xFD, 0x00,0xFF,0xDF, 0x00,0xBB,0xDD, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xF7,0x3F, 
        0x00,0xAB,0x1C, 0x00,0xCC,0xDD, 0x00,0xFF,0xFF, 0x00,0xAA,0xFC, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0xC4,0x7D, 0x00,0xFF,0xBF, 0x00,0xB3,0x5D, 0x00,0x99,0x9B, 0x00,0xF7,0x3F, 0x00,0xE6,0x9E, 0x00,0xA1,0xFC, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0xDE,0x3E, 
        0x00,0xFF,0xBF, 0x00,0x9A,0x5C, 0x00,0xBC,0x3D, 0x00,0xFF,0xFF, 0x00,0xB3,0xBD, 0x00,0x89,0x1B, 0x00,0xF7,0x5F, 0x00,0xE6,0x9E, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x5B, 0x00,0x99,0xFC, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0xB3,0x7D, 0x00,0xFF,0xBF, 0x00,0xC4,0x5D, 0x00,0xA2,0x3C, 0x00,0xFF,0xBF, 0x00,0xDD,0xBE, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x9A,0x5C, 0x00,0xF7,0x5F, 
        0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 0x00,0xDE,0x3E, 0x00,0x89,0x1B, 0x00,0xF7,0x5F, 0x00,0xE6,0x9E, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x5B, 0x00,0x99,0xFC, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0x91,0x7B, 0x00,0xE6,0x7E, 0x00,0xF7,0x5F, 0x00,0xCC,0xFD, 0x00,0xFF,0xDF, 0x00,0xAA,0xBC, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0xAB,0x3C, 0x00,0xFF,0xFF, 
        0x00,0xD5,0xDE, 0x00,0xBC,0x5D, 0x00,0xBC,0x7D, 0x00,0xEF,0x1F, 0x00,0xF7,0x9F, 0x00,0x89,0x1B, 0x00,0xF7,0x5F, 0x00,0xF7,0x5F, 0x00,0xA2,0x7C, 0x00,0xAA,0xDC, 0x00,0xFF,0xBF, 0x00,0xC4,0x9D, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xEE,0xDE, 
        0x00,0x9A,0x1C, 0x00,0xBB,0xDD, 0x00,0xFF,0xFF, 0x00,0xB3,0x9D, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0x91,0x7B, 0x00,0xB3,0x1C, 0x00,0xF7,0xBF, 0x00,0xE6,0x7E, 0x00,0xD5,0x7E, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0xEE,0xFE, 0x00,0xE6,0xBE, 
        0x00,0x81,0x1B, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0xA2,0x9C, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0xF7,0x5F, 0x00,0xF7,0x7F, 0x00,0xEE,0xDE, 0x00,0xFF,0xDF, 0x00,0xEF,0x1F, 0x00,0x9A,0x3C, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xEE,0xFF, 
        0x00,0xEF,0x3F, 0x00,0xFF,0xDF, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xAA,0xFC, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0x91,0x7B, 0x00,0xA2,0x7C, 0x00,0xEF,0x1F, 0x00,0xFF,0xFF, 0x00,0xC4,0x1D, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x91,0xFC, 0x00,0x91,0xDC, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x89,0x5B, 0x00,0x9A,0x3C, 0x00,0x91,0xBB, 0x00,0xF7,0x5F, 0x00,0xE6,0x9E, 0x00,0x91,0xDC, 0x00,0x9A,0x3C, 0x00,0x99,0xFC, 0x00,0x89,0x3B, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x9A,0x3C, 0x00,0xA2,0x7C, 0x00,0x99,0xFC, 0x00,0x91,0x7B, 0x00,0x99,0xBB, 0x00,0xA2,0x7C, 0x00,0x99,0xFC, 0x00,0x91,0x7B, 0x00,0x99,0xFC, 0x00,0xE6,0x7E, 0x00,0xEE,0xFF, 0x00,0x99,0xDC, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xF7,0x5F, 0x00,0xE6,0x9E, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0xB3,0x5C, 0x00,0xE6,0x9E, 0x00,0xFF,0xDF, 0x00,0xC4,0x1D, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xB3,0x9D, 0x00,0xAB,0x3C, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x91,0x7B, 0x00,0xBB,0xDD, 0x00,0xAA,0xFC, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0xA2,0x7C, 0x00,0xBB,0xFD, 0x00,0xBB,0xDD, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xBC,0x1D, 0x00,0xDD,0xFE, 0x00,0xDD,0xFE, 0x00,0xDD,0xFE, 0x00,0xDD,0xFE, 0x00,0xDD,0xFE, 0x00,0x91,0x9B, 0x00,0xCC,0xFD, 0x00,0xD5,0xBE, 0x00,0x89,0x3B, 0x00,0xD5,0x9E, 0x00,0xCD,0x1D, 0x00,0x89,0x3B, 0x00,0x99,0xDC, 0x00,0xBC,0x1D, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0x91,0xBC, 0x00,0xB3,0x7D, 0x00,0xBB,0xFD, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xE6,0x9E, 0x00,0xD5,0xBE, 
        0x00,0x91,0x9B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0xBB, 0x00,0x99,0xBB, 0x00,0x91,0x9B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0xDC, 0x00,0x99,0xBC, 0x00,0x99,0xDC, 0x00,0x99,0xBC, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0x91,0xBB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0xD5,0x9E, 0x00,0xFF,0xFF, 0x00,0xFF,0xFF, 
        0x00,0xE6,0x7E, 0x00,0x91,0x9B, 0x00,0xC4,0x9D, 0x00,0xFF,0xBF, 0x00,0xFF,0xFF, 0x00,0xD5,0x7E, 0x00,0x91,0x7B, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xDE,0x1E, 0x00,0xFF,0xFF, 0x00,0xD5,0x7E, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0xF7,0x9F, 0x00,0xF7,0x7F, 0x00,0xF7,0x7F, 0x00,0xC4,0x7D, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x99,0xFC, 0x00,0xFF,0xFF, 0x00,0xDD,0xBE, 
        0x00,0x91,0xBC, 0x00,0xB3,0x3C, 0x00,0xFF,0xFF, 0x00,0xA2,0x3C, 0x00,0xB3,0x5C, 0x00,0xFF,0xFF, 0x00,0xC4,0x5D, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xDD,0xFE, 0x00,0xA2,0x1C, 0x00,0x99,0xDC, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0xE6,0x5E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xB3,0xBD, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x5B, 0x00,0xD5,0x9E, 0x00,0xFF,0xFF, 0x00,0xEE,0xDE, 0x00,0xEF,0x1F, 0x00,0xFF,0xFF, 0x00,0xC4,0x9D, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xBB,0xBD, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 
        0x00,0x99,0xBB, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0x91,0xBB, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x5B, 0x00,0xD5,0x9E, 0x00,0xFF,0xFF, 0x00,0xB3,0xBD, 0x00,0xB3,0x5C, 0x00,0xB3,0x7C, 0x00,0xA2,0x7C, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xBB,0xBD, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0x91,0xBB, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0xBB, 0x00,0xFF,0xFF, 0x00,0xD5,0x9E, 
        0x00,0x91,0x7B, 0x00,0xB3,0x7C, 0x00,0xFF,0xFF, 0x00,0xBC,0x1D, 0x00,0xA2,0x7C, 0x00,0xD5,0x3D, 0x00,0xB3,0x3C, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xBB,0xBD, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0xCD,0x3E, 0x00,0xFF,0xFF, 0x00,0x91,0xBB, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0xE6,0x5E, 0x00,0xF7,0x9F, 0x00,0x89,0x3B, 0x00,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0x91,0x9B, 0x00,0xE6,0x5E, 0x00,0xFF,0xFF, 
        0x00,0xE6,0x7E, 0x00,0x91,0xBB, 0x00,0xCC,0xDD, 0x00,0xFF,0xDF, 0x00,0xFF,0xFF, 0x00,0xDD,0x9E, 0x00,0x91,0x7B, 0x00,0xBB,0xFD, 0x00,0xFF,0xFF, 0x00,0xBB,0xBD, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xBE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x89,0x5B, 0x00,0x89,0x9B, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x91,0x9B, 0x00,0x91,0xBB, 0x00,0x89,0x3B, 0x00,0x91,0xBB, 0x00,0x91,0xBB, 0x00,0x89,0x5B, 0x00,0x91,0x9B, 0x00,0x99,0xDC, 
        0x00,0x99,0xDC, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x99,0xFC, 0x00,0x99,0xFC, 0x00,0x99,0xBB, 0x00,0x91,0x7B, 0x00,0x99,0xBC, 0x00,0xA2,0x1C, 0x00,0x99,0xBC, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEE,0xFE,
  0x00,0xE6,0xDE, 0x00,0x89,0xFB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xB2,0xFC, 0x00,0xEF,0x1E,
  0x03,0xEF,0x1E, 0x00,0x92,0x5C, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xBB,0x3C, 0x03,0xF7,0x3E,
  0x12,0xF7,0x7F, 0x01,0xA3,0x1C, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA9,0xFC, 0x01,0xC3,0xFD, 0x13,0xF7,0x7F,
  0x37,0xF7,0xBF, 0x01,0xBC,0x9D, 0x00,0x81,0x1B, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xBB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x80,0xDB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 
        0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x5B, 
        0x00,0x91,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 
        0x00,0x99,0xBC, 0x00,0x99,0xBC, 0x00,0xA1,0xBC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xAA,0x5C, 0x01,0xD5,0x1D, 0x37,0xF7,0xBF,
  0x72,0xFF,0xDF, 0x06,0xDE,0x3E, 0x00,0x9A,0x7C, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xDB, 0x00,0x78,0xFB, 0x00,0x78,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x80,0xFB, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 
        0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x81,0x1B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x3B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x89,0x5B, 0x00,0x91,0x5B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 
        0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x7B, 0x00,0x91,0x9B, 0x00,0x91,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0x9B, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xBB, 0x00,0x99,0xDC, 
        0x00,0x99,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xDC, 0x00,0xA1,0xFC, 0x00,0xA1,0xFC, 0x00,0xA1,0xFC, 0x00,0xAA,0x1C, 0x00,0xBB,0x5C, 0x06,0xE6,0x9E, 0x72,0xFF,0xDF,
  0xB8,0xFF,0xFF, 0x23,0xF7,0x7F, 0x01,0xCD,0x7E, 0x00,0xB3,0xDD, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xAB,0x9C, 0x00,0xB3,0x9C, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 
        0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBC, 0x00,0xB3,0xBD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xB3,0xDD, 0x00,0xBB,0xDD, 0x00,0xBB,0xDD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 
        0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBB,0xFD, 0x00,0xBC,0x1D, 0x00,0xBC,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 0x00,0xC4,0x1D, 
        0x00,0xC4,0x1D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xC4,0x3D, 0x00,0xCC,0x9D, 0x01,0xDD,0xFE, 0x24,0xF7,0x9F, 0xB8,0xFF,0xFF,
  0xE5,0xFF,0xFF, 0x60,0xFF,0xDF, 0x0C,0xF7,0x7F, 0x00,0xE6,0x9E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 
        0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x3E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xDE,0x5E, 0x00,0xE6,0x5E, 
        0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 
        0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x5E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xE6,0x7E, 0x00,0xEE,0xBE, 0x0C,0xF7,0x7F, 0x61,0xFF,0xDF, 0xE5,0xFF,0xFF,
  0xFA,0xAD,0x75, 0xBA,0xFF,0xFF, 0x34,0xFF,0xDF, 0x03,0xF7,0xBF, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 
        0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0x9F, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x03,0xF7,0xBF, 0x34,0xFF,0xDF, 0xBA,0xFF,0xFF, 0xFB,0xAD,0x75
};

GUI_CONST_STORAGE GUI_BITMAP bmApplyFilterPressed = {
  57, // xSize
  39, // ySize
  171, // BytesPerLine
  24, // BitsPerPixel
  (unsigned char *)_acApplyFilterPressed,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMPAM565
};

/*************************** End of file ****************************/
