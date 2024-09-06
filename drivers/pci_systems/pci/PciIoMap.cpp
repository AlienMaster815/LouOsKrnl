#include <LouDDK.h>
#include <NtAPI.h>


#define PCI_DEVICE_INTERFACE 1

//allocates Virtual Page
KERNEL_IMPORT 
void* LouKeMallocVirtualPage(
    uint64_t PAddress, //in opt
    uint64_t Flags,
    bool LargePage
);

void EnumerateBaseAddressRegisters(
    PPCI_COMMON_CONFIG PciConfig,
    P_PCI_DEVICE_OBJECT pdev
);

void LouKeMapMmIO(
    void* InterfaceStructure,
    uint8_t Interfacetype,
    uint64_t Flags
){

    switch(Interfacetype){

        case(PCI_DEVICE_INTERFACE):{

            P_PCI_DEVICE_OBJECT PDEV = (P_PCI_DEVICE_OBJECT)InterfaceStructure;

            PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
			GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, PciConfig);

            EnumerateBaseAddressRegisters(
                PciConfig, 
                PDEV
            ); 

			LouFree((RAMADD)PciConfig);
            while(1);
            return;
        }
        default:
            return;
    }

}

typedef struct _BAR{
    union type{
        struct _DUMMY_STRUCT_MMIO{
            uint32_t IdBit    : 1; // fgfgalways 0;
            uint32_t Type     : 2; // Type 0x00 = 32 bits // 0x01 = 16 bit // 0x02 = 64 bit 
            uint32_t Prefetch : 1; // Prefetchable Bit
            uint32_t BaseAddress : 28;
        }mmio;
        struct _DUMMY_STRUCT_IO{
            uint32_t IdBit       : 1; // always 1;
            uint32_t ReservedBit : 1; // dont fucking care
            uint32_t BaseAddress : 30;
        }io;

    }type;
}BAR, * PBAR;

void EnumerateBaseAddressRegisters(
    PPCI_COMMON_CONFIG PciConfig,
    P_PCI_DEVICE_OBJECT pdev
    ){

    for(uint8_t i = 0 ; i < 6; i++){

        UNUSED PBAR BarValue;

        if(PciConfig->Header.u.type0.BaseAddresses[i] & 0x01){
            LouPrint("BAR %d Is IO\n", i);

        }
        else{
            LouPrint("BAR %d Is MmIO\n", i);
            BarValue = (PBAR)&PciConfig->Header.u.type0.BaseAddresses[i];
            BarValue = (PBAR)&PciConfig->Header.u.type0.BaseAddresses[i];
            switch (BarValue->type.mmio.Type){

                case 0x01:{
                    LouPrint("Bar %d is 16 Bit Memmory Space\n", i);
                    break;
                }
                case 0x02:{
                    LouPrint("Bar %d Is 64 Bit\n", i);
                    break;
                }
                default:{ //32 Bit
                    LouPrint("Bar %d is 32 Bit Memmory Space\n", i);
                    break;
                }
            }
        }

        LouPrint("Bar %d Is:%h\n", i, PciConfig->Header.u.type0.BaseAddresses[i]);

    }

}


BaseAddressRegister GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV) {
	BaseAddressRegister Foo(PDEV);

	return Foo;
}