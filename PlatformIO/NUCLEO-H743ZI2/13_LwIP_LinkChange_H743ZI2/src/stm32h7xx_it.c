/*
# ##############################################################################
# File: stm32h7xx_it.c                                                         #
# Project: src                                                                 #
# Created Date: Tuesday, September 26th 2023, 1:37:17 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Thursday, October 5th 2023, 9:51:50 pm                        #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

#include "main.h"
#include "stm32h7xx_it.h"
#include "ethernetif.h"

extern ETH_HandleTypeDef heth;

void SysTick_Handler( void )
{
    HAL_IncTick( );   
}

void ETH_IRQHandler( void )
{
    HAL_ETH_IRQHandler( &heth );
}