#include <stdlib.h>
#include <stdint.h>
#include <KernelAPI/Drives.h>
#include <drivers/Lou_drivers/hardrive.h>

#ifndef _IO_MANAGER_H
#define _IO_MANAGER_H

#ifdef __cplusplus

extern "C" LOUSTATUS IO_Manager_Init();
void Register_Storage_DeviceA(uint8_t DriveType,uint8_t DriveNum);
extern "C" void WriteStorageDrive(char Drive, uint8_t* Data, uint32_t Location,uint32_t BufferSize);
extern "C" void ReadStorageDrive(char Drive, uint32_t Location , uint32_t BufferSize);

PATA* RetrievePATAP();

#else

LOUSTATUS IO_Manager_Init();
//void Register_Storage_DeviceA(uint8_t DriveType,uint8_t DriveNum); Not An Extern C
void WriteStorageDrive(char Drive, uint8_t* Data, uint32_t Location,uint32_t BufferSize);
void ReadStorageDrive(char Drive, uint32_t Location , uint32_t BufferSize);

#endif
#endif
