#include <LouAPI.h>

int16_t* wcscat(int16_t* dest, int16_t* src) {
    int16_t* dest_end = dest;

    // Find the end of the dest string
    while (*dest_end != 0) {
        dest_end++;
    }

    // Append src to dest
    while (*src != 0) {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    // Null-terminate the result
    *dest_end = 0;

    return dest;
}

uint64_t wcscat_s(int16_t* dest, int64_t dest_size, int16_t* src) {
    // Check if dest or dest_size is invalid
    if (dest == 0x0 || dest_size == 0) {
        return 0x16;
    }

    // If src is 0x00, return with an error code
    if (src == 0x00) {
        *dest = 0; // Null-terminate dest in case of an error
        return 0x16;
    }

    int64_t remaining_size = dest_size;
    int16_t* dest_ptr = dest;

    // Find the end of dest string
    while (*dest_ptr != 0) {
        if (--remaining_size == 0) {
            *dest = 0; // Null-terminate dest in case of an error
            return 0x16;
        }
        dest_ptr++;
    }

    // Append src to dest
    while (*src != 0) {
        if (--remaining_size == 0) {
            *dest = 0; // Null-terminate dest in case of an error
            return (dest_size + 0x22);
        }
        *dest_ptr++ = *src++;
    }

    *dest_ptr = 0; // Null-terminate dest at the end
    return 0;
}

int16_t* wcschr(int16_t* str, int16_t ch) {
    int16_t current_char = *str;  // Load the first character

    // Loop through the string until we find the character or reach the end
    while (current_char != 0) {
        if (current_char == ch) { // Character found
            return str;
        }
        str++;                     // Move to the next character
        current_char = *str;       // Load the next character
    }

    // If the character is not found and we reach the end
    return (ch == 0) ? str : 0x00; // Return end if ch is null, otherwise return 0x00
}

int16_t* wcscpy(int16_t* dest, const int16_t* src) {
    int16_t* dest_start = dest;  // Pointer to the beginning of dest to return at the end
    int16_t* offset_ptr = (int16_t*)(dest - src);  // Calculate the offset between dest and src

    // Copy characters from src to dest until the null terminator is reached
    do {
        int16_t ch = *src;           // Read character from src
        *(int16_t*)((uint64_t)offset_ptr + (uint64_t)src) = ch;    // Write character to dest based on offset
        src++;
    } while (*src != 0);  // Continue until null terminator

    return dest_start;  // Return the start of the destination string
}

uint64_t wcscpy_s(int16_t* dest, int64_t destSize, const int16_t* src) {
    if (dest == 0x00 || destSize == 0) {
        return 0x16;  // Return error code if destination or size is invalid
    }

    int32_t errorCode;
    
    if (src != 0x00) {
        while (*src != 0) {
            if (destSize == 0) {
                *dest = 0;
                return 0x22;  // Return error if destSize was too small to copy src
            }
            *dest++ = *src++;
            destSize--;
        }
        
        *dest = 0;  // Null-terminate the destination string
        return 0;   // Return 0 to indicate success
    } else {
        errorCode = 0x16;
    }

    *dest = 0;  // Ensure the destination is null-terminated in error case
    return errorCode;
}

int64_t wcscspn(const int16_t* str1, const int16_t* str2) {
    const int16_t* start = str1;

    while (*str1 != 0) {
        const int16_t* check = str2;
        while (*check != 0) {
            if (*str1 == *check) {
                return (str1 - start); // Return the position of the first match
            }
            check++;
        }
        str1++;
    }

    return (str1 - start); // Return length of str1 if no match is found
}

int16_t* wcsncat(int16_t* dest, const int16_t* src, int64_t count) {
    int16_t* result = dest;

    // Move to the end of the destination string
    while (*dest != 0) {
        dest++;
    }

    // Append source string to destination up to count characters or until a null terminator is found
    while (count > 0) {
        int16_t current_char = *src;
        *dest = current_char;
        if (current_char == 0) {
            return result; // Null-terminator found, finish
        }
        dest++;
        src++;
        count--;
    }

    // Null-terminate the result
    *dest = 0;
    return result;
}

uint64_t wcsncat_s(int16_t* dest, int64_t dest_size, const int16_t* src, int64_t count) {
    if (count == 0) {
        if (dest != 0x00) {
            *dest = 0;
            return 0;
        }
        return 22; // Error code for invalid argument
    }

    if (dest == 0x00 || dest_size == 0 || (count > 0 && src == 0x00)) {
        if (dest != 0x00) {
            *dest = 0;
        }
        return 22;
    }

    // Find the end of the destination string
    while (*dest != 0 && dest_size > 0) {
        dest++;
        dest_size--;
    }

    if (dest_size == 0) {
        *dest = 0;
        return 22;
    }

    // Concatenate source to destination
    while (count != 0 && dest_size > 1) {
        int16_t current_char = *src;
        *dest = current_char;
        if (current_char == 0) {
            return 0; // Successfully concatenated, return success
        }
        dest++;
        src++;
        dest_size--;
        count--;
    }

    *dest = 0; // Ensure the destination is null-terminated

    if (count != 0) {
        return 22; // Error if there's still remaining count and no space left in destination
    }

    return 0; // Success
}


uint64_t wcsncmp(const int16_t* str1, const int16_t* str2, int64_t count) {
    if (count == 0) {
        return 0; // No characters to compare, so strings are equal by definition
    }

    while (count-- > 0) {
        int16_t ch1 = *str1++;
        int16_t ch2 = *str2++;
        
        if (ch1 != ch2 || ch1 == 0) {
            return (uint64_t)((int64_t)ch1 - (int64_t)ch2);
        }
    }

    return 0; // All characters matched up to the specified count
}

int16_t* wcsncpy(int16_t* dest, const int16_t* src, int64_t count) {
    int16_t* result = dest;

    while (count > 0) {
        *dest = *src;
        if (*src == 0) {
            break;  // Stop copying if we hit a null character
        }
        dest++;
        src++;
        count--;
    }

    // If the source was shorter than count, pad with zeros
    if (count > 0) {
        memset(dest, 0, count * sizeof(int16_t));
    }

    return result;
}

uint64_t wcsncpy_s(int16_t* dest, int64_t dest_size, const int16_t* src, int64_t count) {
    if (dest == 0x00 || dest_size == 0 || (count != 0 && src == 0x00)) {
        if (dest != 0x00 && dest_size > 0) {
            *dest = 0;  // Null-terminate destination in error case
        }
        return 0x16; // Error code for invalid parameters
    }

    int64_t i = 0;
    while (i < count && i < dest_size - 1) {
        dest[i] = src[i];
        if (src[i] == 0) {
            return 0; // Return if we reach the null terminator
        }
        i++;
    }

    if (i == dest_size - 1) {
        dest[dest_size - 1] = 0; // Ensure null-termination
        return 0x22; // Error code indicating truncation occurred
    }

    if (i < count) {
        dest[i] = 0; // Null-terminate if source is smaller than count
    }

    return 0; // Success
}

size_t wcsnlen(const int16_t* str, size_t max_len) {
    size_t len = 0;
    while (len < max_len && *str != 0) {
        len++;
        str++;
    }
    return len;
}

//start above

int16_t* wcsrchr(int16_t* arg1, int16_t arg2) {
    int16_t* r9 = arg1;  // Save the start of the string
    int16_t i;
    
    // Iterate through the string to find the end
    do {
        i = *arg1;
        arg1++;
    } while (i != 0);

    // Iterate backwards to find the last occurrence of arg2
    do {
        arg1 -= 2;
        if (arg1 == r9) {
            break;
        }
    } while (*arg1 != arg2);

    // If found, return pointer to the last occurrence; otherwise, return nullptr
    return (*arg1 == arg2) ? arg1 : 0x00;
}

static int32_t __mb_cur_max = 0x1;

int64_t wcslen(int16_t* WString) {
    int64_t Counter = 0;
    while (WString[Counter] != 0) {
        Counter++;
    }
    return Counter;
}

int64_t wcscmp(int16_t* arg1, int16_t* arg2) {
    // Load the first characters from each string
    int16_t char1 = *arg1;
    int16_t char2 = *arg2;
    
    // Iterate over both strings until we find a mismatch or reach the end
    while (char1 == char2) {
        // If we reach the end of either string, break
        if (char1 == 0) {
            break;
        }
        
        // Move to the next character in both strings
        arg1++;
        arg2++;
        
        // Load the next characters from each string
        char1 = *arg1;
        char2 = *arg2;
    }
    
    // Calculate the difference between the last characters
    int64_t result = (int64_t)char1 - (int64_t)char2;

    // Return the result, which is negative, zero, or positive based on comparison
    return result;
}


int64_t RtlUnicodeToMultiByteN(void* dest, uint32_t destSize, int32_t* bytesCopied, int16_t* src, int32_t srcSize);

int64_t _wctomb_s_l(int32_t* pRetValue, void* mbStr, int64_t sizeInBytes, int16_t wchar) {
    int32_t bytesWritten = 0;

    // Check for invalid output buffer
    if (!mbStr || sizeInBytes == 0) {
        if (pRetValue) {
            *pRetValue = -1;
        }
        return 0x16;  // Return error code if buffer is null or size is zero
    }

    // Check size bounds
    if (sizeInBytes > 0x7FFFFFFF) {
        if (pRetValue) {
            *pRetValue = -1;
        }
        return 0x16;  // Error code for oversized buffer
    }

    // Perform conversion
    if (mbStr != 0x00) {
        // Call RtlUnicodeToMultiByteN to convert wide char to multi-byte
        int64_t conversionResult = RtlUnicodeToMultiByteN(mbStr, (uint32_t)sizeInBytes, &bytesWritten, &wchar, 2);

        // Set the byte count to the result if provided
        if (pRetValue) {
            *pRetValue = bytesWritten;
        }

        return conversionResult;
    } else {
        // Return the max byte size for the current locale if no conversion is needed
        if (pRetValue) {
            *pRetValue = __mb_cur_max;
        }
    }

    return 0;
}

uint64_t wctomb(void* mbStr, int16_t wchar) {
    // Default to an invalid byte count
    int32_t byteCount = -1;

    // Use the current max multi-byte length from the system
    int64_t maxBytes = (int64_t)__mb_cur_max;

    // Call _wctomb_s_l to perform the actual conversion
    if (_wctomb_s_l(&byteCount, mbStr, maxBytes, wchar) == 0) {
        // If conversion was successful, update byte count to reflect the result
        return (uint64_t)byteCount;
    }

    // If the conversion fails, return -1
    return (uint64_t)-1;
}

const uint16_t PwcBuffer[256] = {
    0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000,
    0x0068, 0x0000, 0x0028, 0x0000, 0x0028, 0x0000, 0x0028, 0x0000,
    0x0028, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000,
    0x0020, 0x0000, 0x0048, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0084, 0x0000, 0x0084, 0x0000,
    0x0084, 0x0000, 0x0084, 0x0000, 0x0084, 0x0000, 0x0084, 0x0000,
    0x0084, 0x0000, 0x0084, 0x0000, 0x0084, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0081, 0x0001, 0x0081, 0x0001, 0x0081, 0x0001,
    0x0081, 0x0001, 0x0081, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0082, 0x0001, 0x0082, 0x0001, 0x0082, 0x0001,
    0x0082, 0x0001, 0x0082, 0x0001, 0x0082, 0x0001, 0x0002, 0x0001,
    0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001,
    0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001,
    0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001,
    0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0020, 0x0000,
    0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000,
    0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000,
    0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000,
    0x0048, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000,
    0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000, 0x0010, 0x0000
};

const uint16_t* _pwctype = PwcBuffer;

uint64_t _iswctype_l(int16_t wchar, int16_t charClass) {
    uint32_t result;

    // Check if the wide character is within the valid range
    if (wchar >= 0x100) {
        result = 0;
    } else {
        // Retrieve the character class mask from _pwctype and apply charClass filter
        result = (_pwctype[wchar] & (uint16_t)charClass);
    }

    // Return the result as a 64-bit integer
    return (uint64_t)result;
}

uint64_t _wchartodigit(int16_t arg1) {
    // Check if the character falls within the ASCII digit range '0' to '9'
    if (arg1 >= 0x30) {
        if (arg1 < 0x3A) {
            return arg1 - 0x30;
        }

        // Unicode digit ranges for various scripts
        if (arg1 < 0xFF10) {
            if (arg1 >= 0x660 && arg1 < 0x66A) return arg1 - 0x660; // Arabic-Indic digits
            if (arg1 >= 0x6F0 && arg1 < 0x6FA) return arg1 - 0x6F0; // Extended Arabic-Indic digits
            if (arg1 >= 0x966 && arg1 < 0x970) return arg1 - 0x966; // Devanagari digits
            if (arg1 >= 0x9E6 && arg1 < 0x9F0) return arg1 - 0x9E6; // Bengali digits
            if (arg1 >= 0xA66 && arg1 < 0xA70) return arg1 - 0xA66; // Gurmukhi digits
            if (arg1 >= 0xAE6 && arg1 < 0xAF0) return arg1 - 0xAE6; // Gujarati digits
            if (arg1 >= 0xB66 && arg1 < 0xB70) return arg1 - 0xB66; // Oriya digits
            if (arg1 >= 0xC66 && arg1 < 0xC70) return arg1 - 0xC66; // Tamil digits
            if (arg1 >= 0xCE6 && arg1 < 0xCF0) return arg1 - 0xCE6; // Telugu digits
            if (arg1 >= 0xD66 && arg1 < 0xD70) return arg1 - 0xD66; // Kannada digits
            if (arg1 >= 0xE50 && arg1 < 0xE5A) return arg1 - 0xE50; // Thai digits
            if (arg1 >= 0xED0 && arg1 < 0xEDA) return arg1 - 0xED0; // Lao digits
            if (arg1 >= 0xF20 && arg1 < 0xF2A) return arg1 - 0xF20; // Tibetan digits
            if (arg1 >= 0x1040 && arg1 < 0x104A) return arg1 - 0x1040; // Myanmar digits
            if (arg1 >= 0x17E0 && arg1 < 0x17EA) return arg1 - 0x17E0; // Khmer digits
            if (arg1 >= 0x1810 && arg1 <= 0x1819) return arg1 - 0x1810; // Mongolian digits
        }
        // Fullwidth ASCII digits
        else if (arg1 >= 0xFF10 && arg1 < 0xFF1A) {
            return arg1 - 0xFF10;
        }
    }

    // If the character is not a recognized digit, return -1
    return 0xFFFFFFFF;
}



uint64_t wcstoxlX(int64_t arg1, int16_t* arg2, int16_t** arg3, int32_t base, int32_t flags, int32_t is_unsigned) {
    // Set initial conditions and store `arg2` pointer
    int32_t radix = base;
    int16_t* p = arg2;
    int32_t result = 0;
    int32_t digit_value;
    int64_t max_div = 0xFFFFFFFFFFFFFFFF / base;
    int64_t max_mod = 0xFFFFFFFFFFFFFFFF % base;

    if (arg3) *arg3 = arg2;

    // Check for null pointer or invalid base range
    if (!p || (base != 0 && (base < 2 || base > 36))) return 0;

    // Skip white spaces
    while (_iswctype_l(*p, 8)) p++;

    // Handle optional '+' or '-' signs
    int sign = 1;
    if (*p == L'-') {
        sign = -1;
        p++;
    } else if (*p == L'+') {
        p++;
    }

    // Determine the base
    if (base == 0) {
        if (*p == L'0') {
            if ((p[1] | 0x20) == L'x') { // Hexadecimal prefix "0x"
                radix = 16;
                p += 2;
            } else {
                radix = 8;
                p++;
            }
        } else {
            radix = 10;
        }
    } else if (base == 16 && *p == L'0' && (p[1] | 0x20) == L'x') {
        p += 2;  // Skip the "0x" prefix
    }

    // Process each digit
    while ((digit_value = _wchartodigit(*p)) != -1) {
        if (digit_value >= radix) break;

        if (result > max_div || (result == max_div && digit_value > max_mod)) {
            // Handle overflow
            result = (flags & 2) ? 0xFFFFFFFF : 0x7FFFFFFF;
            if (arg3) *arg3 = p;
            return result;
        }

        result = result * radix + digit_value;
        p++;
    }

    // Apply sign for signed integers
    if (!(flags & 2)) result *= sign;

    if (arg3) *arg3 = p;
    return result;
}

uint64_t wcstoul(int16_t* arg1, int64_t* arg2, int32_t arg3) {
    // Cast arg2 to match the expected type in wcstoxlX
    return wcstoxlX(0x00, arg1, (int16_t**)arg2, arg3, 1, 0);
}


int64_t wcstombs(void* dest, int16_t* src, uint32_t maxBytes) {
    uint32_t count = 0;
    int64_t length = -1;
    
    // Calculate the length of the source wide string.
    do {
        length++;
    } while (src[length] != 0);
    
    if (dest == 0x00) {
        // Only calculate the required size, if dest is 0x00.
        RtlUnicodeToMultiByteSize(&count, src, (length * 2) + 2);
    } else {
        // Convert wide character string to multibyte character string.
        RtlUnicodeToMultiByteN(dest, maxBytes, &count, src, (length * 2) + 2);
    }
    
    return (int64_t)(count - 1);
}

int16_t* wcsstr(int16_t* haystack, int16_t* needle) {
    int16_t* r8 = haystack;
    int16_t* r10 = needle;

    // If the needle is empty, return the haystack
    if (*r10 == 0) {
        return haystack;
    }

    // Iterate through the haystack
    while (*r8 != 0) {
        int16_t* rdx = r10;
        int16_t* r9_2 = r8;

        // Check if the substring matches
        while (*rdx != 0 && *r9_2 == *rdx) {
            r9_2++;
            rdx++;
        }

        // If we reached the end of the needle, we found the substring
        if (*rdx == 0) {
            return r8;
        }

        // Move to the next character in the haystack
        r8++;
    }

    // If the needle was not found, return 0x00
    return 0x00;
}

int64_t wcsspn(int16_t* arg1, int16_t* arg2) {
    int16_t i = *arg1;  // Initialize `i` with the first character of arg1
    int16_t* rax = arg1;  // Set `rax` to the start of arg1
    
    // Loop through each character in arg1 until reaching null terminator
    while (i != 0) {
        int16_t* r9_1 = arg2;  // Pointer to iterate through arg2
        int16_t r11_1 = *arg2;  // First character of arg2
        
        // Check if `i` is found in `arg2`
        if (r11_1 != i) {
            int16_t rdx = r11_1;
            
            // Loop through `arg2` until we find a match for `i` or reach the end
            do {
                if (rdx == 0) {
                    // No match found; return the current offset (rax - arg1) in 16-bit units
                    return (rax - arg1);
                }
                r9_1++;
                rdx = *r9_1;
            } while (rdx != i);  // Continue until a match is found or end of arg2
        }
        
        rax++;  // Move to the next character in `arg1`
        i = *rax;
    }
    
    // Return the offset in 16-bit units
    return (rax - arg1);
}