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
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
){
    LouPrint(XHCI_DRIVER_ENTRY_STRING);
    LouPrint("Initializing XHCI Controller\n");

    while(1);
    LouPrint(XHCI_DRIVER_EXIT_SUCCESS_STRING);

}