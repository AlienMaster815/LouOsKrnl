#include <LouDDK.h>
#include <NtAPI.h>


uint8_t LouKeGetPciInterruptPin(P_PCI_DEVICE_OBJECT PDEV){

    uint8_t PIN = LouKeReadPciUint8(PDEV, 0x3D);
    return PIN;
}

uint8_t LouKeGetPciInterruptLine(P_PCI_DEVICE_OBJECT PDEV){

    uint8_t LINE = LouKeReadPciUint8(PDEV, 0x3C);
    return LINE;
}

