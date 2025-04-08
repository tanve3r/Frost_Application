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
 *  File Name          : main.c
 *  Description        : Code for Frost main
 ******************************************************************************/

/******************************************************************************/
/* INCLUDES                                                                   */
/******************************************************************************/
#include "ir_switch.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "syssm.h"
#include <inttypes.h>
#include <stdio.h>

/******************************************************************************/
/* PRIVATE FUNCTION DECLARATIONS AND PRIVATE MACRO FUNCTION DEFINITIONS       */
/******************************************************************************/
void SysSm_task(void *param);

/**
 * @brief main function
 */
void app_main(void) {
  IR_Switch_Init();
  SysSm_Init();

  // create task for the modules
  xTaskCreate(SysSm_task, "syssmTask", 2048, NULL, 4, NULL);
}

/******************************************************************************/
/* PRIVATE FUNCTION DEFINITIONS                                               */
/******************************************************************************/

/**
 * @brief SysSm task
 * @param param
 */
void SysSm_task(void *param) {
  while (1) {
    SysSm_Process();
    vTaskDelay(10 / portTICK_PERIOD_MS);
  }
  vTaskDelete(NULL);
}
