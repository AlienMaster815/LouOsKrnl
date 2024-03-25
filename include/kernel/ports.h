#ifndef _PORTS_H
#define _PORTS_H

#include <stdint.h>
#include <stddef.h>


uint8_t inb(uint64_t port);

void outb(uint64_t port, uint8_t data);

uint16_t inw(uint64_t port);

void outw(uint64_t port, uint16_t data);

uint32_t inl(uint64_t port);

void outl(uint64_t port, uint32_t  data);

void outbSlow(uint64_t port,uint8_t data);

#ifdef __x86_64__
uint64_t read_msr(uint32_t msr_id);
#endif

#endif
