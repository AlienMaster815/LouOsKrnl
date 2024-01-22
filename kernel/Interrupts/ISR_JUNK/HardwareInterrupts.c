#include <LouAPI.h>

void InteruptCordinationManager(uint8_t Interrupt_Num);

void ISR32(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 32\n");
	asm volatile("hlt");
}

void ISR33(struct interrupt_frame* frame) {
	UnSetInterruptFlags();
	InteruptCordinationManager(33);
	PIC_sendEOI(1);
	SetInterruptFlags();
}
void ISR34(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 34\n");
	asm volatile("hlt");
}
void ISR35(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 35\n");
	asm volatile("hlt");
}
 void ISR36(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 36\n");
	asm volatile("hlt");
}
 void ISR37(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 37\n");
	asm volatile("hlt");
}
 void ISR38(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 38\n");
	asm volatile("hlt");
}
 void ISR39(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 39\n");
	asm volatile("hlt");
}
 void ISR40(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 40\n");
	asm volatile("hlt");
}
 void ISR41(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 41\n");
	asm volatile("hlt");
}
 void ISR42(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 42\n");
	asm volatile("hlt");
}
 void ISR43(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 43\n");
	asm volatile("hlt");
}
 void ISR44(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 44\n");
	asm volatile("hlt");
}
 void ISR45(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 45\n");
	asm volatile("hlt");
}
 void ISR46(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 46\n");
	asm volatile("hlt");
}
 void ISR47(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 47\n");
	asm volatile("hlt");
}