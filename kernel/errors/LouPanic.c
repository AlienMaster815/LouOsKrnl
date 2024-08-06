#include <kernel/kernel.h>
#include <stdlib.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <drivers/display/vga.h>
#include <stat.h>

#ifdef ARCH_I386_VGA_H
#define LOU_PANIC

LOUSTATUS SilentPanic() {
	LOUSTATUS Status = 1;


	return Status;
}

void VgaRgbModeFillBackground(uint8_t r,uint8_t g, uint8_t b);

void LouPanic(char* error_message,STATUS recoverable) {
	
	if (true == recoverable) {
		if(LOUSTATUS_GOOD == SilentPanic()) return;
	}

	//VgaRgbModeFillBackground(0,120,215);
	LouPrint(error_message);
    asm volatile("cli");
    asm volatile("hlt");
	while (1);
}
#endif

