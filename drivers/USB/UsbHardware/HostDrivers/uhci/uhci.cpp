/*
== Tyler Grenier 6/25/23
== UHCI Driver 1.01
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


typedef struct __attribute__((packed)) _UHCI_MEM{
    uint16_t USBCMD;
    uint16_t USBSTS;
    uint16_t USBINTR;
    uint16_t FRNUM;
    uint32_t FRBASEADD;
    uint8_t SOFMOD;
    uint8_t padding[3];
    uint16_t PORTSC1;
    uint16_t PORTSC2;
}UHCI_MEM, *PUHCI_MEM;

typedef struct __attribute__((packed)) _UHCI_COMMAND_REGISTER{
    uint8_t Run : 1;
    uint8_t HCR : 1;
    uint8_t GlobalReset : 1;
    uint8_t GLobalSusspend : 1;
    uint8_t GlobalResume : 1;
    uint8_t SoftwareDebug : 1;
    uint8_t Configure : 1;
    uint8_t MaxPacket : 1;
}UHCI_COMMAND_REGISTER,* PUHCI_COMMAND_REGISTER;

typedef struct __attribute__((packed)) _UHCI_STATUS_REGISTER{
    uint8_t Interrupt : 1;
    uint8_t ErrorInterrupt : 1;
    uint8_t ResumeDetected : 1;
    uint8_t SystemError : 1; 
    uint8_t ProcessError : 1;
    uint8_t Halted : 1;
}UHCI_STATUS_REGISTER, * PUHCI_STATUS_REGISTER;

typedef struct __attribute__((packed)) _UHCI_INTERRUPT_ENABLE_REGISTER{
    uint8_t TimerourCRC : 1;
    uint8_t Resume : 1;
    uint8_t Complete : 1;
    uint8_t ShortPacket : 1;
}UHCI_INTERRUPT_ENABLE_REGISTER, * PUHCI_INTERRUPT_ENABLE_REGISTER;

typedef struct __attribute__((packed)) _UHCI_PORT_CONTROL_REGISTER{
    uint16_t Connected : 1;
    uint16_t ConnectedChanged : 1;
    uint16_t PortEnable : 1;
    uint16_t PortEnableChanged : 1;
    uint16_t LineStatus : 2;
    uint16_t ResumeDetected : 1; 
    uint16_t Reserved : 1;
    uint16_t LowSpeed : 1;
    uint16_t Reset : 1;
    uint16_t Reserved2 : 2;
    uint16_t Suspend : 1;
}UHCI_PORT_CONTROL_REGISTER, * PUHCI_PORT_CONTROL_REGISTER;

typedef struct __attribute__((packed)) _UHCI_FRAME_LIST_ENTRY{
    uint32_t FrameValid : 1;
    uint32_t AddressPoint : 1;
    uint32_t Reserved : 2;
    uint32_t FirstDescriptorAddress : 28;
}UHCI_FRAME_LIST_ENTRY, * PUHCI_FRAME_LIST_ENTRY;

typedef struct __attribute__((packed)) _UHCI_DESRIPTOR{
    uint32_t NextDescriptor;
    uint32_t Status;
    uint32_t PacketHeader;
    uint32_t BufferAddress;
    uint32_t SystemUse;
}UHCI_DESCRIPTOR, * PUHCI_DESCRIPTOR;

typedef struct __attribute__((packed)) _UHCI_DESCRIPTOR_STATUS{
    uint32_t ActuralLength : 10;
    uint32_t reserved : 6;
    uint32_t BitStuffError : 1;
    uint32_t TimeoutCRC : 1;
    uint32_t NON_ACKNOLEDGE : 1;
    uint32_t BABBLE_DETECTED : 1;
    uint32_t DataBufferError : 1;
    uint32_t Stalled : 1;
    uint32_t Active : 1;
    uint32_t InterruptOnCopmpletion;
    uint32_t IsInsyncronise : 1;
    uint32_t LowSpeed : 1;
    uint32_t ErrorCounter : 2;
    uint32_t ShortPacketDetected : 1; 
}UHCI_DESCRIPTOR_STATUS, * PUHCI_DESCRIPTOR_STATUS;

typedef struct __attribute__((packed)) _UHCI_DESRIPTOR_HEADER{
    uint32_t PacketType : 8;
    uint32_t Device : 7;
    uint32_t Endpoint : 4;
    uint32_t DataToggle : 1;
    uint32_t Reserved : 1;
    uint32_t MaximumLength : 10;
}UHCI_DESRIPTOR_HEADER, * PUHCI_DESRIPTOR_HEADER;

void 
InitializeUHCIController(
P_PCI_DEVICE_OBJECT PDEV
){

}