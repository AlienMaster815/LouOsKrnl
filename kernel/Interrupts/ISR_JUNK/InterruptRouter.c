#include <LouAPI.h>
void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size);

void(*InterruptHandler[256])();

void local_apic_send_eoi();
bool GetAPICStatus();

void initializeInterruptRouter(){
	for(uint8_t i = 0 ; i < 255 ; i ++){
		InterruptHandler[i] = NULL;
	}
}

void InterruptWrapper(uint64_t Handler, uint8_t InterruptNumber) {
	RegisterInterruptHandler((void(*)())Handler, InterruptNumber);
}

void RegisterInterruptHandler(void(*Handler),uint8_t InterruptNumber) {
	
	InterruptHandler[InterruptNumber] = Handler;

}

void UnRegisterInterruptHandler(uint8_t InterruptNumber) {
	InterruptHandler[InterruptNumber] = NULL;
}

static uint8_t InterruptGlobalCheck;

uint8_t GetGlobalInterrupt(){
	return InterruptGlobalCheck;
}

void InterruptRouter(uint8_t Interrupt) {

	InterruptGlobalCheck = Interrupt;

	if (NULL != InterruptHandler[Interrupt]) {
		//InterruptHandler[Interrupt]();
		LouKeRunOnNewStack(InterruptHandler[Interrupt], 0x00, 16 * KILOBYTE);
		if (!GetAPICStatus())PIC_sendEOI(Interrupt);
		else local_apic_send_eoi();
		return;
	}

	LouPrint("Interrupt Number: %d Was Called\n",Interrupt);
	asm("hlt");
}