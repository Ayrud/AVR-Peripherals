################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SEVEN_SEG/SEVEN_SEG_program.c 

OBJS += \
./HAL/SEVEN_SEG/SEVEN_SEG_program.o 

C_DEPS += \
./HAL/SEVEN_SEG/SEVEN_SEG_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SEVEN_SEG/%.o: ../HAL/SEVEN_SEG/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\DELL\Desktop\Eclipse tasks\SSD\HAL\SEVEN_SEG" -I"C:\Users\DELL\Desktop\Eclipse tasks\SSD\MCAL\DIO" -I"C:\Users\DELL\Desktop\Eclipse tasks\SSD\LIB" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


