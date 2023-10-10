
#ifndef _LOU_API_H
#define _LOU_API_H

//define common used cpp functions with drivers
#include <drivers/Lou_drivers/io.h>

//define kernel c functions that we translate to the cpp world

extern "C" int LouPrint(char *format, ...);
extern "C" uint8_t inb(uint16_t port);
extern "C" void outb(uint16_t port, uint8_t data);
extern "C" uint16_t inw(uint16_t port);
extern "C" void outw(uint16_t port, uint16_t data);
extern "C" uint32_t inl(uint16_t port);
extern "C" void outl(uint16_t port, uint32_t data);
extern "C" void outbSlow(uint16_t port,uint8_t data);
#endif
