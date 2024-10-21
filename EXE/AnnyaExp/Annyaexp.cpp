// Annya.exp.cpp : Defines the entry point for the application.
//

#include <Windows.h>

__declspec(dllimport) void* AnyaStartUserMode();

int __stdcall LouMain() {

    // Main message loop:
    while (1) {

    }

    return (int)-1;
}
