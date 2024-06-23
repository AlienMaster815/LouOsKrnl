#ifndef _SATA_H
#define _SATA_H
#include <LouDDK.h>
#include <NtAPI.h>

#ifndef WORD
typedef WORD uint16_t; 
#endif

typedef struct _IDENTIFY_DEVICE_PACKET {
    WORD GeneralConfiguration;        // Word 0
    WORD LogicalCylinders;            // Word 1 (obsolete)
    WORD SpecificConfiguration;       // Word 2
    WORD LogicalHeads;                // Word 3 (obsolete)
    WORD Retired1[2];                 // Words 4-5 (obsolete)
    WORD LogicalSectors;              // Word 6 (obsolete)
    WORD ReservedForCompactFlash[2];  // Words 7-8 (reserved)
    WORD Retired2;                    // Word 9 (obsolete)
    WORD SerialNumber[10];            // Words 10-19
    WORD Retired3[2];                 // Words 20-21 (obsolete)
    WORD BytesPerSector;              // Word 22 (obsolete in some cases)
    WORD BufferType;                  // Word 23
    WORD BufferSize;                  // Word 24
    WORD NumberOfECCBytes;            // Word 25
    WORD FirmwareRevision[4];         // Words 26-29
    WORD ModelNumber[20];             // Words 30-49
    WORD MaximumBlockTransfer;        // Word 50
    WORD VendorUnique1;               // Word 51
    WORD DoubleWordIO;                // Word 52
    WORD Capabilities;                // Word 53
    WORD Reserved1;                   // Word 54
    WORD PIODataTransferMode;         // Word 55
    WORD MinMultiwordDMATransferTime; // Word 56
    WORD ManufacturerRecommendedDMATransferTime; // Word 57
    WORD CurrentTransferMode;         // Word 58
    WORD MasterCycleTimePIO;          // Word 59
    WORD MasterCycleTimeDMA;          // Word 60
    WORD MinPIOTransferTimeNoFlowControl; // Word 61
    WORD MinPIOTransferTimeWithFlowControl; // Word 62
    WORD AdditionalSupported;         // Word 63
    WORD Reserved2[5];                // Words 64-68
    WORD QueueDepth;                  // Word 69
    WORD SATACapabilities;            // Word 70
    WORD SATAAdditionalCapabilities;  // Word 71
    WORD SATAFeaturesSupported;       // Word 72
    WORD SATAFeaturesEnabled;         // Word 73
    WORD MajorVersion;                // Word 74
    WORD MinorVersion;                // Word 75
    WORD CommandSetSupported[3];      // Words 76-78
    WORD CommandSetFeaturesSupported; // Word 79
    WORD UltraDMAActive;              // Word 80
    WORD TimeRequiredForSecurityErase; // Word 81
    WORD TimeRequiredForEnhancedSecurityErase; // Word 82
    WORD CurrentAdvancedPowerManagementLevel; // Word 83
    WORD MasterPasswordIdentifier;    // Word 84
    WORD HardwareResetResult;         // Word 85
    WORD CurrentAcousticManagementValue; // Word 86
    WORD StreamMinRequestSize;        // Word 87
    WORD StreamingTransferTimeDMA;    // Word 88
    WORD StreamingTransferTimePIO;    // Word 89
    WORD MaxUserLBACount[4];          // Words 90-93
    WORD StreamingPerformanceGranularity; // Word 94
    WORD UserSectorPerDrive[4];       // Words 95-98
    WORD UltraDMASelected;            // Word 99
    WORD SecurityStatus;              // Word 100
    WORD VendorSpecific[31];          // Words 101-127
    WORD CFA_PowerMode;               // Word 128
    WORD ReservedForFuture[95];       // Words 129-223
    WORD IntegrityWord;               // Word 224
} IDENTIFY_DEVICE_PACKET, *PIDENTIFY_DEVICE_PACKET;


#define ATA_CMD_IDENTIFY 0xEC

#include "ahci/ahci.h"

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