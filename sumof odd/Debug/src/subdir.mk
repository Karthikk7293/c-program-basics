################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sumof\ odd.c 

OBJS += \
./src/sumof\ odd.o 

C_DEPS += \
./src/sumof\ odd.d 


# Each subdirectory must supply rules for building sources it contributes
src/sumof\ odd.o: ../src/sumof\ odd.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sumof odd.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


