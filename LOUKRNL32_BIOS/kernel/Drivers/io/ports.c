#include <kernel/ports.h>

uint8_t inb(uint16_t port) {
    unsigned char data;
    asm volatile("inb %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

void outb(uint16_t port,uint8_t data) {
    asm volatile("outb %0, %1" : : "a" (data), "dN" (port));
}

uint16_t inw(uint16_t port) {
    unsigned short data;
    asm volatile("inw %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

// Function to write a 16-bit word to an I/O port
void outw(uint16_t port, uint16_t data) {
    asm volatile("outw %0, %1" : : "a" (data), "dN" (port));
}

// Function to read a 32-bit double-word from an I/O port
uint32_t inl(uint16_t port) {
    unsigned int data;
    asm volatile("inl %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

// Function to write a 32-bit double-word to an I/O port
void outl(uint16_t port, uint32_t data) {
    asm volatile("outl %0, %1" : : "a" (data), "dN" (port));
}

void outbSlow(uint16_t port,uint8_t data){
__asm__ volatile("outb %0, %1\njmp 1f\n1: jmp 1f\n1:" : : "a" (data), "Nd" (port));
}
/*
uint32_t read_msr(uint32_t msr_id) {
    uint32_t low, high;
    asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr_id));
    return ((uint32_t)high << 32) | low;
}
*/
