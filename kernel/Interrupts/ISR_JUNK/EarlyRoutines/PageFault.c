#include <LouAPI.h>

void PageFault() {
    unsigned long faulting_address;
	
    asm volatile ("mov %%cr2, %0" : "=r" (faulting_address));

    LouPrint(" Address Of Page Fault: %d",faulting_address);

    asm("hlt");

    LouPanic("Page Fault Detected", BAD);
}
