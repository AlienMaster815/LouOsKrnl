#include <LouAPI.h>
void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size);

void(*InterruptHandler[256])(uint64_t);

void local_apic_send_eoi();
bool GetAPICStatus();

void initializeInterruptRouter(){
	for(uint8_t i = 0 ; i < 255 ; i ++){
		InterruptHandler[i] = 0x00;
	}
}

void InterruptWrapper(uint64_t Handler, uint8_t InterruptNumber) {
	RegisterInterruptHandler((void(*)())Handler, InterruptNumber);
}

void RegisterInterruptHandler(void(*Handler),uint8_t InterruptNumber) {
	
	InterruptHandler[InterruptNumber] = Handler;

}

void UnRegisterInterruptHandler(uint8_t InterruptNumber) {
	InterruptHandler[InterruptNumber] = 0x00;
}

static uint8_t InterruptGlobalCheck;

uint8_t GetGlobalInterrupt(){
	return InterruptGlobalCheck;
}

LouKIRQL InterruptSwitch(LouKIRQL New);

void InterruptRouter(uint8_t Interrupt, uint64_t Args) {

	InterruptGlobalCheck = Interrupt;
	LouKIRQL PreInterruptIrql = InterruptSwitch(HIGH_LEVEL);
	
	if (0x00 != InterruptHandler[Interrupt]) {
		InterruptHandler[Interrupt](Args);
		//LouKeRunOnNewStack((void(*)(PVOID))InterruptHandler[Interrupt], (PVOID)Args, 8 * KILOBYTE);
		//if (!GetAPICStatus())PIC_sendEOI(Interrupt);
		local_apic_send_eoi();
		InterruptSwitch(PreInterruptIrql);
		return;
	}

	LouPrint("Interrupt Number: %d Was Called\n",Interrupt);
	asm("hlt");
}