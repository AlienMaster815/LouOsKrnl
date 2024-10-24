#include <LouAPI.h>

extern uint64_t InstructionPointer;

typedef struct  __attribute__((packed)) _CPUContext{
    // General-Purpose Registers    
    uint64_t rax;
    uint64_t rbx;
    uint64_t rcx;
    uint64_t rdx;
    
    uint64_t rbp;
    uint64_t rsi;
    uint64_t rdi;

    uint64_t r8;
    uint64_t r9;
    uint64_t r10;
    uint64_t r11;
    uint64_t r12;
    uint64_t r13;
    uint64_t r14;
    uint64_t r15;

    uint64_t rip;      // Instruction Pointer
    uint64_t cs;       // Code Segment
    uint64_t rflags;   // Flags Register
    uint64_t rsp;      // Stack Pointer
    uint64_t ss;       // Stack Segment
    uint64_t error;    // Error Code (only if applicable)
} CPUContext;

void GPF(uint64_t FaultingStackP) {
	
	FaultingStackP += 8;
	CPUContext* FaultingStack = (CPUContext*)FaultingStackP;

	LouPrint("GPF\nAt Stack Point:%h\n", FaultingStack);

	while(1);
}