/*
; Copyright(C) 2023 Tyler Grenier
*/
#include <limits.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <drivers/display/vga.h>


void intToString(uint64_t num, char* str);

void uintToHexString(uint64_t number, char* hexString);

 int LouPrint(char* format, ...){
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'

            // Handle format specifiers
            switch (*format) {
            case 'd': {
                int64_t num = va_arg(args, int64_t);  // Use int64_t instead of uint64_t
                char str[21];  // Space for the largest 64-bit integer in base 10
                intToString((uint64_t)num, str);  // Convert to uint64_t and then to string
                LouPrint("%s", str);
                break;
            }
            case 's': {
                char* text = va_arg(args, char*);
                LouPrint(text);
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
                putchar(c);
                break;
            }
            case 'h':{
                int64_t num = va_arg(args, int64_t); // get the Number in integer Form
                char hexString[21]; //Define A string To Print
                uintToHexString((uint64_t)num,hexString); // Change The Integer To A Hex String
                LouPrint("%s", hexString); // Print Hex String;
                break;
            }
            default: {
                putchar('%');
                putchar(*format);
                break;
            }
            }

            format++; // Move to the next character in the format string
        }
        else {
            putchar(*format);
            format++;
        }
    }

    va_end(args);
    return 0;
}





