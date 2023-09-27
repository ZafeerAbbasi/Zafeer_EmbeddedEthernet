/**
  ******************************************************************************
  * @file    LibJPEG/LibJPEG_Decoding/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

#include "stm32h735g_discovery.h"
#include "stm32h735g_discovery_lcd.h"
#include "stm32h735g_discovery_sd.h"

#include "stm32_lcd.h"

/* FatFs includes component */
#include "ff_gen_drv.h"
#include "sd_diskio.h"

/* Jpeg includes component */
#include "jpeglib.h"

#include "decode.h"

/* Exported types ------------------------------------------------------------*/
typedef struct RGB
{
  uint8_t B;
  uint8_t G;
  uint8_t R;
}RGB_typedef;

/* Exported variables --------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define IMAGE_FILE "image.jpg"

#define IMAGE_HEIGHT 240
#define IMAGE_WIDTH  320
#define IMAGE_QUALITY 90

#define USE_DMA2D
//#define SWAP_RB
#define BSP_SD_INSTANCE 0U
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */
