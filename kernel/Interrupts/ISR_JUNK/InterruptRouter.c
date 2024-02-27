#include <LouAPI.h>


void(*InterruptHandler[256])();


void RegisterInterruptHandler(void(*Handler),uint8_t InterruptNumber) {
	
	InterruptHandler[InterruptNumber] = Handler;

}

void UnRegisterInterruptHandler(uint8_t InterruptNumber) {
	InterruptHandler[InterruptNumber] = NULL;
}

void InterruptRouter(uint8_t Interrupt) {

	

	if (NULL != InterruptHandler[Interrupt]) {
		InterruptHandler[Interrupt]();
		return;
	}

	LouPrint("Interrupt Number: %d Was Called\n",Interrupt);
	asm("hlt");
}