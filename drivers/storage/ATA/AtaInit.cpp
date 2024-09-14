#include <LouDDK.h>
#include <NtAPI.h>
#include "ata.h"
#include <Hal.h>

#define DEVICE PDEV->bus, PDEV->slot, PDEV->func

#define PCI_COMMAND_BUS_MASTER 0x02
#define BUS_MASTER_COMMAND_REG  (0xB800 + 0x00)
#define BUS_MASTER_STATUS_REG   (0xB800 + 0x02)
#define BUS_MASTER_PRDT_ADDR    (0xB800 + 0x04)

// Command Block Registers (Primary Channel)
#define PATA_PRIMARY_DATA           0x1F0  // Data Register
#define PATA_PRIMARY_ERROR          0x1F1  // Error Register (Read) / Features Register (Write)
#define PATA_PRIMARY_SECTOR_COUNT   0x1F2  // Sector Count Register
#define PATA_PRIMARY_SECTOR_NUMBER  0x1F3  // Sector Number Register
#define PATA_PRIMARY_CYLINDER_LOW   0x1F4  // Cylinder Low Register
#define PATA_PRIMARY_CYLINDER_HIGH  0x1F5  // Cylinder High Register
#define PATA_PRIMARY_DRIVE_HEAD     0x1F6  // Drive/Head Register
#define PATA_PRIMARY_STATUS         0x1F7  // Status Register (Read) / Command Register (Write)
#define PATA_PRIMARY_CONTROL_PORT  0x3F6  // Primary channel control port

// Control Block Registers (Primary Channel)
#define PATA_PRIMARY_ALT_STATUS     0x3F6  // Alternate Status Register (Read) / Device Control Register (Write)
#define PATA_PRIMARY_DEV_CONTROL    0x3F6  // Device Control Register (Write)

// Command Block Registers (Secondary Channel)
#define PATA_SECONDARY_DATA           0x170  // Data Register
#define PATA_SECONDARY_ERROR          0x171  // Error Register (Read) / Features Register (Write)
#define PATA_SECONDARY_SECTOR_COUNT   0x172  // Sector Count Register
#define PATA_SECONDARY_SECTOR_NUMBER  0x173  // Sector Number Register
#define PATA_SECONDARY_CYLINDER_LOW   0x174  // Cylinder Low Register
#define PATA_SECONDARY_CYLINDER_HIGH  0x175  // Cylinder High Register
#define PATA_SECONDARY_DRIVE_HEAD     0x176  // Drive/Head Register
#define PATA_SECONDARY_STATUS         0x177  // Status Register (Read) / Command Register (Write)
#define PATA_SECONDARY_CONTROL_PORT 0x376

// Control Block Registers (Secondary Channel)
#define PATA_SECONDARY_ALT_STATUS     0x376  // Alternate Status Register (Read) / Device Control Register (Write)
#define PATA_SECONDARY_DEV_CONTROL    0x376  // Device Control Register (Write)

KERNEL_IMPORT void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size);

void InitializePataDevice(P_PCI_DEVICE_OBJECT PDEV);

static bool PciNative = false;
static bool UsingDMA = false;

bool IsPataCheck(uint8_t bus, uint8_t slot, uint8_t function){
    static PCI_DEVICE_OBJECT DEV;

    DEV.bus = bus;
    DEV.slot = slot;
    DEV.func = function;

    uint16_t ClassCode = getBaseClass(bus, slot, function);
    uint16_t SubClassCode = getSubClass(bus, slot, function);

    if((ClassCode == 0x01) && (SubClassCode == 0x01)){
        InitializePataDevice(&DEV);
    }

    return false;
}

void* LouKeHalPnpInitializeBaseRegister(
    P_PCI_DEVICE_OBJECT PDEV,
    uint8_t BarNum
);

LOUDDK_API_ENTRY void pata_device_scanc();

void InitializePataDevice(P_PCI_DEVICE_OBJECT PDEV){
    LouPrint("InitializePataDevice()\n");
    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));

    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, PciConfig);
    uint8_t ProgIf = PciConfig->Header.ProgIf;

    if((PciConfig->Header.VendorID == 0x8086) && (PciConfig->Header.DeviceID == 0x7010) ){
        pata_device_scanc();
        LouPrint("Finished Initializing PATA Device\n");
        return;
    }



    //setup channel 1
    if(ProgIf & 0x01){
        LouPrint("Primary Channel In Native Mode\n");
        PciNative = true;
    }   
    else{
        LouPrint("Primary Channel In Compatibility\n");
        if((ProgIf >> 1) & 0x01){
            LouPrint("Primary Channel Initializing Port Acceleration\n");
            PciNative = true;
            pciConfigWriteWord(DEVICE, PCI_COMMAND, pciConfigReadWord(DEVICE, PCI_COMMAND) & ~(1));
            uint16_t CommandRegister = pciConfigReadWord(DEVICE, PCI_COMMAND);
            if(CommandRegister & 0x01){
                LouPrint("Fuck Unable To Diable IO\n");
                PciNative = false;
            }else{
                LouPrint("Enableing Native Mode\n");
                pciConfigWriteWord(DEVICE, PCI_COMMAND, CommandRegister | (1 << 1));
                CommandRegister = pciConfigReadWord(DEVICE, PCI_COMMAND);
                if((CommandRegister >> 1) & 0x01){
                    LouPrint("Native Mode Successfully Started\n");
                

                }else{
                    LouPrint("Fuck Unable To Enable MmIO\n");
                    PciNative = false;
                }
            }
            
        }
        else{
            //fuck things are gonna be slow
            LouPrint("Where did you get this old ass pice of shit LOL!!!\n");
        }
    }
    if((ProgIf >> 2) & 0x01){
        //LouPrint("Secondary Channel In Native Mode\n");
        PciNative = true;
    }
    else{
        //LouPrint("Secondary Channel Is Compatibility\n");
        if((ProgIf >> 3) & 0x01){
            //LouPrint("Secondary Channel Is Initializing Port Acceleration\n");
            //PciNative = true;
            //pciConfigWriteByte(PDEV->bus, PDEV->slot, PDEV->func, PROGIF, ProgIf | (3 << 1));
            
        }
        else{
            //fuck things are gonna be slow
            LouPrint("Where did you get this old ass pice of shit LOL!!!\n");
        }
    }
    if((ProgIf >> 7) & 0x01){
        LouPrint("Controller Is Using DMA\n");
        UsingDMA = true;
    }



    LouFree((RAMADD)PciConfig);
    LouPrint("Finished Initializing PATA Device\n");
    while(1);
}