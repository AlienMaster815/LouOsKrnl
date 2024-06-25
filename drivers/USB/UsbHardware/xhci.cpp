/*
== Tyler Grenier 6/25/23
== XHCI Driver 1.01
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

typedef struct __attribute__((packed)) _XHCI_CAPABILITIES{
    uint8_t CRL;
    uint8_t RSV;
    uint16_t HCIVERION;
    uint32_t HCSPARAMS1;
    uint32_t HCSPARAMS2;
    uint32_t HCSPARAMS3;
    uint32_t HCCPARAMS1;
    uint32_t DBOFF;
    uint32_t RTSOFF;
    uint32_t HCCPARMS2;
}XHCI_CAPABILITIES, * PXHCI_CAPABILITIES;

typedef struct __attribute__((packed)) _XHCI_OPERATION_REGISTER{
    uint32_t USBCMD;
    uint32_t USBSTS;
    uint64_t PageSize;
    uint32_t DNCTRL;
    uint64_t CRCRLow;
    uint64_t CRCRHigh;
    uint64_t DCBAAP;
    uint32_t CONFIG; 
}XHCI_OPERATION_REGISTER, * PXHCI_OPERATION_REGISTER;

typedef struct __attribute__((packed)) _XHCI_PORT_REGISTER{
    uint32_t PORTSC;
    uint32_t PORTPMSC;
    uint32_t PORTLI;
}XHCI_PORT_REGISTER, * PXHCI_PORT_REGISTER;

typedef struct {
    uint64_t baseAddress;
    uint32_t ringSegmentSize;
    uint32_t reserved;
} EventRingSegmentTableEntry;

typedef struct {
    uint64_t pointer;
    uint32_t transferLength;
    uint32_t completionCode;
} EventTRB;

typedef struct {
    uint64_t parameter;
    uint32_t status;
    uint32_t control;
} CommandTRB;

#include <stdint.h>

typedef struct {
    volatile uint32_t IMAN;        // Interrupt Management Register
    volatile uint32_t IMOD;        // Interrupt Moderation Register
    volatile uint32_t ERSTSZ;      // Event Ring Segment Table Size Register
    volatile uint32_t Reserved1;   // Padding or Reserved
    volatile uint64_t ERSTBA;      // Event Ring Segment Table Base Address
    volatile uint64_t ERDP;        // Event Ring Dequeue Pointer
} __attribute__((packed)) InterrupterRegister;

typedef struct {
    volatile uint32_t MFINDEX;     // Microframe Index
    uint32_t Reserved[7];          // Padding to align to 32 bytes
    InterrupterRegister Interrupter[]; // Array of Interrupter Registers
} __attribute__((packed)) xHCI_RuntimeRegisters;

#define XHCI_RESET_TIMEOUT 500/100  // Reset timeout in milliseconds
#define USB_MAX_DEVICES 127

#define XHCI_DRIVER_ENTRY_STRING "\nLousine Kernel XHCI.SYS Driver Version 1.01\n"
#define XHCI_DRIVER_EXIT_SUCCESS_STRING "XHCI Device Successfully Initialized Exiting Process\n\n"
#define XHCI_DRIVER_EXIT_FAILURE_STRING "XHCI Could Not Initialize Device... Exiting Process\n"
void
InitializeXHCIController(
P_PCI_DEVICE_OBJECT PDEV
){
    LouPrint(XHCI_DRIVER_ENTRY_STRING);
    LouPrint("Initializing XHCI Controller\n");
    BaseAddressRegister BARS(PDEV);
    PXHCI_CAPABILITIES XHCIAddress = (PXHCI_CAPABILITIES)BARS.address[0];
    void* XHCIVAddress = LouMalloc(KILOBYTE_PAGE);
    LouMapAddress((uint64_t)XHCIAddress, (uint64_t)XHCIVAddress,KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
    XHCIAddress = (PXHCI_CAPABILITIES)XHCIVAddress;

    LouPrint("Reseting XHCI Controller\n");
    PXHCI_OPERATION_REGISTER Operational = (PXHCI_OPERATION_REGISTER)((uint64_t)XHCIAddress + (uint64_t)XHCIAddress->CRL);
    Operational->USBSTS |= (1 << 1);  // USBSTS reset bit position

    // Wait for the reset bit to be cleared (controller to complete reset)
    int timeout = XHCI_RESET_TIMEOUT;
    while ((Operational->USBSTS & (1 << 1)) && timeout--) {
        sleep(100);  // Sleep 100 ms
    }
    if (timeout <= 0) {
        LouPrint(XHCI_DRIVER_EXIT_FAILURE_STRING);
        return;
    }
    LouPrint("Done Reseting XHCI Controller\n");
    LouPrint("Allocating Memory For Command Ring\n");
    // Allocate memory for Command Ring, aligned to 64 bytes    
    Operational->CRCRLow  = (uint64_t)LouMallocAlligned(sizeof(CommandTRB) * 256, 64);
    uint64_t eventRingSegTablePhysical = (uint64_t)LouMallocAlligned(sizeof(EventRingSegmentTableEntry), 64);
    uint64_t eventRingPhysical = (uint64_t)LouMallocAlligned(sizeof(EventTRB) * 256, 64);
    LouPrint("Allocation Complete\n");

    LouPrint("Allocating Memory For Event Ring\n");
    EventRingSegmentTableEntry* entry = (EventRingSegmentTableEntry*)eventRingSegTablePhysical;
    entry->baseAddress = eventRingPhysical;
    entry->ringSegmentSize = 256;
    LouPrint("Allocation Complete\n");

    LouPrint("Setting Up Runtime Register And Interrupts\n");
    xHCI_RuntimeRegisters* Runtime = (xHCI_RuntimeRegisters*)((uint64_t)XHCIAddress + (uint64_t)XHCIAddress->RTSOFF);
    
    Runtime->Interrupter->ERSTBA = (uint64_t)eventRingSegTablePhysical;
    Runtime->Interrupter->ERDP = (uint64_t)eventRingPhysical;

    Operational->DCBAAP = (uint64_t)LouMallocAlligned(sizeof(uint64_t) * USB_MAX_DEVICES, 64);
    LouPrint("Done With Runtime And Interrupts\n");

    LouPrint(XHCI_DRIVER_EXIT_SUCCESS_STRING);

}