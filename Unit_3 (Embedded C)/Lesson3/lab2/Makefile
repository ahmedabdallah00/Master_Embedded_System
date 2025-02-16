#copyright : Ahmed Abdallah
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -gdwarf-2
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=learn-in-depth

all: $(Project_name).bin
	@echo "build is Done"
	
%.o: %.s
	$(CC)as.exe -g -mcpu=arm926ej-s $< -o $@
	
%.o: %.c
	$(CC)gcc.exe $(CFLAGS) -c $(INCS) $< -o $@

learn-in-depth.elf: linker_script.ld $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

learn-in-depth.bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm -f *.o *.elf *.bin

clean:
	rm -f *.elf *.bin