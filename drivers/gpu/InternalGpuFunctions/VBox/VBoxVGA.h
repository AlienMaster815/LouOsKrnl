#ifndef _VBOX_VGA_H
#define _VBOX_VGA_H

#include <LouDDK.h>
#include <NtAPI.h>

#define VBE_DISPI_IOPORT_INDEX 0x01CE  // I/O port for setting the index register
#define VBE_DISPI_DISABLED 0x00  // Common value used to disable the adapter
#define VBE_DISPI_IOPORT_DATA 0x01CF  // I/O port for reading/writing data
#define VBE_DISPI_ENABLED 0x01  // Common value used to enable the adapter
#define VBE_DISPI_LFB_ENABLED 0x40  // Value to enable linear framebuffer mode

//#define VBE_DISPI_INDEX_XRES      0x01
//#define VBE_DISPI_INDEX_YRES      0x02
//#define VBE_DISPI_INDEX_BPP       0x03


void PreVBoxVGAInit(P_PCI_DEVICE_OBJECT PDEV);
void InitializeVirtualBoxVgaAdapter(P_PCI_DEVICE_OBJECT PDEV);


#endif