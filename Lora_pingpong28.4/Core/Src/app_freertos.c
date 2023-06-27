/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : app_freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
extern uint8_t rxBuffer[RX_SIZE];
extern uint8_t size;
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
osThreadId LoraTaskHandle;
osThreadId GPIOTaskHandle;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartLoraTask(void const * argument);
void StartGPIOTask(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of LoraTask */
  osThreadDef(LoraTask, StartLoraTask, osPriorityNormal, 0, 512);
  LoraTaskHandle = osThreadCreate(osThread(LoraTask), NULL);

  /* definition and creation of GPIOTask */
  osThreadDef(GPIOTask, StartGPIOTask, osPriorityHigh, 0, 1536);
  GPIOTaskHandle = osThreadCreate(osThread(GPIOTask), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_StartLoraTask */
/**
  * @brief  Function implementing the LoraTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartLoraTask */
void StartLoraTask(void const * argument)
{
  /* USER CODE BEGIN StartLoraTask */
  /* Infinite loop */
	//SUBGHZ();
	while (1)
	  {
		  SUBGHZ();
		  //osDelay(1000);
		//BSP_LED_Toggle(LED_BLUE);
		osDelay(100);
	  }
//  for(;;)
//  {
//	SUBGHZ();
//    osDelay(1000);
//  }
  /* USER CODE END StartLoraTask */
}

/* USER CODE BEGIN Header_StartGPIOTask */
/**
* @brief Function implementing the GPIOTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartGPIOTask */
void StartGPIOTask(void const * argument)
{
  /* USER CODE BEGIN StartGPIOTask */
  /* Infinite loop */
	while (1)
		  {
			  //SUBGHZ();
			  //osDelay(1000);
			//printf("debug1\n");

		    AES_start();
		   // printf("debug2\n");
			BSP_LED_Toggle(LED_RED);
			osDelay(3000);
			//HAL_UART_Transmit(&huart2, rxBuffer, sizeof(rxBuffer), HAL_MAX_DELAY);
			//memset(rxBuffer,' ',sizeof(rxBuffer));
			//HAL_UART_Transmit(&huart2, (uint8_t *)"\r\n", 9, HAL_MAX_DELAY);
		  }
  /* USER CODE END StartGPIOTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
