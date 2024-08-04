#include <LouDDK.h>

void InitializeVgaDevice(
	P_PCI_DEVICE_OBJECT PDEV
);

bool IsVGA(uint8_t bus,uint8_t slot,uint8_t function) {

	UNUSED PCI_DEVICE_OBJECT VGADev;

	VGADev.bus = bus;
	VGADev.slot = slot;
	VGADev.func = function;

	if(( LouKePciReadHeaderType(&VGADev) == 0)
	&&	((LouKePciReadClass(&VGADev) == 0 && LouKePciReadSubClass(&VGADev) == 1) ||
		(LouKePciReadClass(&VGADev) == 0x03 && LouKePciReadSubClass(&VGADev) == 0x00))
		){
		LouPrint("Found A VGA Controller\n");
		InitializeVgaDevice(
			&VGADev
		);
		return true;
	}
	return false;
}

UNUSED static uintptr_t VgaFrameBufferPointer = 0;

// Define VGA constants


#define SR_REGISTER					0x0000
#define ESR_REGISTER				0x0001
#define COLOR_COMPAREREGISTER		0x0002
#define DR_REGISTER					0x0003
#define RMS_REGISRER				0x0004
#define GM_REGISTER					0x0005
#define MG_REGISTER					0x0006
#define CDC_REGISTER				0x0007
#define BM_REGISTER					0x0008

#define VGA_AC_INDEX      0x3C0 //attribute
#define VGA_AC_WRITE      0x3C0
#define VGA_AC_READ       0x3C1
#define VGA_MISC_WRITE    0x3C2 //misc
#define VGA_SEQ_INDEX     0x3C4 //sequence
#define VGA_SEQ_DATA      0x3C5
#define VGA_DAC_READ_INDEX 0x3C7 //DataPort
#define VGA_DAC_WRITE_INDEX 0x3C8
#define VGA_DAC_DATA      0x3C9
#define VGA_MISC_READ     0x3CC
#define VGA_GC_INDEX      0x3CE
#define VGA_GC_DATA       0x3CF
#define VGA_CRTC_INDEX    0x3D4
#define VGA_CRTC_DATA     0x3D5
#define VGA_INSTAT_READ   0x3DA

#define VGA_SR_REGISTER_PLANE_VALUES 0xF

// Function to write to a VGA Graphics Controller register
static inline void write_vga_gc_register(uint8_t index, uint8_t value) {
    // Set the index of the GC register
    outb(VGA_GC_INDEX, index);
    // Write the value to the GC data register
    outb(VGA_GC_DATA, value);
}

// Corrected function to read from a VGA register
static inline uint8_t read_vga_gc_register(uint8_t index) {
    // Set the index of the GC register
    outb(VGA_GC_INDEX, index);
    // Read the data from the GC data register
    return inb(VGA_GC_DATA);
}


// Function to initialize the VGA device
void InitializeVgaDevice(P_PCI_DEVICE_OBJECT PDEV) {	

}

// Function to put a pixel on the screen in VGA mode 12h
LOUDDK_API_ENTRY void LouKePutPixelVga(int x, int y, uint8_t r, uint8_t g, uint8_t b) {



}

