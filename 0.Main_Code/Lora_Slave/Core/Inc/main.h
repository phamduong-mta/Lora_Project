/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wlxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include <stdio.h>
#include "radio_driver.h"
#include "stm32wlxx_nucleo.h"
#include "subghz.h"
#include "usart.h"
#include "gpio.h"
#include "dma.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_9
#define LED2_GPIO_Port GPIOB
#define FE_CTRL3_Pin GPIO_PIN_3
#define FE_CTRL3_GPIO_Port GPIOC
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOA
#define B1_EXTI_IRQn EXTI0_IRQn
#define FE_CTRL2_Pin GPIO_PIN_5
#define FE_CTRL2_GPIO_Port GPIOC
#define B1C1_Pin GPIO_PIN_1
#define B1C1_GPIO_Port GPIOC
#define B1C1_EXTI_IRQn EXTI1_IRQn
#define FE_CTRL1_Pin GPIO_PIN_4
#define FE_CTRL1_GPIO_Port GPIOC
#define B3_Pin GPIO_PIN_6
#define B3_GPIO_Port GPIOC
#define B3_EXTI_IRQn EXTI9_5_IRQn
#define LED3_Pin GPIO_PIN_11
#define LED3_GPIO_Port GPIOB
#define T_VCP_RX_Pin GPIO_PIN_3
#define T_VCP_RX_GPIO_Port GPIOA
#define T_VCP_RXA2_Pin GPIO_PIN_2
#define T_VCP_RXA2_GPIO_Port GPIOA
#define B10_Pin GPIO_PIN_10
#define B10_GPIO_Port GPIOB
#define B10_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

#define RX_SIZE 255

#define NODE_ID "Node1,"
#define NO_LOAD "Slave_NoLoad"
#define NODE_ID_SIZE 6
#define UART_BUFF_SIZE 255

#define FRE_CHANNEL_START 0
#define FRE_CHANNEL_END 7

#define RF_FREQUENCY0 433000000
#define RF_FREQUENCY1 443000000
#define RF_FREQUENCY2 453000000
#define RF_FREQUENCY3 463000000
#define RF_FREQUENCY4 473000000
#define RF_FREQUENCY5 483000000
#define RF_FREQUENCY6 493000000
#define RF_FREQUENCY7 503000000

#define BAUD_CHANNEL_START 0
#define BAUD_CHANNEL_END 6

#define BAUDRATE0 4800
#define BAUDRATE1 9600
#define BAUDRATE2 19200
#define BAUDRATE3 38400
#define BAUDRATE4 57600
#define BAUDRATE5 115200
#define BAUDRATE6 250000


#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOB

#define LEDD1_Pin GPIO_PIN_2
#define LEDD1_GPIO_Port GPIOC
#define LEDD2_Pin GPIO_PIN_9
#define LEDD2_GPIO_Port GPIOA
#define LEDD3_Pin GPIO_PIN_4
#define LEDD3_GPIO_Port GPIOA
#define LEDD4_Pin GPIO_PIN_7
#define LEDD4_GPIO_Port GPIOA
#define LEDD5_Pin GPIO_PIN_6
#define LEDD5_GPIO_Port GPIOA
#define LEDD6_Pin GPIO_PIN_6
#define LEDD6_GPIO_Port GPIOA
#define LEDD7_Pin GPIO_PIN_11
#define LEDD7_GPIO_Port GPIOA
#define LEDD8_Pin GPIO_PIN_12
#define LEDD8_GPIO_Port GPIOA

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
