
#include <LouDDK.h>
#include <NtAPI.h>




ULONG READ_REGISTER_ULONG(volatile PULONG Register){
    return *Register;
}

VOID WRITE_REGISTER_ULONG(volatile PULONG Register, ULONG Value){
    *Register = Value;
}
