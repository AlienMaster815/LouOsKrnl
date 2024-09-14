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

LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

void PageFault() {
    

    
    uint64_t VAddress = get_cr2();
    uint64_t PAddress = 0x00;
    LouPrint("\nPage Fault Detected At Address %h Handleing Now\n",VAddress);
     
    RequestPhysicalAddress(VAddress, &PAddress);

    // Check for specific error causes, e.g.:
    if (InterruptCode & 0x1) {
        LouPrint("Page fault caused by page protection violation\n");
        while(1);
    } else {
        if(PAddress != 0x00){
            //PAddress = (uint64_t)LouMalloc(KILOBYTE_PAGE);
            LouPrint("Physicall Address Is:%h\n", PAddress);
            LouKeMapcontinuousMemmoryBlock(PAddress, VAddress, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);
        }
        else{
            LouPrint("Allocateing New Page\n");
            PAddress = (uint64_t)LouMalloc(KILOBYTE_PAGE);
            //LouKeMapcontinuousMemmoryBlock(PAddress, VAddress, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);
            LouKeMapcontinuousMemmoryBlock(VAddress, VAddress, KILOBYTE_PAGE, KERNEL_PAGE_WRITE_PRESENT);
        }
    }

    clear_cr2();
}


