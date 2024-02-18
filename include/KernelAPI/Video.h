#ifndef _API_VIDEO_H
#define _API_VIDEO_H

//VGA Information STUB
#define VideoGraphicsArray 0

#define NO_GPUID 0

//INTEGRATED GRAND STUB
#define INTEGRATED_DEVICE 1

	//INTEGRATED AMD STUB
	#define AMD_INTEGRATED_GPU 1

	//INTEGRATED INTEL STUB
	#define INTEL_INTEGRATED_GPU 0	

//ENDO OF INTEGRATED GRAND STUB


//PCI GRAND STUB
#define PCI_DEVICE 2
	//NVIDIA PCI STUB
	#define NVIDIA_PCI_GPU 2

	//AMD PCI STUB
	#define AMD_PCI_GPU 1

	//INTEL PCI STUB
	#define INTEL_PCI_GPU 0

//END OF PCI GRAND STUB

#ifdef __cplusplus

extern "C" void SwitchVideoDevice(uint8_t DeviceType, uint8_t DeviceNum, uint8_t DriverType);


#else

void SwitchVideoDevice(uint8_t DeviceType, uint8_t DeviceNum, uint8_t DriverType);

#endif
#endif
