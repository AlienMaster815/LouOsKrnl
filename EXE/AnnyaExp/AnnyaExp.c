// Annya.exp.cpp : Defines the entry point for the application.
//x86_64-w64-mingw32-gcc -shared -o AnnyaExp.exe AnnyaExp.c -m64 -nostdlib -nodefaultlibs -L../../UserLibraries -lLouDll


#include "../../Include/Annya.h"


__declspec(dllimport) int LouPrint();

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


int __main() {

    // Main message loop:
    // /LouPrint("Hello UserMode Im Annya :)\n");
    while (1) {
    
    }

    return (int)-1;
}


BOOL DllMainCRTStartup(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    __main();
    return TRUE;
}