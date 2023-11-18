/*
; Copyright(C) 2023 Tyler Grenier
*/

#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <drivers/display/vga.h>

#define MAX_INT_STRING_LENGTH 12

void intToHexString(int number, char *hexString);

void intToString(uint32_t num, char* str);

int LouPrint(char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'

            // Handle format specifiers
            switch (*format) {
            case 'd': {
                int32_t num = va_arg(args, int32_t);
                char str[MAX_INT_STRING_LENGTH]; // Adjust buffer size as needed
                intToString((uint32_t)num, str);
                LouPrint(str);
                break;
            }
            case 's': {
                char* text = va_arg(args, char*);
                LouPrint(text);
                break;
            }
            case 'x': {
                uint32_t X = va_arg(args, uint32_t);
                // Assume Set_X is a function that operates on a 32-bit integer
                Set_X(X);
                break;
            }
            case 'y': {
                uint32_t Y = va_arg(args, uint32_t);
                // Assume Set_Y is a function that operates on a 32-bit integer
                Set_Y(Y);
                break;
            }
            case 'c': {
                char c = va_arg(args, int);  // Note: char is promoted to int in va_arg
                putchar(c);
                break;
            }
            case 'h':{
                int64_t num = va_arg(args, int64_t); // get the Number in integer Form
                char hexString[21]; //Define A string To Print
                intToHexString((int)num,hexString); // Change The Integer To A Hex String
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


void intToString(uint32_t num, char* str) {
    uint32_t i = 0;

    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    while (num > 0) {
        uint32_t digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }

    str[i] = '\0';

    // Reverse the string
    uint32_t left = 0;
    uint32_t right = i - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}


void intToHexString(int number, char *hexString) {
    int i = 0;
    do {
        int digit = number % 16;
        hexString[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
        number /= 16;
    } while (number != 0);

    hexString[i] = '\0';  // Null-terminate the string
}
