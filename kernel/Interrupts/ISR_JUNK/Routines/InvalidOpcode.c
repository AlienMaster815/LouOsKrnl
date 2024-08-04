#include <LouAPI.h>
extern uint64_t InstructionPointer;

void InvalidOpcode() {

	LouPrint("InvalidOpcode\nAt Instruction:%h\n", InstructionPointer);
	//tracking insstruction 3580;
	//now tracking 3594
	while (1);
}