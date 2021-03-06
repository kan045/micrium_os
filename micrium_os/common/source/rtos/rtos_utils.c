/***************************************************************************//**
 * @file
 * @brief Common - Rtos Utilities
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>
#include  <common/include/rtos_version.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                           GLOBAL FUNCTIONS
 ********************************************************************************************************
 *******************************************************************************************************/

/****************************************************************************************************//**
 *                                               RTOS_Version()
 *
 * @brief    Obtain current version of Micrium OS.
 *
 * @return   Version number of Micrium OS (Vx.yy.zz) multiplied by 10000.
 *******************************************************************************************************/
CPU_INT32U RTOS_Version(void)
{
  return (RTOS_VERSION);
}
