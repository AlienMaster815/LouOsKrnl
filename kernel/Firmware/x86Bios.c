#include <LouAPI.h>
#include <WinAPI/NtAPI/ntstatus.h>

// x86BiosCall
// x86BiosFreeBuffer
// x86BiosReadMemory
// x86BiosWriteMemory

static uint8_t x86BiosInitialized = 0x0;
static uint8_t x86BiosBufferAllocated = 0x0;
static uint32_t x86BiosTransferLength = 0x0;
static uint8_t HalpVideoBiosPresent = 0x0;
static uint32_t HalpBiosCallCount = 0x0;
static uint8_t HalpBugcheckInProgress = 0x0;
static uint64_t HalpFrameBufferBase;
static uint64_t HalpIoMemoryBase;
static uint64_t x86BiosIoMemory;
static uint64_t x86BiosFrameBuffer = 0x0;


uint64_t XmEmulateInterrupt(char arg1, int32_t* arg2);

uint64_t x86BiosExecuteInterruptShadowed(char arg1) {
    uint64_t HalpFrameBufferBase_1 = HalpFrameBufferBase;
    uint64_t HalpIoMemoryBase_1 = HalpIoMemoryBase;

    if (x86BiosInitialized == 0) {
        return 4;
    }

    // If HalpIoMemoryBase_1 is not zero, set x86BiosIoMemory to that value
    if (HalpIoMemoryBase_1 != 0) {
        x86BiosIoMemory = HalpIoMemoryBase_1;
    }

    // If HalpFrameBufferBase_1 is not zero, set x86BiosFrameBuffer to that value
    if (HalpFrameBufferBase_1 != 0) {
        x86BiosFrameBuffer = HalpFrameBufferBase_1;
    }

    // Placeholder for rdx, it might be set later based on context
    uint32_t* rdx;
    // Call to the BIOS interrupt emulation function
    uint32_t rax = XmEmulateInterrupt(arg1, rdx);

    // Check if the emulation was successful, otherwise log an error
    if (rax != 1) {
        LouPrint("HAL: Interrupt emulation failed, rax:%h\n", (uint64_t)rax);
    }

    // Return the result of the emulation
    return (uint64_t)rax;
}

NTSTATUS x86BiosAllocateBuffer(int32_t* arg1, int16_t* arg2, int16_t* arg3) {

    if (x86BiosInitialized == 1 && x86BiosBufferAllocated == 0) {
        // Copy x86BiosTransferLength to a local variable
        int32_t x86BiosTransferLength_1 = x86BiosTransferLength;

        // Check if *arg1 is less than or equal to x86BiosTransferLength_1
        if (*arg1 <= x86BiosTransferLength_1) {
            x86BiosBufferAllocated = 1;  // Mark buffer as allocated
            *arg2 = 0x2000;              // Set *arg2 to 0x2000 (assuming this is the buffer address)
            *arg3 = 0;                   // Set *arg3 to 0 (no error)
            *arg1 = x86BiosTransferLength_1;  // Set *arg1 to the actual allocated length
            return STATUS_SUCCESS;        // NTSTATUS success code
        }
    }

    // If conditions are not met, return STATUS_INSUFFICIENT_RESOURCES
    return STATUS_INSUFFICIENT_RESOURCES;
}


int64_t x86BiosCall(char arg1) {
    // Check if the Video BIOS is present
    if (HalpVideoBiosPresent == 0) {
        // If BIOS is not present, trigger a system-specific trap (0x2c)
        asm("INT $0x2C");  // This can be used for trap(0x2c) in a platform-specific way
    }

    // Save the current BIOS call count
    int32_t HalpBiosCallCount_1 = HalpBiosCallCount;
    // Increment the BIOS call count
    HalpBiosCallCount += 1;

    // Check if BIOS calls are in progress and there is no bugcheck in progress
    if (HalpBiosCallCount_1 != 0 && HalpBugcheckInProgress == 0) {
        // If a BIOS call is in progress and no bugcheck is in progress, trigger the trap
        asm("INT $0x2C");  // This is for trap(0x2c)
    }

    // Execute the BIOS interrupt shadowed by x86BiosExecuteInterruptShadowed and store the result
    bool r8 = (x86BiosExecuteInterruptShadowed(arg1) == 1);

    // Decrement the BIOS call count after the interrupt is handled
    HalpBiosCallCount -= 1;

    // Return the result, converting the boolean result into an int32_t result
    int32_t result = r8 ? 1 : 0;

    return result;
}