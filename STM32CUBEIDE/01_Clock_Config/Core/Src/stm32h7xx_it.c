/*
 * stm32h7xx_it.c
 *
 *  Created on: Sep 25, 2023
 *      Author: zafee
 */

#include "main.h"
#include "stm32h7xx_it.h"


void Systick_Handler( void )
{
	HAL_IncTick();
}
