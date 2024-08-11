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
        "mov %[params], %%rdi\n"   // Pass FunctionParameters as the first argument
        "mov %%rsp, %%rbx\n"       // Save current stack pointer
        "mov %%rbp, %%rcx\n"       // Save current base pointer
        "mov %[stack_top], %%rsp\n" // Set the stack pointer to the top of the new stack
        "call *%[func]\n"          // Call the function
        "mov %%rbx, %%rsp\n"       // Restore original stack pointer
        "mov %%rcx, %%rbp\n"       // Restore original base pointer
        :
        : [func] "r" (func), [params] "r" (FunctionParameters), [stack_top] "r" (stack_top)
        : "rdi", "rbx", "rcx" // Do not list rsp here
    );


    // Free the allocated stack memory after the function returns
    LouFree(new_stack[get_processor_id()]);
    //MutexUnlock(&FuckThis);
}
