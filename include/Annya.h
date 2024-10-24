#ifndef _ANNYA_API_H
#define _ANNYA_API_H

//#include "USRSPC/API/WinAPItypes.h"
#include "Kernel/SystemCalls.h"

#ifdef __cplusplus
extern "C"{
#endif

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

#define LOU_EXPORT __declspec(dllexport)



#ifdef __cplusplus    
}
#endif

#endif