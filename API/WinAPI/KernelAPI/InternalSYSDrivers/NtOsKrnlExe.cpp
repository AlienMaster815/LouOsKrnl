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
PVOID MmAllocateContiguousMemory(
	_In_ SIZE_T           NumberOfBytes,
	_In_ PHYSICAL_ADDRESS HighestAcceptableAddress
){
    return LouMallocEx(NumberOfBytes, KILOBYTE_PAGE);
}

//MmFreeConiguousMemory
void MmFreeContiguousMemory(
	_In_ PVOID BaseAddress
){
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


KERNEL_IMPORT uint16_t GetNPROC();
//KeNumberProcessors
ULONG KeNumberProcessors(){
    return (ULONG)GetNPROC();
}

//_aullrem
unsigned __int64 _aullrem(unsigned __int64 dividend, unsigned __int64 divisor) {
    unsigned __int64 quotient = dividend / divisor;
    return dividend - (quotient * divisor);
}

LONG InterlockedIncrement(
    _Inout_ LONG volatile *Addend
) {
    LONG result = 1; // Initialize result with the value to increment by (1)

    // Inline assembly for atomic increment with lock prefix
    __asm__ __volatile__ (
        "lock; xaddl %0, %1"  // Perform an atomic addition
        : "+r" (result), "+m" (*Addend)  // Output operands: result and memory location
        :  // No input operands needed
        : "memory"
    );

    return result;  // xadd returns the old value in result, no need to add 1
}
//InterlockDecrement
LONG InterlockedDecrement(
    _Inout_ LONG volatile *Addend
) {
    LONG result = -1;  // Initialize result to -1 for decrement

    // Inline assembly for atomic decrement with lock prefix
    __asm__ __volatile__ (
        "lock; xaddl %0, %1"  // Perform an atomic subtraction
        : "+r" (result), "+m" (*Addend)  // Output operands: result and memory location
        :  // No input operands needed
        : "memory"
    );

    return result;  // Return the decremented value
}
//_aulldiv
ULONGLONG _aulldiv(ULONGLONG Dividend, ULONGLONG Divisor) {
    // If the divisor is zero, return 0 (undefined behavior)
    if (Divisor == 0) {
        return 0; // Could raise a divide-by-zero exception in real kernel code
    }

    // If the dividend is less than the divisor, the quotient is 0
    if (Dividend < Divisor) {
        return 0;
    }

    ULONGLONG quotient = 0;
    ULONGLONG remainder = 0;
    int bit;

    // Perform the division bit by bit, starting from the most significant bit
    for (bit = 63; bit >= 0; --bit) {
        remainder = (remainder << 1) | ((Dividend >> bit) & 1); // Shift dividend and add current bit

        if (remainder >= Divisor) {
            remainder -= Divisor;
            quotient |= (1ULL << bit); // Set the quotient bit at the current position
        }
    }

    return quotient;
}
//_strnicmp
int _strnicmp(const char* str1, const char* str2, size_t count) {
    if (count == 0) {
        return 0;  // If no characters are to be compared, return 0 (equal)
    }

    while (count-- > 0 && *str1 && *str2) {
        // Convert both characters to lowercase for comparison
        char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + ('a' - 'A') : *str1;
        char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + ('a' - 'A') : *str2;

        // Compare characters
        if (c1 != c2) {
            return (unsigned char)c1 - (unsigned char)c2;
        }

        // Move to the next character in both strings
        str1++;
        str2++;
    }

    // If we reach the end of the comparison or strings are equal so far
    if (count == (size_t)-1) {
        return 0;
    }

    // Handle cases where one string is shorter than the other
    return (unsigned char)(*str1) - (unsigned char)(*str2);
}
//InterlockedExchange
LONG InterlockedExchange(LONG volatile *Target, LONG Value) {
    LONG oldValue;

    // Inline assembly to atomically exchange the values
    __asm__ __volatile__ (
        "lock; xchgl %0, %1"    // Perform atomic exchange using xchg instruction
        : "=r" (oldValue), "+m" (*Target)  // Output: old value, modify: *Target
        : "0" (Value)           // Input: new value to set
        : "memory"              // Clobbers: memory
    );

    return oldValue;  // Return the previous value before the exchange
}

//_allmul
ULONGLONG _allmul(ULONGLONG a, ULONGLONG b) {
    ULONG aLo = (ULONG)(a & 0xFFFFFFFF);        // Low 32 bits of a
    ULONG aHi = (ULONG)(a >> 32);               // High 32 bits of a
    ULONG bLo = (ULONG)(b & 0xFFFFFFFF);        // Low 32 bits of b
    ULONG bHi = (ULONG)(b >> 32);               // High 32 bits of b

    // Multiply the low parts
    ULONGLONG loProduct = (ULONGLONG)aLo * (ULONGLONG)bLo;

    // Multiply cross parts
    ULONGLONG midProduct1 = (ULONGLONG)aHi * (ULONGLONG)bLo;
    ULONGLONG midProduct2 = (ULONGLONG)aLo * (ULONGLONG)bHi;

    // Multiply the high parts
    ULONGLONG hiProduct = (ULONGLONG)aHi * (ULONGLONG)bHi;

    // Calculate the final result (shifting is done correctly)
    ULONGLONG result = loProduct + ((midProduct1 + midProduct2) << 32);  // Shift cross-products by 32
    result += (hiProduct << 32) << 32;  // Effectively shifting by 64 bits, but done in two steps

    return result;
}
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;

LONGLONG _alldiv(LONGLONG dividend, LONGLONG divisor) {
    int negativeResult = 0;

    // Handle zero divisor (undefined behavior)
    if (divisor == 0) {
        return 0; // You might want to raise an exception or handle this case
    }

    // Check if the dividend is negative and make it positive
    if (dividend < 0) {
        dividend = -dividend;
        negativeResult = 1; // Result will be negative if only one is negative
    }

    // Check if the divisor is negative and make it positive
    if (divisor < 0) {
        divisor = -divisor;
        negativeResult ^= 1; // XOR with 1 will toggle the sign if only one is negative
    }

    // Perform the division using unsigned 64-bit division
    ULONGLONG quotient = (ULONGLONG)dividend / (ULONGLONG)divisor;

    // Apply the negative sign if necessary
    return negativeResult ? -quotient : quotient;
}
//RtlQueryRegistryValues
NTSTATUS RtlQueryRegistryValues(
    ULONG RelativeTo,
    PCWSTR Path,
    PRTL_QUERY_REGISTRY_TABLE QueryTable,
    PVOID Context,
    PVOID Environment
){
    LouPrint("RtlQueryRegistryValues()\n");



    LouPrint("RtlQueryRegistryValues() STATUS_SUCCESS\n");
    while(1);
    return STATUS_SUCCESS;
}

//RtlInitUnicodeString
void RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString) {
    if (DestinationString == nullptr) {
        return;  // Do nothing if the destination string is null
    }

    if (SourceString != nullptr) {
        size_t sourceLength = wcslen(SourceString);  // Get the length of the source string (in characters)

        // Initialize the UNICODE_STRING structure
        DestinationString->Length = static_cast<USHORT>(sourceLength * sizeof(wchar_t));   // Length in bytes
        DestinationString->MaximumLength = static_cast<USHORT>((sourceLength + 1) * sizeof(wchar_t));  // Including null terminator
        DestinationString->Buffer = const_cast<PWSTR>(SourceString);  // Set the buffer to point to the source string
    } else {
        // Initialize an empty string
        DestinationString->Length = 0;
        DestinationString->MaximumLength = 0;
        DestinationString->Buffer = nullptr;
    }
}

//IoCreateDevice
NTSTATUS IoCreateDevice(
    PDRIVER_OBJECT DriverObject,      // Driver object
    ULONG DeviceExtensionSize,        // Size of device extension
    PUNICODE_STRING DeviceName,       // Name of the device (optional)
    DEVICE_TYPE DeviceType,           // Device type (e.g., FILE_DEVICE_DISK)
    ULONG DeviceCharacteristics,      // Device characteristics (e.g., removable)
    BOOLEAN Exclusive,                // Exclusive access flag
    PDEVICE_OBJECT *DeviceObject      // Pointer to the created device object
) {

    LouPrint("IoCreateDevice()\n");

    LouPrint("IoCreateDevice() STATUS_SUCCESS\n");

    while(1);
    return STATUS_SUCCESS;
}

void IoDeleteDevice(
  _In_ PDEVICE_OBJECT DeviceObject
){  
    LouPrint("IoDeleteDevice()");

    LouPrint("IoDeleteDevice() STATUS_SUCCESS\n");
    while(1);
}

 LONG RtlCompareUnicodeString(
  _In_ PCUNICODE_STRING String1,
  _In_ PCUNICODE_STRING String2,
  _In_ BOOLEAN          CaseInSensitive
){
    LouPrint("RtlCompareUnicodeString()\n");
    LouPrint("RtlCompareUnicodeString() STATUS_SUCCESS\n");
    while(1);
    // Compare lengths first
    if (String1->Length != String2->Length) {
        return (String1->Length < String2->Length) ? -1 : 1;
    }

    // Get the length in characters (not bytes)
    size_t length = String1->Length / sizeof(wchar_t);

    // If case-insensitive, convert each character to lowercase and compare
    if (CaseInSensitive) {
        for (size_t i = 0; i < length; i++) {
            //wchar_t c1 = towlower(String1->Buffer[i]);
            //wchar_t c2 = towlower(String2->Buffer[i]);
            //if (c1 != c2) {
            //    return (c1 < c2) ? -1 : 1;
            //}
        }
    } else {
        // Case-sensitive comparison
        for (size_t i = 0; i < length; i++) {
            if (String1->Buffer[i] != String2->Buffer[i]) {
                return (String1->Buffer[i] < String2->Buffer[i]) ? -1 : 1;
            }
        }
    }

    // If all characters are equal, return 0
    return 0;
}

//NtBuildNumber

//KefReleaseSpinLockFromDpcLevel
void KefReleaseSpinLockFromDpcLevel(
   PKSPIN_LOCK SpinLock
){

    LouPrint("KefReleaseSpinLockFromDpcLevel()\n");

    LouPrint("KefReleaseSpinLockFromDpcLevel() STATUS_SUCCESS\n");
    while(1);
}
//KefAcquireSpinLockFromDpcLevel
VOID
KeAcquireSpinLockAtDpcLevel(
    PKSPIN_LOCK SpinLock
){
    LouPrint("KeAcquireSpinLockAtDpcLevel()\n");

    LouPrint("KeAcquireSpinLockAtDpcLevel() STATUS_SUCCESS\n");
    while(1);
}
//KeGetCurrentThread
PKTHREAD KeGetCurrentThread(){
    LouPrint("PKTHREAD KeGetCurrentThread();\n");

    LouPrint("PKTHREAD KeGetCurrentThread(); STATUS_SUCCESS\n");
    while(1);
    return 0x00;
}

typedef void* PEXCEPTION_RECORD;

//RtlUnwind
VOID
RtlUnwind(
    _In_opt_ PVOID TargetFrame,
    _In_opt_ PVOID TargetIp,
    _In_opt_ PEXCEPTION_RECORD ExceptionRecord,
    _In_ PVOID ReturnValue
){
    LouPrint("RtlUnwind()\n");
    LouPrint("RtlUnwind() STATUS_SUCCESS\n");
    while(1);
}

PVOID ExAllocatePoolWithTag(
  _In_ POOL_TYPE PoolType,
  _In_ SIZE_T                                         NumberOfBytes,
  _In_ ULONG                                          Tag
){
    LouPrint("ExAllocatePoolWithTag()\n");

    LouPrint("ExAllocatePoolWithTag() STATUS_SUCCESS\n");
    while(1);
    return 0;
}


NTSTATUS ExCreatePool(
  ULONG                       Flags,
  ULONG_PTR                   Tag,
  POOL_CREATE_EXTENDED_PARAMS *Params,
  HANDLE                      *PoolHandle
){


    return STATUS_SUCCESS;
}