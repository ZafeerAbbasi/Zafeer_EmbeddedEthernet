/*
# ##############################################################################
# File: stm32h7xx_it.c                                                         #
# Project: src                                                                 #
# Created Date: Tuesday, September 26th 2023, 1:37:17 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Tuesday, September 26th 2023, 2:15:18 am                      #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */


#include "stm32h7xx_it.h"
#include "main.h"

void SysTick_Handler( void )
{
    HAL_IncTick( );   
}