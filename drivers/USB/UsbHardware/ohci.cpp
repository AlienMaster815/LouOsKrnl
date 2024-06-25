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

#define LOU_OHCI_DRIVER_ENTRY_STRING "\nLousine Kernel Internal OHCI.SYS Driver 1.01\n"
#define LOU_OHCI_DRIVER_EXIT_STRING_SUCCESS "Done Initializing OHCI Controller Exiting Process\n\n"
#define LOU_OHCI_DRIVER_EXIT_STRING_FAILURE "OHCI Device Could Not Be Initialized Exiting Process\n"

typedef struct __attribute__((packed)) _OHCI_MEM{
    uint32_t HcRevision;
    uint32_t HcControl;
    uint32_t HcCommandStatus;
    uint32_t HcInterruptStatus;
    uint32_t HcInterruptEnable;
    uint32_t HcInterruptDisable;
    uint32_t HcHCCA;
    uint32_t HcPeriodCurrentED;
    uint32_t HcControlHeadED;
    uint32_t HcControlCurrentED;
    uint32_t HcBulkHeadED;
    uint32_t HcBulkCurrentED;
    uint32_t HcDoneHead;
    uint32_t HcFmInterval;
    uint32_t HcFmRemaining;
    uint32_t HcFmNumber;
    uint32_t HcPeriodicStart;
    uint32_t HcLSThreshold;
    uint32_t HcRhDescriptorA;
    uint32_t HcRhDescriptorB;
    uint32_t HcRhStatus; 

}OHCI_MEM, * POHCI_MEM;

typedef uint32_t HcRhPortStatus;

typedef struct __attribute__((packed)) _OHCI_ENDPOINT_DESCRIPTOR{
    uint32_t Control;
    uint32_t TailTDAddress;
    uint32_t HeadTDAddress;
    uint32_t NextEDAddress;
}OHCI_ENDPOINT_DESCRIPTOR, * POHCI_ENDPOINT_DESCRIPTOR;

typedef struct __attribute__((packed)) _OHCI_TRANSFER_DESCRIPTORS{
    uint32_t Control;
    uint32_t FirstByteAddress;
    uint32_t NextTDAddress;
    uint32_t LastByteAddress;
}OHCI_TRANSFER_DESCRIPTORS, * POHCI_TRANSFER_DESCRIPTORS;

#define OHCI_HC_RESET 0x00000001
#define OHCI_CONTROL_MASK 0xFFFFCFF3
#define OHCI_HC_FUNCTIONAL_STATE_OPERATIONAL 0x00000080
#define OHCI_HC_INTERRUPT_ENABLE_UE 0x00000010
#define OHCI_HC_INTERRUPT_ENABLE_SOF 0x00000004
#define OHCI_HC_INTERRUPT_ENABLE_WDH 0x00000002


void 
InitializeOHCIController(
P_PCI_DEVICE_OBJECT PDEV
){
    LouPrint(LOU_OHCI_DRIVER_ENTRY_STRING);
    LouPrint("Initializing OHCI Controller\n");
    BaseAddressRegister BARS(PDEV);

    POHCI_MEM OHCIMem = (POHCI_MEM)BARS.address[0];

    void* OHCIVAddress = LouMalloc(KILOBYTE_PAGE);

    LouMapAddress((uint64_t)OHCIMem, (uint64_t)OHCIVAddress, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);

    OHCIMem = (POHCI_MEM)OHCIVAddress;

    OHCIMem->HcCommandStatus = OHCI_HC_RESET;   
    uint32_t TimeOut = 0;
    while (OHCIMem->HcCommandStatus & OHCI_HC_RESET){
        sleep(100);
        if(TimeOut == 0x200000){
            LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_FAILURE);
            //later we will get more in depth with this
            return;
        }
        else{
            TimeOut++;
        }
    }
    //controller is now reset
    LouPrint("OHCI Controller Successfully Reset\n");    

    LouPrint("Initializing OHCI Controll Register\n");
    OHCIMem->HcControl = (OHCIMem->HcControl & ~OHCI_CONTROL_MASK) | OHCI_HC_FUNCTIONAL_STATE_OPERATIONAL;
    LouPrint("OHCI Controll Register Initialized\n");

    LouPrint("Setting Up Periodic Start Register\n");
    OHCIMem->HcPeriodicStart = 0x3E80;
    LouPrint("Done Setting Periodic Start Register\n");

    LouPrint("Enableing OHCI Interrupts\n");
    OHCIMem->HcInterruptEnable = OHCI_HC_INTERRUPT_ENABLE_SOF | OHCI_HC_INTERRUPT_ENABLE_WDH | OHCI_HC_INTERRUPT_ENABLE_UE;
    LouPrint("Done Enabling OHCI Interrupts\n");

    LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_SUCCESS);
}