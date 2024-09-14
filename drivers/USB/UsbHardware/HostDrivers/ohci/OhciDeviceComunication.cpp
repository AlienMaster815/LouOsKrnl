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
    int PacketLength
){
    LOUSTATUS Status = STATUS_SUCCESS;
    
    //skip check 1 i know this device is attatched

    // Step 2: Reset the port to ensure it's ready for communication
    OhciMem->HcRhPortStatus[PortNumber] = 0x00000100;  // Set the 'Port Reset' bit

    // Wait for reset to complete (100ms delay)
    sleep(100);

    // Clear the reset bit after the reset is complete
    OhciMem->HcRhPortStatus[PortNumber] = 0x00000010;  // Clear the 'Port Reset' bit

    // Step 3: Create and Configure Endpoint Descriptor
    POHCI_ED ControlEd = (POHCI_ED)LouMallocEx(sizeof(OHCI_ED), 16); // Allocation aligned by 16 bytes

    ControlEd->Flags  = 0;  // You may need to set device address, direction, etc., here
    ControlEd->TailTD = 0;
    ControlEd->HeadTD = 0;
    ControlEd->NextED = 0;

    // Step 4: Create and configure Transfer Descriptors (TDs)
    POHCI_TD OhciTdStack = (POHCI_TD)LouMallocEx(sizeof(OHCI_TD) * 3, 16); // Structure aligned by 16 bytes
    
    // Setup TD
    OhciTdStack[OHCI_TD_STACK_SETUP].CBP = (uint32_t)(uintptr_t)Packet;
    OhciTdStack[OHCI_TD_STACK_SETUP].BE = (uint32_t)(uintptr_t)((uint8_t*)Packet + sizeof(OHCI_SETUP_PACKET) - 1);
    OhciTdStack[OHCI_TD_STACK_SETUP].Flags = 0;  // Setup stage flags (set PID to Setup)
    OhciTdStack[OHCI_TD_STACK_SETUP].NextTD = (uint32_t)(uintptr_t)&OhciTdStack[OHCI_TD_STACK_DATA];
    
    // Data TD (optional, only if PacketBuffer and PacketLength are valid)
    if ((PacketBuffer) && (PacketLength)) {
        OhciTdStack[OHCI_TD_STACK_DATA].CBP = (uint32_t)(uintptr_t)PacketBuffer; 
        OhciTdStack[OHCI_TD_STACK_DATA].BE = (uint32_t)(uintptr_t)((uint8_t*)PacketBuffer + PacketLength - 1);  // Use PacketLength
        OhciTdStack[OHCI_TD_STACK_DATA].Flags = 0x00;  // Direction (OUT for host-to-device, IN for device-to-host)
        OhciTdStack[OHCI_TD_STACK_DATA].NextTD = (uint32_t)(uintptr_t)&OhciTdStack[OHCI_TD_STACK_STATUS];  // Correctly link to Status TD
    }

    // Status TD
    OhciTdStack[OHCI_TD_STACK_STATUS].CBP = 0;
    OhciTdStack[OHCI_TD_STACK_STATUS].BE = 0;
    OhciTdStack[OHCI_TD_STACK_STATUS].Flags = 0x02;  // Status stage flags (set PID to IN or OUT)
    OhciTdStack[OHCI_TD_STACK_STATUS].NextTD = 0;  

    // Step 5: Add ED to control list and notify OHCI controller
    OhciMem->HcControlHeadED = (uint32_t)(uintptr_t)ControlEd;
    OhciMem->HcControl |= 0x00000002;  // Enable ControlListEnable
    OhciMem->HcCommandStatus = 0x00000002;  // Set ControlListFilled

    // Step 6: Ensure the controller is running
    if (!(OhciMem->HcControl & 0x00000080)) {  // If the controller is not running
        OhciMem->HcControl |= 0x00000080;  // Set bit 7 (HC Operational) to start the controller
    }

    // Step 7: Poll for completion by checking the condition code in the Status TD
    uint16_t TimeOut = 1000;
    while ((OhciTdStack[OHCI_TD_STACK_STATUS].Flags & 0xF000) == 0xF000) {  // Wait for the Status TD to be accessed
        sleep(1);  // Sleep for 1ms
        TimeOut--;
        if (TimeOut == 0) {
            Status = STATUS_UNSUCCESSFUL;  // Timed out
            break;
        }
    }

    // Step 8: Check if the transfer succeeded
    if (OhciTdStack[OHCI_TD_STACK_STATUS].Flags & 0xF000) {  // Check condition code in the flags (bits 12-15)
        Status = STATUS_UNSUCCESSFUL;  // Transfer failed
    }

    // Step 9: Free allocated resources
    LouFree((RAMADD)ControlEd);
    LouFree((RAMADD)OhciTdStack);

    return Status;
}