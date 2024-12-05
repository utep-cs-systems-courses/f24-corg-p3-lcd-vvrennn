COMMON_OBJECTS	=
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include



CC		= msp430-elf-gcc
AS		= msp430-elf-as



all: fireworks.elf



fireworks.elf: ${COMMON_OBJECTS} main.c stateMachines.o wdInterruptHandler.o p2_interrupt_handler.o switches.o buzzer.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^



load: fireworks.elf
	msp430loader.sh project.elf



clean:
	rm -f *.o *.elf
