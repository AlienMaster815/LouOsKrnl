#include <LouDDK.h>
#include <NtAPI.h>
#include "ata.h"


#define PCI_COMMAND_BUS_MASTER 0x02
#define BUS_MASTER_COMMAND_REG  (0xB800 + 0x00)
#define BUS_MASTER_STATUS_REG   (0xB800 + 0x02)
#define BUS_MASTER_PRDT_ADDR    (0xB800 + 0x04)

void InitializePataDevice(uint8_t bus, uint8_t slot, uint8_t func);

bool IsPataCheck(uint8_t bus, uint8_t slot, uint8_t function){

    //uint16_t ClassCode = getBaseClass(bus, slot, function);
    //uint16_t SubClassCode = getSubClass(bus, slot, function);

    //if((ClassCode == 0x01) && (SubClassCode == 0x01)){
    //    InitializePataDevice(bus,slot,function);
    //}

    return false;
}

static void InitializePiixPataVmw(PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializePiixPataVmw()\n");

    LouPrint("InitializePiixPataVmw() SUCCESS\n");
}

void InitializePiixPata33(P_PCI_DEVICE_OBJECT PDEV,BaseAddressRegister* Bars,PCI_COMMON_CONFIG* PConfig);

static void InitializeIchPata33(PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializeIchPata33()\n");



    LouPrint("InitializeIchPata33() SUCCESS\n");
}

static void InitializeIchPata66(PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializeIchPata66()\n");



    LouPrint("InitializeIchPata66() SUCCESS\n");
}

static void InitializeIchPata100(PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializeIchPata100()\n");



    LouPrint("InitializeIchPata100() SUCCESS\n");
}

static void InitializeIchPata100NoWDMA1(PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializeIchPata100NoWDMA1()\n");



    LouPrint("InitializeIchPata100NoWDMA1() SUCCESS\n");
}

static void InitializeGenericPata(BaseAddressRegister* Bars ,PCI_COMMON_CONFIG* PConfig){
    LouPrint("InitializeGenericPata()\n");


    uint8_t j = 0;  
    uintptr_t Addresses[6];
    bool IoMap[6];
    for(uint8_t i = 0; i < 6; i++){
        if(Bars->address[i] != 0x00){
            Addresses[j] = (uintptr_t)Bars->address[i];
            IoMap[j] = Bars->MMIO[i];
            j++;
        }
    }
    
    PataDev* PataDevices = (PataDev*)LouMalloc(sizeof(PataDev) * j);

    for(uint8_t i = 0; i < j; i++){
        if(!IoMap[i]){
            LouPrint("Port At:%h\n", Addresses[i]);
        }
        else{
            LouPrint("MMIO At:%h\n", Addresses[i]);
        }
        PataDevices->PortLocation[i] = (uint32_t)Addresses[i];
        PataDevices->MMIO[i] = IoMap[i];
    }

    LouPrint("InitializeGenericPata() SUCCESS\n");
}

void InitializePataDevice(uint8_t bus, uint8_t slot, uint8_t func){

    P_PCI_DEVICE_OBJECT PDEV = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(PCI_DEVICE_OBJECT));

    PDEV->bus = bus;
    PDEV->slot = slot;
    PDEV->func = func;
    
    BaseAddressRegister BARS(PDEV);

    LouPrint("Found A PATA Device\n");

    PCI_COMMON_CONFIG* ConfigBuffer = (PCI_COMMON_CONFIG*)LouMalloc(sizeof(PCI_COMMON_CONFIG));    
    
    GetPciConfiguration(bus, slot, func , ConfigBuffer);
    
    if(
        ConfigBuffer->Header.VendorID == 0x8086 && ConfigBuffer->Header.DeviceID == 0x7111 &&
        ConfigBuffer->Header.u.type0.SubVendorID == 0x15ad && ConfigBuffer->Header.u.type0.SubSystemID == 0x1976
    ){
        InitializePiixPataVmw(ConfigBuffer);
    }
    else if(
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x7111)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x7199)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x7601)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x84CA))
        ){
        InitializePiixPata33(PDEV ,&BARS, ConfigBuffer);
    }
    else if(
        (ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 2411)
    ){
        InitializeIchPata66(ConfigBuffer);
    }
    else if(
        (ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 2421)
    ){
        InitializeIchPata33(ConfigBuffer);
    }
    else if(
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x244A)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x244B)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x248A)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x244B)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x24C1)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x24CA)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x24CB)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x24DB)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x245B)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x25A2)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x266F)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x2850))
        ){
        InitializeIchPata100(ConfigBuffer);
    }
    else if(
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x27DF)) ||
        ((ConfigBuffer->Header.VendorID == 0x8086) && (ConfigBuffer->Header.DeviceID == 0x269E))
    ){
        InitializeIchPata100NoWDMA1(ConfigBuffer);
    }
    else{
        InitializeGenericPata(&BARS ,ConfigBuffer);
    }



    LouPrint("Finished Initializing PATA Device\n");
    while(1);
}