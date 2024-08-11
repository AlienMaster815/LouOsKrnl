#include <LouDDK.h>
#include <NtAPI.h>
#include "Processors.h"

#define MAX_THREADS 6550
#define MAX_CORES 256

typedef enum {
    THREAD_READY = 1,
    THREAD_RUNNING = 2,
    THREAD_TERMINATED = 0,
} thread_state_t;

typedef struct  __attribute__((packed)){
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

    uint64_t rsp;       // Stack Pointer (pushed on privilege change)

    uint64_t rip;       // Instruction Pointer
    uint64_t cs;        // Code Segment
    uint64_t rflags;    // Flags Register
    //uint64_t rsp2;      //might not be here
    //uint64_t ss;        //also might not be here 
} CPUContext;


typedef struct {
    uint64_t stack_pointer;
    CPUContext* cpu_state;
    thread_state_t state;
    int thread_id;
    int core_id; // Core assigned to the thread
} thread_t;


UNUSED static thread_t threads[MAX_THREADS];
UNUSED static int current_thread[MAX_CORES]; // Track current thread per core
UNUSED static int thread_count = 1;

UNUSED static uint16_t core_count = 1;

KERNEL_IMPORT void SetInterruptFlags();
KERNEL_IMPORT void UnSetInterruptFlags();


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

KERNEL_IMPORT void local_apic_send_eoi();


UNUSED static uint32_t timeQuantum[MAX_CORES] = {0}; // Array to track the load on each core

// Placeholder function for finding the next thread to run across all cores
int find_next_thread(int CurrentThread) {
    //implement mr round robin
    int i = CurrentThread;
    while(1){
        i++;
        if((threads[i].state == THREAD_READY) && (i != CurrentThread)){
            return i;
        }  
        else if(i == thread_count){
            i = 0;
        }
        else if(i == CurrentThread){
            return -1;
        }
    }
    return -1; // No ready thread found
}


LOUDDK_API_ENTRY void UpdateThreadManager(uint64_t CpuCurrentState) {
    /*
    if(thread_count >= 2){
        int core_id = get_processor_id();
        if (timeQuantum[core_id] == 4) {
            timeQuantum[core_id] = 0;
            int next = find_next_thread(current_thread[core_id]);
            if(next == -1){
                return CpuCurrentState;
            }
            threads[current_thread[core_id]].cpu_state = CpuCurrentState;
            threads[current_thread[core_id]].state = THREAD_READY;
            return threads[next].cpu_state;
        } else {
            // Increment the time quantum for this core
            timeQuantum[core_id]++;
        }
    }
    */
    return;
}


static inline uint64_t GetRsp() {
    uint64_t rsp;
    __asm__ volatile ("mov %%rsp, %0" : "=r"(rsp));
    return rsp;
}

KERNEL_IMPORT uint64_t LouKeGetBspStackBottom();


LOUDDK_API_ENTRY LOUSTATUS InitThreadManager() {
    LOUSTATUS Status = LOUSTATUS_GOOD;

    if (!GetNPROC()) return STATUS_UNSUCCESSFUL;

    core_count = 1;
    LouPrint("Thread Manager Starting\nNumber Of Processors: %d\n", GetNPROC());

    for (int i = 0; i < core_count; i++) {
        current_thread[i] = 0; // Set the first thread as the current thread for the core
    }

    // Initialize the first thread structure as the current context (Thread 0)
    threads[0].state = THREAD_RUNNING;
    threads[0].cpu_state = (CPUContext*)LouMalloc(sizeof(CPUContext));
    threads[0].thread_id = 0;
    threads[0].core_id = get_processor_id(); // Assign it to the current core

    LouPrint("Initialized Processor:%d as Thread 0\n", get_processor_id());

    LouPrint("Thread Manager Successfully Started\n");

    return Status;
}


LOUDDK_API_ENTRY VOID LouKeDestroyThread() {
	UnSetInterruptFlags();

    while(1);

    SetInterruptFlags();
}

mutex_t FuckThis;

LOUDDK_API_ENTRY LOUSTATUS LouKeCreateThread(PVOID Function, PVOID FunctionParameters, uint32_t StackSize, THREAD_TYPE Ttype) {
    UnSetInterruptFlags();
    LouPrint("Creating A New Thread\n");
    // Lock the mutex to ensure thread safety
    if((thread_count + 1) >= MAX_THREADS){
        SetInterruptFlags();
        return STATUS_INSUFFICIENT_RESOURCES;
    }
    // Allocate memory for the new stack
    uint8_t* new_stack = (uint8_t*)LouMalloc(StackSize);
    if (!new_stack) {
        // Handle memory allocation failure
        SetInterruptFlags();
        return STATUS_INSUFFICIENT_RESOURCES;
    }
    CPUContext* NewContext = (CPUContext*)LouMalloc(sizeof(CPUContext));

    memset(new_stack, 0, StackSize);
    memset(NewContext, 0 , sizeof(CPUContext));
    // Calculate the stack pointer, assuming the stack grows downwards
    uint8_t* stack_top = new_stack + StackSize;
    stack_top = (uint8_t*)((uint64_t)stack_top & ~(16 - 1));

    NewContext->rsp = (uint64_t)stack_top;    
    NewContext->rbp = (uint64_t)stack_top;
    NewContext->rip = (uint64_t)Function;
    NewContext->rflags = 0x202; // Set IF (Interrupt Flag) and default reserved bits
    NewContext->rcx = (uint64_t)FunctionParameters;
    // Push the exit function address onto the stack
    stack_top -= sizeof(uint64_t);
    //*(uint64_t*)stack_top = (uint64_t)LouKeDestroyThread;

    if(Ttype == KERNEL_THREAD){
        NewContext->cs = 0x08;
        //NewContext->ds = 0x16;
        //NewContext->gs = 0x16;
        //NewContext->es = 0x16;
        //NewContext->fs = 0x16;
        //NewContext->ss = 0x10;
    }
    if(Ttype == USER_THREAD){
        //NewContext->cs = 
    }

    threads[thread_count].cpu_state = NewContext;
    threads[thread_count].core_id = -1;
    threads[thread_count].thread_id = thread_count;
    threads[thread_count].state = THREAD_READY;
    threads[thread_count].stack_pointer = (uint64_t)new_stack;
    LouPrint("Thread Successfully Created\n");
    thread_count++;
    SetInterruptFlags();
    return STATUS_SUCCESS;
}