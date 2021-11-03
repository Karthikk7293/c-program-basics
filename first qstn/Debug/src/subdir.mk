################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/first\ qstn.c 

OBJS += \
./src/first\ qstn.o 

C_DEPS += \
./src/first\ qstn.d 


# Each subdirectory must supply rules for building sources it contributes
src/first\ qstn.o: ../src/first\ qstn.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/first qstn.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


