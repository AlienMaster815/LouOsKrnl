#ifndef _STDIO_H
#define _STDIO_H
#include <stdint.h>

#define PRINT_NEW_LINE "\n"

#ifdef __x86_64__
#ifdef __cplusplus
#include <LouDDK.h>

#ifndef _KERNEL_MODULE_

extern "C" void uintToHexString(uint64_t number, char* hexString);
KERNEL_IMPORT void LouKePrintLittleEndianBufferDecimal(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

KERNEL_IMPORT void LouKePrintLittleEndianBufferHex(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

KERNEL_IMPORT void LouKePrintLittleEndianBufferBinary(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

KERNEL_IMPORT void LouKePrintLittleEndianBufferString(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

KERNEL_IMPORT bool LouKeIsLittleEndianBufferEqualTo(
    uintptr_t DataPointer,
    uintptr_t CheckBuffer,
    uint64_t Offset,
    uint64_t Length
    );

#endif

#else
#include <LouAPI.h>

#ifndef _KERNEL_MODULE_
void VgaPutPixelRgb(int x, int y, uint8_t r, uint8_t g, uint8_t b);

int LouPrint(char *format, ...);
int putchar(int ic);
void uintToHexString(uint64_t number, char* hexString);

void LouKePrintLittleEndianBufferDecimal(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

void LouKePrintLittleEndianBufferHex(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

void LouKePrintLittleEndianBufferBinary(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

void LouKePrintLittleEndianBufferString(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    );

bool LouKeIsLittleEndianBufferEqualTo(
    uintptr_t DataPointer,
    uintptr_t CheckBuffer,
    uint64_t Offset,
    uint64_t Length
    );
#endif

#endif
#endif

#ifdef __i386__
#ifdef __cplusplus

#ifndef _KERNEL_MODULE_
extern "C" void uintToHexString(uint32_t number, char* hexString);
#endif


#else

#ifndef _KERNEL_MODULE_
//KERNEL_EXPORT int LouPrint(char *format, ...);
int putchar(int ic);
void uintToHexString(uint32_t number, char* hexString);
#endif

#endif
#endif

#endif
