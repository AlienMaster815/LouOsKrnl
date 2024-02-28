#include <LouAPI.h>


extern uint64_t InterruptCode;

uint64_t get_cr2() {
    uint64_t value;
    asm volatile ("movq %%cr2, %0" : "=r" (value));
    return value;
}

extern void clear_cr2();

bool IsCheckingPageFault = false;
bool CheckIsSuccess = true;

void PageFault() {
    


    uint64_t VAddress = get_cr2();


    LouPrint("Page Fault Detected At Address %h Handleing Now\n",VAddress);




    if (IsKernelMode) {

        uint64_t PageValue = GetPageOfFaultValue(VAddress);
        LouPrint("vaulue of the Fault Page:%h\n",PageValue);
        if (GetPageOfFaultValue(VAddress) != GetPageValue(VAddress, KERNEL_PAGE_WRITE_PRESENT)) {
            
            LouPrint("Error Code Is:%d\n",InterruptCode);


            LouUnMapAddress(VAddress);
            LouMapAddress(VAddress, VAddress, KERNEL_PAGE_WRITE_PRESENT);

            PageValue = GetPageOfFaultValue(VAddress);
            LouPrint("vaulue of the Fault Page is now:%h\n", PageValue);
            if (PageValue != GetPageValue(VAddress, KERNEL_PAGE_WRITE_PRESENT)) goto FUCK;
            
            clear_cr2();
            return;
        }
    }
    if (!IsKernelMode) {
        uint64_t VAddressOffset = VAddress;
        uint64_t PageValue = GetPageOfFaultValue(VAddress);
        LouPrint("vaulue of the Fault Page:%h\n", PageValue);
        if (GetPageOfFaultValue(VAddress) != GetPageValue(VAddress, KERNEL_PAGE_WRITE_PRESENT)) {

            LouUnMapAddress(VAddress);
            LouMapAddress(VAddress, VAddress, KERNEL_PAGE_WRITE_PRESENT);

            PageValue = GetPageOfFaultValue(VAddress);
            LouPrint("vaulue of the Fault Page is now:%h\n", PageValue);
            if (PageValue != GetPageValue(VAddress, KERNEL_PAGE_WRITE_PRESENT)) goto FUCK;
        }
        while (1);
    }
    else {
        FUCK:
        LouPanic("Page Fault Detected", BAD);
    }
    
}
