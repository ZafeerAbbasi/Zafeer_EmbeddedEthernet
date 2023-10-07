/*
# ##############################################################################
# File: main.c                                                                 #
# Project: src                                                                 #
# Created Date: Tuesday, September 26th 2023, 7:58:59 pm                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Tuesday, October 3rd 2023, 9:57:03 pm                         #
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
#include "usr02_adc.h"
#include "lwip.h"

/*Add FloatingPoint Support*/
asm(".global _printf_float");

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

uint32_t HCLKFreq, D2PCLK1Freq, D2PCLK2Freq, D1PCLK3Freq, D3PCLK4Freq, SYSCLKFreq, PLL2PFreq;
uint32_t sensorVal;

/*##############################################################################################################################################*/
/*DEFINES_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/




/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

extern ADC_HandleTypeDef hADC1;


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

	ADC_ADC12INP3PA6Init( );

	HCLKFreq = HAL_RCC_GetHCLKFreq( );
	D2PCLK1Freq = HAL_RCC_GetPCLK1Freq( );
	D2PCLK2Freq = HAL_RCC_GetPCLK2Freq( );
	D1PCLK3Freq = HAL_RCCEx_GetD3PCLK1Freq( );
	D3PCLK4Freq = HAL_RCCEx_GetD3PCLK1Freq( );
	SYSCLKFreq = HAL_RCC_GetSysClockFreq( );
	PLL2_ClocksTypeDef test;
	HAL_RCCEx_GetPLL2ClockFreq( &test );
	PLL2PFreq = test.PLL2_P_Frequency;
	

	LED_activateLED( GREEN_LED );
	LED_activateLED( YELLOW_LED );
	LED_activateLED( RED_LED );
	

	while(1)
	{
		HAL_ADC_Start( &hADC1 );
		sensorVal = HAL_ADC_GetValue( &hADC1 );
		
		printf( "Sensor Value:	%.4fV	\n\r", ADC_ADCToVoltage( sensorVal ) );
		HAL_Delay( 10 );
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
	__HAL_RCC_SYSCFG_CLK_ENABLE( );

	/*Set Power supply to LDO Supply, is set by default but good practice to explicity set it*/
	HAL_PWREx_ConfigSupply( PWR_LDO_SUPPLY );

	/*Set Voltage Scale to 1, in order to set to 0, must be in 1 first*/
	__HAL_PWR_VOLTAGESCALING_CONFIG( PWR_REGULATOR_VOLTAGE_SCALE1 );

	/*Wait for VOSRDY to be set, to ensure that its complete and ready to continue
	0: Not ready, voltage level below VOS selected level
	1: Ready, voltage level at or above VOS selected level*/
	while( ! __HAL_PWR_GET_FLAG( PWR_FLAG_VOSRDY ) ) { }

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

	/*PERIPH CLOCK CONFIG-------------------------------------------------------------------------*/
	/*ADC CLOCK: PLL2 @ 50MHz*/
	RCC_PeriphCLKInitTypeDef RCC_PeriphClkInitStruct 	= { 0 };
	RCC_PeriphClkInitStruct.PeriphClockSelection 		= RCC_PERIPHCLK_ADC;
	RCC_PeriphClkInitStruct.PLL2.PLL2M 					= 2;
	RCC_PeriphClkInitStruct.PLL2.PLL2N 					= 50;
	RCC_PeriphClkInitStruct.PLL2.PLL2P					= 4; 
	RCC_PeriphClkInitStruct.AdcClockSelection			= RCC_ADCCLKSOURCE_PLL2;
	
	if( HAL_RCCEx_PeriphCLKConfig( &RCC_PeriphClkInitStruct ) != HAL_OK )
	{
		ERROR_errorHandler( );
	}

	__HAL_RCC_PLL2_ENABLE( );
	
}




/**
 * @brief Error Handler
 * 
 */
void ERROR_errorHandler( void )
{
	while( 1 ) { }
}

