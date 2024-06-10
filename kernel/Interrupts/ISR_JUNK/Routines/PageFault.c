#include <LouAPI.h>


extern uint64_t InterruptCode;

uint64_t get_cr2() {
    uint64_t value;
    asm volatile ("movq %%cr2, %0" : "=r" (value));
    return value;
}

extern void clear_cr2();

bool IsCheckingPageFault = false;
bool CheckIsSuccess = true;

void PageFault() {
    

    
    uint64_t VAddress = get_cr2();

    LouPrint("Page Fault Detected At Address %h Handleing Now\n",VAddress);


    LouPrint("FUCK\n");
    while(1);
}
