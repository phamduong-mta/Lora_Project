/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    aes.h
  * @brief   This file contains all the function prototypes for
  *          the aes.c file
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
#ifndef __AES_H__
#define __AES_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern CRYP_HandleTypeDef hcryp;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_AES_Init(void);

/* USER CODE BEGIN Prototypes */
void AES_start(void);
void print_array(uint8_t *array, uint32_t size);
void AES_Encrypt_MasterPacket(void);
void AES_decrypt_MasterPacket(void);
void AES_Encrypt(uint8_t *input_data, uint8_t *output_data, uint32_t data_size);
void AES_Decrypt(uint8_t *input_data, uint8_t *output_data, uint32_t data_size);
void Uart_Indicate_Reset();
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __AES_H__ */

