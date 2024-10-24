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

    uint64_t rip;       // Instruction Pointer (user-mode entry point)
    uint64_t cs;        // Code Segment (should be set to user mode, typically 0x1B for x86_64)
    uint64_t rflags;    // Flags Register (set the interrupt flag, clear privileged bits)
    
    uint64_t rsp;       // Stack Pointer (points to user-mode stack)
    uint64_t ss;        // Stack Segment (should be user mode, typically 0x23 for x86_64)

} CPUContext;

void SetContext(uint64_t Context, uint64_t Function){
    CPUContext* NewContext = (CPUContext*)(Context - sizeof(Context));
    NewContext->ss = 0x23;
    NewContext->cs = 0x1B;
    NewContext->rsp = (uint64_t)NewContext;
    NewContext->rip = (uint64_t)Function;
    NewContext->rflags = 0x202;
}

extern void ContextLiftoff(CPUContext* CpuState);

void LouKeSwitchContext(void (*Function)(), uint64_t StackSize){


    LouPrint("Done Switching Context\n");
}