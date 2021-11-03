################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/2d\ array\ addition.c 

OBJS += \
./src/2d\ array\ addition.o 

C_DEPS += \
./src/2d\ array\ addition.d 


# Each subdirectory must supply rules for building sources it contributes
src/2d\ array\ addition.o: ../src/2d\ array\ addition.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/2d array addition.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


