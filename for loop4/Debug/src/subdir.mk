################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/for\ loop4.c 

OBJS += \
./src/for\ loop4.o 

C_DEPS += \
./src/for\ loop4.d 


# Each subdirectory must supply rules for building sources it contributes
src/for\ loop4.o: ../src/for\ loop4.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/for loop4.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


