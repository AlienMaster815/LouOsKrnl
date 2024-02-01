#include <LouAPI.h>


void(*InterruptHandler[256])();


void InterruptRouter(uint8_t Interrupt) {

	if (NULL != InterruptHandler[Interrupt]) {
		InterruptHandler[Interrupt]();
		return;
	}

	LouPrint("Interrupt Number: %d Was Called\n",Interrupt);

}