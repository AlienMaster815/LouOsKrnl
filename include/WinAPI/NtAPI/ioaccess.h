#ifndef _IO_ACCESS_H
#define _IO_ACCESS_H

#include <NtAPI.h>
// Function prototypes for reading from memory-mapped registers
UCHAR READ_REGISTER_UCHAR(PUCHAR Register);
USHORT READ_REGISTER_USHORT(PUSHORT Register);
ULONG READ_REGISTER_ULONG(PULONG Register);

// Function prototypes for writing to ports
void WRITE_PORT_UCHAR(PVOID Port, UCHAR Value);
void WRITE_PORT_USHORT(PVOID Port, USHORT Value);
void WRITE_PORT_ULONG(PVOID Port, ULONG Value);

// Function prototypes for writing to memory-mapped registers
VOID WRITE_REGISTER_UCHAR(PUCHAR Register, UCHAR Value);
VOID WRITE_REGISTER_USHORT(PUSHORT Register, USHORT Value);
VOID WRITE_REGISTER_ULONG(PULONG Register, ULONG Value);

#endif