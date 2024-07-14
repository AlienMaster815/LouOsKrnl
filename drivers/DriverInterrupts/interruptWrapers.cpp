//TODO: Write a wrapper function for interrupt handleing

#include <LouDDK.h>

KERNEL_IMPORT void InterruptWrapper(uint64_t Handler, uint8_t InterruptNumber);

void RegisterInterruptHandler(void(*Handler)(), uint8_t InterruptNumber) {
	InterruptWrapper((uint64_t)Handler, InterruptNumber);
}