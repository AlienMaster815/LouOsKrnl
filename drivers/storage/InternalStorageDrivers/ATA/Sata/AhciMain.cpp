#include <LouDDK.h>
#include <Hal.h>
#include "ahci.h"

bool IsAhciController(P_PCI_DEVICE_OBJECT PDEV){
    PCI_COMMON_CONFIG PciConfig;
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, &PciConfig);

    if((PciConfig.Header.BaseClass == 0x01) && PciConfig.Header.SubClass == 0x06){
        LouPrint("Found ATA Controller\n");
        return true;
    }
    return false;
}

bool EnableAhciDevice(PAHCI_MEMORY_REGISTERS Hba){

    if(Hba->GlobalHost & HOST_AHCI_ENABLE){
        LouPrint("Ahci Enable Bit Already Set\n");
        return true;
    }
    LouPrint("Enableing Ahci Interface\n");
    for(uint8_t i = 0 ; i < 5; i++){
        Hba->GlobalHost |= HOST_AHCI_ENABLE;
        sleep(1000);
        if(Hba->GlobalHost & HOST_AHCI_ENABLE){
            LouPrint("Ahci Successfully Enabled\n");
            return true;
        }
    }
    return false;
}   

bool ResetAhciDevice(PAHCI_MEMORY_REGISTERS Hba){
    Hba->GlobalHost |= 1;
    return LouKeWaitForMmioState(&Hba->GlobalHost, 0, 1, 5000);
}

void IntitializeATAPIDevice(PAHCI_PORT Port){
    uint64_t Slab = (uint64_t)LouMallocEx(3 * KILOBYTE_PAGE, KILOBYTE_PAGE);
    LouKeMapContinuousMemmoryBlock(Slab, Slab, 3 * KILOBYTE_PAGE, KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT);
    LouPrint("Slab Is At Address:%h\n", Slab);

}


void InitializePorts(PAHCI_MEMORY_REGISTERS Hba){
    for (uint32_t i = 0; i < Hba->PortImplementation; i++) {
        if (Hba->PortImplementation & (1 << i)) {
            UNUSED PAHCI_PORT Port = (PAHCI_PORT)((uintptr_t)Hba + 0x100 + (0x80 * i));
            LouPrint("Initializing Ahci Port:%d\n", i);
            LouPrint("Signature IS:%h\n", Port->Signature);

            switch (Port->Signature){
                case SATA_SIG_ATA:{
                    LouPrint("Device Is ATA Compliant\n");
                    continue;
                }
                case SATA_SIG_ATAPI:{
                    LouPrint("Device Is ATAPI Compliant\n");
                    IntitializeATAPIDevice(Port);
                    continue;
                }
                case SATA_SIG_SEMB:{
                    LouPrint("Device Is An Enclosure Management\n");
                    continue;
                }
                case SATA_SIG_PM:{
                    LouPrint("Device Is A Port Multiplier\n");
                    continue;
                }
                default:
                    continue;
            }

        }
    }    
}

LOUSTATUS InitializeStartupAhciImplementation(P_PCI_DEVICE_OBJECT PDEV){

    LouPrint("Initializing AHCI Device\n");
    LouKeHalPciSetMmio(PDEV);
    LouKeHalPciSetMaster(PDEV);
    LouKeHalPciEnableInterrupts(PDEV);
    LouPrint("Ahci Pci Device Initialized\n");
    PCI_COMMON_CONFIG PciConfig;
    LouKeHalGetPciConfiguration(PDEV, &PciConfig);
    PAHCI_MEMORY_REGISTERS Hba = (PAHCI_MEMORY_REGISTERS)LouKeHalGetPciVirtualBaseAddress(&PciConfig, 5);    
    LouPrint("HBA PhyAddress:%h\n", PciConfig.Header.u.type0.BaseAddresses[5]);
    LouPrint("HBA VirtAddress:%h\n", Hba);

    if(!(EnableAhciDevice(Hba))){
        LouPrint("Unable To Set AE Bit\n");
        return STATUS_UNSUCCESSFUL;
    }
    
    if(!(ResetAhciDevice(Hba))){
        LouPrint("Ahci Reset Timeout\n");
        return STATUS_UNSUCCESSFUL;
    }

    InitializePorts(Hba);

    LouPrint("Done Initializing AHCI Device\n");
    return STATUS_SUCCESS;
}