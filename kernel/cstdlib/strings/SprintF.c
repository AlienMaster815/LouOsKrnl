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


#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>

void append_char(char *buffer, size_t *index, char c, size_t buffer_size) {
    if (*index < buffer_size - 1) {
        buffer[(*index)++] = c;
    }
}

void append_string(char *buffer, size_t *index, const char *str, size_t buffer_size) {
    while (*str && *index < buffer_size - 1) {
        buffer[(*index)++] = *str++;
    }
}

void int_to_ascii(int value, char *buffer, size_t *index, size_t buffer_size) {
    // Handle negative numbers
    if (value < 0) {
        append_char(buffer, index, '-', buffer_size);
        value = -value;
    }
    
    // Convert integer to string (reverse order)
    int digits[10];
    int count = 0;
    if (value == 0) {
        append_char(buffer, index, '0', buffer_size);
        return;
    }
    while (value > 0 && count < 10) {
        digits[count++] = value % 10;
        value /= 10;
    }
    
    // Append digits in reverse
    for (int i = count - 1; i >= 0; i--) {
        append_char(buffer, index, digits[i] + '0', buffer_size);
    }
}


// Helper function to convert an unsigned integer to hexadecimal and append it to the buffer
void uint_to_hex(unsigned int value, char *buffer, size_t *index, size_t buffer_size, int uppercase) {
    const char *hex_chars = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";  // Choose case based on parameter
    int digits[8];
    int count = 0;
    
    if (value == 0) {
        append_char(buffer, index, '0', buffer_size);
        return;
    }
    
    while (value > 0 && count < 8) {
        digits[count++] = value % 16;
        value /= 16;
    }
    
    // Append digits in reverse
    for (int i = count - 1; i >= 0; i--) {
        append_char(buffer, index, hex_chars[digits[i]], buffer_size);
    }
}

int _vsnprintf(char *buffer, size_t buffer_size, const char *format, ...) {
    va_list args;
    va_start(args, format);
    size_t Index = 0;
    
    for (size_t i = 0; format[i] != '\0' && Index < buffer_size - 1; i++) {
        if (format[i] == '%') {
            i++; // Skip '%'
            switch (format[i]) {
                case 'd': // Signed integer
                case 'i': {
                    int value = va_arg(args, int);
                    int_to_ascii(value, buffer, &Index, buffer_size);
                    break;
                }
                case 'u': { // Unsigned integer
                    unsigned int value = va_arg(args, unsigned int);
                    int_to_ascii(value, buffer, &Index, buffer_size);
                    break;
                }
                case 'x': {  // Lowercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_hex(value, buffer, &Index, buffer_size, 0);  // 0 for lowercase hex
                    break;
                }
                case 'X': {  // Uppercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_hex(value, buffer, &Index, buffer_size, 1);  // 1 for uppercase hex
                    break;
                }
                case 'c': { // Character
                    char value = (char)va_arg(args, int);  // Characters are promoted to int in varargs
                    append_char(buffer, &Index, value, buffer_size);
                    break;
                }
                case 's': { // String
                    const char *value = va_arg(args, const char *);
                    append_string(buffer, &Index, value, buffer_size);
                    break;
                }
                default: {
                    append_char(buffer, &Index, '%', buffer_size);
                    append_char(buffer, &Index, format[i], buffer_size);
                    break;
                }
            }
        } else {
            append_char(buffer, &Index, format[i], buffer_size);
        }
    }
    
    buffer[Index] = '\0'; // Null-terminate the result
    va_end(args);
    return (int)Index; // Return how many characters were written
}

void append_wchar(wchar_t *buffer, size_t *index, wchar_t ch, size_t buffer_size) {
    if (*index < buffer_size - 1) {
        buffer[(*index)++] = ch;
    }
}

void append_wstring(wchar_t *buffer, size_t *index, const wchar_t *str, size_t buffer_size) {
    while (*str != L'\0' && *index < buffer_size - 1) {
        buffer[(*index)++] = *str++;
    }
}

void int_to_wide_ascii(int value, wchar_t *buffer, size_t *index, size_t buffer_size) {
    wchar_t digits[12];
    int count = 0;
    int is_negative = 0;

    if (value < 0) {
        is_negative = 1;
        value = -value;
    }

    do {
        digits[count++] = L'0' + (value % 10);
        value /= 10;
    } while (value > 0);

    if (is_negative) {
        append_wchar(buffer, index, L'-', buffer_size);
    }

    for (int i = count - 1; i >= 0; i--) {
        append_wchar(buffer, index, digits[i], buffer_size);
    }
}

void uint_to_wide_hex(unsigned int value, wchar_t *buffer, size_t *index, size_t buffer_size, int uppercase) {
    const wchar_t *hex_digits = uppercase ? L"0123456789ABCDEF" : L"0123456789abcdef";
    wchar_t digits[8];
    int count = 0;

    do {
        digits[count++] = hex_digits[value % 16];
        value /= 16;
    } while (value > 0);

    for (int i = count - 1; i >= 0; i--) {
        append_wchar(buffer, index, digits[i], buffer_size);
    }
}

//swprintf
int swprintf(wchar_t *buffer, size_t buffer_size, const wchar_t *format, ...) {
    va_list args;
    size_t index = 0;

    va_start(args, format);

    for (size_t i = 0; format[i] != L'\0' && index < buffer_size - 1; i++) {
        if (format[i] == L'%') {
            i++;  // Skip '%'
            switch (format[i]) {
                case L'd':  // Signed integer
                case L'i': {
                    int value = va_arg(args, int);
                    int_to_wide_ascii(value, buffer, &index, buffer_size);
                    break;
                }
                case L'u': {  // Unsigned integer
                    unsigned int value = va_arg(args, unsigned int);
                    int_to_wide_ascii((int)value, buffer, &index, buffer_size);
                    break;
                }
                case L'x': {  // Lowercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_wide_hex(value, buffer, &index, buffer_size, 0);
                    break;
                }
                case L'X': {  // Uppercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_wide_hex(value, buffer, &index, buffer_size, 1);
                    break;
                }
                case L'c': {  // Character
                    wchar_t value = (wchar_t)va_arg(args, int);
                    append_wchar(buffer, &index, value, buffer_size);
                    break;
                }
                case L's': {  // String
                    const wchar_t *value = va_arg(args, const wchar_t *);
                    append_wstring(buffer, &index, value, buffer_size);
                    break;
                }
                case L'%': {  // Literal '%'
                    append_wchar(buffer, &index, L'%', buffer_size);
                    break;
                }
                default: {  // Unsupported format specifier
                    append_wchar(buffer, &index, L'%', buffer_size);
                    append_wchar(buffer, &index, format[i], buffer_size);
                    break;
                }
            }
        } else {
            append_wchar(buffer, &index, format[i], buffer_size);  // Regular characters
        }
    }

    buffer[index] = L'\0';  // Null-terminate the result
    va_end(args);

    return (int)index;  // Return how many characters were written
}


int snprintf(char *buffer, size_t buffer_size, const char *format, ...) {
    va_list args;
    size_t index = 0;             // Tracks where we are in the buffer
    size_t total_chars_written = 0; // Keeps track of the total number of characters

    va_start(args, format);       // Start processing the variable arguments

    // Iterate over the format string
    for (size_t i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {  // We found a format specifier
            i++;  // Skip the '%' character

            switch (format[i]) {
                case 'd':   // Signed integer
                case 'i': {
                    int value = va_arg(args, int);
                    char temp_buffer[32];  // Temporary buffer for the integer
                    int temp_len = 0;

                    // Convert the integer to a string
                    temp_len = snprintf(temp_buffer, sizeof(temp_buffer), "%d", value);

                    // Add the characters to the buffer
                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    total_chars_written += temp_len;
                    break;
                }
                case 'u': {  // Unsigned integer
                    unsigned int value = va_arg(args, unsigned int);
                    char temp_buffer[32];
                    int temp_len = snprintf(temp_buffer, sizeof(temp_buffer), "%u", value);

                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    total_chars_written += temp_len;
                    break;
                }
                case 'x':   // Lowercase hexadecimal
                case 'X': {  // Uppercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    char temp_buffer[32];
                    int temp_len = snprintf(temp_buffer, sizeof(temp_buffer), (format[i] == 'x') ? "%x" : "%X", value);

                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    total_chars_written += temp_len;
                    break;
                }
                case 'c': {  // Character
                    char value = (char)va_arg(args, int);
                    if (index < buffer_size - 1) {
                        buffer[index++] = value;
                    }
                    total_chars_written++;
                    break;
                }
                case 's': {  // String
                    const char *value = va_arg(args, const char *);
                    size_t value_len = strlen(value);

                    for (size_t j = 0; j < value_len && index < buffer_size - 1; j++) {
                        buffer[index++] = value[j];
                    }
                    total_chars_written += value_len;
                    break;
                }
                case '%': {  // Literal '%' character
                    if (index < buffer_size - 1) {
                        buffer[index++] = '%';
                    }
                    total_chars_written++;
                    break;
                }
                default: {  // Unsupported format specifier, treat as literal
                    if (index < buffer_size - 1) {
                        buffer[index++] = '%';
                    }
                    if (index < buffer_size - 1) {
                        buffer[index++] = format[i];
                    }
                    total_chars_written += 2;
                    break;
                }
            }
        } else {
            // Just a regular character
            if (index < buffer_size - 1) {
                buffer[index++] = format[i];
            }
            total_chars_written++;
        }
    }

    // Null-terminate the string
    if (buffer_size > 0) {
        buffer[index] = '\0';
    }

    va_end(args);  // End processing the arguments

    return (int)total_chars_written;  // Return the total number of characters that would have been written
}

int _snwprintf(wchar_t *buffer, size_t buffer_size, const wchar_t *format, ...) {
    va_list args;
    size_t index = 0;

    // Ensure we don't write beyond the buffer size limit
    if (buffer_size == 0) {
        return -1;  // Return error if the buffer size is 0
    }

    va_start(args, format);

    for (size_t i = 0; format[i] != L'\0' && index < buffer_size - 1; i++) {
        if (format[i] == L'%') {
            i++;  // Skip '%'
            switch (format[i]) {
                case L'd':  // Signed integer
                case L'i': {
                    int value = va_arg(args, int);
                    int_to_wide_ascii(value, buffer, &index, buffer_size);
                    break;
                }
                case L'u': {  // Unsigned integer
                    unsigned int value = va_arg(args, unsigned int);
                    int_to_wide_ascii((int)value, buffer, &index, buffer_size);
                    break;
                }
                case L'x': {  // Lowercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_wide_hex(value, buffer, &index, buffer_size, 0);
                    break;
                }
                case L'X': {  // Uppercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    uint_to_wide_hex(value, buffer, &index, buffer_size, 1);
                    break;
                }
                case L'c': {  // Character
                    wchar_t value = (wchar_t)va_arg(args, int);
                    append_wchar(buffer, &index, value, buffer_size);
                    break;
                }
                case L's': {  // String
                    const wchar_t *value = va_arg(args, const wchar_t *);
                    append_wstring(buffer, &index, value, buffer_size);
                    break;
                }
                case L'%': {  // Literal '%'
                    append_wchar(buffer, &index, L'%', buffer_size);
                    break;
                }
                default: {  // Unsupported format specifier
                    append_wchar(buffer, &index, L'%', buffer_size);
                    append_wchar(buffer, &index, format[i], buffer_size);
                    break;
                }
            }
        } else {
            append_wchar(buffer, &index, format[i], buffer_size);  // Regular characters
        }
    }

    // Null-terminate the buffer if space is available
    if (index < buffer_size) {
        buffer[index] = L'\0';
    } else if (buffer_size > 0) {
        buffer[buffer_size - 1] = L'\0';  // Ensure null termination if buffer is full
    }

    va_end(args);

    return (int)index;  // Return the number of characters written
}


//_snprintf
int _snprintf(char *buffer, size_t buffer_size, const char *format, ...) {
    va_list args;
    size_t index = 0;  // Keep track of the buffer index

    if (buffer_size == 0) {
        return -1;  // No space to write anything
    }

    va_start(args, format);  // Start parsing the variable arguments

    // Process the format string
    for (size_t i = 0; format[i] != '\0' && index < buffer_size - 1; i++) {
        if (format[i] == '%') {
            i++;  // Skip the '%' character
            switch (format[i]) {
                case 'd':  // Signed integer
                case 'i': {
                    int value = va_arg(args, int);
                    char temp_buffer[32];  // Temporary buffer to hold the number
                    int temp_len = snprintf(temp_buffer, sizeof(temp_buffer), "%d", value);
                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    break;
                }
                case 'u': {  // Unsigned integer
                    unsigned int value = va_arg(args, unsigned int);
                    char temp_buffer[32];
                    int temp_len = snprintf(temp_buffer, sizeof(temp_buffer), "%u", value);
                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    break;
                }
                case 'x':  // Lowercase hexadecimal
                case 'X': {  // Uppercase hexadecimal
                    unsigned int value = va_arg(args, unsigned int);
                    char temp_buffer[32];
                    int temp_len = snprintf(temp_buffer, sizeof(temp_buffer), (format[i] == 'x') ? "%x" : "%X", value);
                    for (int j = 0; j < temp_len && index < buffer_size - 1; j++) {
                        buffer[index++] = temp_buffer[j];
                    }
                    break;
                }
                case 'c': {  // Single character
                    char value = (char)va_arg(args, int);
                    if (index < buffer_size - 1) {
                        buffer[index++] = value;
                    }
                    break;
                }
                case 's': {  // String
                    const char *value = va_arg(args, const char *);
                    size_t value_len = strlen(value);
                    for (size_t j = 0; j < value_len && index < buffer_size - 1; j++) {
                        buffer[index++] = value[j];
                    }
                    break;
                }
                case '%': {  // Literal '%'
                    if (index < buffer_size - 1) {
                        buffer[index++] = '%';
                    }
                    break;
                }
                default: {  // Unsupported format specifier
                    if (index < buffer_size - 1) {
                        buffer[index++] = '%';
                    }
                    if (index < buffer_size - 1) {
                        buffer[index++] = format[i];
                    }
                    break;
                }
            }
        } else {
            // Regular characters in the format string
            if (index < buffer_size - 1) {
                buffer[index++] = format[i];
            }
        }
    }

    // Null-terminate the buffer
    buffer[index] = '\0';

    va_end(args);  // Clean up the argument list

    return (int)index;  // Return the number of characters written (excluding the null terminator)
}