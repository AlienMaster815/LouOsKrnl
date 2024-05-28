#include <LouAPI.h>


void(*InterruptHandler[256])();

void local_apic_send_eoi();
bool GetAPICStatus();

void InterruptWrapper(uint64_t Handler, uint8_t InterruptNumber) {
	RegisterInterruptHandler((void(*)())Handler, InterruptNumber);
}

void RegisterInterruptHandler(void(*Handler),uint8_t InterruptNumber) {
	
	InterruptHandler[InterruptNumber] = Handler;

}

void UnRegisterInterruptHandler(uint8_t InterruptNumber) {
	InterruptHandler[InterruptNumber] = NULL;
}

void InterruptRouter(uint8_t Interrupt) {

	

	if (NULL != InterruptHandler[Interrupt]) {
		InterruptHandler[Interrupt]();
		if (!GetAPICStatus())PIC_sendEOI(Interrupt);
		else local_apic_send_eoi();
		return;
	}

	LouPrint("Interrupt Number: %d Was Called\n",Interrupt);
	asm("hlt");
}