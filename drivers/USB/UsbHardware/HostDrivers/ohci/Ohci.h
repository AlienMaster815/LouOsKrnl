#ifndef _OHCI_H
#define _OHCI_H

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

void IsOHCIHub(
    P_PCI_DEVICE_OBJECT PDEV,
    PPCI_COMMON_CONFIG PciConfig,
    void* MasterDeviceMemorySpace,
    bool MasterIsHost,
    uint8_t Port
);

void IsOHCIFunction(
    P_PCI_DEVICE_OBJECT PDEV,
    PPCI_COMMON_CONFIG PciConfig,
    void* MasterDeviceMemorySpace,
    bool MasterIsHost,
    uint8_t Port
);

typedef struct __attribute__((packed)) _OHCI_SETUP_PACKET{
    uint8_t BmRequestType;
    uint8_t BRequest;
    uint16_t WValue;
    uint16_t WIndex;
    uint16_t WLength;
}OHCI_SETUP_PACKET, * POHCI_SETUP_PACKET;
 
 typedef struct __attribute__((packed)) _OHCI_DEVICE_DESCRIPTOR{
    uint8_t BLength;
    uint8_t BDescriptorLength;
    uint16_t BcdUSB;
    uint8_t BDeviceClass;
    uint8_t BDeviceSubClass;
    uint8_t BDeviceProtocol;
    uint8_t BMaxPAcketSize0;
    uint16_t VendorID;
    uint16_t ProductID;
    uint16_t BcdDevice;
    uint8_t IManufacturer;
    uint8_t IProduct;
    uint8_t ISerialNumber;
    uint8_t BNumConfigurations;
 }OHCI_DEVICE_DESCRIPTOR, * POHCI_DEVICE_DESCRIPTOR;

LOUSTATUS OhciControlTransfer(
    POHCI_MEM OhciMem,
    int PortNumber,
    POHCI_SETUP_PACKET Packet,
    void* PacketBuffer,
    int PacketLength
);

typedef struct __attribute__((packed)) _OHCI_ED{
    uint32_t Flags;
    uint32_t TailTD;
    uint32_t HeadTD;
    uint32_t NextED;
}OHCI_ED, * POHCI_ED;

typedef struct __attribute__((packed)) _OHCI_TD{
    uint32_t CBP;
    uint32_t NextTD;
    uint32_t BE;
    uint32_t Flags;
}OHCI_TD, * POHCI_TD;

#endif //OHCI H