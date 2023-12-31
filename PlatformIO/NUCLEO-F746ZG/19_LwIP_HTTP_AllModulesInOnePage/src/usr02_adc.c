/*
# ##############################################################################
# File: usr02_adc.c                                                            #
# Project: src                                                                 #
# Created Date: Saturday, September 30th 2023, 8:01:17 pm                      #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Friday, October 6th 2023, 6:35:40 pm                          #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */

/*##############################################################################################################################################*/
/*INCLUDES______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#include "usr02_adc.h"

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

/*ADC Handle Typedef*/
ADC_HandleTypeDef hADC1;

/*##############################################################################################################################################*/
/*DEFINES_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#define SENSOR_PIN		(1U<<4)
#define SENSOR_PORT		GPIOA

/*##############################################################################################################################################*/
/*TYPEDEFS/STRUCTS/ENUMS________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*FUNCTIONS_____________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

/**
 * @brief ADC Config for ADC12 INP3; ADC1/2 Channel 3 Input Positive Single Ended
 * 
 */
void ADC_ADC12INP3PA6Init( void )
{
	GPIO_InitTypeDef  GPIO_InitStruct = {0};
    ADC_ChannelConfTypeDef sConfig 	  = {0};

	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_ADC1_CLK_ENABLE();

	/*Set PA4 as analog pin*/
	GPIO_InitStruct.Pin  = SENSOR_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull = GPIO_NOPULL;

	HAL_GPIO_Init(SENSOR_PORT,&GPIO_InitStruct);


	/*Configure ADC parameters*/

	hADC1.Instance =  ADC1;
	hADC1.Init.ClockPrescaler =  ADC_CLOCK_SYNC_PCLK_DIV8;
	hADC1.Init.Resolution	  =  ADC_RESOLUTION_12B;
	hADC1.Init.ScanConvMode   =  ADC_SCAN_DISABLE;
	hADC1.Init.ContinuousConvMode	= DISABLE;
	hADC1.Init.DiscontinuousConvMode = DISABLE;
	hADC1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
	hADC1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
	hADC1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	hADC1.Init.NbrOfConversion = 1;
	hADC1.Init.DMAContinuousRequests = DISABLE;
	hADC1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;

	HAL_ADC_Init(&hADC1);

	sConfig.Channel = ADC_CHANNEL_4;
	sConfig.Rank    = ADC_REGULAR_RANK_1;
	sConfig.SamplingTime =  ADC_SAMPLETIME_480CYCLES;

	HAL_ADC_ConfigChannel(&hADC1,&sConfig);
}

/**
 * @brief Convert ADC Reading to Voltage
 * 
 * @param ADCValue ADC Reading, 0 - 4096 
 * @return float Voltage
 */
float ADC_ADCToVoltage( int ADCValue )
{
    float maxADCValue = 4095.0;
    return ( ADCValue / maxADCValue ) * 3.3;
}



/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/