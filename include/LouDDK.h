#ifndef _LOUDDK_H
#define _LOUDDK_H


//define common used cpp functions with drivers
#include <drivers/Lou_drivers/io.h>
#include <stat.h>
#include <stddef.h>
#include <stdint.h>


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

#define LOUINTERNAL extern "C"

#define STATUS bool

#include <drivers/Lou_drivers/hardrive.h>

#include <drivers/Lou_drivers/storage_struct.h>

#include <drivers/Lou_drivers/FileSystem.h>

#include <KernelAPI/IOManager.h>

#include <drivers/Lou_drivers/FileSystems/ISO.h>
#include <KernelAPI/Drives.h>
#include <drivers/Lou_drivers/hardrive.h>
#include <stdio.h>
#include <drivers/Lou_drivers/io.h> 


// Tyler Grenier 2/6/24 11:17
// Add PCI System
#include <drivers/Lou_drivers/pci.h>



#ifdef __cplusplus

//define kernel c functions that we translate to the cpp world
//Printing And Debugging
extern "C" int LouPrint(char *format, ...);
// PORTS Stuff

#ifdef __x86_64__
    extern "C" uint64_t read_msr(uint32_t msr_id);
#endif

extern "C" uint8_t inb(uint16_t port);
extern "C" void outb(uint16_t port, uint8_t data);
extern "C" uint16_t inw(uint16_t port);
extern "C" void outw(uint16_t port, uint16_t data);
extern "C" uint32_t inl(uint16_t port);
extern "C" void outl(uint16_t port, uint32_t data);
extern "C" void outbSlow(uint16_t port,uint8_t data);
//MEMMORY ALLOCATION
extern "C" RAMADD Lou_Alloc_Mem(SIZE size);
extern "C" STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
//Errors
extern "C" void LouPanic(char*,STATUS);
//STD Library
extern "C" void* memset(void* dest, int value, size_t count);


extern "C" void* memcpy(void* dest, const void* src, size_t n);
extern "C" int strncmp(const char* str1, const char* str2, size_t n);
extern "C" int strcmp(const char* str1, const char* str2);
extern "C" int memcmp(const void* ptr1, const void* ptr2, size_t num);
extern "C" char* strncpy(char* dest, const char* src, size_t n);

#else


#endif
#endif
