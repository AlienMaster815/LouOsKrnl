#ifndef _PROCESRS_H
#define _PROCESRS_H

#include <LouDDK.h>
#include <NtAPI.h>

KERNEL_IMPORT uint16_t GetNPROC();
KERNEL_IMPORT void UpgradeNPROC();
KERNEL_IMPORT void DowngradeNPROC();

typedef struct {
    uint8_t* Base;
    uint8_t* Top;
} Stack;

#endif