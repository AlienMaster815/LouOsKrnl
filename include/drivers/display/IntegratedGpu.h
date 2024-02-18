#ifndef _INTEGRATED_VIDEO_H
#define _INTEGRATED_VIDEO_H

#ifdef __cplusplus

//CPLUSPLUS WORLD
#include <LouDDK.h>

//Intel IGPU STUB
LOUDDK_API_ENTRY LOUSTATUS IntelIGPUInit(uint8_t DriverType);

//END OF INTEL IGPU STUB


#else
// C World
#include <LouAPI.h>



#include <stdint.h>

#endif
#endif
