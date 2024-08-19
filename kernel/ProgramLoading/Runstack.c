#include <LouAPI.h>

static inline uint32_t get_processor_id() {
    uint32_t eax, ebx, ecx, edx;
    eax = 1; // Processor info and feature bits
    __asm__ volatile(
        "cpuid"
        : "=b" (ebx), "=d" (edx), "=c" (ecx)
        : "a" (eax)
    );
    uint32_t processor_id = ebx >> 24;
    return processor_id;
}

mutex_t FuckThis;
void* new_stack[256];


// Function to create a new stack and call the specified function
void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size) {
    // Allocate memory for the new stack
    //MutexLock(&FuckThis);
    new_stack[get_processor_id()] = LouMalloc(stack_size);
    if (!new_stack) {
        // Handle memory allocation failure
        return;
    }

    // Calculate the stack pointer, assuming the stack grows downwards
    void* stack_top = (char*) new_stack[get_processor_id()] + stack_size;

    // Inline assembly to switch stack, call the function, and return to the original context
    __asm__ volatile (
        "mov %[params], %%rcx\n"   // Pass FunctionParameters as the first argument in rcx (Windows x64 ABI)
        "mov %%rsp, %%rbx\n"       // Save current stack pointer
        "mov %%rbp, %%rdx\n"       // Save current base pointer
        "mov %[stack_top], %%rsp\n" // Set the stack pointer to the top of the new stack
        "call *%[func]\n"          // Call the function
        "mov %%rbx, %%rsp\n"       // Restore original stack pointer
        "mov %%rdx, %%rbp\n"       // Restore original base pointer
        :
        : [func] "r" (func), [params] "r" (FunctionParameters), [stack_top] "r" (stack_top)
        : "rcx", "rbx", "rdx", "memory" // Clobber memory to indicate stack change
    );



    // Free the allocated stack memory after the function returns
    LouFree(new_stack[get_processor_id()]);
    //MutexUnlock(&FuckThis);
}

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

    uint64_t rip;       // Instruction Pointer
    uint64_t cs;        // Code Segment
    uint64_t rflags;    // Flags Register

} CPUContext;

extern void ContextLiftoff(CPUContext* CpuState);

void LouKeSwitchContext(void (*Function)(), uint64_t StackSize){
    //UnSetInterruptFlags();
    LouPrint("Switching Context\n");
    void* NewStack = LouMallocEx(StackSize + sizeof(CPUContext), 16);

    UNUSED uint64_t StackTop = (uint64_t)NewStack + StackSize;
    StackTop &= ~(15);

    memset((void*)StackTop, 0, StackSize + sizeof(CPUContext));

    CPUContext* NewContext = (CPUContext*)StackTop;

    NewContext->rax = 0x00;
    NewContext->rbx = 0x00;
    NewContext->rcx = 0x00;
    NewContext->rdx = 0x00;
    
    NewContext->rdi = 0x00;
    NewContext->rsi = 0x00;
    NewContext->rbp = 0x00;

    NewContext->r8 = 0x00;
    NewContext->r9 = 0x00;
    NewContext->r10 = 0x00;
    NewContext->r11 = 0x00;
    NewContext->r12 = 0x00;
    NewContext->r13 = 0x00;
    NewContext->r14 = 0x00;
    NewContext->r15 = 0x00;

    NewContext->rbp = (uint64_t)0x00;
    NewContext->rip = (uint64_t)Function;
    NewContext->rflags = 0x202;

    //ContextLiftoff(NewContext);


    LouPrint("Done Switching Context\n");
}