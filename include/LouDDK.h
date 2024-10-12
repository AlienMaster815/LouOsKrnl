#ifndef _LOUDDK_H
#define _LOUDDK_H

#include <drivers/Lou_drivers/PciIds.h>

#ifdef _KERNEL_MODULE_
#pragma warning(push)
#pragma warning(disable: 4083) // Disable specific warning
#pragma warning(disable: 4005) // Disable macro redefinition warning
#pragma warning(disable: 5051) // Disable C5051 warning
#pragma warning(disable: 4103) // Disable C4103
#pragma warning(disable: 4201) // Disable C4103
#pragma warning(disable: 4200) // Disable C4103
#pragma warning(disable: 4086) // Disable C4103
#pragma warning(disable: 4100) // Disable C4103warning C4273
#pragma warning(disable: 4217) // Disable C4103 4245
#pragma warning(disable: 4245) // Disable C4103 4245
#pragma warning(disable: 4293) // Disable C4103 4245
//#pragma warning(disable: 1218) // Disable C4103
#endif

#include <stdlib.h>


#define LOUDDK_API_ENTRY extern "C"
#define DRIVER_IO_FUNCTION extern "C"

#ifdef _KERNEL_MODULE_

#ifndef PVOID
typedef void* PVOID;
#endif

#ifndef _KERNEL_EXPORTS_
#define _KERNEL_EXPORTS_
#define KERNEL_EXPORT extern "C" __declspec(dllimport)

#endif
#endif

#define KERNEL_IMPORT extern "C"

//define common used cpp functions with drivers
#include <drivers/Lou_drivers/io.h>
#include <stat.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <drivers/Vendors/VendorsDictionary.h>
#include <kernel/memmory.h>
#include <kernel/Binarys.h>
#include <stdio.h>
#include <KernelAPI/BitCheck.h>

#include <Kernel/interrupts.h>
#include <Kernel/threads.h>
#include <SharedTypes.h>
#include <Kernel/DRSD.h>
#include <Kernel/LouQs.h>

typedef void* FILE;

#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096

#ifdef __x86_64__
    #define SIZE uint64_t
    
#endif
#ifdef __i386__

    #define SIZE uint32_t

#endif



#define LOUSTATUS_GOOD 0
#define PATADEV 1
#define PATAPIDEV 2


#define STATUS bool

//Define Each IO Manager File Seperately To Segregate Important Kernel Features


//typedef struct _LOUDDK_API {
//    uint64_t initStatus;
//}LOUDDK_API,*PLOUDDK_API;



#ifdef __cplusplus

//define kernel c functions that we translate to the cpp world
//Printing And Debugging
#ifndef _KERNEL_MODULE_
KERNEL_IMPORT int LouPrint(char *format, ...);
#else
KERNEL_EXPORT int LouPrint(char *format, ...);
KERNEL_EXPORT LOUSTATUS RegisterHardwareInterruptHandler(void(*Handler)(), uint8_t InterruptNumber);
KERNEL_EXPORT void* memcpy(void* dest, const void* src, size_t n);
KERNEL_EXPORT int strncmp(const char* str1, const char* str2, size_t n);
KERNEL_EXPORT int strcmp(const char* str1, const char* str2);
KERNEL_EXPORT int memcmp(const void* ptr1, const void* ptr2, size_t num);
KERNEL_EXPORT char* strncpy(char* dest, const char* src, size_t n);
KERNEL_EXPORT void sleep(uint64_t Time);
KERNEL_EXPORT bool LouKeWaitForMmioState(uint32_t* Register, uint32_t State, uint32_t Mask, uint64_t MsTimeout);
#endif
// PORTS Stuff

#ifdef __x86_64__
    KERNEL_IMPORT uint64_t read_msr(uint32_t msr_id);
#endif

#include <KernelAPI/DriverAPI.h> 
#include <drivers/Lou_drivers/hardrive.h> 
#include <drivers/Lou_drivers/storage_struct.h>
#include <drivers/Lou_drivers/FileSystem.h>
#include <KernelAPI/IOManager.h> 
#include <drivers/Lou_drivers/FileSystems/ISO.h>
#include <KernelAPI/Drives.h> 
#include <drivers/Lou_drivers/hardrive.h>
#include <stdio.h>
#include <drivers/Lou_drivers/io.h> 
#include <drivers/Lou_drivers/pci.h>
#include <stdlib.h>
#include <drivers/Lou_drivers/Processor.h>
#include <KernelAPI/Video.h>
#include <fstream.h>
#include <KernelAPI/Devices.h>
#include <Time.h>
#include <Kernel/exec.h>
#include <Random.h>

#define CPU_TO_LE32(x) ((uint32_t)(             \
    (((uint32_t)(x) & 0x000000FFU) << 24) |     \
    (((uint32_t)(x) & 0x0000FF00U) << 8)  |     \
    (((uint32_t)(x) & 0x00FF0000U) >> 8)  |     \
    (((uint32_t)(x) & 0xFF000000U) >> 24)))


#ifndef _KERNEL_MODULE_
#define KERNEL_EXPORT extern "C"

KERNEL_IMPORT uint8_t inb(uint64_t port);
KERNEL_IMPORT void outb(uint64_t port, uint8_t data);
KERNEL_IMPORT uint16_t inw(uint64_t port);
KERNEL_IMPORT void outw(uint64_t port, uint16_t data);
KERNEL_IMPORT uint32_t inl(uint64_t port);
KERNEL_IMPORT void outl(uint64_t port, uint32_t data);
KERNEL_IMPORT void outbSlow(uint64_t port,uint8_t data);
//MEMMORY ALLOCATION
KERNEL_IMPORT RAMADD Lou_Alloc_Mem(SIZE size);
KERNEL_IMPORT STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
//Errors
KERNEL_IMPORT void LouPanic(char*,STATUS);
//STD Library
KERNEL_IMPORT void* memset(void* dest, int value, size_t count);


KERNEL_IMPORT void* memcpy(void* dest, const void* src, size_t n);
KERNEL_IMPORT int strncmp(const char* str1, const char* str2, size_t n);
KERNEL_IMPORT int strcmp(const char* str1, const char* str2);
KERNEL_IMPORT int memcmp(const void* ptr1, const void* ptr2, size_t num);
KERNEL_IMPORT char* strncpy(char* dest, const char* src, size_t n);

void RegisterInterruptHandler(void(*HANDLER)(), uint8_t InterruptNumber);
//KERNEL_IMPORT void INTERRUPT(uint8_t InterruptNumber);

KERNEL_IMPORT void sleep(uint64_t Time);

#define ACPIBUFFER 256

#define ERRMAPPINGIO -1

LOUDDK_API_ENTRY LOUSTATUS RegisterHardwareInterruptHandler(void(*Handler)(), uint8_t InterruptNumber);

#else 

#endif//kernelmod



#else


#endif
#endif

#ifdef _KERNEL_MODULE_
KERNEL_EXPORT LOUSTATUS RegisterHardwareInterruptHandler(void(*Handler)(), uint8_t InterruptNumber);
KERNEL_EXPORT void* memcpy(void* dest, const void* src, size_t n);
KERNEL_EXPORT int strncmp(const char* str1, const char* str2, size_t n);
KERNEL_EXPORT int strcmp(const char* str1, const char* str2);
KERNEL_EXPORT int memcmp(const void* ptr1, const void* ptr2, size_t num);
KERNEL_EXPORT char* strncpy(char* dest, const char* src, size_t n);
KERNEL_EXPORT void sleep(uint64_t Time);
#endif