
#include <LouDDK.h>
#include <NtAPI.h>

VOID WRITE_PORT_UCHAR(PVOID Port, UCHAR Value){
    outb((uint64_t)Port, (uint8_t)Value);
}

VOID WRITE_PORT_USHORT(PVOID Port, USHORT Value){
    outw((uint64_t)Port, (uint16_t)Value);
}

VOID WRITE_PORT_ULONG(PVOID Port, ULONG Value){
    outl((uint64_t)Port, (uint32_t)Value);
}

UCHAR READ_PORT_UCHAR(PVOID Port){
    return inb((uint64_t)Port);
}

USHORT READ_PORT_USHORT(PVOID Port){
    return inw((uint64_t)Port);
}

ULONG READ_PORT_ULONG(PVOID Port){
    return inl((uint64_t)Port);
}

UCHAR READ_REGISTER_UCHAR(PUCHAR Register){
    return *Register;
}

VOID WRITE_REGISTER_UCHAR(PUCHAR Register, UCHAR Value){
    *Register = Value;
}

USHORT READ_REGISTER_USHORT(volatile PUSHORT Register){
    return *Register;
}

VOID WRITE_REGISTER_USHORT(volatile PUSHORT Register, USHORT Value){
    *Register = Value;
}

LOUDDK_API_ENTRY ULONG READ_REGISTER_ULONG(volatile PULONG Register){
    return *Register;
}

VOID WRITE_REGISTER_ULONG(volatile PULONG Register, ULONG Value){
    *Register = Value;
}

VOID WRITE_REGISTER_ULONGLONG(volatile PULONGLONG Register, ULONGLONG Value){
    *Register = Value;
}
