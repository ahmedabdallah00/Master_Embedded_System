#copyright : Ahmed Abdallah
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC=$(wldcard *.c)
OBJ=$(SRC: .c=.o)
As=$(wldcard *.s)
AsOBJ=$(SRC: .s=.o)

all: learn-in-depth.bin
	@echo "build is Done"
	
%.o: %.s
	$(CC)as.exe -g -mcpu=arm926ej-s $< -o $@
	
%.o: %.c	
	$(CC).exe -c $(CFLAGS) $(INCS)  $< -o $@

learn-in-depth.elf: linker_script.ld $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm -f *.o *.elf *.bin

clean:
	rm -f *.elf *.bin