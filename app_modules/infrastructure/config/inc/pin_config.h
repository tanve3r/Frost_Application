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


#define IR_SWITCH_GPIO            GPIO_NUM_33
#define I2S_BCLK_IO1        GPIO_NUM_27      // I2S bit clock io number
#define I2S_WS_IO1          GPIO_NUM_14      // I2S word select io number
#define I2S_DOUT_IO1        GPIO_NUM_26     // I2S data out io number
#define I2S_DIN_IO1         GPIO_NUM_19     // I2S data in io number

#define ON_BOARD_LED_GPIO         GPIO_NUM_2


#define  GPIO_PIN_RESET 0
#define  GPIO_PIN_SET   1

/******************************************************************************/
/* PUBLIC TYPE DEFINITIONS                                                    */
/******************************************************************************/


/******************************************************************************/
/* PUBLIC DATA DECLARATIONS                                                   */
/******************************************************************************/


/******************************************************************************/
/* PUBLIC FUNCTION DECLARATIONS                                               */
/******************************************************************************/



#ifdef __cplusplus
}
#endif

#endif // PIN_CONFIG_H
