#@copyright : Selim

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2 -mthumb
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=learn-in-depth_cortex_m3

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	@echo "BUILD IS DONE!"

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(AsOBJ) $(OBJ) -o $@

clean_all: 
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
