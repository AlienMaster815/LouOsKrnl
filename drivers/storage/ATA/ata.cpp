#include <LouDDK.h>
#include <NtAPI.h>
#include "ata.h"

void InitializePataDevice(uint8_t bus, uint8_t slot, uint8_t func);

bool IsPataCheck(uint8_t bus, uint8_t slot, uint8_t function){

    uint16_t ClassCode = getBaseClass(bus, slot, function);
    uint16_t SubClassCode = getSubClass(bus, slot, function);

    if((ClassCode == 0x01) && (SubClassCode == 0x01)){
        InitializePataDevice(bus,slot,function);
    }

    return false;
}

void InitializePataDevice(uint8_t bus, uint8_t slot, uint8_t func){

    P_PCI_DEVICE_OBJECT PDEV = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(PCI_DEVICE_OBJECT));

    PDEV->bus = bus;
    PDEV->slot = slot;
    PDEV->func = func;


    LouPrint("Found A PATA Device\n");
    LouPrint("Initializing PATA Device\n");
    
    PCI_COMMON_CONFIG ConfigBuffer; 
    GetPciConfiguration(bus, slot ,&ConfigBuffer);

    BaseAddressRegister BARS(PDEV);    

    BaseAddressRegister* Bar = (BaseAddressRegister*)LouMalloc(sizeof(BaseAddressRegister));

    PDEV->DeviceExtendedObject = (uintptr_t)Bar;

    for(uint8_t i = 0; i < 6; i++){
        Bar->address[i] = BARS.address[i];
        Bar->MMIO[i] = BARS.MMIO[i];
    }


    
    LouPrint("Finished Initializing PATA Devices\n");
    while(1);
}