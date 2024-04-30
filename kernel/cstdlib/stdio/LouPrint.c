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



#ifdef __x86_64__
void print_binary64(uint64_t number);
void print_binary32(uint32_t number);
void print_binary16(uint16_t number);
void print_binary8(uint8_t number);
void intToString(uint64_t num, char* str);
//void uintToLittleEndianHexString(uint64_t number, char* hexString);
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
                
                int64_t num = va_arg(args, int32_t); // get the Number in integer Form
                char hexString[21]; //Define A string To Print
                uintToHexString((uint32_t)num,hexString); // Change The Integer To A Hex String
                LouPrint("%s", hexString); // Print Hex String;
                break;
            }
            case 'b': {
                format++;
                switch (*format) {
                    case 'l' : {
                        uint64_t num = va_arg(args, int64_t);  // Use int64_t instead of uint64_t
                        print_binary64(num);
                        break;
                    }
                    case 'i': {
                        uint64_t num = va_arg(args, int64_t);
                        print_binary32((uint32_t)num);
                        break;
                    }
                    case 's' : {
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

#endif

#ifdef __i386__
void intToString(uint32_t num, char* str);
//void uintToLittleEndianHexString(uint32_t number, char* hexString);
void uintToHexString(uint32_t number, char* hexString);

 int LouPrint(char* format, ...){
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'

            // Handle format specifiers
            switch (*format) {
            case 'd': {
                uint32_t num = va_arg(args, uint32_t);  // Use int64_t instead of uint64_t
                char str[21];  // Space for the largest 64-bit integer in base 10
                intToString((uint32_t)num, str);  // Convert to uint64_t and then to string
                LouPrint("%s", str);
                break;
            }
            case 's': {
                char* text = va_arg(args, char*);
                LouPrint(text);
                break;
            }
            case 'x': {
                uint32_t X = va_arg(args, uint32_t);
                Set_X(X);
                break;
            }
            case 'y': {
                uint32_t Y = va_arg(args, uint32_t);
                Set_Y(Y);
                break;
            }
            case 'c': {
                char c = va_arg(args, int);
                putchar(c);
                break;
            }
            case 'h':{

                int32_t num = va_arg(args, int32_t); // get the Number in integer Form
                char hexString[21]; //Define A string To Print
                uintToHexString((uint32_t)num,hexString); // Change The Integer To A Hex String
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

#endif

