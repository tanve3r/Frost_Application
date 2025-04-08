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
 *  File Name          : syssm
 *  Description        : Code for system state machine applications
 ******************************************************************************/


/******************************************************************************/
/* INCLUDES                                                                   */
/******************************************************************************/

#include "stdbool.h"
#include <stdio.h>
#include "esp_log.h"
#include "ir_switch.h"
#include "syssm.h"


/******************************************************************************/
/* PRIVATE DEFINITIONS                                                        */
/******************************************************************************/
typedef enum sysSM_States
{
	INIT = 0,
	IDLE,
	BOTTLE_PRESENT,
	REMINDER_DRINK,
	REMINDER_CLEAN,
	STANDBY
}sysSM_States;


/******************************************************************************/
/* PRIVATE TYPE DEFINITIONS                                                   */
/******************************************************************************/

const static char *TAG = "sysSM";


/******************************************************************************/
/* PRIVATE FUNCTION DECLARATIONS AND PRIVATE MACRO FUNCTION DEFINITIONS       */
/******************************************************************************/


/******************************************************************************/
/* EXTERN VARIABLE DEFINTIONS                                                 */
/******************************************************************************/

/******************************************************************************/
/* PRIVATE DATA DEFINTIONS                                                    */
/******************************************************************************/

/******************************************************************************/
/* PUBLIC FUNCTION DEFINITIONS                                                */
/******************************************************************************/
/**
 * @brief system state machine initialization function
 *
 */
void SysSm_Init(void)
{
  ESP_LOGI(TAG, "Hello from System \n");
}

/**
 * @brief system state machine process
 *
 */
void SysSm_Process (void)
{ 
	IRSwitch_State status = GetIRswitchStatus();
	ESP_LOGI(TAG, "IR:%d\n", status);
}
