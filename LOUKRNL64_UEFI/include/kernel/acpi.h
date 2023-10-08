
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
	char signature[8] __attribute__((packed));
	uint8_t checksum __attribute__((packed));
	char oem_id[6] __attribute__((packed));
	uint8_t revision __attribute__((packed));
	uint32_t rsdt_address __attribute__((packed));
	// following data is for ACPI 2.0+
	uint32_t length __attribute__((packed));
	uint64_t xsdt_address __attribute__((packed));
	uint8_t extended_checksum __attribute__((packed));
	uint8_t reserved[3] __attribute__((packed));
}ACPITable;


typedef struct __attribute__((packed)) {
	char signature[4] __attribute__((packed));
	uint32_t length __attribute__((packed));
	uint8_t revision __attribute__((packed));
	uint8_t checksum __attribute__((packed));
	char oem_id[6] __attribute__((packed));
	char oem_table_id[8] __attribute__((packed));
	uint32_t oem_revision __attribute__((packed));
	uint32_t creator_id __attribute__((packed));
	uint32_t creator_revision __attribute__((packed));
}ACPITableHeader;


typedef struct __attribute__((packed)) {
	char signature[8] __attribute__((packed)); // "RSD PTR " (8 bytes)
	uint8_t checksum __attribute__((packed));  // Checksum of the first 20 bytes
	char oem_id[6] __attribute__((packed));    // OEM ID (6 bytes)
	uint8_t revision __attribute__((packed));  // ACPI version (1 byte)
	uint32_t rsdt_address __attribute__((packed)); // Physical address of the RSDT
	uint32_t length __attribute__((packed));   // Total length of the structure (including extended part)
	uint64_t xsdt_address __attribute__((packed)); // Physical address of the XSDT (extended part)
	uint8_t extended_checksum __attribute__((packed)); // Checksum of the entire structure (including extended part)
	uint8_t reserved[3] __attribute__((packed)); // Reserved (3 bytes)
	uint64_t xchecksum __attribute__((packed)); // Checksum of entire table
} RSDP3;

typedef struct __attribute__((packed)) {
	char signature[8] __attribute__((packed)); // "RSD PTR " (8 bytes)
	uint8_t checksum __attribute__((packed));  // Checksum of the first 20 bytes
	char oem_id[6] __attribute__((packed));    // OEM ID (6 bytes)
	uint8_t revision __attribute__((packed));  // ACPI version (1 byte)
	uint32_t rsdt_address __attribute__((packed)); // Physical address of the RSDT
	uint32_t length __attribute__((packed));   // Total length of the structure (including extended part)
	uint64_t xsdt_address __attribute__((packed)); // Physical address of the XSDT (extended part)
	uint8_t extended_checksum __attribute__((packed)); // Checksum of the entire structure (including extended part)
	uint8_t reserved[3] __attribute__((packed)); // Reserved (3 bytes)
} RSDP2;

typedef struct __attribute__((packed)){
	char signature[8] __attribute__((packed)); // "RSD PTR " (8 bytes)
	uint8_t checksum __attribute__((packed));  // Checksum of the first 20 bytes
	char oem_id[6] __attribute__((packed));    // OEM ID (6 bytes)
	uint8_t revision __attribute__((packed));  // ACPI version (1 byte)
	uint32_t rsdt_address __attribute__((packed)); // Physical address of the RSDT
} RSDP1;


typedef struct __attribute__((packed)){
	char signature[8] __attribute__((packed));   // "RSD PTR "
	uint8_t checksum __attribute__((packed));
	char oem_id[6] __attribute__((packed));
	uint8_t revision __attribute__((packed));
	uint32_t rsdt_address __attribute__((packed));
	// Depending on the version (revision), additional fields may be present
}RSDP;


RSDP* PROBE_RSDP(uintptr_t memory_base, uintptr_t memory_limit);
STATUS ACPI_PARSE(RSDP* rsdp);
uint8_t FIND_ACPI_VERSION(RSDP* rsdp);

#endif