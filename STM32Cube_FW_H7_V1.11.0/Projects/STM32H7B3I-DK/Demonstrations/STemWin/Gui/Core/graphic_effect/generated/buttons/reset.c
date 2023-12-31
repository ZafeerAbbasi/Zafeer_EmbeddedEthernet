/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.32.                      *
*        Compiled Oct  8 2015, 11:58:22                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: Reset                                                 *
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

extern GUI_CONST_STORAGE GUI_BITMAP bmReset;

#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned char _acReset[] = {
  0xFA,0xAD,0x55, 0xBF,0xFF,0xFF, 0x4D,0xF7,0xDF, 0x0B,0xF7,0xDF, 0x01,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 
        0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 
        0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 
        0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x01,0xEF,0xBE, 0x0B,0xEF,0xBE, 0x4D,0xF7,0xDF, 0xC0,0xFF,0xDF, 0xFA,0xAD,0x55,
  0xCE,0xFF,0xFF, 0x3F,0xF7,0xDF, 0x06,0xC7,0x3E, 0x01,0x96,0x9D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x5D, 0x00,0x8E,0x5C, 0x00,0x8E,0x5C, 0x00,0x86,0x5C, 0x00,0x86,0x3C, 0x00,0x86,0x3C, 0x00,0x86,0x3C, 
        0x00,0x86,0x3C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x7E,0x1C, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xDB, 0x00,0x7D,0xDB, 0x00,0x7D,0xDB, 0x00,0x75,0xDB, 0x00,0x75,0xBB, 
        0x00,0x75,0xBB, 0x00,0x75,0xBB, 0x00,0x75,0xBB, 0x00,0x75,0xBA, 0x00,0x75,0x9A, 0x00,0x75,0x9A, 0x00,0x75,0x9A, 0x00,0x6D,0x9A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x5A, 0x00,0x6D,0x59, 0x00,0x6D,0x59, 
        0x00,0x6D,0x59, 0x00,0x65,0x59, 0x00,0x65,0x59, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x19, 0x01,0x6D,0x59, 0x06,0xAE,0x5C, 0x3F,0xEF,0xBE, 0xCF,0xFF,0xFF,
  0x77,0xF7,0xDF, 0x0A,0xBF,0x3E, 0x00,0x66,0x1D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 
        0x00,0x45,0x3A, 0x00,0x45,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x38, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x95, 0x00,0x23,0xF6, 0x0A,0xA6,0x5B, 0x77,0xF7,0xDF,
  0x2C,0xEF,0xBF, 0x02,0x86,0x7D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x02,0x54,0xD8, 0x2D,0xE7,0x9E,
  0x08,0xE7,0x9E, 0x01,0x76,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x01,0x34,0x37, 0x08,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x45,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF7, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x6D,0xFC, 0x00,0xAE,0xDD, 
        0x00,0xAE,0xDD, 0x00,0xAE,0xDD, 0x00,0xAE,0xBD, 0x00,0x7D,0xFC, 0x00,0x45,0x3A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 
        0x00,0x2C,0x99, 0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x38, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x4C,0xF9, 0x00,0x34,0x98, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x7D, 0x00,0xF7,0xDF, 
        0x00,0xC7,0x3E, 0x00,0xC7,0x1E, 0x00,0xCF,0x3E, 0x00,0xF7,0xDF, 0x00,0x96,0x5C, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 
        0x00,0x2C,0x99, 0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x38, 0x00,0x24,0x37, 0x00,0x2C,0x78, 0x00,0xE7,0x9E, 0x00,0x4C,0xF9, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x7D, 0x00,0xE7,0x9E, 
        0x00,0x55,0x7B, 0x00,0x45,0x5B, 0x00,0x4D,0x5B, 0x00,0xBF,0x1D, 0x00,0xC7,0x1E, 0x00,0x3D,0x1A, 0x00,0x4D,0x5A, 0x00,0xB6,0xDD, 0x00,0xDF,0x7E, 0x00,0xB6,0xDD, 0x00,0x5D,0x7A, 0x00,0x34,0xD9, 0x00,0x4D,0x3A, 0x00,0xAE,0xBD, 0x00,0xC6,0xFD, 
        0x00,0xBE,0xFD, 0x00,0x8E,0x3B, 0x00,0x3C,0xB9, 0x00,0x2C,0x98, 0x00,0x96,0x3B, 0x00,0xDF,0x5E, 0x00,0xC7,0x1D, 0x00,0x65,0x7A, 0x00,0x3C,0xB8, 0x00,0xBE,0xFD, 0x00,0xFF,0xFF, 0x00,0xDF,0x7E, 0x00,0x7D,0xBA, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x5C, 0x00,0xEF,0xDF, 
        0x00,0xAE,0xBD, 0x00,0xA6,0x9D, 0x00,0xAE,0xBD, 0x00,0xDF,0x7E, 0x00,0x96,0x7C, 0x00,0x3C,0xFA, 0x00,0x9E,0x7C, 0x00,0xDF,0x7E, 0x00,0x96,0x5C, 0x00,0xB6,0xFD, 0x00,0xCF,0x1D, 0x00,0x4D,0x3A, 0x00,0xA6,0x9C, 0x00,0xCF,0x3E, 0x00,0x55,0x5A, 
        0x00,0x6D,0x9A, 0x00,0xC7,0x1D, 0x00,0x4D,0x19, 0x00,0x65,0x7A, 0x00,0xDF,0x7E, 0x00,0x9E,0x5C, 0x00,0x9E,0x5C, 0x00,0xE7,0x7E, 0x00,0x5D,0x39, 0x00,0x85,0xDB, 0x00,0xFF,0xFF, 0x00,0x9E,0x5C, 0x00,0x54,0xF9, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x5C, 0x00,0xF7,0xDF, 
        0x00,0xD7,0x7E, 0x00,0xE7,0x9E, 0x00,0xEF,0xDF, 0x00,0x96,0x5C, 0x00,0x3D,0x1A, 0x00,0x45,0x1A, 0x00,0xEF,0xBF, 0x00,0x9E,0x7C, 0x00,0x65,0x7B, 0x00,0x6D,0xBB, 0x00,0xF7,0xDF, 0x00,0x75,0xDB, 0x00,0xB6,0xDD, 0x00,0xF7,0xDF, 0x00,0xB6,0xDD, 
        0x00,0x6D,0x9B, 0x00,0x4D,0x19, 0x00,0x2C,0x78, 0x00,0xB6,0xBD, 0x00,0xC6,0xFD, 0x00,0x55,0x39, 0x00,0x55,0x19, 0x00,0xCF,0x3E, 0x00,0x9E,0x5C, 0x00,0x34,0x98, 0x00,0xFF,0xFF, 0x00,0x4C,0xF9, 0x00,0x1B,0xF7, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x5C, 0x00,0xDF,0x9E, 
        0x00,0x4D,0x5B, 0x00,0x4D,0x5B, 0x00,0xEF,0xBF, 0x00,0xAE,0xBD, 0x00,0x3D,0x1A, 0x00,0x45,0x1A, 0x00,0xEF,0xBF, 0x00,0xCF,0x3E, 0x00,0xB6,0xDD, 0x00,0xB6,0xDD, 0x00,0xB6,0xDD, 0x00,0x55,0x5A, 0x00,0x45,0x1A, 0x00,0xA6,0x9C, 0x00,0xDF,0x7E, 
        0x00,0xF7,0xDF, 0x00,0xE7,0x9E, 0x00,0x55,0x3A, 0x00,0xB6,0xDD, 0x00,0xDF,0x7E, 0x00,0xAE,0x9C, 0x00,0xAE,0x9C, 0x00,0xAE,0x9C, 0x00,0x75,0x9A, 0x00,0x34,0x98, 0x00,0xFF,0xFF, 0x00,0x4C,0xF9, 0x00,0x1B,0xF7, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x5C, 0x00,0xDF,0x9E, 
        0x00,0x4D,0x5B, 0x00,0x3D,0x3A, 0x00,0x86,0x3C, 0x00,0xE7,0xBE, 0x00,0x7E,0x1C, 0x00,0x3D,0x1A, 0x00,0xC7,0x1E, 0x00,0xAE,0xDD, 0x00,0x5D,0x5A, 0x00,0x5D,0x7A, 0x00,0x86,0x1B, 0x00,0x45,0x1A, 0x00,0x65,0x7A, 0x00,0x6D,0xBB, 0x00,0x44,0xF9, 
        0x00,0x6D,0xBB, 0x00,0xEF,0xBF, 0x00,0x85,0xFB, 0x00,0x8E,0x3B, 0x00,0xCF,0x1D, 0x00,0x55,0x3A, 0x00,0x4C,0xF9, 0x00,0x7D,0xBB, 0x00,0x44,0xD9, 0x00,0x34,0x98, 0x00,0xFF,0xFF, 0x00,0x65,0x5A, 0x00,0x2C,0x57, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x8E,0x5C, 0x00,0xDF,0x7E, 
        0x00,0x4D,0x5B, 0x00,0x3D,0x3A, 0x00,0x4D,0x5B, 0x00,0xBF,0x1D, 0x00,0xBF,0x1D, 0x00,0x3D,0x1A, 0x00,0x6D,0xDB, 0x00,0xD7,0x5E, 0x00,0xDF,0x7E, 0x00,0xDF,0x7E, 0x00,0xC7,0x1D, 0x00,0x4D,0x3A, 0x00,0x86,0x1B, 0x00,0xD7,0x5E, 0x00,0xA6,0x7C, 
        0x00,0xB6,0xBD, 0x00,0xD7,0x5E, 0x00,0x55,0x3A, 0x00,0x3C,0xD9, 0x00,0xC6,0xFD, 0x00,0xDF,0x5E, 0x00,0xDF,0x5E, 0x00,0xD7,0x5E, 0x00,0x5D,0x39, 0x00,0x34,0x78, 0x00,0xEF,0xBE, 0x00,0xDF,0x7E, 0x00,0x7D,0xBA, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x5D,0x9B, 0x00,0x75,0xFC, 
        0x00,0x45,0x5B, 0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x5D,0x9B, 0x00,0x75,0xFB, 0x00,0x45,0x3A, 0x00,0x34,0xFA, 0x00,0x45,0x1A, 0x00,0x75,0xDB, 0x00,0x6D,0xBB, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x4D,0x3A, 0x00,0x6D,0x9B, 
        0x00,0x65,0x7A, 0x00,0x34,0xB9, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x2C,0x78, 0x00,0x5D,0x3A, 0x00,0x65,0x5A, 0x00,0x34,0x98, 0x00,0x1C,0x37, 0x00,0x1C,0x37, 0x00,0x4C,0xD9, 0x00,0x65,0x5A, 0x00,0x3C,0xB8, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 
        0x00,0x45,0x3B, 0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x38, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x00,0xDF,0x9E, 0x00,0x6E,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x00,0x2C,0x37, 0x00,0xD7,0x3D,
  0x07,0xE7,0x9E, 0x01,0x76,0x3D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x03,0x75, 0x01,0x34,0x37, 0x08,0xD7,0x3D,
  0x2C,0xEF,0xBF, 0x02,0x86,0x7D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x3B, 
        0x00,0x3D,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x24,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 0x00,0x13,0xD6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x00,0x0B,0x75, 0x02,0x54,0xD8, 0x2D,0xE7,0x9E,
  0x77,0xF7,0xDF, 0x0A,0xBF,0x3E, 0x00,0x66,0x1D, 0x00,0x55,0xBC, 0x00,0x55,0xBC, 0x00,0x4D,0xBC, 0x00,0x4D,0x9C, 0x00,0x4D,0x9B, 0x00,0x4D,0x9B, 0x00,0x4D,0x7B, 0x00,0x4D,0x7B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 0x00,0x45,0x5B, 
        0x00,0x45,0x3A, 0x00,0x45,0x3A, 0x00,0x3D,0x3A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3D,0x1A, 0x00,0x3C,0xFA, 0x00,0x34,0xFA, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xD9, 0x00,0x34,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0xB9, 0x00,0x2C,0x99, 
        0x00,0x2C,0x98, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x2C,0x78, 0x00,0x24,0x58, 0x00,0x24,0x58, 0x00,0x24,0x38, 0x00,0x24,0x37, 0x00,0x24,0x37, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1C,0x17, 0x00,0x1B,0xF7, 0x00,0x1B,0xF7, 0x00,0x13,0xF6, 
        0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xD6, 0x00,0x13,0xB6, 0x00,0x13,0xB6, 0x00,0x0B,0xB6, 0x00,0x0B,0x96, 0x00,0x0B,0x95, 0x00,0x0B,0x95, 0x00,0x23,0xF6, 0x0A,0xA6,0x5B, 0x78,0xF7,0xDF,
  0xCF,0xFF,0xFF, 0x3F,0xF7,0xDF, 0x06,0xC7,0x3E, 0x01,0x96,0x9D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x7D, 0x00,0x8E,0x5D, 0x00,0x8E,0x5C, 0x00,0x8E,0x5C, 0x00,0x86,0x5C, 0x00,0x86,0x3C, 0x00,0x86,0x3C, 0x00,0x86,0x3C, 
        0x00,0x86,0x3C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x86,0x1C, 0x00,0x7E,0x1C, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xFB, 0x00,0x7D,0xDB, 0x00,0x7D,0xDB, 0x00,0x7D,0xDB, 0x00,0x75,0xDB, 0x00,0x75,0xBB, 
        0x00,0x75,0xBB, 0x00,0x75,0xBB, 0x00,0x75,0xBB, 0x00,0x75,0xBA, 0x00,0x75,0x9A, 0x00,0x75,0x9A, 0x00,0x75,0x9A, 0x00,0x6D,0x9A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x7A, 0x00,0x6D,0x5A, 0x00,0x6D,0x59, 0x00,0x6D,0x59, 
        0x00,0x6D,0x59, 0x00,0x65,0x59, 0x00,0x65,0x59, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x39, 0x00,0x65,0x19, 0x01,0x6D,0x59, 0x06,0xAE,0x7C, 0x40,0xEF,0xBE, 0xCF,0xFF,0xFF,
  0xFA,0xAD,0x55, 0xC1,0xFF,0xDF, 0x4E,0xF7,0xDF, 0x0C,0xF7,0xDF, 0x01,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xDF, 0x00,0xF7,0xBF, 0x00,0xF7,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 
        0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBF, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 
        0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 
        0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x00,0xEF,0xBE, 0x01,0xEF,0xBE, 0x0C,0xEF,0xBE, 0x4E,0xF7,0xDF, 0xC1,0xFF,0xFF, 0xFA,0xAD,0x55
};

GUI_CONST_STORAGE GUI_BITMAP bmReset = {
  57, // xSize
  24, // ySize
  171, // BytesPerLine
  24, // BitsPerPixel
  (unsigned char *)_acReset,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMPAM565
};

/*************************** End of file ****************************/
