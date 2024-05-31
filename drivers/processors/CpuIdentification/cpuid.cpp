#include "../processors.h"

KERNEL_IMPORT bool IsIntel(string VendorID);
KERNEL_IMPORT uint8_t GetCPUVendor();

KERNEL_IMPORT bool IsIntelCore(string VendorID);

bool CPU::CPUID::IsProcessorBrand(VENDOR_ID Ven){
    if(CpuIdPacket->CpuVenId == Ven) return true;
    else return false;
}
bool CPU::CPUID::IsProcessorId(PROCCESSOR_ID ProcID){
    if(CpuIdPacket->ProccessorId == ProcID) return true;
    else return false;
}

uint64_t CPU::CPUID::GetProcessorVersion(){
    return CpuIdPacket->ProccessorVersion;
}

uint16_t CPU::CPUID::GetNumberOfProcessors(){
    return CpuIdPacket->NumberOfProcessors;
}


CPU::CPUID::CPUID(){

    CpuIdPacket = (PCPUID_PACKET)LouMalloc(sizeof(CPUID_PACKET));

    CpuIdPacket->ProccessorId = UNKNOWNProc;
    CpuIdPacket->CpuVenId = UNKNOWNVen;

    if(GetCPUVendor() == GENUINEINTEL){
        CpuIdPacket->CpuVenId = INTEL;

        if(GetProcessor() == INTEL_CORE_PROCESSOR){
            CpuIdPacket->ProccessorId = INTEL_CORE;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("Intel Core\n");
            return;
        }
        else if(GetProcessor() == PENTIUM_4){
            CpuIdPacket->ProccessorId = PENTIUM_4_PROCESSOR;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("PENTIUM 4\n");
            return;
        }
        else if(GetProcessor() == XENON51xx_PROCESSOR){
            CpuIdPacket->ProccessorId = XENON51xx;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("x51\n");
            return;
        }    
        else if(GetProcessor() == CORE2_PROCESSOR){
            CpuIdPacket->ProccessorId = CORE2;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("Core 2\n");
            return;
        }    
        else if(GetProcessor() == XENON54xx_PROCESSOR){
            CpuIdPacket->ProccessorId = XENON54xx;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("x54\n");
            return;
        }    
        else if(GetProcessor() == ATOM_PROCESSOR){
            CpuIdPacket->ProccessorId = ATOM_Family;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            //LouPrint("ATOM\n");
            return;
        }    

    }
    else if(GetCPUVendor() == AUTHENTICAMD){
        CpuIdPacket->CpuVenId = AMD;
        
        if(GetProcessor() == ATHLON_X1_CORE){
            CpuIdPacket->ProccessorId = ATHLONX1;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            return;
        }
        else if(GetProcessor() == ATHLON_X2_CORE){
            CpuIdPacket->ProccessorId = ATHLONX2;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            return;
        }
        else if(GetProcessor() == PHENOM_CORE){
            CpuIdPacket->ProccessorId = PHENOM;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();  
            return;      
        }
        else if(GetProcessor() == RYZEN_CORE){
            CpuIdPacket->ProccessorId = RYZEN;
            CpuIdPacket->ProccessorVersion = GetCPUCoreVersion();
            CpuIdPacket->NumberOfProcessors = GetNPROC();
            return;
        }
    }
    else if(GetCPUVendor() == AUTHENTICVIA){
        CpuIdPacket->CpuVenId = VIA;
        return;
    }
    else {
        CpuIdPacket->CpuVenId = UNKNOWNVen;
        CpuIdPacket->ProccessorId = UNKNOWNProc;
        CpuIdPacket->ProccessorVersion = UNKOWN_PROCESSOR;
        CpuIdPacket->NumberOfProcessors = UNKOWN_PROCESSOR;
    }

}

CPU::CPUID::~CPUID(){

    LouFree((RAMADD)CpuIdPacket,sizeof(CPUID_PACKET));

}

bool CPU::CPUID::IsFeatureSupported(FEATURE Feature){
       
    unsigned int eax, ebx, ecx, edx;

    cpuid(1, &eax, &ebx, &ecx, &edx);

    if(Feature == FPU){
        // Check if FPU (bit 0 of EDX) is present
        return edx & 0x1;
    }
    else if(Feature == SMP){
        // Check if SMP (bit 9 of EDX) is supported
        return edx & (1 << 9);
    }
    else if(Feature == MMX){
        // Check if MMX (bit 23 of EDX) is supported
        return edx & (1 << 23);
    }
    else if(Feature == SSE1){
        // Check if SSE (bit 25 of EDX) is supported
        return edx & (1 << 25);
    }
    else if(Feature == SSE2){
        // Check if SSE2 (bit 26 of EDX) is supported
        return edx & (1 << 26);
    }
    else if(Feature == SSE3){
        // Check if SSE3 (bit 0 of ECX) is supported
        return ecx & 0x1;
    }
    else if(Feature == SSE4A){
        // Execute extended CPUID leaf 0x80000001
        cpuid(0x80000001, &eax, &ebx, &ecx, &edx);

        // Check if SSE4a (bit 6 of ECX) is supported
        return ecx & (1 << 6);
    }
    else if(Feature == SSE42){
        return ecx & 0x1;
    }
    else if(Feature == HYPERTHREAD){
        // Check if Hyper-Threading (bit 28 of EDX) is supported
        return edx & (1 << 28);
    }

    return false;

}
