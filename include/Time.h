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


#ifdef __cplusplus
extern "C" {
#endif

typedef struct __attribute__((packed)) _TIME_T{
    uint8_t Month;
    uint8_t Day;
    uint8_t Hour;
    uint8_t Minute;
    uint8_t Second;
    uint16_t MilliSeconds;
}TIME_T, * PTIME_T;

void LouKeGetTime(
    PTIME_T TimeStruct
);

#define PTIME_SEED T->MilliSeconds + (T->Second * 60) + (T->Minute * (60 * 60))
#define  TIME_SEED T.MilliSeconds + (T.Second * 60) + (T.Minute * (60 * 60))

#ifdef __cplusplus
}
#endif