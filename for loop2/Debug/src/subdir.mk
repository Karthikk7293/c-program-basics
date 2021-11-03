################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/for\ loop2.c 

OBJS += \
./src/for\ loop2.o 

C_DEPS += \
./src/for\ loop2.d 


# Each subdirectory must supply rules for building sources it contributes
src/for\ loop2.o: ../src/for\ loop2.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/for loop2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


