################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Third_Party/LwIP/src/api/api_lib.c \
../Middlewares/Third_Party/LwIP/src/api/api_msg.c \
../Middlewares/Third_Party/LwIP/src/api/err.c \
../Middlewares/Third_Party/LwIP/src/api/if_api.c \
../Middlewares/Third_Party/LwIP/src/api/netbuf.c \
../Middlewares/Third_Party/LwIP/src/api/netdb.c \
../Middlewares/Third_Party/LwIP/src/api/netifapi.c \
../Middlewares/Third_Party/LwIP/src/api/sockets.c \
../Middlewares/Third_Party/LwIP/src/api/tcpip.c 

OBJS += \
./Middlewares/Third_Party/LwIP/src/api/api_lib.o \
./Middlewares/Third_Party/LwIP/src/api/api_msg.o \
./Middlewares/Third_Party/LwIP/src/api/err.o \
./Middlewares/Third_Party/LwIP/src/api/if_api.o \
./Middlewares/Third_Party/LwIP/src/api/netbuf.o \
./Middlewares/Third_Party/LwIP/src/api/netdb.o \
./Middlewares/Third_Party/LwIP/src/api/netifapi.o \
./Middlewares/Third_Party/LwIP/src/api/sockets.o \
./Middlewares/Third_Party/LwIP/src/api/tcpip.o 

C_DEPS += \
./Middlewares/Third_Party/LwIP/src/api/api_lib.d \
./Middlewares/Third_Party/LwIP/src/api/api_msg.d \
./Middlewares/Third_Party/LwIP/src/api/err.d \
./Middlewares/Third_Party/LwIP/src/api/if_api.d \
./Middlewares/Third_Party/LwIP/src/api/netbuf.d \
./Middlewares/Third_Party/LwIP/src/api/netdb.d \
./Middlewares/Third_Party/LwIP/src/api/netifapi.d \
./Middlewares/Third_Party/LwIP/src/api/sockets.d \
./Middlewares/Third_Party/LwIP/src/api/tcpip.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/LwIP/src/api/api_lib.o: ../Middlewares/Third_Party/LwIP/src/api/api_lib.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/api_lib.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/api_msg.o: ../Middlewares/Third_Party/LwIP/src/api/api_msg.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/api_msg.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/err.o: ../Middlewares/Third_Party/LwIP/src/api/err.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/err.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/if_api.o: ../Middlewares/Third_Party/LwIP/src/api/if_api.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/if_api.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/netbuf.o: ../Middlewares/Third_Party/LwIP/src/api/netbuf.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/netbuf.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/netdb.o: ../Middlewares/Third_Party/LwIP/src/api/netdb.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/netdb.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/netifapi.o: ../Middlewares/Third_Party/LwIP/src/api/netifapi.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/netifapi.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/sockets.o: ../Middlewares/Third_Party/LwIP/src/api/sockets.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/sockets.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/LwIP/src/api/tcpip.o: ../Middlewares/Third_Party/LwIP/src/api/tcpip.c Middlewares/Third_Party/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/apps" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system/arch" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/netif" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/prot" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include/lwip/priv" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/apps/http" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Core/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/App" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/LWIP/Target" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/Israel/Documents/Embedded_Ethernet_with_HAL/22_http_ssi_cgi_html_injection-MoreTags/Middlewares/Third_Party/LwIP/system" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/LwIP/src/api/tcpip.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

