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
 *  File Name          : on board led
 *  Description        : Code for led
 ******************************************************************************/


/******************************************************************************/
/* INCLUDES                                                                   */
/******************************************************************************/

#include <stdio.h>
#include "esp_log.h"
#include "driver/gpio.h"
#include "led.h"
#include "pin_config.h"
#include "extended_services.h"

/******************************************************************************/
/* PRIVATE DEFINITIONS                                                        */
/******************************************************************************/

/******************************************************************************/
/* PRIVATE TYPE DEFINITIONS                                                   */
/******************************************************************************/

/******************************************************************************/
/* PRIVATE FUNCTION DECLARATIONS AND PRIVATE MACRO FUNCTION DEFINITIONS       */
/******************************************************************************/

/******************************************************************************/
/* EXTERN VARIABLE DEFINTIONS                                                 */
/******************************************************************************/

/******************************************************************************/
/* PRIVATE DATA DEFINTIONS                                                    */
/******************************************************************************/
//const static char *TAG = "Led";

static Srvc_SWTmrU32_t led_blink_timer;
static uint32_t ledtoggle = 0;

/******************************************************************************/
/* PUBLIC FUNCTION DEFINITIONS                                                */
/******************************************************************************/

/**
 * @brief led initialization function
 *
 */
void Led_Init(void)
{
  gpio_reset_pin(ON_BOARD_LED_GPIO);
  gpio_set_direction(ON_BOARD_LED_GPIO, GPIO_MODE_OUTPUT);
  gpio_set_level(ON_BOARD_LED_GPIO, 1);
  Srvc_StartSWTmrU32(&led_blink_timer);
}

/**
 * @brief Function to blink on board led
 * @param time_ms : time in ms
 *
 */
void Led_Blink(uint32_t time_ms)
{
	if(Srvc_TestSWTmrU32(&led_blink_timer) != false) // timer stopped
	{
		Srvc_StartSWTmrU32(&led_blink_timer);
	}
	else if (Srvc_DiffSWTmrU32(&led_blink_timer) > time_ms) // timer elapsed
	{
		if(ledtoggle == 1)
		{
			ledtoggle = 0;
		}
		else
		{
			ledtoggle = 1;
		}
		gpio_set_level(ON_BOARD_LED_GPIO, ledtoggle);

		Srvc_StartSWTmrU32(&led_blink_timer); // restart timer
	}
}

/**
 * @brief Function to switch on or off onboard led
 * @param LED_State : ON/off
 *
 */
void Led_Set(LED_State Ledstate)
{
	gpio_set_level(ON_BOARD_LED_GPIO, Ledstate);
}

/******************************************************************************/
/* PRIVATE FUNCTION DEFINITIONS                                               */
/******************************************************************************/

