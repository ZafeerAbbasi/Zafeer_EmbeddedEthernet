/*
# ##############################################################################
# File: main.c                                                                 #
# Project: src                                                                 #
# Created Date: Tuesday, September 26th 2023, 7:58:59 pm                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Saturday, September 30th 2023, 4:08:02 pm                     #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

/*##############################################################################################################################################*/
/*INCLUDES______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#include <stdint.h>
#include "main.h"
#include "usr00_led.h"
#include "usr01_uart.h"
#include "lwip.h"

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

uint32_t HCLKFreq, D2PCLK1Freq, D2PCLK2Freq, D1PCLK3Freq, D3PCLK4Freq, SYSCLKFreq;

/*##############################################################################################################################################*/
/*DEFINES_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*TYPEDEFS/STRUCTS/ENUMS________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*FUNCTIONS_____________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

int main(void)
{
    HAL_Init( );

	CLOCK_sysClockConfig( );

	LED_Init( );

	UART_usart3TXInit( );

	HCLKFreq = HAL_RCC_GetHCLKFreq( );
	D2PCLK1Freq = HAL_RCC_GetPCLK1Freq( );
	D2PCLK2Freq = HAL_RCC_GetPCLK2Freq( );
	D1PCLK3Freq = HAL_RCCEx_GetD3PCLK1Freq( );
	D3PCLK4Freq = HAL_RCCEx_GetD3PCLK1Freq( );
	SYSCLKFreq = HAL_RCC_GetSysClockFreq( );

	LED_activateLED( GREEN_LED );
	LED_activateLED( YELLOW_LED );
	LED_activateLED( RED_LED );


	while(1)
	{
		printf( "Test from USART3....\n\r" );
		HAL_Delay( 50 );
	}
}


/**
 * @brief System Clock Config
 * 
 */
void CLOCK_sysClockConfig( void )
{
	RCC_OscInitTypeDef	RCC_oscInitStruct = { 0 };
	RCC_ClkInitTypeDef	RCC_clkInitStruct = { 0 };

	/*Set Power supply to LDO Supply, is set by default but good practice to explicity set it*/
	HAL_PWREx_ConfigSupply( PWR_LDO_SUPPLY );

	/*Set Voltage Scale to 1, in order to set to 0, must be in 1 first*/
	__HAL_PWR_VOLTAGESCALING_CONFIG( PWR_REGULATOR_VOLTAGE_SCALE1 );

	/*Wait for VOSRDY to be set, to ensure that its complete and ready to continue
	0: Not ready, voltage level below VOS selected level
	1: Ready, voltage level at or above VOS selected level*/
	while( ! __HAL_PWR_GET_FLAG( PWR_FLAG_VOSRDY ) ) { }

	/*Enable SYSCFG in RCC to allow Clock Access*/
	__HAL_RCC_SYSCFG_CLK_ENABLE( );

	/*Active Overdrive*/
	__HAL_PWR_VOLTAGESCALING_CONFIG( PWR_REGULATOR_VOLTAGE_SCALE0 );

	/*Wait for VOSRDY to be set, to ensure that its complete and ready to continue
	0: Not ready, voltage level below VOS selected level
	1: Ready, voltage level at or above VOS selected level*/
	while( ! __HAL_PWR_GET_FLAG( PWR_FLAG_VOSRDY ) ) { }

	
	/*OSCILLATOR CONFIG----------------------------------------------------------------------------*/
	RCC_oscInitStruct.OscillatorType	= RCC_OSCILLATORTYPE_HSE;
	RCC_oscInitStruct.HSEState			= RCC_HSE_BYPASS;
	
	/*OSCILLATOR PLL CONFIG*/
	RCC_oscInitStruct.PLL.PLLState		= RCC_PLL_ON;
	RCC_oscInitStruct.PLL.PLLSource		= RCC_PLLSOURCE_HSE;
	RCC_oscInitStruct.PLL.PLLM			= 4;
	RCC_oscInitStruct.PLL.PLLN			= 480;
	RCC_oscInitStruct.PLL.PLLP			= 2;
	RCC_oscInitStruct.PLL.PLLR 			= 2;
	RCC_oscInitStruct.PLL.PLLQ			= 4;
	/*Clock input frequency, default is 00 = 1-2MHz, for us its HSE/PLLM = 2MHz, but just to be safe*/
	RCC_oscInitStruct.PLL.PLLRGE		= RCC_PLLCFGR_PLL1RGE_1;

	if( HAL_RCC_OscConfig( &RCC_oscInitStruct ) != HAL_OK )
	{
		ERROR_errorHandler( );
	}

	/*CLOCK CONFIG---------------------------------------------------------------------------------*/
	RCC_clkInitStruct.ClockType 		= RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_D1PCLK1 | \
										  RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2 | RCC_CLOCKTYPE_D3PCLK1;
	RCC_clkInitStruct.SYSCLKSource 		= RCC_SYSCLKSOURCE_PLLCLK;
	RCC_clkInitStruct.SYSCLKDivider		= RCC_SYSCLK_DIV1;
	RCC_clkInitStruct.AHBCLKDivider		= RCC_HCLK_DIV2;
	RCC_clkInitStruct.APB1CLKDivider	= RCC_APB1_DIV2;
	RCC_clkInitStruct.APB2CLKDivider	= RCC_APB2_DIV2;
	RCC_clkInitStruct.APB3CLKDivider	= RCC_APB3_DIV2;
	RCC_clkInitStruct.APB4CLKDivider	= RCC_APB4_DIV1;

	if( HAL_RCC_ClockConfig( &RCC_clkInitStruct, FLASH_ACR_LATENCY_4WS ) != HAL_OK )
	{
		ERROR_errorHandler( );
	}	
}




/**
 * @brief Error Handler
 * 
 */
void ERROR_errorHandler( void )
{
	while( 1 ) { }
}


/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/
