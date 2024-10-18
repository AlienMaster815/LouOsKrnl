#include <LouAPI.h>

void* PsGetCurrentServerSiloGlobals();


// Function to check if the process is UTF-8
void* RtlpIsUtf8Process(char arg1) {
    // Retrieve the current server silo globals
    void* globals = PsGetCurrentServerSiloGlobals();
    
    // Check specific offsets for UTF-8 flag
    if (*(uint16_t*)((uintptr_t)globals + 0x428) == 0xfde9 || 
        *(uint16_t*)((uintptr_t)globals + 0x468) == 0xfde9) {
        return (void*)1; // Return 1 if UTF-8 flag is set
    } else {
        uint64_t gsbase = __readgsqword(0); // Get the GS segment base
        void* rcx = *(void**)((uintptr_t)*(void**)((uintptr_t)gsbase + 0x188) + 0xb8);
        rcx = *(void**)((uintptr_t)rcx + 0x550);

        if (rcx == NULL) {
            return NULL; // If rcx is null, return null pointer
        }

        if (arg1 != 0) {
            if (*(uint16_t*)((uintptr_t)rcx + 0x34e) != 0xfde9) {
                return (void*)0; // Return 0 if not UTF-8
            } else {
                return (void*)1; // UTF-8 flag is set
            }
        } else if (*(uint16_t*)((uintptr_t)rcx + 0x34c) == 0xfde9) {
            return (void*)1; // Return 1 if UTF-8 flag is set
        }
    }
    
    return (void*)0; // Default to 0 if no conditions are met
}

uint64_t CountUnicodeToUTF8(const int16_t* utf16Src, int32_t utf16Length, uint32_t* utf8Size) {
    int64_t utf8Count = 0;
    const int16_t* utf16End = utf16Src + (utf16Length >> 1);
    
    while (utf16Src < utf16End) {
        uint32_t codePoint = *utf16Src++;
        
        if (codePoint >= 0xD800 && codePoint <= 0xDBFF) { // High surrogate
            if (utf16Src < utf16End) {
                uint32_t lowSurrogate = *utf16Src;
                if (lowSurrogate >= 0xDC00 && lowSurrogate <= 0xDFFF) { // Low surrogate
                    utf16Src++;
                    codePoint = ((codePoint - 0xD800) << 10) + (lowSurrogate - 0xDC00) + 0x10000;
                } else {
                    codePoint = 0xFFFD; // Invalid surrogate pair, use replacement character
                }
            } else {
                codePoint = 0xFFFD;
            }
        } else if (codePoint >= 0xDC00 && codePoint <= 0xDFFF) { // Unmatched low surrogate
            codePoint = 0xFFFD;
        }

        if (codePoint <= 0x7F) {
            utf8Count += 1;
        } else if (codePoint <= 0x7FF) {
            utf8Count += 2;
        } else if (codePoint <= 0xFFFF) {
            utf8Count += 3;
        } else {
            utf8Count += 4;
        }
    }
    
    *utf8Size = (uint32_t)utf8Count;
    return 0; // Assuming 0 indicates success
}

uint64_t RtlUnicodeToUTF8N(char* utf8Dest, int32_t utf8MaxBytes, uint32_t* utf8BytesWritten, const int16_t* utf16Src, char strictCheck) {
    if (utf16Src == NULL) {
        return STATUS_NO_MEMORY;
    }
    
    if (utf8Dest == NULL) {
        if (utf8BytesWritten == NULL) {
            return STATUS_INVALID_PARAMETER;
        }
        return CountUnicodeToUTF8(utf16Src, strictCheck, utf8BytesWritten);
    }
    
    if (strictCheck & 1) {
        return STATUS_INVALID_PARAMETER;
    }

    char* utf8DestEnd = utf8Dest + utf8MaxBytes;
    const int16_t* utf16SrcEnd = utf16Src + (strictCheck >> 1);
    int32_t utf8Count = 0;
    uint32_t surrogate = 0;

    while (utf16Src < utf16SrcEnd) {
        uint32_t codePoint = *utf16Src++;

        if (surrogate == 0) {
            if (codePoint >= 0xD800 && codePoint <= 0xDBFF) {
                surrogate = codePoint;
                continue;
            }
        } else {
            if (codePoint >= 0xDC00 && codePoint <= 0xDFFF) {
                codePoint = ((surrogate - 0xD800) << 10) + (codePoint - 0xDC00) + 0x10000;
            } else {
                codePoint = 0xFFFD; // Replace with replacement character
            }
            surrogate = 0;
        }

        int utf8BytesNeeded = 1;
        if (codePoint > 0x7F) {
            if (codePoint <= 0x7FF) utf8BytesNeeded = 2;
            else if (codePoint <= 0xFFFF) utf8BytesNeeded = 3;
            else utf8BytesNeeded = 4;
        }

        if (utf8Dest + utf8BytesNeeded > utf8DestEnd) {
            return STATUS_NO_MEMORY;
        }

        if (utf8BytesNeeded == 1) {
            *utf8Dest++ = (char)codePoint;
        } else {
            if (utf8BytesNeeded == 2) {
                *utf8Dest++ = 0xC0 | (codePoint >> 6);
                *utf8Dest++ = 0x80 | (codePoint & 0x3F);
            } else if (utf8BytesNeeded == 3) {
                *utf8Dest++ = 0xE0 | (codePoint >> 12);
                *utf8Dest++ = 0x80 | ((codePoint >> 6) & 0x3F);
                *utf8Dest++ = 0x80 | (codePoint & 0x3F);
            } else {
                *utf8Dest++ = 0xF0 | (codePoint >> 18);
                *utf8Dest++ = 0x80 | ((codePoint >> 12) & 0x3F);
                *utf8Dest++ = 0x80 | ((codePoint >> 6) & 0x3F);
                *utf8Dest++ = 0x80 | (codePoint & 0x3F);
            }
        }
        utf8Count += utf8BytesNeeded;
    }

    if (utf8BytesWritten != NULL) {
        *utf8BytesWritten = utf8Count;
    }

    return STATUS_SUCCESS;
}



int64_t RtlUnicodeToMultiByteN(void* dest, uint32_t destSize, int32_t* bytesCopied, int16_t* src, int32_t srcSize) {
    if (RtlpIsUtf8Process(0)) {
        // Check if UTF-8 encoding is required based on process settings
        if (bytesCopied == NULL) {
            static uint32_t tempBytesCopied;
            bytesCopied = (int32_t*)&tempBytesCopied;
        }
        if (srcSize == 0) {
            *bytesCopied = 0;
        } else {
            return RtlUnicodeToUTF8N(dest, destSize, (uint32_t*)bytesCopied, src, srcSize);
        }
    } else {
        // If UTF-8 process encoding isn't needed, determine encoding through silo globals
        void* globals = (void*)PsGetCurrentServerSiloGlobals();
        if (globals != NULL) {
            uint16_t utf16CodeUnit;
            int32_t tempSize = destSize >> 1; // Convert to number of UTF-16 units
            int16_t* utf16Ptr = src;

            // Iterate through UTF-16 source
            while (tempSize && *utf16Ptr) {
                utf16CodeUnit = *utf16Ptr++;
                if (utf16CodeUnit > 0x7F) {
                    if (destSize < 2) {
                        break;
                    }
                    *(uint8_t*)dest++ = (utf16CodeUnit >> 8) & 0xFF;
                    destSize -= 1;
                }
                *(uint8_t*)dest++ = utf16CodeUnit & 0xFF;
                destSize -= 1;
                tempSize -= 1;
            }

            if (bytesCopied != NULL) {
                *bytesCopied = (int32_t)((char*)dest - (char*)dest);
            }
        }
    }
    return 0;
}

int64_t RtlUnicodeToMultiByteSize(uint32_t* size, int16_t* src, int32_t length) {
    int16_t* rsi = src;

    if (RtlpIsUtf8Process(0) == 0) {
        uint32_t i = 0;
        void* globals = PsGetCurrentServerSiloGlobals();
        uint32_t remaining = (uint32_t)length >> 1; // Half the length, as we are working with wide chars
        
        if (*(uint32_t*)((uintptr_t)globals + 0x434) == 0) {
            i = remaining;
        } else if (remaining != 0) {
            while (remaining != 0) {
                uint64_t ch = (uint64_t)*rsi;
                rsi++;
                uint16_t val = *(*(int16_t**)((uintptr_t)globals + 0x450) + (ch << 1)) >> 8;

                // Check if the byte is non-zero
                i += (val != 0) ? 2 : 1;
                remaining--;
            }
        }
        *size = i;
    } else if (length == 0) {
        *size = 0;
    } else {
        // UTF-8 encoding process for multi-byte conversion
        RtlUnicodeToUTF8N(NULL, 0, size, rsi, (char)length);
    }

    return 0;
}
