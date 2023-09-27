################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.c \
../Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.c 

OBJS += \
./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.o \
./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.o 

C_DEPS += \
./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.d \
./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32H7xx_HAL_Driver/Src/Legacy/%.o Drivers/STM32H7xx_HAL_Driver/Src/Legacy/%.su Drivers/STM32H7xx_HAL_Driver/Src/Legacy/%.cyclo: ../Drivers/STM32H7xx_HAL_Driver/Src/Legacy/%.c Drivers/STM32H7xx_HAL_Driver/Src/Legacy/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -c -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Core/Inc" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/CMSIS/Include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/LWIP/App" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/LWIP/Target" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/system" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32H7xx_HAL_Driver-2f-Src-2f-Legacy

clean-Drivers-2f-STM32H7xx_HAL_Driver-2f-Src-2f-Legacy:
	-$(RM) ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.cyclo ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.d ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.o ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth.su ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.cyclo ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.d ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.o ./Drivers/STM32H7xx_HAL_Driver/Src/Legacy/stm32h7xx_hal_eth_ex.su

.PHONY: clean-Drivers-2f-STM32H7xx_HAL_Driver-2f-Src-2f-Legacy

