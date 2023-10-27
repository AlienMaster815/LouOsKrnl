
#ifndef _LOU_API_H
#define _LOU_API_H

//define common used cpp functions with drivers
#include <drivers/Lou_drivers/io.h>
#include <stat.h>

#define MAXMEM 0xFFFFFFFFFFFFFFFF
#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096
#define SIZE unsigned long long

#define STATUS bool

//define kernel c functions that we translate to the cpp world

extern "C" int LouPrint(char *format, ...);
extern "C" uint8_t inb(uint16_t port);
extern "C" void outb(uint16_t port, uint8_t data);
extern "C" uint16_t inw(uint16_t port);
extern "C" void outw(uint16_t port, uint16_t data);
extern "C" uint32_t inl(uint16_t port);
extern "C" void outl(uint16_t port, uint32_t data);
extern "C" void outbSlow(uint16_t port,uint8_t data);
extern "C" RAMADD Lou_Alloc_Mem(SIZE size);
extern "C" STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
extern "C" void LouPanic(char*,STATUS);
#endif
