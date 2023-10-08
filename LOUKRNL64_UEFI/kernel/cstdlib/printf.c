/*
; Copyright(C) 2023 Tyler Grenier
;
; This program is the property of Tyler Grenier and is protected by copyright law.
; Unauthorized reproduction or distribution of this program, or any portion of it,
; is prohibited.Modification of this program is allowed only with explicit
; written permission from Tyler Grenier.
;
; Permission to possess and use this code is granted to You under
; the condition that You complies with the terms of this copyright
; notice.Failure to comply may result in legal action.
;
; Tyler Grenier makes no warranties, expressed or implied, about the suitability of
; this software for any purpose.It is provided "as is" without any warranty.
;
; For inquiries or permission requests, please contact Tyler Grenier
; Email tgrenier.815@aol.com Text 860 - 930 - 6436 Call 203 - 263 - 6104.
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
                uint64_t num = va_arg(args, uint64_t);
                char* str; // Allocate space for the string representation
                intToString(num, str);
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