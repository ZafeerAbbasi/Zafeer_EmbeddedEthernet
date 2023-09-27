/**
  ******************************************************************************
  * @file    I2C/I2C_WakeUpFromStop/CM7/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module for Cortex-M7.
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
#include "stm32h747i_eval.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* User can use this section to tailor I2Cx/I2Cx instance used and associated
   resources */
/* Definition for I2Cx clock resources */
#define I2Cx                            I2C4
#define RCC_PERIPHCLK_I2Cx              RCC_PERIPHCLK_I2C4
#define RCC_I2CxCLKSOURCE               RCC_I2C123CLKSOURCE_HSI
#define I2Cx_CLK_ENABLE()               __HAL_RCC_I2C4_CLK_ENABLE()
#define I2Cx_SDA_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOH_CLK_ENABLE()
#define I2Cx_SCL_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOH_CLK_ENABLE()

#define I2Cx_FORCE_RESET()              __HAL_RCC_I2C4_FORCE_RESET()
#define I2Cx_RELEASE_RESET()            __HAL_RCC_I2C4_RELEASE_RESET()

/* Definition for I2Cx Pins */
#define I2Cx_SCL_PIN                    GPIO_PIN_11
#define I2Cx_SCL_GPIO_PORT              GPIOH
#define I2Cx_SDA_PIN                    GPIO_PIN_12
#define I2Cx_SDA_GPIO_PORT              GPIOH
#define I2Cx_SCL_SDA_AF                 GPIO_AF4_I2C4

/* Definition for I2Cx's NVIC */
#define I2Cx_EV_IRQn                    I2C4_EV_IRQn
#define I2Cx_ER_IRQn                    I2C4_ER_IRQn
#define I2Cx_EV_IRQHandler              I2C4_EV_IRQHandler
#define I2Cx_ER_IRQHandler              I2C4_ER_IRQHandler

/* Size of Transmission buffer */
#define TXBUFFERSIZE                      (COUNTOF(aTxBuffer) - 1)
/* Size of Reception buffer */
#define RXBUFFERSIZE                      TXBUFFERSIZE

/* Exported macro ------------------------------------------------------------*/
#define COUNTOF(__BUFFER__)   (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))

/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */
