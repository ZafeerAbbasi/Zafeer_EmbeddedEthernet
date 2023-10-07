/*
# ##############################################################################
# File: ethernetif.c                                                           #
# Project: Target                                                              #
# Created Date: Tuesday, September 26th 2023, 2:23:01 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Saturday, October 7th 2023, 2:57:01 am                        #
# Modified By: Zafeer Abbasi                                                   #
# ----------------------------------------------                               #
# Copyright (c) 2023 Zafeer.A                                                  #
# ----------------------------------------------                               #
# HISTORY:                                                                     #
 */


/*##############################################################################################################################################*/
/*INCLUDES______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

#include "ethernetif.h"

#include "lwip/opt.h"
#include "lwip/mem.h"
#include "lwip/timeouts.h"
#include "lwip/ethip6.h"
#include "netif/etharp.h" 
#include "netif/ethernet.h"
#include "lwip/memp.h"

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*GLOBALS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

__ALIGN_BEGIN  ETH_DMADescTypeDef DMARxDscrTab[ETH_RXBUFNB]  __ALIGN_END;
__ALIGN_BEGIN  ETH_DMADescTypeDef DMATxDscrTab[ETH_TXBUFNB]  __ALIGN_END;
__ALIGN_BEGIN  uint8_t Rx_Buff[ETH_RXBUFNB][ETH_RX_BUF_SIZE] __ALIGN_END;
__ALIGN_BEGIN  uint8_t Tx_Buff[ETH_TXBUFNB][ETH_TX_BUF_SIZE] __ALIGN_END;

/*##############################################################################################################################################*/
/*DEFINES_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*EXTERNS_______________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

extern ETH_HandleTypeDef heth;

/*##############################################################################################################################################*/
/*TYPEDEFS/STRUCTS/ENUMS________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/



/*##############################################################################################################################################*/
/*FUNCTIONS_____________________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

/**
 * @brief Init the low level hardware : GPIO, CLOCK, NVIC.
 * 
 * @param heth Pointer to Eth Handle Typedef
 */
void HAL_ETH_MspInit(ETH_HandleTypeDef *heth)
{
    GPIO_InitTypeDef    GPIO_initStruct = { 0 };

    if( heth->Instance == ETH )
    {
        /*ETH GPIO CONFIGURATION
        PA1--------------> ETH_RMII_REF_CLK
        PA2--------------> ETH_RMII_MDIO
        PA7--------------> ETH_RMII_CRS_DV
        PB13-------------> ETH_RMII_TXD1
        PC1--------------> ETH_RMII_MDC 
        PC4--------------> ETH_RMII_RXD0
        PC5--------------> ETH_RMII_RXD1
        PG11-------------> ETH_RMII_TX_EN
        PG13-------------> ETH_RMII_TXD0
        */

       /*Enable all clocks*/
       __HAL_RCC_GPIOA_CLK_ENABLE( );
       __HAL_RCC_GPIOB_CLK_ENABLE( );
       __HAL_RCC_GPIOC_CLK_ENABLE( );
       __HAL_RCC_GPIOG_CLK_ENABLE( );
       __HAL_RCC_ETH_CLK_ENABLE( );

       /*GPIOA*/
       GPIO_initStruct.Pin = GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_7;
       GPIO_initStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
       GPIO_initStruct.Alternate = GPIO_AF11_ETH;
       HAL_GPIO_Init( GPIOA, &GPIO_initStruct );

       /*GPIOB*/
       GPIO_initStruct.Pin = GPIO_PIN_13;
       GPIO_initStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
       GPIO_initStruct.Alternate = GPIO_AF11_ETH;
       HAL_GPIO_Init( GPIOB, &GPIO_initStruct );

       /*GPIOC*/
       GPIO_initStruct.Pin = GPIO_PIN_1 | GPIO_PIN_4 | GPIO_PIN_5;
       GPIO_initStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
       GPIO_initStruct.Alternate = GPIO_AF11_ETH;
       HAL_GPIO_Init( GPIOC, &GPIO_initStruct );

       /*GPIOG*/
       GPIO_initStruct.Pin = GPIO_PIN_11 | GPIO_PIN_13;
       GPIO_initStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
       GPIO_initStruct.Alternate = GPIO_AF11_ETH;
       HAL_GPIO_Init( GPIOG, &GPIO_initStruct );

       /*NVIC ( Nested Vector Interrupt Controller ) == Interrupt Settings*/
       HAL_NVIC_SetPriority( ETH_IRQn, 0, 0 );
       HAL_NVIC_EnableIRQ( ETH_IRQn );
    }
}


static void ETH_LowLevelInit( struct netif *netif )
{
    uint32_t regValue = 0;
    HAL_StatusTypeDef halETHInitStatus;
    //6 elements x 8 bits per element = 40bits == MAC Address
    uint8_t MACAddr[ 6 ] = {
        0x00,
        0xAB,
        0xCD,
        0x00,
        0x00,
        0x00,
    };

    /*Eth Handle Config*/
    heth.Instance               = ETH;
    heth.Init.MACAddr           = MACAddr;
    heth.Init.AutoNegotiation   = ETH_AUTONEGOTIATION_ENABLE;
    heth.Init.Speed             = ETH_SPEED_100M;
    heth.Init.DuplexMode        = ETH_MODE_FULLDUPLEX;
    heth.Init.PhyAddress        = LAN8742A_PHY_ADDRESS;
    heth.Init.MACAddr           = MACAddr;
    heth.Init.RxMode            = ETH_RXPOLLING_MODE;
    heth.Init.ChecksumMode      = ETH_CHECKSUM_BY_HARDWARE;
    heth.Init.MediaInterface    = ETH_MEDIA_INTERFACE_RMII;
    
    halETHInitStatus = HAL_ETH_Init( &heth );

    if( halETHInitStatus == HAL_OK )
    {
        netif->flags |= NETIF_FLAG_LINK_UP;
    }

    HAL_ETH_ReadPHYRegister
    
    
}