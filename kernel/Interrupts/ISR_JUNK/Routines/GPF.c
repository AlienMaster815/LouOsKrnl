#include <LouAPI.h>

extern uint64_t InstructionPointer;


void GPF() {
	//LouPanic("GPF Fault", GOOD);
	LouPrint("GPF\nAt Instruction:%h\n", InstructionPointer);
	while(1);
}