/*
== Tyler Grenier 6/25/23
== OHCI Driver 1.01
==
== Use Of Driver:
== The Use of this driver is for the ability for the
== host system to interact with usb devices in the
== early boot stages of the os for having either a
== storage context support or basic controller support 
== if a vendor specific driver is not available or the
== module is either missing such as during an installation
== or if the system is in a safe mode aproch for the boot
== of the system
*/

#include <LouDDK.h>
#include <NtAPI.h>
#include "../../../usb.h"
#include <Hal.h>
#include "Ohci.h"

#define LOU_OHCI_DRIVER_ENTRY_STRING "\nLousine Kernel Internal OHCI.SYS Driver 1.01\n"
#define LOU_OHCI_DRIVER_EXIT_STRING_SUCCESS "Done Initializing OHCI Controller Exiting Process\n\n"
#define LOU_OHCI_DRIVER_EXIT_STRING_FAILURE "OHCI Device Could Not Be Initialized Exiting Process\n"

uint8_t OHCI_GetPortNum(OHCI_MEM* ohci_regs) {
    return (uint8_t)(ohci_regs->HcRhDescriptorA & OHCI_RHDA_NDP_MASK);
}

int
IsDeviceLowSpeed(
POHCI_MEM HBAMem
){

    POHCI_ENDPOINT_DESCRIPTOR Ed = (POHCI_ENDPOINT_DESCRIPTOR)(uint64_t)HBAMem->HcControlHeadED;
    if(Ed == 0x00){
        LouPrint("No Controll Endpoint Descriptor Found\n");
        return -1;
    }

    uint32_t edWord0 = Ed->EDWord0;
    return (edWord0 & LOW_SPEED_MASK) ? 1 : 0;
}

bool
ResetOhciDevice(
    POHCI_MEM OHCIMem
){
    //Set a timer in ms that is divised by 100ms
    //to compinsate for the sleep timer
    uint64_t TimeOut = 2000/100;

    //Send the reset command by flipping the reset bit
    OHCIMem->HcCommandStatus |= HcReset; 

    //wait until either the bit flips back to 0
    //or time out reaches 0 and if 0 return false
    //else return true
    while(TimeOut >= 0){
        if(OHCIMem->HcCommandStatus & HcReset){
            sleep(100);
            TimeOut--;
        }
        else{
            return true;
        }
    }
    return false;
}

void*
CreateFrameLists(
POHCI_MEM OHCIMem,
TransferType TType
){

    UNUSED uint32_t NumberOfFrames = (OHCIMem->HcRhDescriptorA >> 2) & 0x3F;

    if(TType == ControlTransfer){

        if(IsDeviceLowSpeed(OHCIMem)){
            return LouMallocEx(NumberOfFrames * 8, 4096);
        }
        else{
            return LouMallocEx(NumberOfFrames * 64 , 4096);
        }

    }
    else if(TType == BulkTransfer){

        if(!IsDeviceLowSpeed(OHCIMem)){
            return LouMallocEx(NumberOfFrames * 64, 4096);
        }
        else{
            return 0x00;
        }

    }
    else if(TType == InterruptTransfer){

        if(IsDeviceLowSpeed(OHCIMem)){
            return LouMallocEx(NumberOfFrames * 8, 4096);
        }
        else{
            return LouMallocEx(NumberOfFrames * 64, 4096);
        }

    }
    else if(TType == RealTimeTransfer){

        if(IsDeviceLowSpeed(OHCIMem)){
            return LouMallocEx(NumberOfFrames * 1023, 4096);
        }
        else{
            return 0x00;
        }

        return 0x00;
    }

    return 0x00;
}


void 
EnableOHCIInterrupts(
POHCI_MEM OHCIMem,
uint32_t InterruptFlags
){
    OHCIMem->HcInterruptEnable = InterruptFlags;
}

void 
SetOHCIControl(
POHCI_MEM regs, 
uint32_t controlBits, 
uint32_t operationalState
) {
    // Clear the control bits and functional state bits
    regs->HcControl &= ~(OHCI_CTRL_CBSR | OHCI_CTRL_HCFS);

    // Set the control bits and functional state
    regs->HcControl |= (controlBits & (OHCI_CTRL_PLE | OHCI_CTRL_IE | OHCI_CTRL_CLE | OHCI_CTRL_BLE | OHCI_CTRL_IR | OHCI_CTRL_RWC | OHCI_CTRL_RWE));
    regs->HcControl |= operationalState;
}

void 
InitializeOHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
){
    LouPrint(LOU_OHCI_DRIVER_ENTRY_STRING);
    LouPrint("Initializing OHCI Controller\n");
    
    //request OHCI Memory Virtual Address
    POHCI_MEM OHCIMem = (POHCI_MEM)LouKeHalGetPciVirtualBaseAddress(PciConfig, 0);
    //LouPrint("OhciMem Address:%d\n", OHCIMem);

    if(!ResetOhciDevice(OHCIMem)){
        LouPrint("Could Not Reset Controller\n");
        LouFree((RAMADD)OHCIMem);
        LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_FAILURE);
        return;
    }
        
    LouPrint("OHCI Host Controller Successfully Reset : Enableing Interrupts\n");
  
    EnableOHCIInterrupts(
        OHCIMem,
        OHCI_INTR_WDH | OHCI_INTR_SF | OHCI_INTR_RHSC
    );

    SetOHCIControl(OHCIMem, OHCI_CTRL_PLE | OHCI_CTRL_CLE | OHCI_CTRL_BLE, OHCI_HCFS_USBOPERATIONAL);
    //LouMallocEx Will Garentee Identity map by alignment
    HCCA* HcHCCA = (HCCA*)LouMallocEx(sizeof(HCCA),256);//ensures alignment by 256

    if((uint64_t)HcHCCA > (4ULL * GIGABYTE)){
        LouPrint("Allocation cannot meet 32 bit requirement\n");
        LouFree((RAMADD)HcHCCA);
        LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_FAILURE);
        return;
    }

    OHCIMem->HcHCCA = (uint32_t)(uint64_t)HcHCCA;

    uint8_t numPorts = OHCI_GetPortNum(OHCIMem);

    LouPrint("Number Of Supported Ports:%d\n",numPorts);
    for (int i = 0; i < numPorts; i++) {
        if (OHCIMem->HcRhPortStatus[i] & OHCI_RHPS_CCS) {
            // Device is connected to port i
            LOUSTATUS ReadStatus = STATUS_SUCCESS;
            LouPrint("Device On Port:%d\n",i);
            UNUSED OHCI_SETUP_PACKET Setup;
            Setup.BmRequestType = 0x80;
            Setup.BRequest = 0x06;
            Setup.WValue = 0x0100;
            Setup.WIndex = 0x0000;
            Setup.WLength = 64;
            POHCI_DEVICE_DESCRIPTOR Descriptor = (POHCI_DEVICE_DESCRIPTOR)LouMallocEx(64,16);
            ReadStatus = OhciControlTransfer(OHCIMem, i, &Setup, (void*)Descriptor, 64);
            
            if(!NT_SUCCESS(ReadStatus)){
                LouPrint("Unable To Read Device\n");
            }

            LouPrint("Device Class:%h\n", Descriptor->BDeviceClass);

            if(Descriptor->BDeviceClass == 0x09){
                //hub
                IsOHCIHub(PDEV, PciConfig,(void*)OHCIMem, true, i);
            }
            else if(Descriptor->BDeviceClass == 0x00){
                //
            }
            else{
                IsOHCIFunction(PDEV, PciConfig,(void*)OHCIMem, true, i);
            }

            LouFree((RAMADD)Descriptor);
        }else{
            //else here for a compiler bug
        }
    }
    LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_SUCCESS);
    //while(1);
}