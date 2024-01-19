################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CA.c \
../DC.c \
../US.c \
../main.c 

C_DEPS += \
./CA.d \
./DC.d \
./US.d \
./main.d 

OBJS += \
./CA.o \
./DC.o \
./US.o \
./main.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./CA.d ./CA.o ./DC.d ./DC.o ./US.d ./US.o ./main.d ./main.o

.PHONY: clean--2e-

