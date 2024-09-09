#include <LouDDK.h>
#include <NtAPI.h>

KERNEL_IMPORT uint8_t GetGlobalInterrupt();
KERNEL_IMPORT void ioapic_unmask_irq(uint8_t irq);
KERNEL_IMPORT void PS2KeyboardHandler();
KERNEL_IMPORT uint8_t GetTotalHardwareInterrupts();


#pragma pack(push, 1) // Pack structs on 1-byte boundary

class HWILM{
    public:
    HWILM();
    ~HWILM();

    LOUSTATUS InitializeHWilmEntry(void(*Handler)());
    LOUSTATUS DestroyHWilmEntry(void(*Handler)());
    void HandleHWilms();

    private:
    void(*Handlers[32])() = {0x00};
};

#pragma pack(pop) // Restore previous packing

//class HWILM{
    //public:
HWILM::HWILM(){

}
    
HWILM::~HWILM(){

}

LOUSTATUS HWILM::InitializeHWilmEntry(void(*Handler)()){

    for(uint8_t i = 0; i < 32; i++){
        if(Handlers[i] == 0x00){
            Handlers[i] = Handler;
            return STATUS_SUCCESS;
        }
    }

    return STATUS_UNSUCCESSFUL;
}

LOUSTATUS HWILM::DestroyHWilmEntry(void(*Handler)()){


    return STATUS_SUCCESS;
}

void HWILM::HandleHWilms(){

    for(uint8_t i = 0 ; i < 32; i++){
        if(Handlers[i] != 0x00){
            Handlers[i]();
        }
    }

}


    //private:
    //void(*Handler[32])();
//};

static HWILM* hwilms;

LOUDDK_API_ENTRY LOUSTATUS InitializeDynamicHardwareInterruptHandleing(){

    uint8_t TotalHardwareInterrupts = GetTotalHardwareInterrupts();

    hwilms = (HWILM*)LouMalloc(sizeof(HWILM) * TotalHardwareInterrupts);

	return STATUS_SUCCESS;
}

KERNEL_IMPORT uint8_t FindTrueIRQ(uint8_t IRQ);

LOUDDK_API_ENTRY LOUSTATUS RegisterHardwareInterruptHandler(void(*InterruptHandler)(), uint8_t PIN){

    LOUSTATUS Status = STATUS_SUCCESS;

    uint8_t IRQ = FindTrueIRQ(PIN);

    LouPrint("Registering Interrupt Handler To Interrupt Request:%d Via Pin:%d\n", IRQ ,PIN);

    Status = hwilms[IRQ].InitializeHWilmEntry(InterruptHandler);

    if(NT_SUCCESS(Status)){
        ioapic_unmask_irq(PIN);
        return Status;
    }
    else {
        return Status;
    }
}

LOUDDK_API_ENTRY void HardwareInterruptManager(){
    
    uint8_t IRQ = (GetGlobalInterrupt() - 0x20);
    
    hwilms[IRQ].HandleHWilms();

}
