/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    kSerial.h
  * @author  KitSprout
  * @date    12-Oct-2016
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __KSERIAL_H
#define __KSERIAL_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "algorithms\mathUnit.h"

/* Exported types --------------------------------------------------------------------------*/
typedef enum {
  KS_INT8 = 0,
  KS_INT16,
  KS_INT32,
  KS_INT64,
  KS_UINT8,
  KS_UINT16,
  KS_UINT32,
  KS_UINT64,
  KS_FLOAT32,
  KS_FLOAT64
} KSerial_TypeIndex;

typedef int8_t (*ptrSerial)(uint8_t*, uint16_t, uint32_t);

/* Exported constants ----------------------------------------------------------------------*/
/* Exported functions ----------------------------------------------------------------------*/  
void    kSerial_config( ptrSerial pSerial );
int8_t  kSerial_sendData( void *data, const uint8_t lens, const uint8_t type );

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/