/*
# ##############################################################################
# File: usr_led.c                                                              #
# Project: src                                                                 #
# Created Date: Thursday, September 28th 2023, 8:31:44 pm                      #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Friday, October 6th 2023, 6:55:35 pm                          #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

/*##############################################################################################################################################*/
/*INCLUDES______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#include "usr00_led.h"

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



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
 * @brief Initialize All USER LED's
 * 
 */
void LED_Init( void )
{
    /*Clock Access*/
    __HAL_RCC_GPIOB_CLK_ENABLE( );
    
    /*Create GPIOInit struct*/
    GPIO_InitTypeDef GPIO_initStruct = { 0 };

    /*Port B*/
    GPIO_initStruct.Pin = GPIO_PIN_0 | GPIO_PIN_7 | GPIO_PIN_14;
    GPIO_initStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_initStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init( GPIOB, &GPIO_initStruct );
}

/**
 * @brief Activate an LED
 * 
 * @param LED The LED You wish to Activate 
 */
void LED_activateLED( uint32_t LED )
{
    switch( LED )
    {
        case GREEN_LED:
            HAL_GPIO_WritePin( GREEN_LED_PORT, GREEN_LED, GPIO_PIN_SET );
            break;
        
        case BLUE_LED:
            HAL_GPIO_WritePin( BLUE_LED_PORT, BLUE_LED, GPIO_PIN_SET );
            break;
        
        case RED_LED:
            HAL_GPIO_WritePin( RED_LED_PORT, RED_LED, GPIO_PIN_SET );
            break;
    }
}

/**
 * @brief Deactivate an LED
 * 
 * @param LED The LED you wish to deactivate
 */
void LED_deactivateLED( uint32_t LED )
{
    switch( LED )
    {
        case GREEN_LED:
            HAL_GPIO_WritePin( GREEN_LED_PORT, GREEN_LED, GPIO_PIN_RESET );
            break;
        
        case BLUE_LED:
            HAL_GPIO_WritePin( BLUE_LED_PORT, BLUE_LED, GPIO_PIN_RESET );
            break;
        
        case RED_LED:
            HAL_GPIO_WritePin( RED_LED_PORT, RED_LED, GPIO_PIN_RESET );
            break;
    }
}

/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/