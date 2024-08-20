#ifndef _SATA_H
#define _SATA_H
#include <LouDDK.h>
#include <NtAPI.h>

#ifndef WORD
typedef WORD uint16_t; 
#endif

typedef struct _IDENTIFY_DEVICE_PACKET {
    uint16_t GeneralConfiguration;           // Word 0
    uint16_t LogicalCylinders;               // Word 1
    uint16_t SpecificConfiguration;          // Word 2
    uint16_t LogicalHeads;                   // Word 3
    uint16_t Retired1[2];                    // Words 4-5
    uint16_t LogicalSectors;                 // Word 6
    uint16_t ReservedForCompactFlash[2];     // Words 7-8
    uint16_t Retired2;                       // Word 9
    uint16_t SerialNumber[10];               // Words 10-19
    uint16_t Retired3[2];                    // Words 20-21
    uint16_t Obsolete1;                      // Word 22
    uint16_t FirmwareRevision[4];            // Words 23-26
    uint16_t ModelNumber[20];                // Words 27-46
    uint16_t MaximumBlockTransfer;           // Word 47
    uint16_t VendorUnique1;                  // Word 48
    uint16_t Capabilities;                   // Word 49
    uint16_t SettingsTime;                   // Word 50
    uint16_t VendorUnique2[2];               // Words 51-52
    uint16_t CurrentLogicalSectorsPerTrack;  // Word 53
    uint16_t CurrentNumberOfHeads;           // Word 54
    uint16_t CurrentSectorsPerTrack;         // Word 55
    uint32_t CurrentSectorCapacity;          // Words 56-57
    uint16_t MultiSectorSettingsValid;       // Word 58
    uint32_t UserAddressableSectors;         // Words 60-61
    uint16_t SingleWordDMAStatus;            // Word 62
    uint16_t MultiWordDMAStatus;             // Word 63
    uint16_t AdvancedPIO;                    // Word 64
    uint16_t MinimumMultiWordDMATimeCycle;   // Word 65
    uint16_t RecommendedMultiWordDMATimeCycle;// Word 66
    uint16_t MinimumPIOTransferTimeWithoutFlowControl; // Word 67
    uint16_t MinimumPIOTransferTimeWithFlowControl; // Word 68
    uint16_t AdditionalSupported;            // Word 69
    uint16_t Reserved1[6];                   // Words 70-75
    uint16_t QueueDepth;                     // Word 76
    uint16_t Reserved2[4];                   // Words 77-80
    uint16_t MajorVersion;                   // Word 81
    uint16_t MinorVersion;                   // Word 82
    uint16_t CommandSetSupported[3];         // Words 83-85
    uint16_t CommandSetExtension;            // Word 86
    uint16_t CommandSetFeaturesSupported;    // Word 87
    uint16_t CommandSetFeaturesEnabled[3];   // Words 88-90
    uint16_t UltraDMASupport;                // Word 91
    uint16_t SecurityEraseTime;              // Word 92
    uint16_t EnhancedSecurityEraseTime;      // Word 93
    uint16_t CurrentAdvancedPowerManagementLevel; // Word 94
    uint16_t MasterPasswordIdentifier;       // Word 95
    uint16_t HardwareResetResult;            // Word 96
    uint16_t AcousticManagement;             // Word 97
    uint16_t StreamMinimumRequestSize;       // Word 98
    uint16_t StreamingTransferTimeDMA;       // Word 99
    uint16_t StreamingAccessLatencyDMAAndPIO;// Word 100
    uint64_t StreamingPerformanceGranularity;// Words 101-102
    uint64_t Max48BitLBA[2];                 // Words 103-106
    uint16_t StreamingTransferTime;          // Word 107
    uint16_t DsmCapabilities;                // Word 108
    uint16_t SectorAlignment;                // Word 109
    uint16_t NVCacheCapabilities1;           // Word 110
    uint16_t NVCacheSizeLSW;                 // Word 111
    uint16_t NVCacheSizeMSW;                 // Word 112
    uint16_t NominalMediaRotationRate;       // Word 113
    uint16_t Reserved3;                      // Word 114
    uint16_t NVCacheOptions;                 // Word 115
    uint16_t WriteReadVerifySectorCountMode3Only[2]; // Words 116-117
    uint16_t WriteReadVerifySectorCountMode2Only[2]; // Words 118-119
    uint16_t NVCacheCapabilities2;           // Word 120
    uint16_t Reserved4[8];                   // Words 121-128
    uint16_t TransportMajorVersion;          // Word 129
    uint16_t TransportMinorVersion;          // Word 130
    uint16_t Reserved5[6];                   // Words 131-136
    uint64_t ExtendedNumberOfUserAddressableSectors; // Words 137-140
    uint16_t MinBlocksPerDownloadMicrocodeMode03; // Word 141
    uint16_t MaxBlocksPerDownloadMicrocodeMode03; // Word 142
    uint16_t Reserved6[19];                  // Words 143-159
    uint16_t Signature;                      // Word 160
    uint16_t CommandAndFeatureSetsSupported; // Word 161
    uint16_t ReservedForFutureStandardization[7]; // Words 162-168
    uint16_t ReservedForExpansion[135];      // Words 169-303
    uint16_t SecurityStatus;                 // Word 304
    uint16_t VendorSpecific[31];             // Words 305-335
    uint16_t ReservedForExpansion2[96];      // Words 336-431
    uint16_t IntegrityWord;                  // Word 432
} IDENTIFY_DEVICE_PACKET, *PIDENTIFY_DEVICE_PACKET;


//typedef struct __attribute__((packed)) _SATA_IDENTIFY_PACKET{
    
//}SATA_IDENTIFY_PACKET, * PSATA_IDENTIFY_PACKET;

#define ATA_CMD_IDENTIFY 0xEC

#include "ahci/ahci.h"

#include "../ATA/ata.h"
#include "../ATA/atapi.h"

// Define command types for clarity
typedef enum {
    SATA_CMD_IDENTIFY,
    SATA_CMD_READ,
    SATA_CMD_WRITE,
    // Add more command types as needed
} SATACommandType;

bool
send_ahci_command(
HBA_PORT *port, 
SATACommandType cmd_type, 
uint64_t lba, 
uint32_t sector_count, 
uint16_t *buffer, 
bool write
);



#endif