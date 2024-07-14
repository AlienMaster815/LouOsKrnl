#ifndef _ATA_DRIVER_H
#define _ATA_DRIVER_H
#include <LouDDK.h>
#include <NtAPI.h>

//definitions and abreviations
//command that uses the FEATURE field (7:0), 
//COUNT field (7:0), LBA field (27:0), 
//DEVICE field (15:8) and COMMAND 
//field (7:0) to specify its arguments

//command packet to reduec function head packed for stacked commands
typedef struct __attribute__((packed)) _Command28{
    uint8_t Feature;
    uint8_t cout;
    uint32_t LBA : 28;
    uint8_t Device;
    uint8_t Command;
}Command28, * PCommand28;

#endif