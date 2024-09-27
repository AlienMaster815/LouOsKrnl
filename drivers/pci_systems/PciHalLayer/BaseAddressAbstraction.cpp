#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>

#define BUS PDEV->bus
#define SLOT PDEV->slot
#define FUNCTION PDEV->func

KERNEL_IMPORT
uint16_t LouKeCreatIoPort(
    uint16_t PortSize
);

uint32_t LouKeReadBarValue(P_PCI_DEVICE_OBJECT PDEV, uint8_t BarNumber);
void LouKeWriteBarValue(P_PCI_DEVICE_OBJECT PDEV, uint8_t BarNumber, uint32_t Value);

KERNEL_IMPORT void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber,ULONG Function,PPCI_COMMON_CONFIG ConfigBuffer){
    ConfigBuffer->Header.VendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x00);
    ConfigBuffer->Header.DeviceID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x02);
    ConfigBuffer->Header.Command = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x04);
    ConfigBuffer->Header.Status = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x06);

    ConfigBuffer->Header.RevisionID = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x08);
    ConfigBuffer->Header.ProgIf = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x09);
    ConfigBuffer->Header.SubClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0A);
    ConfigBuffer->Header.BaseClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0B);
    ConfigBuffer->Header.CacheLineSize = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0C);
    ConfigBuffer->Header.LatencyTimer = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0D);
    ConfigBuffer->Header.HeaderType = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0E);
    ConfigBuffer->Header.BIST = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0F);

    if(ConfigBuffer->Header.HeaderType == 0x00){
        ConfigBuffer->Header.u.type0.BaseAddresses[0] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);
        ConfigBuffer->Header.u.type0.BaseAddresses[1] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x14);
        ConfigBuffer->Header.u.type0.BaseAddresses[2] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x18);
        ConfigBuffer->Header.u.type0.BaseAddresses[3] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x1C);
        ConfigBuffer->Header.u.type0.BaseAddresses[4] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x20);
        ConfigBuffer->Header.u.type0.BaseAddresses[5] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x24);

        ConfigBuffer->Header.u.type0.CIS = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x28);
        ConfigBuffer->Header.u.type0.SubVendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x2C);
        ConfigBuffer->Header.u.type0.SubSystemID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x2E);
        ConfigBuffer->Header.u.type0.ROMBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x30);
            
        ConfigBuffer->Header.u.type0.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x34);            
        ConfigBuffer->Header.u.type0.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3C);
        ConfigBuffer->Header.u.type0.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3D);
        ConfigBuffer->Header.u.type0.MinimumGrant = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3E);
        ConfigBuffer->Header.u.type0.MaximumLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3F);
    }
    else if(ConfigBuffer->Header.HeaderType == 0x01){
        ConfigBuffer->Header.u.type1.BaseAddresses[0] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);
        ConfigBuffer->Header.u.type1.BaseAddresses[1] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x14);

        ConfigBuffer->Header.u.type1.PrimaryBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x18);
        ConfigBuffer->Header.u.type1.SecondaryBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x19);
        ConfigBuffer->Header.u.type1.SubordinateBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1A);
        ConfigBuffer->Header.u.type1.SecondaryLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1B);

        ConfigBuffer->Header.u.type1.IOBase = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1C);
        ConfigBuffer->Header.u.type1.IOLimit = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1D);

        ConfigBuffer->Header.u.type1.SecondaryStatus = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x1E);
        ConfigBuffer->Header.u.type1.MemoryBase = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x20);
        ConfigBuffer->Header.u.type1.MemoryLimit = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x22);
        ConfigBuffer->Header.u.type1.PrefetchBase = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x24);
        ConfigBuffer->Header.u.type1.PrefetchLimit = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x26);
          
        ConfigBuffer->Header.u.type1.PrefetchBaseUpper32 = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x28);
        ConfigBuffer->Header.u.type1.PrefetchLimitUpper32 = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x2C);

        ConfigBuffer->Header.u.type1.IOBaseUpper16 = pciConfigReadWord(SystemIoBusNumber, SlotNumber,Function, 0x30);
        ConfigBuffer->Header.u.type1.IOLimitUpper16 = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x32);

        ConfigBuffer->Header.u.type1.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x34);

        ConfigBuffer->Header.u.type1.ROMBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x38);

        ConfigBuffer->Header.u.type1.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3C);
        ConfigBuffer->Header.u.type1.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3D);

        ConfigBuffer->Header.u.type1.BridgeControl = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x3E);

    }
    else if(ConfigBuffer->Header.HeaderType == 0x02){
        ConfigBuffer->Header.u.type2.SocketRegistersBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);

        //TODO: Finish this            

    }
}

void PciSetPowerModeD0(
    P_PCI_DEVICE_OBJECT PDEV
){
    uint8_t CapPointer = pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, 0x34);

    if (CapPointer == 0x00) {
        LouPrint("No capabilities list present for this device.\n");
        return;
    }

    while (CapPointer != 0) {
        uint8_t CapId = pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, CapPointer);
        
        if (CapId == 0x01) {  // Power Management Capability ID
            uint16_t pmControl = pciConfigReadWord(PDEV->bus, PDEV->slot, PDEV->func, CapPointer + 4);
            pmControl = (pmControl & ~0x03) | 0x00;  // Set power state to D0 (full power)
            pciConfigWriteWord(PDEV->bus, PDEV->slot, PDEV->func, CapPointer + 4, pmControl);
            LouPrint("Power mode set to D0 (full power).\n");
            break;
        }

        CapPointer = pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, CapPointer + 1);  // Move to next capability
    }
}

static spinlock_t Lock;

void LouKeHalRegisterPCiDevice(
    P_PCI_DEVICE_OBJECT PDEV
){
    PPCI_COMMON_CONFIG Config = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    uint32_t BarSize = 0x00;
    uint8_t Flags;
    LouKIRQL OldIrql;
    //interrupts are an issue for this process turn them off and spinlock
    LouKeAcquireSpinLock(&Lock, &OldIrql);
    //get the pci configurations for the device
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, Config);
    //set the power mode to run full power
    PciSetPowerModeD0(PDEV);
    //LouPrint("Bar Address Is:%h\n", BarAddress);
    if(Config->Header.HeaderType == 0){
        for(uint8_t i = 0 ; i < 6; i++){
                Flags = Config->Header.u.type0.BaseAddresses[i] & 0x1;
                if(Flags == 0){
                    Flags = (Config->Header.u.type0.BaseAddresses[i] >> 1) & 0x03;
                    if(Flags == 0){
                        //32
                        if(Config->Header.u.type0.BaseAddresses[i] == 0x00){
                            LouKeWriteBarValue(PDEV, i, 0xFFFFFFFF);
                            BarSize = LouKeReadBarValue(PDEV, i);
                            if(BarSize){
                                BarSize = (~(BarSize & 0xFFFFFFF0)) + 1;
                                void* NewMMIO = LouMalloc(BarSize);
                                LouKeWriteBarValue(PDEV, i, 0);
                                LouKeWriteBarValue(PDEV, i ,(uint32_t)(uintptr_t)NewMMIO);
                                GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func,Config);
                            }else{
                                continue;
                            }
                        }
                        LouPrint("Device Is 32 Bit MmIO\n");
                        Flags = (Config->Header.u.type0.BaseAddresses[i] >> 3) & 0x01;
                        if(Flags == 1){
                            LouPrint("Device Caheable\n");
                            LouKeWriteBarValue(PDEV, i , 0xFFFFFFFF);
                            BarSize = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i)) & 0xFFFFFFF0;
                            BarSize = (~(BarSize & 0xFFFFFFF0)) + 1;
                            LouKeWriteBarValue(PDEV, i , Config->Header.u.type0.BaseAddresses[i]);
                            EnforceSystemMemoryMap(
                                Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0,
                                BarSize
                            );
                            LouKeMallocVMmIO(Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0, BarSize, KERNEL_PAGE_WRITE_PRESENT);
                        }
                        else{
                            LouPrint("Device Uncaheable\n");
                            LouKeWriteBarValue(PDEV, i , 0xFFFFFFFF);
                            BarSize = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i)) & 0xFFFFFFF0;
                            BarSize = (~(BarSize & 0xFFFFFFF0)) + 1;
                            LouKeWriteBarValue(PDEV, i , Config->Header.u.type0.BaseAddresses[i]);
                            EnforceSystemMemoryMap(
                                Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0,
                                BarSize
                            );
                            LouKeMallocVMmIO(Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0, BarSize, KERNEL_PAGE_WRITE_PRESENT | CACHE_DISABLED_PAGE);
                        }
                    }
                    else if(Flags == 1){
                        //16
                    }
                    else if(Flags == 2){
                        if(Config->Header.u.type0.BaseAddresses[i] == 0x00){
                            i++;
                            continue;
                        }
                    // Handle 64-bit MMIO (skip next BAR)
                    uint64_t BarLow = LouKeReadBarValue(PDEV, i);
                    uint64_t BarHigh = LouKeReadBarValue(PDEV, i + 1);
                    uint64_t BarAddress = ((uint64_t)BarHigh << 32) | (BarLow & 0xFFFFFFF0);
                    LouKeWriteBarValue(PDEV, i, 0xFFFFFFFF);
                    LouKeWriteBarValue(PDEV, i + 1, 0xFFFFFFFF);
                    uint64_t BarSize = (~(((uint64_t)LouKeReadBarValue(PDEV, i + 1) << 32) | 
                                (LouKeReadBarValue(PDEV, i) & 0xFFFFFFF0))) + 1;
                    LouKeWriteBarValue(PDEV, i, BarAddress);
                    LouKeWriteBarValue(PDEV, i + 1, BarAddress >> 32);
                    EnforceSystemMemoryMap(BarAddress, BarSize);
                    LouKeMallocVMmIO(BarAddress, BarSize, KERNEL_PAGE_WRITE_PRESENT);                
                    i++;
                }
            }
            else{
                LouKeWriteBarValue(PDEV, i, 0xFFFFFFFF);
                uint32_t BVal = LouKeReadBarValue(PDEV, i);
                BarSize = (~(BVal & 0xFFFFFFFC)) + 1;  // Mask out the lower 2 bits and invert
                LouKeWriteBarValue(PDEV, i, (LouKeCreatIoPort(BarSize) & 0xFFFFFFFC) | 0x1);

            }
        }
    }
    LouFree((RAMADD)Config);
    LouKeReleaseSpinLock(&Lock, &OldIrql);
}

void* LouKeHalGetPciVirtualBaseAddress(
    PPCI_COMMON_CONFIG Config,
    uint8_t BarNumber
){
    uint8_t Flags;
    //fuck it im just going to use binary
    if(Config->Header.HeaderType == 0){
        Flags = Config->Header.u.type0.BaseAddresses[BarNumber] & 0x01;
        if(Flags == 0){
            Flags = (Config->Header.u.type0.BaseAddresses[BarNumber] >> 1) & 0x03;
            if(Flags == 0){
                //32
                return (void*)LouKeVMemmorySearchVirtualSpace(Config->Header.u.type0.BaseAddresses[BarNumber] & 0xFFFFFFF0);
            }
            else if(Flags == 1){
                //16
            }
            else if(Flags == 2){
                //64
                uint64_t BarLow = Config->Header.u.type0.BaseAddresses[BarNumber];
                uint64_t BarHigh = Config->Header.u.type0.BaseAddresses[BarNumber + 1];
                return (void*)LouKeVMemmorySearchVirtualSpace((uint64_t)((BarHigh << 32) | (BarLow & 0xFFFFFFF0)));
            }
        }
        else{
            return (void*)(uintptr_t)(Config->Header.u.type0.BaseAddresses[BarNumber] & 0xFFFFFFFC);
        }
    }

    //LouPrint("Address Is:%h\n", VAddress)

    return (void*)0x00;
}

void* LouKeHalPnpInitializeBaseRegister(
    P_PCI_DEVICE_OBJECT PDEV,
    uint8_t BarNum
){
    //LouKeWriteBarValue(PDEV, BarNum, 0xFFFFFFFF);
    uint32_t BarValue = LouKeReadBarValue(PDEV, BarNum);

    LouPrint("Bar Value Is:%h\n", BarValue);

    while(1);
    return 0x00;
}