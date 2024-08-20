#include <LouDDK.h>
#include <NtAPI.h>
#include "../ata.h"

#define PCI_COMMAND_BUS_MASTER 0x02
#define BUS_MASTER_COMMAND_REG  (0xB800 + 0x00)
#define BUS_MASTER_STATUS_REG   (0xB800 + 0x02)
#define BUS_MASTER_PRDT_ADDR    (0xB800 + 0x04)



void InitializePiixPata33(P_PCI_DEVICE_OBJECT PDEV,BaseAddressRegister* Bars,PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializePiixPata33()\n");

    

    LouPrint("InitializePiixPata33() SUCCESS\n");
}