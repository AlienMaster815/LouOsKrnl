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

int LouvsnPrintf(char *buffer, size_t buffer_size, const char *format, va_list args) {
    char *buf_ptr = buffer;
    const char *p = format;
    size_t remaining = buffer_size - 1; // Leave space for null terminator

    while (*p != '\0' && remaining > 0) {
        if (*p == '%') {
            p++;
            switch (*p) {
                case 'd': {
                    int num = va_arg(args, int);
                    int len = 0, temp = num;
                    char num_str[20]; // Enough to store any 32-bit integer

                    if (num == 0) {
                        if (remaining > 0) *buf_ptr++ = '0';
                        remaining--;
                        break;
                    }

                    if (num < 0) {
                        if (remaining > 0) *buf_ptr++ = '-';
                        remaining--;
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
                    for (char *np = num_str; *np != '\0' && remaining > 0; np++) {
                        *buf_ptr++ = *np;
                        remaining--;
                    }
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0' && remaining > 0) {
                        *buf_ptr++ = *str++;
                        remaining--;
                    }
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(args, int);
                    if (remaining > 0) {
                        *buf_ptr++ = c;
                        remaining--;
                    }
                    break;
                }
                default: {
                    if (remaining > 0) *buf_ptr++ = '%';
                    remaining--;
                    if (remaining > 0) *buf_ptr++ = *p;
                    remaining--;
                    break;
                }
            }
        } else {
            if (remaining > 0) {
                *buf_ptr++ = *p;
                remaining--;
            }
        }
        p++;
    }

    *buf_ptr = '\0'; // Null-terminate the output string
    return (buffer_size - remaining - 1); // Return the number of characters written (not including null)
}


int LouswPrintf(wchar_t *buffer, size_t buf_size, const wchar_t *format, ...) {
    if (buffer == NULL || format == NULL || buf_size == 0) {
        return -1; // Error: invalid parameters
    }

    va_list args;
    va_start(args, format);

    size_t written = 0; // Number of wide characters written
    wchar_t *buf_ptr = buffer;

    while (*format != L'\0' && written < buf_size - 1) { // Leave space for null terminator
        if (*format == L'%') {
            format++;
            switch (*format) {
                case L'd': {
                    int num = va_arg(args, int);
                    wchar_t num_str[20]; // Enough for any 32-bit integer
                    int len = 0;

                    if (num < 0) {
                        *buf_ptr++ = L'-';
                        written++;
                        num = -num;
                    }

                    // Convert number to string
                    do {
                        num_str[len++] = (num % 10) + L'0';
                        num /= 10;
                    } while (num > 0);

                    // Output the number in reverse order
                    while (len > 0 && written < buf_size - 1) {
                        *buf_ptr++ = num_str[--len];
                        written++;
                    }
                    break;
                }
                case L's': {
                    const wchar_t *str = va_arg(args, wchar_t *);
                    while (*str != L'\0' && written < buf_size - 1) {
                        *buf_ptr++ = *str++;
                        written++;
                    }
                    break;
                }
                case L'c': {
                    wchar_t c = (wchar_t)va_arg(args, int);
                    if (written < buf_size - 1) {
                        *buf_ptr++ = c;
                        written++;
                    }
                    break;
                }
                // Add more cases as needed (e.g., for hex, float, etc.)
                default:
                    if (written < buf_size - 1) {
                        *buf_ptr++ = L'%';
                        written++;
                    }
                    if (written < buf_size - 1) {
                        *buf_ptr++ = *format;
                        written++;
                    }
                    break;
            }
        } else {
            if (written < buf_size - 1) {
                *buf_ptr++ = *format;
                written++;
            }
        }
        format++;
    }

    *buf_ptr = L'\0'; // Null-terminate the string
    va_end(args);

    return (int)written; // Return the number of wide characters written
}