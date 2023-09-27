################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.c \
../Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.c 

OBJS += \
./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.o \
./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.o 

C_DEPS += \
./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.d \
./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/LwIP/src/apps/altcp_tls/%.o Middlewares/Third_Party/LwIP/src/apps/altcp_tls/%.su Middlewares/Third_Party/LwIP/src/apps/altcp_tls/%.cyclo: ../Middlewares/Third_Party/LwIP/src/apps/altcp_tls/%.c Middlewares/Third_Party/LwIP/src/apps/altcp_tls/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -c -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Core/Inc" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/CMSIS/Include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/LWIP/App" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/LWIP/Target" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Middlewares/Third_Party/LwIP/system" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/Users/zafee/Documents/GitHub/Zafeer_EmbeddedEthernet/STM32CUBEIDE/00_BaseProject/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-Third_Party-2f-LwIP-2f-src-2f-apps-2f-altcp_tls

clean-Middlewares-2f-Third_Party-2f-LwIP-2f-src-2f-apps-2f-altcp_tls:
	-$(RM) ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.cyclo ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.d ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.o ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls.su ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.cyclo ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.d ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.o ./Middlewares/Third_Party/LwIP/src/apps/altcp_tls/altcp_tls_mbedtls_mem.su

.PHONY: clean-Middlewares-2f-Third_Party-2f-LwIP-2f-src-2f-apps-2f-altcp_tls

