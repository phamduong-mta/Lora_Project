################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c 

OBJS += \
./Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.o 

C_DEPS += \
./Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/%.o Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/%.su: ../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/%.c Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I../Core/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32WLxx/Include -I../Drivers/CMSIS/Include -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_pingpong28.4/Drivers/BSP/STM32WLxx_Nucleo" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_pingpong28.4/Ultilities/conf" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_pingpong28.4/Ultilities/misc" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_pingpong28.4/Drivers/Radio" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Middlewares-2f-Third_Party-2f-FreeRTOS-2f-Source-2f-portable-2f-MemMang

clean-Middlewares-2f-Third_Party-2f-FreeRTOS-2f-Source-2f-portable-2f-MemMang:
	-$(RM) ./Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.d ./Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.o ./Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.su

.PHONY: clean-Middlewares-2f-Third_Party-2f-FreeRTOS-2f-Source-2f-portable-2f-MemMang
