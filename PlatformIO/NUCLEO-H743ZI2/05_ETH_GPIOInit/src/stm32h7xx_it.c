/*
# ##############################################################################
# File: stm32h7xx_it.c                                                         #
# Project: src                                                                 #
# Created Date: Tuesday, September 26th 2023, 1:37:17 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Wednesday, October 4th 2023, 12:06:30 am                      #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

extern ETH_HandleTypeDef heth;

#include "stm32h7xx_it.h"
#include "main.h"

void SysTick_Handler( void )
{
    HAL_IncTick( );   
}

void ETH_IRQHandler( void )
{
    HAL_ETH_IRQHandler( &heth );
}