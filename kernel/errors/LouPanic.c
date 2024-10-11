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

void VgaRgbModeFillBackgroundEx(uint8_t r,uint8_t g, uint8_t b, uint8_t a);


void LouPanicPrint(string Format){

}


void LouPanic(char* error_message,STATUS recoverable) {
	
	if (true == recoverable) {
		if(LOUSTATUS_GOOD == SilentPanic()) return;
	}

	//VgaRgbModeFillBackgroundEx(0,120,215,0);
	//PanicPrint(error_message);
    asm volatile("cli");
    asm volatile("hlt");
	while (1);
}
#endif

