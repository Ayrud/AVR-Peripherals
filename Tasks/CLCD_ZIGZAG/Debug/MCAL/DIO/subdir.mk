################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO/DIO_program.c 

OBJS += \
./MCAL/DIO/DIO_program.o 

C_DEPS += \
./MCAL/DIO/DIO_program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/DIO/%.o: ../MCAL/DIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\DELL\Desktop\Eclipse tasks\mahmoud\HAL\SEVEN_SEG" -I"C:\Users\DELL\Desktop\Eclipse tasks\mahmoud\LIB" -I"C:\Users\DELL\Desktop\Eclipse tasks\mahmoud\MCAL\DIO" -I"C:\Users\DELL\Desktop\Eclipse tasks\mahmoud\HAL\LCD" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


