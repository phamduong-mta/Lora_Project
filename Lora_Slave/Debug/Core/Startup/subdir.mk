################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32wl55jcix.s 

OBJS += \
./Core/Startup/startup_stm32wl55jcix.o 

S_DEPS += \
./Core/Startup/startup_stm32wl55jcix.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Slave/Drivers/BSP/STM32WLxx_Nucleo" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Slave/Ultilities/conf" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Slave/Ultilities/misc" -I"D:/WORKING/STM32/Lora/en.stm32cubewl-v1-3-0/STM32Cube_FW_WL_V1.3.0/Projects/NUCLEO-WL55JC/Applications/SubGHz_Phy/Lora_Master_Slave.06.23.V3/Lora_Master_Slave/Lora_Master_Slave/Lora_Master_Slave/Lora_Slave/Drivers/Radio" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32wl55jcix.d ./Core/Startup/startup_stm32wl55jcix.o

.PHONY: clean-Core-2f-Startup

