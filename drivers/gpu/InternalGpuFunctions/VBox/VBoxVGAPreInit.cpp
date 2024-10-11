#include "VBoxVGA.h"
#define VBE_DISPI_INDEX_ENABLE    0x04 


void PreVBoxVGAInit(P_PCI_DEVICE_OBJECT PDEV){
    // Set the index to the enable register
    outw(VBE_DISPI_INDEX_ENABLE, VBE_DISPI_IOPORT_INDEX);

    LouPrint("Performing Early VirtualBox VGA Initialization\n");

    //// Disable the adapter (this is effectively a reset)
    outw(VBE_DISPI_IOPORT_DATA, VBE_DISPI_DISABLED);

    // Small delay to ensure the reset takes effect
    sleep(10);

    // Enable the adapter
    outw(VBE_DISPI_IOPORT_DATA, VBE_DISPI_ENABLED | VBE_DISPI_LFB_ENABLED);
    LouPrint("Done With Early Initialization\n");
}
