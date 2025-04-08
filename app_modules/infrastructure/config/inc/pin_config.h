/*******************************************************************************
 *  Copyright (c) 2025 Bangalore,
 *
 *  All rights reserved. This program and the accompanying materials
 *  are protected by international copyright laws.
 *  Please contact copyright holder for licensing information.
 *
 *
 *  @author Tanveer
 *
 *******************************************************************************
 *  PROJECT              FROST
 *  File Name          : Pin configuration file
 *  Description        : Code for pin configuration
 ******************************************************************************/

#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/* INCLUDES                                                                   */
/******************************************************************************/
#include <assert.h>
#include "stdint.h"
#include "driver/gpio.h"
#include "hal/gpio_hal.h"

/******************************************************************************/
/* PUBLIC DEFINITIONS                                                         */
/******************************************************************************/


#define IR_SWITCH_GPIO            GPIO_NUM_8


#define  GPIO_PIN_RESET 0
#define  GPIO_PIN_SET   1

/******************************************************************************/
/* PUBLIC TYPE DEFINITIONS                                                    */
/******************************************************************************/


/******************************************************************************/
/* PUBLIC DATA DECLARATIONS                                                   */
/******************************************************************************/

void PinConfig_Init(void);
/******************************************************************************/
/* PUBLIC FUNCTION DECLARATIONS                                               */
/******************************************************************************/



#ifdef __cplusplus
}
#endif

#endif // PIN_CONFIG_H
