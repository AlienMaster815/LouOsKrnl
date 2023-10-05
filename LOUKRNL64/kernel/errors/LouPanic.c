#include <kernel/kernel.h>
#include <stdlib.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <drivers/display/vga.h>
#include <stat.h>

#ifdef ARCH_I386_VGA_H
#define LOU_PANIC
_Noreturn void LouPanic(char* error_message,STATUS recoverable) {
	
	Set_Color(PRINT_COLOR_WHITE, PRINT_COLOR_BLUE);
	
	init_terminal();
	
	
	LouPrint("%x%y!!!SYSTEM CRASH!!!",27,7);

	LouPrint("%x%yReason For Crash:", 27, 8);
	LouPrint("%x%y%s", 27, 9, error_message);
	
	if (recoverable == GOOD)LouPrint("%x%ySystem Is Recoverable: Recover Y/N", 20, 11);
	if (recoverable == BAD)LouPrint("%x%ySystem Is NOT Recoverable: System Halted", 17, 11);
	
	asm volatile("hlt");
	while (1);
}
#endif

