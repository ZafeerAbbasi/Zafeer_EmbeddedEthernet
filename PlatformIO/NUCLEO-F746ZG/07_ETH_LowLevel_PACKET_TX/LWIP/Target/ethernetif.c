/*
# ##############################################################################
# File: ethernetif.c                                                           #
# Project: Target                                                              #
# Created Date: Tuesday, September 26th 2023, 2:23:01 am                       #
# Author: Zafeer Abbasi                                                        #
# ----------------------------------------------                               #
# Last Modified: Sunday, October 8th 2023, 12:30:45 am                         #
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
#include <string.h>

/*##############################################################################################################################################*/
/*FUNCTION DECLARATIONS_________________________________________________________________________________________________________________________*/
/*##############################################################################################################################################*/

static void ETH_LowLevelInit( struct netif *netif );
static err_t ETH_LowLevelTxOutput( struct netif *netif, struct pbuf *LWIPPackBuff );
static void ETH_ProcessError( void );


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

/**
 * @brief Low Level ETH Init
 * 
 * @param netif LWIP Network Interface Struct
 */
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

    /*Descriptor Init*/
    HAL_ETH_DMATxDescListInit( &heth, &DMATxDscrTab, &Tx_Buff[ 0 ][ 0 ], ETH_TXBUFNB );
    HAL_ETH_DMARxDescListInit( &heth, &DMARxDscrTab, &Rx_Buff[ 0 ][ 0 ], ETH_RXBUFNB );

    /*MAC Address*/
    netif->hwaddr_len = ETH_HWADDR_LEN;
    netif->hwaddr[ 0 ] = MACAddr[ 0 ];
    netif->hwaddr[ 1 ] = MACAddr[ 1 ];
    netif->hwaddr[ 2 ] = MACAddr[ 2 ];
    netif->hwaddr[ 3 ] = MACAddr[ 3 ];
    netif->hwaddr[ 4 ] = MACAddr[ 4 ];
    netif->hwaddr[ 5 ] = MACAddr[ 5 ];

    /*Set MTU ( Maximum Transfer Unit )*/
    netif->mtu = 1500;

    /*Enable broadcasting and ARP*/
    netif->flags |= NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP;
    
    /*Start MAC and DMA Transmission and reception*/
    HAL_ETH_Start( &heth );

    /*Enable Link Down interrupt*/
    HAL_ETH_ReadPHYRegister( &heth, PHY_ISFR, &regValue );
    regValue |= PHY_ISFR_INT4;
    HAL_ETH_WritePHYRegister( &heth, PHY_ISFR, regValue );
    HAL_ETH_ReadPHYRegister( &heth, PHY_ISFR, regValue );
}

/**
 * @brief Takes a packet from LwIP Stack, prepares and transmits data to Etherenet MAC Peripheral
 * and sends data over the wire using the MAC Peripheral over the Ethernet Interface
 * 
 * @param netif LWIP Network Interface Struct
 * @param p LWIP Packet Buffer
 * @return err_t 
 */
static err_t ETH_LowLevelTxOutput( struct netif *netif, struct pbuf *LWIPPackBuff )
{
    err_t errVal;
    struct pbuf *packBuffTmplte;
    __IO ETH_DMADescTypeDef *DMATxDesc;
    DMATxDesc = heth.TxDesc;
    uint8_t *bufferAddr = ( uint8_t * )( heth.TxDesc->Buffer1Addr );

    uint32_t frameLength        = 0;
    uint32_t bufferOffSet       = 0;
    uint32_t bytesLeftToCopy    = 0;
    uint32_t payLoadOffSet      = 0;

    /*Copy Frames from LWIP Packet Buffer to ETH Buffer*/
    for( packBuffTmplte = LWIPPackBuff; packBuffTmplte != NULL; packBuffTmplte = packBuffTmplte->next )  
    {
        /*Check if ETH Buffer is available*/
        if( ( DMATxDesc->Status & ETH_DMATXDESC_OWN ) != ( uint32_t )RESET )
        {
            /*Descriptor is in use and descriptor is owned by DMA engine */
            errVal = ERR_USE;
            ETH_ProcessError( );
        }

        bytesLeftToCopy = packBuffTmplte->len;
        payLoadOffSet = 0;

        /*Copy and update size variables when data length is larger than TX Buffer size*/
        while( ( bytesLeftToCopy + bufferOffSet ) > ETH_TX_BUF_SIZE )
        {
            /*Copy data to TX Buffer*/
            memcpy( ( uint8_t * )( bufferAddr + bufferOffSet ),
                    ( uint8_t * )( packBuffTmplte->payload + payLoadOffSet ),
                    ( ETH_TX_BUF_SIZE - bufferOffSet ) );
            
            /*Point to the next descriptor*/
            DMATxDesc = ( ETH_DMADescTypeDef * )( DMATxDesc->Buffer2NextDescAddr );

            /*Check if ETH Buffer is available*/
            if( ( DMATxDesc->Status & ETH_DMATXDESC_OWN ) != ( uint32_t )RESET )
            {
                /*Descriptor is in use and descriptor is owned by DMA engine */
                errVal = ERR_USE;
                ETH_ProcessError( );
            }

            /*Update buffer and variables*/
            bufferAddr      = ( uint8_t * )( DMATxDesc->Buffer1Addr );
            bytesLeftToCopy = bytesLeftToCopy - ( ETH_TX_BUF_SIZE - bufferOffSet );
            payLoadOffSet   = payLoadOffSet + ( ETH_TX_BUF_SIZE - bufferOffSet );
            frameLength     = frameLength + ( ETH_TX_BUF_SIZE - bufferOffSet );
            bufferOffSet    = 0;
        }

        /*Remaing bytes are less than size of ETH TX BUF SIZE, so copy rest of bytes*/
        memcpy( ( uint8_t * )( bufferAddr + bufferOffSet ),
                ( uint8_t * )( packBuffTmplte->payload + payLoadOffSet ),
                bytesLeftToCopy );
        bufferOffSet    = bufferOffSet + bytesLeftToCopy;
        frameLength     = frameLength + bytesLeftToCopy;
    }  

    /*Copying from LWIP Packet Buffer to ETH Descriptors is done*/
    /*Prep TX Descriptors and give it DMA which will Transmit it*/
    HAL_ETH_TransmitFrame( &heth, frameLength );
    errVal = ERR_OK;

    /*Check if Transmit UnderFlow Status ( TUS ) is set*/
    if( ( heth.Instance->DMASR & ETH_DMASR_TUS ) != ( uint32_t )RESET )
    {
        /*Clear Transmit UnderFlow Status*/
        /*From STM32F746ZG Ref Manual:
        Writing 1 to (unreserved) bits in ETH_DMASR register[16:0] clears them and writing 0 has no effect*/
        heth.Instance->DMASR = ETH_DMASR_TUS;

        /*Resume DMA Transmission*/
        heth.Instance->DMATPDR = 0;
    }

    return errVal;
}

static void ETH_ProcessError( void )
{
    
    /*What is an UnderFlow Error?
    In the context of Direct Memory Access (DMA) and Ethernet, an "underflow error" typically occurs 
    when the DMA controller is unable to read data from the memory fast enough to keep up with the 
    speed at which the Ethernet MAC (Media Access Control) is transmitting data. Essentially, the 
    transmit buffer "underflows" because it becomes empty before the DMA can refill it*/
    
    /*Check if Transmit UnderFlow Status ( TUS ) is set*/
    if( ( heth.Instance->DMASR & ETH_DMASR_TUS ) != ( uint32_t )RESET )
    {
        /*Clear Transmit UnderFlow Status*/
        /*From STM32F746ZG Ref Manual:
        Writing 1 to (unreserved) bits in ETH_DMASR register[16:0] clears them and writing 0 has no effect*/
        heth.Instance->DMASR = ETH_DMASR_TUS;

        /*Resume DMA Transmission*/
        heth.Instance->DMATPDR = 0;
    }
}