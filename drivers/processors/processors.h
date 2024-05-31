#ifndef _PROCESRS_H
#define _PROCESRS_H

#include <LouDDK.h>
#include <NtAPI.h>

KERNEL_IMPORT uint16_t GetNPROC();
KERNEL_IMPORT void UpgradeNPROC();
KERNEL_IMPORT void DowngradeNPROC();

KERNEL_IMPORT void cpuid(unsigned int code, unsigned int* eax, unsigned int* ebx, unsigned int* ecx, unsigned int* edx);

#define IS_PENTIUM4 family == 0xF && model >= 0x3 && model <= 0xF
#define IS_XENON51xx family == 0xF && model == 0xF
#define IS_CORE2 family == 0x6 && (model == 0xE || model == 0xF)
#define IS_XENON54xx family == 0xF && model == 0x5
#define IS_INTEL_CORE (family == 0x6 && model >= 0xE) || (family == 0xF && model >= 0x6)
#define IS_ATOM_200_300 family == 0x6 && model == 0x2C
#define IS_ATOM_N family == 0x6 && model == 0x27

typedef struct {
    uint8_t* Base;
    uint8_t* Top;
} Stack;

namespace CPU{

    typedef 
    enum{
        UNKNOWNVen,
        INTEL,
        AMD,
        VIA,
    }VENDOR_ID;

    typedef enum{
        FPU,
        SMP,
        MMX,
        SSE1,
        SSE2,
        SSE3,
        SSE4A,
        SSE42,
        HYPERTHREAD,
    }FEATURE;

    typedef enum{
        UNKNOWNProc,
        PENTIUM_4_PROCESSOR,
        XENON51xx,
        CORE2,
        XENON54xx,
        INTEL_CORE,
        ATOM_Family,
        ATHLONX1,
        ATHLONX2,
        PHENOM,
        RYZEN,
    }PROCCESSOR_ID;

    typedef struct {
        VENDOR_ID CpuVenId;
        PROCCESSOR_ID ProccessorId;
        uint64_t ProccessorVersion;
        uint16_t NumberOfProcessors;
    }CPUID_PACKET, * PCPUID_PACKET;

    class CPUID {
        public:
            CPUID();
            ~CPUID();
            bool IsProcessorBrand(VENDOR_ID Ven);
            bool IsProcessorId(PROCCESSOR_ID ProcID);
            uint64_t GetProcessorVersion();
            uint16_t GetNumberOfProcessors();
            bool IsFeatureSupported(FEATURE Feature);
        private:
            bool ParseCpuFeature(FEATURE Feature);
            PCPUID_PACKET CpuIdPacket;

        #define FPU_MASK 0x01 //bit 1
        #define SMP_MASK 0x01 << 1 //bit 2
        #define MMX_MASK 0x01 << 2 //bit 3
        #define SSE_MASK 0x0F << 3
        #define HYPERTHREAD_MASK 0x01 << 7
    };
};
#endif