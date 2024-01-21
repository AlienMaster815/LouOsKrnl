#include <LouAPI.h>

LOUSTATUS InteruptCordinationManager(uint8_t Interrupt_Num);


void ISR0(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 1\n");
	asm volatile("hlt");
}
void ISR1(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 1\n");
	asm volatile("hlt");
}
void ISR2(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 2\n");
	asm volatile("hlt");
}
void ISR3(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 3\n");
	asm volatile("hlt");
}
void ISR4(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 4\n");
	asm volatile("hlt");
}
void ISR5(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 5\n");
	asm volatile("hlt");
}
void ISR6(struct interrupt_frame* frame) {
	LOUSTATUS LouStat = InteruptCordinationManager(6);
	//PIC_sendEOI(1);
	SetInterruptFlags();
}
void ISR7(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 7\n");
	asm volatile("hlt");
}
void ISR8(struct interrupt_frame* frame) {
	LOUSTATUS LouStat = InteruptCordinationManager(8);
	asm volatile("hlt");
}
void ISR9(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 9\n");
	asm volatile("hlt");
}
void ISR10(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 10\n");
	asm volatile("hlt");
}
void ISR11(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 11\n");
	asm volatile("hlt");
}
void ISR12(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 12\n");
	asm volatile("hlt");
}
void ISR13(struct interrupt_frame* frame) {
	LOUSTATUS LouStat = InteruptCordinationManager(13);
	asm volatile("hlt");
}
void ISR14(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 14\n");
	asm volatile("hlt");
}
void ISR15(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 15\n");
	asm volatile("hlt");
}
void ISR16(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 16\n");
	asm volatile("hlt");
}
void ISR17(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 17\n");
	asm volatile("hlt");
}
void ISR18(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 18\n");
	asm volatile("hlt");
}
void ISR19(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 19\n");
	asm volatile("hlt");
}
void ISR20(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 20\n");
	asm volatile("hlt");
}
void ISR21(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 21\n");
	asm volatile("hlt");
}
void ISR22(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 22\n");
	asm volatile("hlt");
}
void ISR23(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 23\n");
	asm volatile("hlt");
}
void ISR24(struct interrupt_frame* frame){
	LouPrint("Interrupt Vector: 24\n");
	asm volatile("hlt");
}
void ISR25(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 25\n");
	asm volatile("hlt");
}
void ISR26(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 26\n");
	asm volatile("hlt");
}
void ISR27(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 27\n");
	asm volatile("hlt");
}
void ISR28(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 28\n");
	asm volatile("hlt");
}
void ISR29(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 29\n");
	asm volatile("hlt");
}
void ISR30(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 30\n");
	asm volatile("hlt");
}
void ISR31(struct interrupt_frame* frame) {
	LouPrint("Interrupt Vector: 31\n");
	asm volatile("hlt");
}