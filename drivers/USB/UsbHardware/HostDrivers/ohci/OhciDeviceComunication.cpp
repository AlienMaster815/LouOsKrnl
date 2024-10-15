#include <LouDDK.h>
#include <NtAPI.h>
#include "Ohci.h"

#define OHCI_TD_STACK_SETUP  0
#define OHCI_TD_STACK_DATA   1
#define OHCI_TD_STACK_STATUS 2



LOUSTATUS OhciControlTransfer(
    POHCI_MEM OhciMem,
    int PortNumber,  // Specific port number
    POHCI_SETUP_PACKET Packet,
    void* PacketBuffer,
    int PacketLength,
    POHCI_TRANSFER_FLAG_DIRECTORY TFlags
){
    LOUSTATUS Status = STATUS_SUCCESS;

    LouPrint("Sending Control Trnasfer To Port:%d\n", PortNumber);
    // Step 3: Create and Configure Endpoint Descriptor
    POHCI_ED ControlEd = (POHCI_ED)LouMallocEx(sizeof(OHCI_ED), 16); // Allocation aligned by 16 bytes

    ControlEd->Flags  = TFlags->EdFlags;  // You may need to set device address, direction, etc., here
    ControlEd->TailTD = 0;
    ControlEd->HeadTD = 0;
    ControlEd->NextED = 0;

    // Step 4: Create and configure Transfer Descriptors (TDs)
    POHCI_TD OhciTdStack = (POHCI_TD)LouMallocEx(sizeof(OHCI_TD) * 3, 16); // Structure aligned by 16 bytes
    
    // Setup TD
    OhciTdStack[OHCI_TD_STACK_SETUP].CBP = (uint32_t)(uintptr_t)Packet;
    OhciTdStack[OHCI_TD_STACK_SETUP].BE = (uint32_t)(uintptr_t)((uint8_t*)Packet + sizeof(OHCI_SETUP_PACKET) - 1);
    OhciTdStack[OHCI_TD_STACK_SETUP].Flags = TFlags->TdStackSetupFlags;  // Setup stage flags (set PID to Setup)
    OhciTdStack[OHCI_TD_STACK_SETUP].NextTD = (uint32_t)(uintptr_t)&OhciTdStack[OHCI_TD_STACK_DATA];
    
    // Data TD (optional, only if PacketBuffer and PacketLength are valid)
    if ((PacketBuffer) && (PacketLength)) {
        OhciTdStack[OHCI_TD_STACK_DATA].CBP = (uint32_t)(uintptr_t)PacketBuffer; 
        OhciTdStack[OHCI_TD_STACK_DATA].BE = (uint32_t)(uintptr_t)((uint8_t*)PacketBuffer + PacketLength - 1);  // Use PacketLength
        OhciTdStack[OHCI_TD_STACK_DATA].Flags = TFlags->TdStackDataFlags;  // Direction (OUT for host-to-device, IN for device-to-host)
        OhciTdStack[OHCI_TD_STACK_DATA].NextTD = (uint32_t)(uintptr_t)&OhciTdStack[OHCI_TD_STACK_STATUS];  // Correctly link to Status TD
    }

    // Status TD
    OhciTdStack[OHCI_TD_STACK_STATUS].CBP = 0;
    OhciTdStack[OHCI_TD_STACK_STATUS].BE = 0;
    OhciTdStack[OHCI_TD_STACK_STATUS].Flags = TFlags->TdStackStatusFlags;  // Status stage flags (set PID to IN or OUT)
    OhciTdStack[OHCI_TD_STACK_STATUS].NextTD = 0;  

    // Step 5: Add ED to control list and notify OHCI controller
    OhciMem->HcControlHeadED = (uint32_t)(uintptr_t)ControlEd;
    OhciMem->HcControl |= 0x00000002;  // Enable ControlListEnable
    OhciMem->HcCommandStatus |= 0x00000002;  // Indicate that the control list is filled

    uint16_t TimeOut = 1000;

    while ((!(OhciMem->HcControl & 0x00000080)) && (TimeOut > 0)) {
        OhciMem->HcControl |= 0x00000080;  // Set HC Operational
        sleep(1);  // Wait for 1 ms
        TimeOut--;
    }

    // Step 7: Poll for completion by checking the condition code in the Status TD
    if(TimeOut){
        TimeOut = 1000;
    }else Status = STATUS_UNSUCCESSFUL;
    while ((OhciTdStack[OHCI_TD_STACK_STATUS].Flags & 0xF000) == 0xF000) {
        sleep(1);  // Wait for 1 ms
        TimeOut--;
        if (TimeOut == 0 || (OhciTdStack[OHCI_TD_STACK_STATUS].Flags & 0xC000) != 0x4000) {
            Status = STATUS_UNSUCCESSFUL;
            break;
        }
    }

    if (Status == (LOUSTATUS)STATUS_UNSUCCESSFUL) { //casting for a weired warning
        OhciMem->HcControl &= ~0x00000002;  // Clear ControlListEnable
        OhciMem->HcCommandStatus &= ~0x00000002;  // Clear ControlListFilled
    }


    // Step 9: Free allocated resources
    LouFree((RAMADD)ControlEd);
    LouFree((RAMADD)OhciTdStack);

    return Status;
}