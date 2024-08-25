#include <LouAPI.h>
#ifdef __x86_64__
    #include <limits.h>
#endif

#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <drivers/display/vga.h>

void LouSprintf(char *buffer, const char *format, ...) {
    va_list args;
    va_start(args, format);

    char *buf_ptr = buffer;
    const char *p = format;

    while (*p != '\0') {
        if (*p == '%') {
            p++;
            switch (*p) {
                case 'd': {
                    int num = va_arg(args, int);
                    int len = 0, temp = num;
                    char num_str[20]; // Enough to store any 32-bit integer

                    if (num == 0) {
                        *buf_ptr++ = '0';
                        break;
                    }

                    if (num < 0) {
                        *buf_ptr++ = '-';
                        num = -num;
                    }

                    // Calculate the length of the number
                    while (temp != 0) {
                        temp /= 10;
                        len++;
                    }

                    num_str[len] = '\0';
                    while (num != 0) {
                        num_str[--len] = (num % 10) + '0';
                        num /= 10;
                    }

                    // Copy number string to buffer
                    for (char *np = num_str; *np != '\0'; np++) {
                        *buf_ptr++ = *np;
                    }
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0') {
                        *buf_ptr++ = *str++;
                    }
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(args, int);
                    *buf_ptr++ = c;
                    break;
                }
                default: {
                    *buf_ptr++ = '%';
                    *buf_ptr++ = *p;
                    break;
                }
            }
        } else {
            *buf_ptr++ = *p;
        }
        p++;
    }

    *buf_ptr = '\0'; // Null-terminate the buffer
    va_end(args);
}


int LouSnprintf(char *buffer, size_t n, const char *format, ...) {
    va_list args;
    va_start(args, format);

    char *buf_ptr = buffer;
    const char *p = format;
    size_t count = 0;

    while (*p != '\0' && count < n - 1) { // Leave space for null-terminator
        if (*p == '%') {
            p++;
            switch (*p) {
                case 'd': {
                    int num = va_arg(args, int);
                    int len = 0, temp = num;
                    char num_str[20]; // Enough to store any 32-bit integer

                    if (num == 0) {
                        if (count < n - 1) {
                            *buf_ptr++ = '0';
                            count++;
                        }
                        break;
                    }

                    if (num < 0) {
                        if (count < n - 1) {
                            *buf_ptr++ = '-';
                            count++;
                        }
                        num = -num;
                    }

                    // Calculate the length of the number
                    while (temp != 0) {
                        temp /= 10;
                        len++;
                    }

                    num_str[len] = '\0';
                    while (num != 0) {
                        num_str[--len] = (num % 10) + '0';
                        num /= 10;
                    }

                    // Copy number string to buffer
                    for (char *np = num_str; *np != '\0' && count < n - 1; np++) {
                        *buf_ptr++ = *np;
                        count++;
                    }
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0' && count < n - 1) {
                        *buf_ptr++ = *str++;
                        count++;
                    }
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(args, int);
                    if (count < n - 1) {
                        *buf_ptr++ = c;
                        count++;
                    }
                    break;
                }
                default: {
                    if (count < n - 1) {
                        *buf_ptr++ = '%';
                        count++;
                    }
                    if (count < n - 1) {
                        *buf_ptr++ = *p;
                        count++;
                    }
                    break;
                }
            }
        } else {
            if (count < n - 1) {
                *buf_ptr++ = *p;
                count++;
            }
        }
        p++;
    }

    *buf_ptr = '\0'; // Null-terminate the buffer
    va_end(args);

    return count;
}