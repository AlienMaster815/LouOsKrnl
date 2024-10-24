
#include "../../../Include/Annya.h"

#define LOUDLL_API __declspec(dllexport)

typedef unsigned short uint16_t;
typedef unsigned char uint8_t;
typedef unsigned long long uint64_t;
typedef uint64_t uintptr_t;
typedef uint8_t BOOL;
typedef void* HMODULE;
typedef uint32_t DWORD;
typedef void* LPVOID;
typedef void* HANDLE;

#define TRUE 1
#define FALSE 0

LOUDLL_API
BOOL DllMainCRTStartup(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}

LOUDLL_API
int LouPrint(char* Str){
    uint64_t Data = (uint64_t)Str;
    LouCALL(LOUPRINTCALL, (uint64_t)&Data, 0);
    return Data;
}