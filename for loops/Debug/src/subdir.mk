################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/for\ loops.c 

OBJS += \
./src/for\ loops.o 

C_DEPS += \
./src/for\ loops.d 


# Each subdirectory must supply rules for building sources it contributes
src/for\ loops.o: ../src/for\ loops.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/for loops.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


