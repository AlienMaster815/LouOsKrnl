#include <LouDDK.h>
#include <NtAPI.h>

void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber,ULONG Function,PPCI_COMMON_CONFIG ConfigBuffer){
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

    if(getHeaderType(SystemIoBusNumber, SlotNumber, Function) == 0x00){
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
            
        ConfigBuffer->Header.u.type0.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x34);            ConfigBuffer->Header.u.type0.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3C);
        ConfigBuffer->Header.u.type0.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3D);
        ConfigBuffer->Header.u.type0.MinimumGrant = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3E);
        ConfigBuffer->Header.u.type0.MaximumLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3F);
    }
    else if(getHeaderType(SystemIoBusNumber, SlotNumber, 0) == 0x01){
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
    else if(getHeaderType(SystemIoBusNumber, SlotNumber, 0) == 0x02){
        ConfigBuffer->Header.u.type2.SocketRegistersBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);

        //TODO: Finish this            

    }
}

void LouKeHalRegisterPCiDevice(
    P_PCI_DEVICE_OBJECT PDEV
){
    PPCI_COMMON_CONFIG Config = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    uint32_t BarSize = 0x00;
    uint8_t Flags;
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, Config);
    //BarAddress = Config->Header.u.type0.BaseAddresses[5];

    //LouPrint("Bar Address Is:%h\n", BarAddress);
    if(Config->Header.HeaderType == 0){
        for(uint8_t i = 0 ; i < 6; i++){
            if(Config->Header.u.type0.BaseAddresses[i] == 0x00){
                continue;
            }
            //fuck it im just going to use binary
            Flags = Config->Header.u.type0.BaseAddresses[i] & 0xb1;
            if(Flags == 0){
                Flags = Config->Header.u.type0.BaseAddresses[i] & 0b110;
                if((Flags >> 1) == 0){
                    //32
                    LouPrint("Device Is 32 Bit MmIO\n");
                    Flags = Config->Header.u.type0.BaseAddresses[i] & 0b1000;
                    if(Flags == 0b1000){
                        LouPrint("Device Caheable\n");
                        write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i), 0xFFFFFFFF);
                        BarSize = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i)) & 0xFFFFFFF0;
                        BarSize = (~(BarSize & 0xFFFFFFF0)) + 1;
                        write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i), Config->Header.u.type0.BaseAddresses[i]);
                        EnforceSystemMemoryMap(
                            Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0,
                            BarSize
                        );
                        LouKeMallocVMmIO(Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0, BarSize, KERNEL_PAGE_WRITE_PRESENT);
                    }
                    else{
                        LouPrint("Device Uncaheable\n");
                        write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i), 0xFFFFFFFF);
                        BarSize = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i)) & 0xFFFFFFF0;
                        BarSize = (~(BarSize & 0xFFFFFFF0)) + 1;
                        write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0_OFFSET + (4 * i), Config->Header.u.type0.BaseAddresses[i]);
                        EnforceSystemMemoryMap(
                            Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0,
                            BarSize
                        );
                        LouKeMallocVMmIO(Config->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0, BarSize, KERNEL_PAGE_WRITE_PRESENT | CACHE_DISABLED_PAGE);
                    }
                }
                else if((Flags >> 1) == 1){
                    //16
                }
                else if((Flags >> 1) == 2){
                    //64
                }
            }
        }
    }
    LouFree((RAMADD)Config);
}

void* LouKeHalGetPciVirtualBaseAddress(
    PPCI_COMMON_CONFIG Config,
    uint8_t BarNumber
){
    uint8_t Flags;

    //fuck it im just going to use binary
    Flags = Config->Header.u.type0.BaseAddresses[BarNumber] & 0xb1;
    if(Flags == 0){
        Flags = Config->Header.u.type0.BaseAddresses[BarNumber] & 0b110;
        if(Flags == 0){
            //32
            return (void*)LouKeVMemmorySearchVirtualSpace(Config->Header.u.type0.BaseAddresses[BarNumber] & 0xFFFFFFF0);
        }
        else if(Flags == 1){
            //16
        }
        else if(Flags == 2){
            //64
        }
    }


    //LouPrint("Address Is:%h\n", VAddress)

    return (void*)0x00;
}
