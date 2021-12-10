################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../HAL/ \
../HAL/Motor_Driver \
../HAL/servo \
../HAL/Ultra_Sonic \
../HAL/Switch \
../MCAL/ \
../MCAL/Dio/ \
../MCAL/Ext_Interrupts/ \
../MCAL/Gpt/ \
../MCAL/Gpt/config/ \
../MCAL/Gpt/static/ \
../MCAL/Pwm/ \
../MCAL/Pwm/config/ \
../MCAL/Pwm/static/ \
../Util/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../HAL/Motor_Driver/motor_driver.c \
../HAL/servo/servo.c \
../HAL/Switch/Sw.c \
../HAL/Ultra_Sonic/Ultrasonic.c \
../main.c \
../MCAL/Dio/Dio.c \
../MCAL/Ext_Interrupts/Ext_Interrupts.c \
../MCAL/Gpt/config/Gpt_Lcfg.c \
../MCAL/Gpt/static/Gpt.c \
../MCAL/Pwm/config/Pwm_lcfg.c \
../MCAL/Pwm/static/Pwm.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
HAL/Motor_Driver/motor_driver.o \
HAL/servo/servo.o \
HAL/Switch/Sw.o \
HAL/Ultra_Sonic/Ultrasonic.o \
main.o \
MCAL/Dio/Dio.o \
MCAL/Ext_Interrupts/Ext_Interrupts.o \
MCAL/Gpt/config/Gpt_Lcfg.o \
MCAL/Gpt/static/Gpt.o \
MCAL/Pwm/config/Pwm_lcfg.o \
MCAL/Pwm/static/Pwm.o

OBJS_AS_ARGS +=  \
HAL/Motor_Driver/motor_driver.o \
HAL/servo/servo.o \
HAL/Switch/Sw.o \
HAL/Ultra_Sonic/Ultrasonic.o \
main.o \
MCAL/Dio/Dio.o \
MCAL/Ext_Interrupts/Ext_Interrupts.o \
MCAL/Gpt/config/Gpt_Lcfg.o \
MCAL/Gpt/static/Gpt.o \
MCAL/Pwm/config/Pwm_lcfg.o \
MCAL/Pwm/static/Pwm.o

C_DEPS +=  \
HAL/Motor_Driver/motor_driver.d \
HAL/servo/servo.d \
HAL/Switch/Sw.d \
HAL/Ultra_Sonic/Ultrasonic.d \
main.d \
MCAL/Dio/Dio.d \
MCAL/Ext_Interrupts/Ext_Interrupts.d \
MCAL/Gpt/config/Gpt_Lcfg.d \
MCAL/Gpt/static/Gpt.d \
MCAL/Pwm/config/Pwm_lcfg.d \
MCAL/Pwm/static/Pwm.d

C_DEPS_AS_ARGS +=  \
HAL/Motor_Driver/motor_driver.d \
HAL/servo/servo.d \
HAL/Switch/Sw.d \
HAL/Ultra_Sonic/Ultrasonic.d \
main.d \
MCAL/Dio/Dio.d \
MCAL/Ext_Interrupts/Ext_Interrupts.d \
MCAL/Gpt/config/Gpt_Lcfg.d \
MCAL/Gpt/static/Gpt.d \
MCAL/Pwm/config/Pwm_lcfg.d \
MCAL/Pwm/static/Pwm.d

OUTPUT_FILE_PATH +=iDrive.elf

OUTPUT_FILE_PATH_AS_ARGS +=iDrive.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
HAL/Motor_Driver/motor_driver.o: ../HAL/Motor_Driver/motor_driver.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HAL/servo/servo.o: ../HAL/servo/servo.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HAL/Switch/Sw.o: ../HAL/Switch/Sw.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HAL/Ultra_Sonic/Ultrasonic.o: ../HAL/Ultra_Sonic/Ultrasonic.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Dio/Dio.o: ../MCAL/Dio/Dio.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Ext_Interrupts/Ext_Interrupts.o: ../MCAL/Ext_Interrupts/Ext_Interrupts.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Gpt/config/Gpt_Lcfg.o: ../MCAL/Gpt/config/Gpt_Lcfg.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Gpt/static/Gpt.o: ../MCAL/Gpt/static/Gpt.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Pwm/config/Pwm_lcfg.o: ../MCAL/Pwm/config/Pwm_lcfg.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/Pwm/static/Pwm.o: ../MCAL/Pwm/static/Pwm.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\include" -I"../HAL/DC_Motor" -I"../HAL/LCD" -I"../HAL/Led" -I"../HAL/Pot" -I"../HAL/TempSensor" -I"../MCAL/Adc/config" -I"../MCAL/Adc/static" -I"../MCAL/Dio" -I"../MCAL/Ext_Interrupts" -I"../MCAL/Gpt/config" -I"../MCAL/Gpt/static" -I"../MCAL/Pwm/config" -I"../MCAL/Pwm/static" -I"../Util" -I"../MCAL/Wdg/config" -I"../MCAL/Wdg/static" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Servo" -I"F:\embedded systems\avoiding car\avoiding car\HAL\Ultra_sonic" -I"../HAL/Ultra_Sonic" -I"../.." -I"../HAL/Switch" -I"../HAL/Motor_Driver"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="iDrive.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32a -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\gcc\dev\atmega32a"  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "iDrive.elf" "iDrive.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "iDrive.elf" "iDrive.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "iDrive.elf" > "iDrive.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "iDrive.elf" "iDrive.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "iDrive.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "iDrive.elf" "iDrive.a" "iDrive.hex" "iDrive.lss" "iDrive.eep" "iDrive.map" "iDrive.srec" "iDrive.usersignatures"
	