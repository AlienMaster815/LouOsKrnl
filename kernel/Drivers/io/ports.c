#include <LouAPI.h>

uint8_t inb(uint64_t port) {
    unsigned char data;
    asm volatile("inb %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

void outb(uint64_t port,uint8_t data) {
    asm volatile("outb %0, %1" : : "a" (data), "dN" (port));
}

uint16_t inw(uint64_t port) {
    unsigned short data;
    asm volatile("inw %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

// Function to write a 16-bit word to an I/O port
void outw(uint64_t port, uint16_t data) {
    asm volatile("outw %0, %1" : : "a" (data), "dN" (port));
}

// Function to read a 32-bit double-word from an I/O port
uint32_t inl(uint64_t port) {
    unsigned int data;
    asm volatile("inl %1, %0" : "=a" (data) : "dN" (port));
    return data;
}

// Function to write a 32-bit double-word to an I/O port
void outl(uint64_t port, uint32_t data) {
    asm volatile("outl %0, %1" : : "a" (data), "dN" (port));
}

void outbSlow(uint64_t port,uint8_t data){
__asm__ volatile("outb %0, %1\njmp 1f\n1: jmp 1f\n1:" : : "a" (data), "Nd" (port));
}

uint64_t read_msr(uint32_t msr_id) {
    uint32_t low, high;
    asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr_id));
    return ((uint64_t)high << 32) | low;
}


// Inline assembly to write to an MSR (Model-Specific Register)
void write_msr(uint32_t msr, uint64_t value) {
    uint32_t low = (uint32_t)(value & 0xFFFFFFFF);
    uint32_t high = (uint32_t)(value >> 32);
    __asm__ __volatile__("wrmsr" : : "c"(msr), "a"(low), "d"(high));
}


void insw(uint64_t __port, void *__buf, unsigned long __n) {
	__asm__ __volatile__("cld; rep; insw"
			: "+D"(__buf), "+c"(__n)
			: "d"(__port));
}
 
void outsw(uint64_t __port, const void *__buf, unsigned long __n) {
	__asm__ __volatile__("cld; rep; outsw"
			: "+S"(__buf), "+c"(__n)
			: "d"(__port));
}


extern uint64_t LouKeMachineLevelReadRegisterUlong(uint64_t AddressOfRegister);
extern uint64_t LouKeMachineLevelWriteRegisterUlong(uint64_t AddressOfRegister,uint64_t Data);


unsigned long LouKeReadRegisterUlong(void* Register){
    unsigned long RESULT = 0;
    RESULT = (unsigned long)LouKeMachineLevelReadRegisterUlong((uint64_t)(uint8_t*)Register);
    return RESULT;
}

void LouKeWriteRegisterUlong(void* Register, unsigned long Data){
    LouKeMachineLevelWriteRegisterUlong((uint64_t)(uint8_t*)Register,(uint64_t)Data);
}