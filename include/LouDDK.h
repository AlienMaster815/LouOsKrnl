#ifndef _LOUDDK_H
#define _LOUDDK_H

#include <stdlib.h>

#define LOUDDK_API_ENTRY extern "C"
#define DRIVER_IO_FUNCTION extern "C"
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
KERNEL_IMPORT int LouPrint(char *format, ...);
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


#endif
#endif
