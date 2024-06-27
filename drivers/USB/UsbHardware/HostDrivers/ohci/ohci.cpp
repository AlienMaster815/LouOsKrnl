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
    uint32_t HcRhPortStatus[];
}OHCI_MEM, * POHCI_MEM;

typedef uint32_t HcRhPortStatus;

typedef struct __attribute__((packed)) _OHCI_ENDPOINT_DESCRIPTOR{
    uint32_t EDWord0;      // Endpoint descriptor first word
    uint32_t TailP;        // Tail pointer
    uint32_t HeadP;        // Head pointer (Contains Halted and ToggleCarry)
    uint32_t NextED;       // Next Endpoint Descriptor
}OHCI_ENDPOINT_DESCRIPTOR, * POHCI_ENDPOINT_DESCRIPTOR;

typedef struct __attribute__((packed)) _OHCI_TRANSFER_DESCRIPTORS{
    uint32_t Control;
    uint32_t FirstByteAddress;
    uint32_t NextTDAddress;
    uint32_t LastByteAddress;
}OHCI_TRANSFER_DESCRIPTORS, * POHCI_TRANSFER_DESCRIPTORS;

#define HCCA_SIZE 256
#define NUM_INTERRUPTS 32

typedef struct {
    uint32_t interruptTable[NUM_INTERRUPTS]; // Pointers to Interrupt Transfer Descriptors
    uint16_t frameNumber;                    // Current USB frame number
    uint16_t pad1;                           // Padding to maintain alignment
    uint32_t doneHead;                       // Pointer to the done head for completed transfers
    uint8_t reserved[HCCA_SIZE - (NUM_INTERRUPTS * sizeof(uint32_t)) - sizeof(uint16_t) - sizeof(uint16_t) - sizeof(uint32_t)];
} HCCA;

//controll register variables
#define HcReset (1 << 0)
#define HCCBSR(i) ((i) << 1)    //HcControlControlBulkServiceRatio
#define HCPLE (1 << 6)          //HcControlPeriodicListEnable
#define HCSE (1 << 7)           //HcControlIsochronousEnable
#define HCCLE (1 << 8)          //HcControlControlListEnable
#define HCBLE (1 << 9)          //HcControlBulkListEnable
#define HCHCFS (i) ((i) << 10)  //HcControlHostControllerFunctionalState
//Status register variables
#define HCIS (1 << 0)           //HcInterruptStatus (Bit 0): Indicates an interrupt event has occurred.
#define HHCR (1 << 1)           //HcHostControllerReset (Bit 1): Indicates the host controller reset status.
#define HCLS (1 << 2)           //HcControlListFilled (Bit 2): Indicates whether the control list is filled.
#define HCBLF (1 << 3)          //HcBulkListFilled (Bit 3): Indicates whether the bulk list is filled.
#define HCOSHR (1 << 31)        //HcOwnershipChangeRequest (Bit 31): Requests ownership change for the host controller.
//FrameInterval Register
#define HCFIFI (i) ((i) << 0)   //HcFmIntervalFrameInterval (Bits 15-0): Defines the interval between frame starts.
#define HCFIFSLDP(i)((i) << 16) //HcFmIntervalFSLargestDataPacket (Bits 31-16): Maximum data packet size for Full-Speed communication.
//Port Status Registers
#define HCRPSCCS (1 << 0)       //HcRhPortStatusCurrentConnectStatus (Bit 0): Indicates the current connect status of the port.
#define HCRPSPESC (1 << 1)      //HcRhPortStatusPortEnableStatusChange (Bit 1): Indicates a change in the port enable status.
#define HCRPSPEC (1 << 2)       //HcRhPortStatusPortEnableControl (Bit 2): Controls the port enable status.
#define LOW_SPEED_MASK (1 << 13) 

#define OHCI_INTR_SO (1 << 0)  // Scheduling Overrun
#define OHCI_INTR_WDH (1 << 1) // Writeback Done Head
#define OHCI_INTR_SF (1 << 2)  // Start of Frame
#define OHCI_INTR_RD (1 << 3)  // Resume Detected
#define OHCI_INTR_UE (1 << 4)  // Unrecoverable Error
#define OHCI_INTR_FNO (1 << 5) // Frame Number Overflow
#define OHCI_INTR_RHSC (1 << 6) // Root Hub Status Change
#define OHCI_INTR_OC (1 << 30) // Ownership Change

// Operational Control bits
#define OHCI_CTRL_CBSR (0x3)         // Control/Bulk Service Ratio
#define OHCI_CTRL_PLE (1 << 2)       // Periodic List Enable
#define OHCI_CTRL_IE (1 << 3)        // Isochronous Enable
#define OHCI_CTRL_CLE (1 << 4)       // Control List Enable
#define OHCI_CTRL_BLE (1 << 5)       // Bulk List Enable
#define OHCI_CTRL_HCFS (0x3 << 6)    // Host Controller Functional State
#define OHCI_CTRL_IR (1 << 8)        // Interrupt Routing
#define OHCI_CTRL_RWC (1 << 9)       // Remote Wakeup Connected
#define OHCI_CTRL_RWE (1 << 10)      // Remote Wakeup Enable

// Functional State Encoding
#define OHCI_HCFS_USBRESET (0x00 << 6)
#define OHCI_HCFS_USBRESUME (0x01 << 6)
#define OHCI_HCFS_USBSUSPEND (0x02 << 6)
#define OHCI_HCFS_USBOPERATIONAL (0x03 << 6)

#define OHCI_RHPS_CCS 0x00000001  // Mask for the Current Connect Status bit

#define OHCI_RHDA_NDP_MASK 0x000000FF  // Mask for the number of downstream ports

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
P_PCI_DEVICE_OBJECT PDEV
){
    LouPrint(LOU_OHCI_DRIVER_ENTRY_STRING);
    LouPrint("Initializing OHCI Controller\n");
    BaseAddressRegister BARS(PDEV);

    POHCI_MEM OHCIMem = (POHCI_MEM)BARS.address[0];

    void* OHCIVAddress = LouMalloc(KILOBYTE_PAGE);

    LouMapAddress((uint64_t)OHCIMem, (uint64_t)OHCIVAddress, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);

    OHCIMem = (POHCI_MEM)OHCIVAddress;

    if(!ResetOhciDevice(OHCIMem)){
        LouPrint("Could Not Reset Controller\n");
        LouFree((RAMADD)OHCIMem, KILOBYTE_PAGE);
        LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_FAILURE);
        return;
    }

    EnableOHCIInterrupts(
        OHCIMem,
        OHCI_INTR_WDH | OHCI_INTR_SF | OHCI_INTR_RHSC
    );


    SetOHCIControl(OHCIMem, OHCI_CTRL_PLE | OHCI_CTRL_CLE | OHCI_CTRL_BLE, OHCI_HCFS_USBOPERATIONAL);

    HCCA* HcHCCA = (HCCA*)LouMallocEx(sizeof(HCCA),256);//ensures alignment by 256
    if((uint64_t)HcHCCA > (4ULL * GIGABYTE)){
        LouPrint("Allocation cannot meet 32 bit requirement\n");
        LouFree((RAMADD)HcHCCA,sizeof(HCCA));
        LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_FAILURE);
        return;
    }

    OHCIMem->HcHCCA = (uint32_t)(uint64_t)HcHCCA;

    memset(HcHCCA, 0, sizeof(HcHCCA));

    uint8_t numPorts = OHCI_GetPortNum(OHCIMem);

    LouPrint("Number Of Supported Ports:%d\n",numPorts);

    for (int i = 0; i < numPorts; i++) {
        if (OHCIMem->HcRhPortStatus[i] & OHCI_RHPS_CCS) {
            // Device is connected to port i
            LouPrint("Device On Port:%d\n",i);
        }
    }

    LouPrint(LOU_OHCI_DRIVER_EXIT_STRING_SUCCESS);
}