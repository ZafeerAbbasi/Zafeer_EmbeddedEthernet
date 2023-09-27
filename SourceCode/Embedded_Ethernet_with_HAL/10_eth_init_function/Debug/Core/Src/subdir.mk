################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/adc.c \
../Core/Src/leds.c \
../Core/Src/main.c \
../Core/Src/stm32f7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f7xx.c \
../Core/Src/uart.c 

OBJS += \
./Core/Src/adc.o \
./Core/Src/leds.o \
./Core/Src/main.o \
./Core/Src/stm32f7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f7xx.o \
./Core/Src/uart.o 

C_DEPS += \
./Core/Src/adc.d \
./Core/Src/leds.d \
./Core/Src/main.d \
./Core/Src/stm32f7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f7xx.d \
./Core/Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/adc.o: ../Core/Src/adc.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/adc.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/leds.o: ../Core/Src/leds.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/leds.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/main.o: ../Core/Src/main.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f7xx_it.o: ../Core/Src/stm32f7xx_it.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f7xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/syscalls.o: ../Core/Src/syscalls.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/sysmem.o: ../Core/Src/sysmem.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/system_stm32f7xx.o: ../Core/Src/system_stm32f7xx.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/system_stm32f7xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/uart.o: ../Core/Src/uart.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/10_eth_init_function/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/uart.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

