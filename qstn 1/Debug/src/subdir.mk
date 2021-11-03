################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/qstn\ 1.c 

OBJS += \
./src/qstn\ 1.o 

C_DEPS += \
./src/qstn\ 1.d 


# Each subdirectory must supply rules for building sources it contributes
src/qstn\ 1.o: ../src/qstn\ 1.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/qstn 1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


