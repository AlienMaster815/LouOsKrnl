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
	LouPrint("RAX:%h ",FaultingStack->rax);LouPrint("RBX:%h ",FaultingStack->rbx); LouPrint("RCX:%h\n",FaultingStack->rcx);
	LouPrint("RDX:%h ",FaultingStack->rdx);LouPrint("RBP:%h ",FaultingStack->rbp); LouPrint("RSI:%h\n",FaultingStack->rsi);
	LouPrint("RDI:%h ",FaultingStack->rdi);LouPrint("R8 :%h ",FaultingStack->r8); LouPrint("R9 :%h\n",FaultingStack->r9);
	LouPrint("R10:%h ",FaultingStack->r10);LouPrint("R11:%h ",FaultingStack->r11); LouPrint("R12:%h\n",FaultingStack->r12);
	LouPrint("R13:%h ",FaultingStack->r13);LouPrint("R14:%h ",FaultingStack->r14); LouPrint("R15:%h\n",FaultingStack->r15);
	LouPrint("RIP:%h ",FaultingStack->rip);LouPrint("CS :%h ",FaultingStack->cs); LouPrint("RF :%h\n",FaultingStack->rflags);
	LouPrint("RSP:%h ",FaultingStack->rsp);LouPrint("SS :%h\n",FaultingStack->ss); //LouPrint("ERR:%h\n",FaultingStack->error);
	while(1);
}