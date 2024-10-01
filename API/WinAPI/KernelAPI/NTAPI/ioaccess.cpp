
#include <LouDDK.h>
#include <NtAPI.h>

VOID WRITE_PORT_UCHAR(PVOID Port, UCHAR Value){
    volatile UCHAR* P = (volatile UCHAR*)Port;
    *P = Value;
}

VOID WRITE_PORT_USHORT(PVOID Port, USHORT Value){
    volatile USHORT* P = (volatile USHORT*)Port;
    *P = Value;
}

VOID WRITE_PORT_ULONG(PVOID Port, ULONG Value){
    volatile ULONG* P = (volatile ULONG*)Port;
    *P = Value;
}

UCHAR READ_PORT_UCHAR(PVOID Port){
    volatile UCHAR* P = (volatile UCHAR*)Port;
    return *P;
}

USHORT READ_PORT_USHORT(PVOID Port){
    volatile USHORT* P = (volatile USHORT*)Port;
    return *P;
}

ULONG READ_PORT_ULONG(PVOID Port){
    volatile ULONG* P = (volatile ULONG*)Port;
    return *P;
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
