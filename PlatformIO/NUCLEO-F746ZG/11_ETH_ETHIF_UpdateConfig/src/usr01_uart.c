/*
# ##############################################################################
# File: usr01_uart.c                                                           #
# Project: src                                                                 #
# Created Date: Saturday, September 30th 2023, 2:11:15 pm                      #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Saturday, September 30th 2023, 9:26:34 pm                     #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

/*##############################################################################################################################################*/
/*INCLUDES______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#include "usr01_uart.h"

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

/*UART Handle Typedef*/
USART_HandleTypeDef hUsart3;

/*##############################################################################################################################################*/
/*DEFINES_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*TYPEDEFS/STRUCTS/ENUMS________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*FUNCTIONS_____________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

/**
 * @brief Initialize USART3 which is connected to STLINK COM
 * 
 */
void UART_usart3TXInit( void )
{
    /*First set up GPIO Pins for UART3*/
    /*Clock Access*/
    __HAL_RCC_GPIOD_CLK_ENABLE( );
    __HAL_RCC_USART3_CLK_ENABLE( );
    
    /*
    USART3 TX = PD8
    USART3 RX = PD9 */
    GPIO_InitTypeDef GPIO_initStruct = { 0 };

    /*Port D*/
    GPIO_initStruct.Pin = GPIO_PIN_8;
    GPIO_initStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_initStruct.Pull = GPIO_PULLUP;
    GPIO_initStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_initStruct.Alternate = GPIO_AF7_USART3;
    HAL_GPIO_Init( GPIOD, &GPIO_initStruct );

    /*Configure USART3*/
    hUsart3.Instance = USART3;
    hUsart3.Init.BaudRate = 115200;
    hUsart3.Init.WordLength = USART_WORDLENGTH_8B; /*Same as Default*/
    hUsart3.Init.Mode = USART_MODE_TX;
    if( HAL_USART_Init( &hUsart3 ) != HAL_OK)
    {
      ERROR_errorHandler( );
    }
}

/**
 * @brief Retarget printf to UART (std library and toolchain dependent)
 * 
 */
#if defined(__GNUC__)
int _write(int fd, char * ptr, int len)
{
  HAL_USART_Transmit(&hUsart3, (uint8_t *) ptr, len, HAL_MAX_DELAY);
  return len;
}
#elif defined (__ICCARM__)
#include "LowLevelIOInterface.h"
size_t __write(int handle, const unsigned char * buffer, size_t size)
{
  HAL_UART_Transmit(&huart1, (uint8_t *) buffer, size, HAL_MAX_DELAY);
  return size;
}
#elif defined (__CC_ARM)
int fputc(int ch, FILE *f)
{
    HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
    return ch;
}
#endif
/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/