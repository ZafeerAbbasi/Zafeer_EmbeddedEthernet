/*
# ##############################################################################
# File: stm32h7xx_it.h                                                         #
# Project: include                                                             #
# Created Date: Tuesday, September 26th 2023, 1:36:54 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Friday, October 6th 2023, 5:28:06 pm                          #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

#ifndef INC_STM32F7XX_IT_H
#define INC_STM32F7XX_IT_H

#include "ethernetif.h"


void SysTick_Handler( void );
void ETH_IRQHandler( void );


#endif
