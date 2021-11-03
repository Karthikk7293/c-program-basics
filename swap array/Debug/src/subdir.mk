################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/swap\ array.c 

OBJS += \
./src/swap\ array.o 

C_DEPS += \
./src/swap\ array.d 


# Each subdirectory must supply rules for building sources it contributes
src/swap\ array.o: ../src/swap\ array.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/swap array.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


