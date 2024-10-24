#include <LouDDK.h>
#include <Hal.h>
#include "ahci.h"


static spinlock_t SATA_LOCK;

bool Read(PAHCI_PORT Port, uint64_t Sector, uint16_t SectorCount, void* Buffer){

    //PAHCI_PORT Port = (PAHCI_PORT)PortAta->PortMmio;
    LouKIRQL Irql;
    LouKeAcquireSpinLock(&SATA_LOCK, &Irql);

    UNUSED uint32_t SectorL = Sector & 0xFFFFFFFF;    
    UNUSED uint32_t SectorH = Sector >> 32;    

    Port->InterruptStat = (uint32_t)-1;    

    UNUSED HBA_CMD_HEADER* HbaCmdHead = (HBA_CMD_HEADER*)((uint64_t)Port->CommandListBase | (uint64_t)Port->CommandListBaseHigh << 32);
    HbaCmdHead->cfl = sizeof(FIS_REG_H2D)/sizeof(uint32_t);
    HbaCmdHead->w = 0;
    HbaCmdHead->prdtl = 1;

    UNUSED HBA_CMD_TBL* CommandTable = (HBA_CMD_TBL*)((uint64_t)HbaCmdHead->ctba | (uint64_t)(HbaCmdHead->ctbau) << 32);
    memset(CommandTable, 0, sizeof(HBA_CMD_TBL) + ((HbaCmdHead->prdtl - 1) * sizeof(PRDT_ENTRY)));

    CommandTable->prdt_entry[0].dba = (uint32_t)(uint64_t)Buffer & 0xFFFFFFFF;
    CommandTable->prdt_entry[0].dbau = (uint32_t)((uint64_t)Buffer >> 32);
    CommandTable->prdt_entry[0].dbc = (SectorCount << 9)-1;

    FIS_REG_H2D* CmdFis = (FIS_REG_H2D*)&CommandTable->cfis;
    CmdFis->fis_type = 0x27;
    CmdFis->c = 1;
    CmdFis->command = ATA_CMD_READ_DMA_EX;

    CmdFis->lba0 = (uint8_t)SectorL & 0xFF;
    CmdFis->lba1 = (uint8_t)(SectorL >> 8) & 0xFF;
    CmdFis->lba2 = (uint8_t)(SectorL >> 16) & 0xFF;
    CmdFis->lba3 = (uint8_t)SectorH & 0xFF;
    CmdFis->lba4 = (uint8_t)(SectorH >> 8) & 0xFF;
    CmdFis->lba5 = (uint8_t)(SectorH >> 16) & 0xFF;

    CmdFis->device = 1 << 6;

    CmdFis->countl = SectorCount & 0xFF;
    CmdFis->counth = (SectorCount >> 8) & 0xFF;

    uint64_t Spin = 0;
    while(Spin < 10000){
        if(!(Port->TaskFile & (ATA_DEV_BUSY | ATA_DEV_DRQ)))break;
        sleep(100);
        Spin++;
    }
    if(Spin > (10000 - 1)){
        LouKeReleaseSpinLock(&SATA_LOCK, &Irql);
        return false;
    }    

    Port->CommandIssue = 1;

    while(true){
        //BUGBUG: endless loops here
        LouPrint("Waiting\n");
        if(!(Port->CommandIssue & 1))break;
        if(Port->InterruptStat & HBA_PxIS_TFES){
            LouKeReleaseSpinLock(&SATA_LOCK, &Irql);
            return false;
        }

        sleep(1000);

    }

    LouKeReleaseSpinLock(&SATA_LOCK, &Irql);
    return true;
}

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

void StopCmd(PAHCI_PORT Port){

    Port->CommandnStatus &= ~(HBA_PxCMD_FR);
    Port->CommandnStatus &= ~(HBA_PxCMD_ST);

    while(true){
        if(Port->CommandnStatus & HBA_PxCMD_FR)continue;
        else if(Port->CommandnStatus & HBA_PxCMD_ST)continue;
        else break;
    }

}

void StartCmd(PAHCI_PORT Port){
    while(Port->CommandnStatus & HBA_PxCMD_CR){
        sleep(100);
    }

    Port->CommandnStatus |= HBA_PxCMD_FR;
    Port->CommandnStatus |= HBA_PxCMD_ST;
}

void IntitializeATADevice(PAHCI_PORT Port, bool ATAPI){

    UNUSED uint8_t IPM = Port->SataStatus >> 8;
    UNUSED uint8_t DevDetect = Port->SataStatus & 0b111;

    LouPrint("IPM:%h\n", IPM);
    LouPrint("DEV:%h\n", DevDetect);

    if(DevDetect != 0x03){
        return;
    }

    if(IPM != 1){
        return;
    }

    StopCmd(Port);
    LouPrint("Initializing ATA Compliant Port\n");

    uint64_t CommandList =  (uint64_t)LouMalloc(KILOBYTE_PAGE);
    uint64_t FisBase =  (uint64_t)LouMalloc(KILOBYTE_PAGE);
    LouKeMapContinuousMemmoryBlock(CommandList, CommandList, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);
    LouKeMapContinuousMemmoryBlock(FisBase, FisBase, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);

    Port->CommandListBase = CommandList & 0xFFFFFFFF;
    Port->CommandListBaseHigh = CommandList >> 32;

    Port->FisBase = FisBase & 0xFFFFFFFF;
    Port->FisBaseHigh = FisBase >> 32;


    HBA_CMD_HEADER* CmdHeader = (HBA_CMD_HEADER*)CommandList;

    for(uint8_t i = 0 ; i < 32; i++){

        CmdHeader[i].prdtl = 8;
        uint64_t CmdTableAddr = (uint64_t)LouMalloc(KILOBYTE_PAGE);
        LouKeMapContinuousMemmoryBlock(CmdTableAddr, CmdTableAddr, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);
        uint64_t Addr = (CmdTableAddr + (i << 8));

        CmdHeader[i].ctba = Addr & 0xFFFFFFFF;
        CmdHeader[i].ctbau = Addr >> 32;

    }

    StartCmd(Port);


    uint64_t Buffer = (uint64_t)LouMalloc(KILOBYTE_PAGE);

    if(Read(Port, 0, 4, (void*)Buffer)){
        LouPrint("YAY!!!!!\n");
    }


    while(1);
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
                    IntitializeATADevice(Port, false);
                    continue;
                }
                case SATA_SIG_ATAPI:{
                    LouPrint("Device Is ATAPI Compliant\n");
                    IntitializeATADevice(Port, true);
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