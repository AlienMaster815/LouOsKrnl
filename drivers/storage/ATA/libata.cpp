#define _KERNEL_MODULE_
#include <LouDDK.h>
#include <atalib.h>

void AtaPortRegisterPortIo(
PATA_PORT Ap,
void* Mmio,
size_t Offset
) {

	Ap->PortMmio = (void*)((uint64_t)Mmio + Offset);

}