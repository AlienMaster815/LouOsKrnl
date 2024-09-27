/*
    Directories
    SATA.cpp

    USAGE_MODELS
        NCQ.cpp
        PortMultipliers.cpp
        PortSelectors.cpp
    
    APPLICATIONS    
        xSata.cpp
        eSata.cpp
        Internal.cpp
        Mobile.cpp
        Docking.cpp
        External.cpp
        mSata.cpp
        SataMicroSSD.cpp
        M2SSD.cpp
        SataUsm.cpp

*/
//startingm at 619


//SataRevision35a.h

//Identify.cpp

#include "sata.h"

// Assuming definitions of structures and constants are provided elsewhere

int find_cmdslot(HBA_PORT *port);




void 
setup_prdt_entries(
HBA_CMD_HEADER* cmd_header, 
HBA_CMD_TBL* cmd_tbl, 
uint16_t* buffer, 
uint32_t sector_count
);


// General AHCI command function
bool
send_ahci_command(
HBA_PORT *port, 
SATACommandType cmd_type, 
uint64_t lba, 
uint32_t sector_count, 
uint16_t *buffer, 
bool write) {
    int slot = find_cmdslot(port);
    if (slot == -1) {
        LouPrint("No free command slots available\n");
        return false;
    }

    HBA_CMD_HEADER *cmd_header = (HBA_CMD_HEADER*)((uintptr_t)port->clb + (slot * sizeof(HBA_CMD_HEADER)));
    HBA_CMD_TBL *cmd_tbl = (HBA_CMD_TBL*)(uintptr_t)cmd_header->ctba;
    memset(cmd_tbl, 0, sizeof(HBA_CMD_TBL)); // Clear the command table

    // Prepare the command FIS based on the command type
    FIS_REG_H2D *cmd_fis = (FIS_REG_H2D*)(&cmd_tbl->cfis);
    cmd_fis->fis_type = FIS_TYPE_REG_H2D;
    cmd_fis->c = 1; // Command flag

    switch (cmd_type) {
        case SATA_CMD_IDENTIFY:
            cmd_fis->command = ATA_CMD_IDENTIFY;
            break;
        case SATA_CMD_READ:
            cmd_fis->command = ATA_CMD_READ_DMA_EX;
            setup_prdt_entries(cmd_header, cmd_tbl, buffer, sector_count);
            break;
        case SATA_CMD_WRITE:
            cmd_fis->command = ATA_CMD_WRITE_DMA_EX;
            setup_prdt_entries(cmd_header, cmd_tbl, buffer, sector_count);
            break;
        default:
            LouPrint("Unsupported command type\n");
            return false;
    }

    // Set up the device register
    if (cmd_type != SATA_CMD_IDENTIFY) {
        cmd_fis->device = 1 << 6; // LBA mode
        cmd_fis->lba0 = (uint8_t)lba;
        cmd_fis->lba1 = (uint8_t)(lba >> 8);
        cmd_fis->lba2 = (uint8_t)(lba >> 16);
        cmd_fis->lba3 = (uint8_t)(lba >> 24);
        cmd_fis->lba4 = (uint8_t)(lba >> 32);
        cmd_fis->lba5 = (uint8_t)(lba >> 40);
        cmd_fis->countl = sector_count & 0xFF;
        cmd_fis->counth = (sector_count >> 8) & 0xFF;
    }

    // Issue the command
    port->ci |= (1 << slot); // Set bit at slot position to issue the command

    // Wait for completion
    while (port->ci & (1 << slot)) {
        sleep(10); // Simple delay, replace with proper timer or event mechanism
    }

    if (port->is & HBA_PxIS_TFES) { // Check for task file error status
        LouPrint("Command failed: Error detected\n");
        return false;
    }

    return true; // Command completed successfully
}


// Corrected function to setup PRDT entries
void 
setup_prdt_entries(
HBA_CMD_HEADER* cmd_header, 
HBA_CMD_TBL* cmd_tbl, 
uint16_t* buffer, 
uint32_t sector_count
) {
    // Calculate the number of PRDT entries needed; one PRDT entry can handle up to 16 sectors
    int prdt_entries = (sector_count + 15) / 16;
    cmd_header->prdtl = prdt_entries; // Set the number of PRDT entries in the command header

    for (int i = 0; i < prdt_entries; i++) {
        cmd_tbl->prdt_entry[i].dba = (uintptr_t)(buffer + i * 8 * 1024); // 8KB per PRDT
        cmd_tbl->prdt_entry[i].dbc = 8 * 1024 - 1; // 8K bytes, minus 1 as per spec
        cmd_tbl->prdt_entry[i].i = 1; // Interrupt on completion
    }
}



//Tracker Paramount Plus

