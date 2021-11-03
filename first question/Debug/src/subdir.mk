################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/first\ question.c 

OBJS += \
./src/first\ question.o 

C_DEPS += \
./src/first\ question.d 


# Each subdirectory must supply rules for building sources it contributes
src/first\ question.o: ../src/first\ question.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/first question.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


