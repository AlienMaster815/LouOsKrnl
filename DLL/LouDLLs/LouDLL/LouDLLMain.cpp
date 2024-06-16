#include <AnnyaApi.h>
#include "LouDLL.h"
#include <WinAPI/NtAPI/ntstatus.h>

extern "C" NTSTATUS ReturnRax();
extern "C" void SYSCALL(uint64_t Call);
extern "C" void PopStack();
extern "C" void PushStack();


LOU_EXPORT
NTSTATUS 
LouAcceptConnectPort(
    PHANDLE                     ServerPortHandle,
    HANDLE                      AlternativeReceivePortHandle,
    PLPC_MESSAGE                ConnectionReply,
    BOOLEAN                     AcceptConnection,
    PLPC_SECTION_OWNER_MEMORY   ServerSharedMemory,
    PLPC_SECTION_MEMORY         ClientSharedMemory 
){
    PushStack();
    NTSTATUS RAX;
    SYSCALL(LouAcceptConnectPortCall);
    RAX = ReturnRax();
    PopStack();
    return RAX;
}
/*
LOU_EXPORT
NTSTATUS
LouAccessCheck(

){
    PushStack();
    NTSTATUS RAX;
    SYSCALL(LouAccessCheckCall);
    RAX = ReturnRax();
    PopStack();
    return RAX;
}
*/