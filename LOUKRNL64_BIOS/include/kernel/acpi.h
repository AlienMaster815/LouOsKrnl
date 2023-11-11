
#ifndef _ACPI_H
#define _ACPI_H

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stat.h>
/*
-- Tyler Grenier 9/22/23 10:13
-- I dont know about this one but
-- lets try it last time diddnt go 
-- so well with acpi and that 13 
-- in the time is fuckin bothering me
-- lets try this first define some 
-- variables we need and start setting up
-- probing for tonight its late and this 
-- might take a while and weve done a lot
-- already tonight... 
*/

typedef struct __attribute__((packed)) {
	char signature[8];
	uint8_t checksum;
	char oem_id[6];
	uint8_t revision;
	uint32_t rsdt_address;
	// following data is for ACPI 2.0+
	uint32_t length;
	uint64_t xsdt_address;
	uint8_t extended_checksum;
	uint8_t reserved[3];
}ACPITable;


typedef struct __attribute__((packed)) {
	char signature[4];
	uint32_t length;
	uint8_t revision;
	uint8_t checksum;
	char oem_id[6];
	char oem_table_id[8];
	uint32_t oem_revision;
	uint32_t creator_id;
	uint32_t creator_revision;
}ACPITableHeader;


typedef struct __attribute__((packed)) {
	char signature[8]; // "RSD PTR " (8 bytes)
	uint8_t checksum;  // Checksum of the first 20 bytes
	char oem_id[6];    // OEM ID (6 bytes)
	uint8_t revision;  // ACPI version (1 byte)
	uint32_t rsdt_address; // Physical address of the RSDT
	uint32_t length;   // Total length of the structure (including extended part)
	uint64_t xsdt_address; // Physical address of the XSDT (extended part)
	uint8_t extended_checksum; // Checksum of the entire structure (including extended part)
	uint8_t reserved[3]; // Reserved (3 bytes)
	uint64_t xchecksum; // Checksum of entire table
} RSDP3;

typedef struct __attribute__((packed)) {
	char signature[8]; // "RSD PTR " (8 bytes)
	uint8_t checksum;  // Checksum of the first 20 bytes
	char oem_id[6];    // OEM ID (6 bytes)
	uint8_t revision;  // ACPI version (1 byte)
	uint32_t rsdt_address; // Physical address of the RSDT
	uint32_t length;   // Total length of the structure (including extended part)
	uint64_t xsdt_address; // Physical address of the XSDT (extended part)
	uint8_t extended_checksum; // Checksum of the entire structure (including extended part)
	uint8_t reserved[3]; // Reserved (3 bytes)
} RSDP2;

typedef struct __attribute__((packed)){
	char signature[8]; // "RSD PTR " (8 bytes)
	uint8_t checksum;  // Checksum of the first 20 bytes
	char oem_id[6];    // OEM ID (6 bytes)
	uint8_t revision;  // ACPI version (1 byte)
	uint32_t rsdt_address; // Physical address of the RSDT
} RSDP1;


typedef struct __attribute__((packed)){
	char signature[8];   // "RSD PTR "
	uint8_t checksum;
	char oem_id[6];
	uint8_t revision ;
	uint32_t rsdt_address;
	// Depending on the version (revision), additional fields may be present
}RSDP;

#pragma pack(1)

// MADT Header
typedef struct {
    uint32_t signature;     // "APIC"
    uint32_t length;        // Total table length, including header
    uint8_t  revision;      // ACPI Specification Revision
    uint8_t  checksum;      // Entire table must sum to zero
    char     oem_id[6];     // OEM ID
    char     oem_table_id[8];// OEM Table ID
    uint32_t oem_revision;   // OEM Revision Number
    uint32_t creator_id;     // ASL Compiler Vendor ID
    uint32_t creator_revision;// ASL Compiler Revision Number
}acpi_madt_header;

// MADT Subtable Header
typedef struct  {
    uint8_t type;    // Subtable type
    uint8_t length;  // Length of subtable including header
}acpi_madt_entry_header;

// MADT Entry Types
#define MADT_TYPE_LOCAL_APIC      0
#define MADT_TYPE_IO_APIC         1

typedef struct  {
    acpi_madt_entry_header header;
    uint8_t acpi_processor_id;   // ACPI Processor ID
    uint8_t local_apic_id;       // Local APIC ID
    uint32_t flags;              // Flags
}acpi_madt_local_apic;

// MADT I/O APIC Structure
typedef struct  {
    acpi_madt_entry_header header;
    uint8_t io_apic_id;          // I/O APIC ID
    uint8_t reserved;            // Reserved
    uint32_t io_apic_address;    // I/O APIC Address
    uint32_t global_system_interrupt_base; // Global System Interrupt Base
}acpi_madt_io_apic;


#pragma pack()


RSDP* PROBE_RSDP(uintptr_t memory_base, uintptr_t memory_limit);
STATUS ACPI_PARSE(RSDP* rsdp);
uint8_t FIND_ACPI_VERSION(RSDP* rsdp);

#endif
