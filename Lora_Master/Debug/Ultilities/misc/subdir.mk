################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Ultilities/misc/stm32_mem.c 

OBJS += \
./Ultilities/misc/stm32_mem.o 

C_DEPS += \
./Ultilities/misc/stm32_mem.d 


# Each subdirectory must supply rules for building sources it contributes
Ultilities/misc/%.o Ultilities/misc/%.su: ../Ultilities/misc/%.c Ultilities/misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I../Core/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32WLxx/Include -I../Drivers/CMSIS/Include -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Master/Drivers/BSP/STM32WLxx_Nucleo" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Master/Ultilities/conf" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Master/Ultilities/misc" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Master/Drivers/Radio" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Ultilities-2f-misc

clean-Ultilities-2f-misc:
	-$(RM) ./Ultilities/misc/stm32_mem.d ./Ultilities/misc/stm32_mem.o ./Ultilities/misc/stm32_mem.su

.PHONY: clean-Ultilities-2f-misc

