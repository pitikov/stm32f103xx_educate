/**************************************************************************//**
 * @file     <Device>.h
 * @brief    CMSIS-Core(M) Device Header File for Device <Device>
 *
 * @version  V1.0.0
 * @date     18. July 2023
 ******************************************************************************/
/*
 * Copyright (c) 2009-2023 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* ToDo: rename this file from Device.h to '<Device>.h according to your device name */

#ifndef STM32F103XX_H     /* ToDo: replace '<Device>' with your device name */
#define STM32F103XX_H 

#ifdef __cplusplus
extern "C" {
#endif


/* ========================================================================= */
/* ============           Interrupt Number Definition           ============ */
/* ========================================================================= */

typedef enum IRQn
{
/* ================     Cortex-M Core Exception Numbers     ================ */

/* ToDo: add Cortex exception numbers according the used Cortex-Core */
  Reset_IRQn             = -15,  /*  1 Reset Vector
                                       invoked on Power up and warm reset */
  NonMaskableInt_IRQn    = -14,  /*  2 Non maskable Interrupt
                                       cannot be stopped or preempted */
  HardFault_IRQn         = -13,  /*  3 Hard Fault
                                       all classes of Fault */
  MemoryManagement_IRQn  = -12,  /*  4 Memory Management
                                       MPU mismatch, including Access Violation and No Match */
  BusFault_IRQn          = -11,  /*  5 Bus Fault
                                       Pre-Fetch-, Memory Access, other address/memory Fault */
  UsageFault_IRQn        = -10,  /*  6 Usage Fault
                                       i.e. Undef Instruction, Illegal State Transition */
  
  SVCall_IRQn            =  -5,  /* 11 System Service Call via SVC instruction */
  DebugMonitor_IRQn      =  -4,  /* 12 Debug Monitor */
  PendSV_IRQn            =  -2,  /* 14 Pendable request for system service */
  SysTick_IRQn           =  -1,  /* 15 System Tick Timer */

/* ================        <Device> Interrupt Numbers       ================ */
/* ToDo: Add here your device specific interrupt numbers
         according the interrupt handlers defined in startup_Device.s
         eg.: Interrupt for Timer#1       TIM1_IRQHandler   ->   TIM1_IRQn */
    WWDG_IRQn               = 0,
  PVD_IRQn                = 1,
  TAMPER_IRQn             = 2,
  RTC_IRQn                = 3,
  FLASH_IRQn              = 4,
  RCC_IRQn                = 5,
  EXTI0_IRQn              = 6,
  EXTI1_IRQn              = 7,
  EXTI2_IRQn              = 8,
  EXTI3_IRQn              = 9,
  EXTI4_IRQn              = 10,
  DMA1_Channel1_IRQn      = 11,
  DMA1_Channel2_IRQn      = 12,
  DMA1_Channel3_IRQn      = 13,
  DMA1_Channel4_IRQn      = 14,
  DMA1_Channel5_IRQn      = 15,
  DMA1_Channel6_IRQn      = 16,
  DMA1_Channel7_IRQn      = 17,
  ADC1_2_IRQn             = 18,
  USB_HP_CAN1_TX_IRQn     = 19,
  USB_LP_CAN1_RX0_IRQn    = 20,
  CAN1_RX1_IRQn           = 21,
  CAN1_SCE_IRQn           = 22,
  EXTI9_5_IRQn            = 23,
  TIM1_BRK_IRQn           = 24,
  TIM1_UP_IRQn            = 25,
  TIM1_TRG_COM_IRQn       = 26,
  TIM1_CC_IRQn            = 27,
  TIM2_IRQn               = 28,
  TIM3_IRQn               = 29,
  TIM4_IRQn               = 30,
  I2C1_EV_IRQn            = 31,
  I2C1_ER_IRQn            = 32,
  I2C2_EV_IRQn            = 33,
  I2C2_ER_IRQn            = 34,
  SPI1_IRQn               = 35,
  SPI2_IRQn               = 36,
  USART1_IRQn             = 37,
  USART2_IRQn             = 38,
  USART3_IRQn             = 39,
  EXTI15_10_IRQn          = 40,
  RTC_Alarm_IRQn          = 41,
  USBWakeUp_IRQn          = 42
} IRQn_Type;


/* ========================================================================= */
/* ============      Processor and Core Peripheral Section      ============ */
/* ========================================================================= */

/* ================ Start of section using anonymous unions ================ */
#if   defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


/* --------  Configuration of Core Peripherals  ----------------------------------- */
/* ToDo: set the defines according your Device */
/* ToDo: define the correct core revision
         valid CMSIS core revision macro names are:
           __CM0_REV, __CM0PLUS_REV, __CM1_REV, __CM3_REV, __CM4_REV, __CM7_REV
           __CM23_REV, __CM33_REV, __CM35P_REV, __CM55_REV
           __SC000_REV, __SC300_REV */
#define __CM3_REV               0x0200U  /* Core Revision r2p1 */
/* ToDo: define the correct core features for the <Device> */
#define __Vendor_SysTickConfig  0U       /* Set to 1 if different SysTick Config is used */
#define __NVIC_PRIO_BITS        4U       /* Number of Bits used for Priority Levels */
#define __VTOR_PRESENT          1U       /* Set to 1 if VTOR is present */
#define __MPU_PRESENT           0U       /* Set to 1 if MPU is present */
#define __FPU_PRESENT           0U       /* Set to 1 if FPU is present */



/* ToDo: include the CMSIS core header file according your device.
         valid CMSIS core header files are:
           core_cm0.h, core_cm0plus.h, core_cm1.h, core_cm3.h, core_cm4.h, core_cm7.h
           core_cm23.h, core_cm33.h, core_cm35p.h, core_cm55.h
           core_sc000.h, core_sc300.h */
#include <core_cm3.h>                           /* Processor and core peripherals */
/* ToDo: include your system_<Device>.h file
         replace '<Device>' with your device name */
#include "system_stm32f103xx.h"                    /* System Header */



/* ========================================================================= */
/* ============       Device Specific Peripheral Section        ============ */
/* ========================================================================= */


/* ToDo: add here your device specific peripheral access structure typedefs
         including bit definitions for Pos/Msk macros
         following is an example for a timer */

/* ========================================================================= */
/* ============                       TMR                       ============ */
/* ========================================================================= */




/* --------  End of section using anonymous unions and disabling warnings  -------- */
#if   defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050))
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


/* ========================================================================= */
/* ============     Device Specific Peripheral Address Map      ============ */
/* ========================================================================= */


/* ToDo: add here your device peripherals base addresses
         following is an example for timer */

/* Peripheral and SRAM base address */
#define FLASH_BASE   (0x08000000UL)
#define SRAM_BASE    (0x20000000UL)
#define PERIPH_BASE  (0x40000000UL)
/* Peripheral memory map */
#define <DeviceAbbreviation>TIM0_BASE         (<DeviceAbbreviation>_PERIPH_BASE)          /* (Timer0    ) Base Address */
#define <DeviceAbbreviation>TIM1_BASE         (<DeviceAbbreviation>_PERIPH_BASE + 0x0800) /* (Timer1    ) Base Address */
#define <DeviceAbbreviation>TIM2_BASE         (<DeviceAbbreviation>_PERIPH_BASE + 0x1000) /* (Timer2    ) Base Address */


/* ========================================================================= */
/* ============             Peripheral declaration              ============ */
/* ========================================================================= */


/* ToDo: Add here your device peripherals pointer definitions
         following is an example for timer */

#define <DeviceAbbreviation>_TIM0        ((<DeviceAbbreviation>_TMR_TypeDef *) <DeviceAbbreviation>TIM0_BASE)
#define <DeviceAbbreviation>_TIM1        ((<DeviceAbbreviation>_TMR_TypeDef *) <DeviceAbbreviation>TIM0_BASE)
#define <DeviceAbbreviation>_TIM2        ((<DeviceAbbreviation>_TMR_TypeDef *) <DeviceAbbreviation>TIM0_BASE)

#ifdef __cplusplus
}
#endif

#endif  /* <Device>_H */
