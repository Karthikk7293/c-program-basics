################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/for\ loop1.c 

OBJS += \
./src/for\ loop1.o 

C_DEPS += \
./src/for\ loop1.d 


# Each subdirectory must supply rules for building sources it contributes
src/for\ loop1.o: ../src/for\ loop1.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/for loop1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


