#include <LouDDK.h>

//CPP Land
P_PCIBuffer PCI::PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff = (P_PCIBuffer)Lou_Alloc_Mem(sizeof(PCIBuffer));


    return PCIBuff;
}

void PCI::PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {

}



void PCI_Scan_Bus(){
    
    LouPrint("Scanning PCI Bus\n");
    
    //PCI Begins After I Wake Up

}



// C Land

P_PCIBuffer PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff;
    PCI Read;
    PCIBuff = Read.PCI_Read(Device);
    return PCIBuff;
}

void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer) {
    PCI Write;
    Write.PCI_Write(Device, buffer);
}