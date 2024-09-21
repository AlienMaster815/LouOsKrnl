#include <LouDDK.h>
#include <NtAPI.h>

//wcsncpy
wchar_t* wcsncpy(wchar_t* dest, const wchar_t* src, size_t n) {
    size_t i = 0;
    while (i < n && src[i] != L'\0') {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = L'\0';
        i++;
    }
    return dest;
}
//wcscmp
int wcscmp(const wchar_t* s1, const wchar_t* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned short*)s1 - *(const unsigned short*)s2;
}
//MmAllocateContiguousMemory
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes){
    return LouMallocEx(NumberOfBytes, KILOBYTE_PAGE);
}

//MmFreeConiguousMemory
void MmFreeContiguousMemory(void* BaseAddress) {
    // Ensure the address is valid and free the memory
    if (BaseAddress != 0x00) {
        LouFree((uint8_t*)BaseAddress);  // Assuming LouFree works with LouMallocEx allocations
    }
}
//MmGetPhysicalAddress
PHYSICAL_ADDRESS MmGetPhysicalAddress(PVOID BaseAddress){
    uint64_t PAddress;
    PHYSICAL_ADDRESS R;
    RequestPhysicalAddress((uint64_t)BaseAddress, &PAddress);
    R.QuadPart = PAddress;
    return R;
}

//_vsnprintf
KERNEL_IMPORT int LouvsnPrintf(char *buffer, size_t buffer_size, const char *format, va_list args);

int _vsnprintf(char *buffer, size_t buffer_size, const char *format, ...) {
    return 0;
}

//wcslen
size_t wcslen(const wchar_t *s) {
    const wchar_t *ptr = s;
    while (*ptr) {
        ptr++;
    }
    return ptr - s; // Return the number of characters
}

//RtlAppendUnicodeToString
NTSTATUS RtlAppendUnicodeToString(
    PUNICODE_STRING Destination,
    _In_opt_ PCWSTR Source
) {
    // Check if the source is NULL
    if (Source == 0x00) {
        return STATUS_SUCCESS; // Nothing to append
    }

    // Calculate the lengths
    size_t destLen = Destination->Length / sizeof(WCHAR);
    size_t sourceLen = wcslen(Source);
    
    // Check for overflow
    if (destLen + sourceLen > (0xFFFF / sizeof(WCHAR))) {
        return STATUS_BUFFER_OVERFLOW; // Destination buffer too small
    }

    // Update the Destination string length
    Destination->Length += (USHORT)(sourceLen * sizeof(WCHAR));
    Destination->Buffer[destLen] = L'\0'; // Ensure null termination

    // Copy the source to the end of the destination
    memcpy(Destination->Buffer + destLen, Source, sourceLen * sizeof(WCHAR));

    return STATUS_SUCCESS;
}
//swprintf
int swprintf(wchar_t *buffer, size_t buf_size, const wchar_t *format, ...){
    return 0;
}

KERNEL_IMPORT uint16_t GetNPROC();
//KeNumberProcessors
ULONG KeNumberProcessors(){
    return (ULONG)GetNPROC();
}
//strncpy
//_aullrem
//InterlockedIncrement
//InterlockDecrement
//_aulldiv
//_strnicmp
//InterlockedExchange
//_allmul
//_alldiv
//KeQuerySystemTime
//RtlQueryRegistryValues
//IoDisconnectInterrupt
//_snwprintf
//IoConnectInterrupt
//RtlInitUnicodeString
//IoCreateDevice
//IoDeleteDevice
//RtlCompareUnicodeString
//NtBuildNumber
//KefReleaseSpinLockFromDpcLevel
//KefAcquireSpinLockFromDpcLevel
//KeGetCurrentThread
//RtlUnwind
//_snprintf
//IoGetConfigurationInformation
//ExAllocatePoolWithTag
//sprintf
//ExFreePool