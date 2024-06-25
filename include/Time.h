#ifndef TIME_H
#define TIME_H
#ifdef __x86_64__
#ifdef __cplusplus

#define MilliSec 1
#define Sec 2

#include <LouDDK.h>

KERNEL_IMPORT void sleep(uint64_t Time);
KERNEL_IMPORT void sleepEx(uint8_t Interval, uint64_t Time);



#else





#define MilliSec 1
#define Sec 2

void sleep(uint64_t Time);
void sleepEx(uint8_t Interval, uint64_t Time);

#endif
#endif
#endif