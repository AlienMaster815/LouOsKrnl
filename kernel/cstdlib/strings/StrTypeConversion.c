#include <LouAPI.h>

// Function to determine the number of bytes needed for a UTF-8 representation of a wchar_t
size_t wchar_to_utf8(wchar_t wc, char* utf8) {
    if (wc < 0x80) {
        if (utf8) utf8[0] = (char)wc;
        return 1;
    } else if (wc < 0x800) {
        if (utf8) {
            utf8[0] = (char)((wc >> 6) | 0xC0);
            utf8[1] = (char)((wc & 0x3F) | 0x80);
        }
        return 2;
    } else if (wc < 0x10000) {
        if (utf8) {
            utf8[0] = (char)((wc >> 12) | 0xE0);
            utf8[1] = (char)(((wc >> 6) & 0x3F) | 0x80);
            utf8[2] = (char)((wc & 0x3F) | 0x80);
        }
        return 3;
    } else if (wc < 0x110000) {
        if (utf8) {
            utf8[0] = (char)((wc >> 18) | 0xF0);
            utf8[1] = (char)(((wc >> 12) & 0x3F) | 0x80);
            utf8[2] = (char)(((wc >> 6) & 0x3F) | 0x80);
            utf8[3] = (char)((wc & 0x3F) | 0x80);
        }
        return 4;
    }
    return 0; // Invalid character
}

// Function to convert wchar_t* to char* (UTF-8)
char* ConvertWCharToChar(const wchar_t* wstr) {
    // Check for NULL input
    if (wstr == NULL) {
        return NULL;
    }

    // Calculate the length of the resulting UTF-8 string
    size_t len = 0;
    for (size_t i = 0; wstr[i] != L'\0'; ++i) {
        len += wchar_to_utf8(wstr[i], NULL);
    }

    //LouPrint("UTF-8 length is: %d\n", len);

    // Allocate memory for the resulting UTF-8 string
    char* str = (char*)LouMalloc(len + 1);
    if (str == NULL) {
        // Memory allocation error
        return NULL;
    }

    // Convert the wide string to UTF-8
    char* out = str;
    for (size_t i = 0; wstr[i] != L'\0'; ++i) {
        out += wchar_to_utf8(wstr[i], out);
    }

    // Null-terminate the resulting string
    *out = '\0';

    return str;
}