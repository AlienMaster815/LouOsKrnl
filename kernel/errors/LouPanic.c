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

void LouPanic(char* error_message,STATUS recoverable) {
	
	if (true == recoverable) {
		if(LOUSTATUS_GOOD == SilentPanic()) return;
	}

	Set_Color(PRINT_COLOR_WHITE, PRINT_COLOR_BLUE);
	
	init_terminal();
	
	
	LouPrint("%x%y!!!SYSTEM CRASH!!!",27,7);

	LouPrint("%x%yReason For Crash:", 27, 8);
	LouPrint("%x%y%s", 27, 9, error_message);
	
	LouPrint("%x%ySystem Is NOT Recoverable: System Halted", 17, 11);
	
    asm volatile("cli");
    asm volatile("hlt");
	while (1);
}
#endif

