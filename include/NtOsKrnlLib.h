#ifndef _NTOSKRNL_LIB
#define _NTOSKRNL_LIB

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _KERNEL_MODULE_

static inline unsigned __int64 __readgsqword(unsigned long Offset) {
    unsigned __int64 value;
    __asm__ __volatile__ (
        "movq %%gs:%1, %0"
        : "=r" (value)
        : "m" (*(const unsigned __int64 *) (unsigned __int64) Offset)
    );
    return value;
}


//well start with defining the Runtimes
int64_t RtlUnicodeToMultiByteSize(uint32_t* size, int16_t* src, int32_t length);
int64_t RtlUnicodeToMultiByteN(void* dest, uint32_t destSize, int32_t* bytesCopied, int16_t* src, int32_t srcSize);
uint64_t RtlUnicodeToUTF8N(char* utf8Dest, int32_t utf8MaxBytes, uint32_t* utf8BytesWritten, const int16_t* utf16Src, char strictCheck);
uint64_t CountUnicodeToUTF8(const int16_t* utf16Src, int32_t utf16Length, uint32_t* utf8Size);
void* RtlpIsUtf8Process(char arg1);
//Now Processes
int64_t PsIsServerSilo(void* arg1);
void* PsGetCurrentServerSiloGlobals();
//Now Wc
int64_t wcstombs(void* dest, int16_t* src, uint32_t maxBytes);
uint64_t wcstoul(int16_t* arg1, int64_t* arg2, int32_t arg3);
uint64_t wcstoxlX(int64_t arg1, int16_t* arg2, int16_t** arg3, int32_t base, int32_t flags, int32_t is_unsigned);
uint64_t _wchartodigit(int16_t arg1);
uint64_t _iswctype_l(int16_t wchar, int16_t charClass);
uint64_t wctomb(void* mbStr, int16_t wchar) ;
int64_t _wctomb_s_l(int32_t* pRetValue, void* mbStr, int64_t sizeInBytes, int16_t wchar);
int64_t wcscmp(int16_t* arg1, int16_t* arg2);
int64_t wcslen(int16_t* WString);
int16_t* wcsstr(int16_t* haystack, int16_t* needle) ;
int64_t wcsspn(int16_t* arg1, int16_t* arg2);
int16_t* wcsrchr(int16_t* arg1, int16_t arg2);
int16_t* wcscat(int16_t* dest, int16_t* src);
uint64_t wcscat_s(int16_t* dest, int64_t dest_size, int16_t* src);
int16_t* wcschr(int16_t* str, int16_t ch);
int16_t* wcscpy(int16_t* dest, const int16_t* src);
uint64_t wcscpy_s(int16_t* dest, int64_t destSize, const int16_t* src);
int64_t wcscspn(const int16_t* str1, const int16_t* str2);
int16_t* wcsncat(int16_t* dest, const int16_t* src, int64_t count);
uint64_t wcsncat_s(int16_t* dest, int64_t dest_size, const int16_t* src, int64_t count);
uint64_t wcsncmp(const int16_t* str1, const int16_t* str2, int64_t count);
int16_t* wcsncpy(int16_t* dest, const int16_t* src, int64_t count);
uint64_t wcsncpy_s(int16_t* dest, int64_t dest_size, const int16_t* src, int64_t count);
size_t wcsnlen(const int16_t* str, size_t max_len);
#else //Is Kernel Module



#endif //KernelModues
#ifdef __cplusplus
}
#endif
#endif //NTLIB