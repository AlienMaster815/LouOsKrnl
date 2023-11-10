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

int LouPrint(char* format, ...) {
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

void intToString(uint64_t num, char* str) {
    uint64_t i = 0;

    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    while (num > 0) {
        uint64_t digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }

    str[i] = '\0';

    // Reverse the string
    uint64_t left = 0;
    uint64_t right = i - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

