#include <LouAPI.h>




void PageFault() {
    unsigned long faulting_address;
	
    asm volatile ("mov %%cr2, %0" : "=r" (faulting_address));

    LouPrint("Address Of Page Fault: %d",faulting_address);

    while (1);


    PANIC:

    LouPanic("Page Fault Detected", BAD);
}
