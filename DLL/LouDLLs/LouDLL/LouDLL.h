
#include "AnnyaApi.h"
#include <WinAPI/NtAPI/ntstatus.h>



    #ifdef __cplusplus
    extern "C"{
    #endif

#define LouAcceptConnectPortCall 0x0002
#define LouAccessCheckCall

LOU_EXPORT
 NTSTATUS 
 LouAcceptConnectPort(
    PHANDLE                     ServerPortHandle,
    HANDLE                      AlternativeReceivePortHandle,
    PLPC_MESSAGE                ConnectionReply,
    BOOLEAN                     AcceptConnection,
    PLPC_SECTION_OWNER_MEMORY   ServerSharedMemory,
    PLPC_SECTION_MEMORY         ClientSharedMemory 
  );

    #ifdef __cplusplus    
    }
    #endif