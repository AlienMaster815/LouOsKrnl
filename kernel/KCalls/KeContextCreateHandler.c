#include <LouAPi.h>

typedef struct  __attribute__((packed)) _CPUContext{
    // General-Purpose Registers    
    uint64_t rax;
    uint64_t rbx;
    uint64_t rcx;
    uint64_t rdx;
    
    uint64_t rbp;
    uint64_t rsi;
    uint64_t rdi;

    //uint64_t r8;
    //uint64_t r9;
    //uint64_t r10;
    //uint64_t r11;
    //uint64_t r12;
    //uint64_t r13;
    //uint64_t r14;
    //uint64_t r15;



    uint64_t rip;       // Instruction Pointer
    uint64_t cs;        // Code Segment
    uint64_t rflags;    // Flags Register
    uint64_t rsp;
    uint64_t ss;
} CPUContext;




extern void ContextLiftoff(uintptr_t LiftTo,uint64_t LiftFrom, uint64_t StorAddress);

void LouKeRunThreadContext(
    uint64_t Ctex,
    uint64_t CCTex,
    uint64_t StorAddress
    ){        
    ContextLiftoff(Ctex,CCTex, StorAddress);
}
