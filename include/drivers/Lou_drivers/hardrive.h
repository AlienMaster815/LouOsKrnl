
#pragma pack(push, 1)

#ifndef GLOBAL_HARDRIVE_VARIABLES
#define GLOBAL_HARDRIVE_VARIABLES







#define AHCI_BAR_OFFSET       0x10  // Offset of AHCI controller's BAR in PCI configuration space
#define AHCI_REG_CAP          0x00  // Offset of AHCI capabilities register
#define AHCI_REG_GHC          0x04  // Offset of AHCI global host control register
#define AHCI_CAP_SSS          (1U << 27) // Staggered Spin-Up Supported bit in AHCI capabilities register
#define AHCI_GHC_AE           (1U << 31) // AHCI Enable bit in AHCI global host control register

//PCI Header Ofsets
#define DEVICE_ID_OFFSET 0x0
#define VENDOR_ID_OFFSET 0x2
#define CMD_OFFSET 0x4
#define STS_OFFSET 0x6
#define RID_OFFSET 0x8
#define CC_OFFSET 0x9
#define CLS_OFFSET 0xC
#define MLT_OFFSET 0xD
#define HTYPE_OFFSET 0xE
#define BIST_OFFSET 0xF
#define BAR0_OFFSET 0x10
#define BAR1_OFFSET 0x14
#define BAR2_OFFSET 0x18
#define BAR3_OFFSET 0x1B
#define BAR4_OFFSET 0x20
#define BAR5_OFFSET 0x24
#define SS_DEV_ID_OFFSET 0x2C
#define SS_VEN_ID_OFFSET 0x2E
#define EROM_OFFSET 0x30
#define CAP_OFFSET 0x34
#define INTERRUPT_PIN_OFFSET 0x3C
#define INTERRUPT_LINE_OFFSET 0x3D
#define MGNT_OFFSET 0x3E
#define MLANT_OFFSET 0x3F


//HBA Generic Offset Information
#define HBA_CAP_OFFSET 0x0
#define HBA_GHC_OFFSET 0x4
#define HBA_IS_OFFSET 0x8
#define HBA_PI_OFFSET 0xC
#define HBA_VS_OFFSET 0x10
#define HBA_CCC_CTL_OFFSET 0x14
#define HBA_CCC_PORTS_OFFSET 0x18
#define HBA_EM_LOC_OFFSET 0x1C
#define HBA_EM_CTL_OFFSET 0x20
#define HBA_CAP2_OFFSET 0x24
#define HBA_BOHC_OFFSET 0x28
//End Of Generic


//Start Of Intel HBA Information
#define INTEL_RESERVED_OFFSET 0x2C
#define INTEL_RESERVED_NVMHCI_OFFSET 0x60
#define INTEL_SPECIFIC_REGISTERS_OFFSET 0xA0
#define INTEL_PORT0_CONTROL_REGISTERS_OFFSET 0x100
#define INTEL_PORT1_CONTROL_REGISTERS_OFFSET 0x180
#define INTEL_PORT2_TO_29_CONTROL_REGISTERS_OFFSET 0x200
#define INTEL_PORT30_CONTROL_REGISTERS_OFFSET 0x1000
#define INTEL_PORT31_CONTROL_REGISTERS_OFFSET 0x1080

//End Of Intel Information


#define _1_3_1_INTEL 1

#endif


#ifdef __cplusplus
#include <LouDDK.h>

#ifndef _IDE_
#define _IDE_

#define READ_ERROR 0x00
#ifndef _KERNEL_MODULE_

extern "C" uint16_t * GetAtaBufferAddr();


#include <LouDDK.h>

[[maybe_unused]] static uint16_t atabuffer[2352];

typedef uint16_t* PATABUFF;


class PATA{
    public:
    
    void pata_Read(uint8_t device,uint32_t Sector_Num, int BufferSize = 512);
    void pata_Write(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void pata_device_scan();
    
    bool AtaReadSuccess();
    
    PATA();
    ~PATA();

    private:
    
    bool UsingSystemDriver = false;

    void Read28PATA(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    void Read28PATAPI(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    
    void Write28PATA(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    void Write28PATAPI(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void determine_device_type(uint8_t drive);
    void initialize_pata(uint16_t drive,bool Master);
    void WakeAndIdentifyPata(uint16_t Device ,uint8_t Master);
    void Flush(uint8_t Device);
    
};


#endif //kernel mod

#endif

#ifndef _SATA
#define _SATA


#ifndef _KERNEL_MODULE_
LOUDDK_API_ENTRY bool IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);
#endif

#endif

#else
#include <LouAPI.h>

#ifndef _HDC_H
#define _HDC_H

#define READ_ERROR 0x00

#ifndef _KERNEL_MODULE_
void Sata_init(uint8_t bus, uint8_t slot, uint8_t func);
void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);

void pata_device_scanc();
#endif


#endif
#endif
#pragma pack(pop)