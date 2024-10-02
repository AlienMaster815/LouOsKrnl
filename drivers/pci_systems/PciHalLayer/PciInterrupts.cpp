#include <LouDDK.h>
#include <Hal.h>

LOUDDK_API_ENTRY
int LouKeHalMallocPciIrqVectors(
    P_PCI_DEVICE_OBJECT PDEV, 
    int RequestedVectors, 
    uint64_t Flags
){
    LouPrint("Allocating Pci Irq Vectors\n");

    

    while(1);
    return 0;
}