/*
; Copyright(C) 2023 Tyler Grenier
*/

#ifdef __x86_64__
    #include <limits.h>
#endif

#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <drivers/display/vga.h>

void VgaPutCharecterRgb(char Charecter, PWINDHANDLE Handle, uint8_t r, uint8_t g, uint8_t b);
bool LouUpdateTextWindow(PWINDHANDLE WindowHandle,TEXT_WINDOW_EVENT Update);


static PWINDHANDLE DebugWindow = 0x00; 

#define INCREASE_Y 16+1
#define INCREASE_X 16+1

bool AttatchWindowToKrnlDebug(
    PWINDHANDLE WindowToAtttch
){
    if(DebugWindow != 0x00){
        return false;
    }
    DebugWindow = WindowToAtttch;
    //LouPrint("Lousine Kernel Debugger Succesfully Attatched To Window Handle(%h)\n", WindowToAtttch);
    if(DebugWindow == 0x00){
        return false;
    }

    DebugWindow->ForgroundColor.r = 0;
    DebugWindow->ForgroundColor.g = 0;
    DebugWindow->ForgroundColor.b = 0;

    LouUpdateWindow(DebugWindow->CurrentX, DebugWindow->CurrentY,DebugWindow->CurrentWidth,DebugWindow->CurrentHight, DebugWindow);
}

#ifdef __x86_64__
void print_binary64(uint64_t number);
void print_binary32(uint32_t number);
void print_binary16(uint16_t number);
void print_binary8(uint8_t number);
void intToString(uint64_t num, char* str);
//void uintToLittleEndianHexString(uint64_t number, char* hexString);
void uintToHexString(uint64_t number, char* hexString);

static mutex_t PrintLock; 

int LouPrint(char* format, ...) {
    va_list args;
    va_start(args, format);
    MutexLock(&PrintLock);
    if(DebugWindow != 0x00){

    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) {
                case 'd': {
                    int64_t num = va_arg(args, int64_t);
                    char str[21];
                    intToString((uint64_t)num, str);
                    char* p = str;
                    while (*p != '\0') {
                        VgaPutCharecterRgb(*p++, DebugWindow, 0, 255, 0);
                    }
                    break;
                }
                case 's': {
                    char* text = va_arg(args, char*);
                    while (*text != '\0') {
                        VgaPutCharecterRgb(*text++, DebugWindow, 0, 255, 0);
                    }
                    break;
                }
                case 'x': {
                    uint64_t X = va_arg(args, uint64_t);
                    Set_X(X);
                    break;
                }
                case 'y': {
                    uint64_t Y = va_arg(args, uint64_t);
                    Set_Y(Y);
                    break;
                }
                case 'c': {
                    char c = va_arg(args, int);
                    VgaPutCharecterRgb(c, DebugWindow, 0, 255, 0);
                    break;
                }
                case 'h': {
                    int64_t num = va_arg(args, int32_t);
                    char hexString[21];
                    uintToHexString((uint32_t)num, hexString);
                    char* p = hexString;
                    while (*p  != '\0') {
                        VgaPutCharecterRgb(*p++, DebugWindow, 0, 255, 0);
                    }
                    break;
                }
                case 'b': {
                    format++;
                    switch (*format) {
                        case 'l': {
                            uint64_t num = va_arg(args, int64_t);
                            print_binary64(num);
                            break;
                        }
                        case 'i': {
                            uint64_t num = va_arg(args, int64_t);
                            print_binary32((uint32_t)num);
                            break;
                        }
                        case 's': {
                            uint64_t num = va_arg(args, int64_t);
                            print_binary16((uint16_t)num);
                            break;
                        }
                        case 'c': {
                            uint64_t num = va_arg(args, int64_t);
                            print_binary8((uint8_t)num);
                            break;
                        }
                        default: {
                            format--;
                            break;
                        }
                    }
                    break;
                }
                case 'f': {
                    format++;
                    switch (*format) {
                        case 'l': {
                            long double num = va_arg(args, long double);
                            char str[21];
                            long_double_to_string(str, num);
                            char* p = str;
                            while (*p  != '\0') {
                                VgaPutCharecterRgb(*p++, DebugWindow, 0, 255, 0);
                            }
                            break;
                        }
                        case 'd': {
                            double num = va_arg(args, double);
                            char str[21];
                            double_to_string(str, num);
                            char* p = str;
                            while (*p  != '\0') {
                                VgaPutCharecterRgb(*p++, DebugWindow, 0, 255, 0);
                            }
                            break;
                        }
                        default: {
                            format--;
                            float num = va_arg(args, double);
                            char str[21];
                            float_to_string(str, num);
                            char* p = str;
                            while (*p  != '\0') {
                                VgaPutCharecterRgb(*p++, DebugWindow, 0, 255, 0);
                            }
                            break;
                        }
                    }
                    break;
                }
                default: {
                    VgaPutCharecterRgb('%', DebugWindow, 0, 255, 0);
                    VgaPutCharecterRgb(*format, DebugWindow, 0, 255, 0);
                    break;
                }
            }
            format++; // Move to the next character in the format string
        } else {
            VgaPutCharecterRgb(*format++, DebugWindow, 0, 255, 0);
        }
    }
    va_end(args);
    }
    MutexUnlock(&PrintLock);
    return 0;
}
#endif

#ifdef __i386__
void intToString(uint32_t num, char* str);
//void uintToLittleEndianHexString(uint32_t number, char* hexString);
void uintToHexString(uint32_t number, char* hexString);

 int LouPrint(char* format, ...){

 }
#endif

