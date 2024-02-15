#include <LouDDK.h>




P_PCIBuffer PCI_Read(P_PCIDEV Device) {
    P_PCIBuffer PCIBuff = (P_PCIBuffer)Lou_Alloc_Mem(sizeof(PCIBuffer));


    return PCIBuff;
}

void PCI_Write(P_PCIDEV Device,P_PCIBuffer buffer) {

}


void PCI_Scan_Bus(){
    
    LouPrint("Scanning PCI Bus\n");
    
}
