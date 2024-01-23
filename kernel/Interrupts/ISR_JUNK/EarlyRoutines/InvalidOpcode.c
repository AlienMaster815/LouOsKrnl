#include <LouAPI.h>


#include <stdio.h>

unsigned long long get_rip_value() {
	unsigned long long rip_value;
	asm volatile("movq (%%rip), %0" : "=r"(rip_value));
	return rip_value;
}

void InvalidOpcode() {
	UnSetInterruptFlags();
	// Later We will Log the system
	//LouPanic("Invalid Opcode", GOOD);
	LouPrint(" Bad Opcode At: %d", get_rip_value());
	asm("hlt");
	SetInterruptFlags();
}