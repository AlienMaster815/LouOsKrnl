 #include <LouAPI.h>


typedef struct __attribute__((packed)) _PortBlock{
    uint16_t Base;
    uint16_t size;
}PortBlock, * PPortBlock;

static uint8_t PortSlab[0xFFFF * sizeof(PortBlock)] = {0};

static PPortBlock PortBlocks = (PPortBlock)PortSlab;

static uint16_t AllocatedPorts = 0;

bool PortTreadsNot(uint16_t Base, uint16_t size) {
    uint16_t end = Base + size;

    // Reserved range check for both start and end of range
    if ((Base >= 0x0000 && Base < 0x0100) || (end > 0x0000 && end <= 0x0100) ||   // System and CPU Ports
        (Base >= 0x0100 && Base < 0x0200) || (end > 0x0100 && end <= 0x0200) ||   // DMA Controller
        (Base >= 0x01F0 && Base < 0x01F8) || (end > 0x01F0 && end <= 0x01F8) ||   // IDE Primary
        (Base >= 0x0170 && Base < 0x0178) || (end > 0x0170 && end <= 0x0178) ||   // IDE Secondary
        (Base >= 0x0200 && Base < 0x0210) || (end > 0x0200 && end <= 0x0210) ||   // Game Port
        (Base >= 0x03B0 && Base < 0x03E0) || (end > 0x03B0 && end <= 0x03E0) ||   // VGA Ports
        (Base >= 0x0378 && Base < 0x0380) || (end > 0x0378 && end <= 0x0380) ||   // Parallel Port
        (Base >= 0x03F0 && Base < 0x03F8) || (end > 0x03F0 && end <= 0x03F8) ||   // Floppy Disk Controller
        (Base >= 0x0CF8 && Base < 0x0D00) || (end > 0x0CF8 && end <= 0x0D00)) {   // PCI Configuration Space
        return false;  // Range is reserved
    }
    return true;
}

uint16_t LouKeCreatIoPort(
    uint16_t PortSize
){
    uint16_t NewPort = 0;

    if(AllocatedPorts == 0){
        PortBlocks[0].Base = NewPort;
        PortBlocks[0].size = PortSize; 
        AllocatedPorts++;
        return NewPort;
    }

    while (1) {
        NewPort += PortSize;

        bool addrssSpaceCheck = true;

        for (uint32_t i = 0; i < AllocatedPorts; i++) {
            uint64_t start = PortBlocks[i].Base;
            uint64_t end = start + PortBlocks[i].size;

                                // Check if the new allocation overlaps with an existing block
            if (((NewPort >= start && NewPort < end) ||  // Start within an existing block
            ((NewPort + PortSize) > start && (NewPort + PortSize) <= end) || // End within an existing block
            (NewPort <= start && (NewPort + PortSize) >= end)) &&
            (PortTreadsNot(NewPort, PortSize))) { // Encompasses an existing block
                addrssSpaceCheck = false;
                break;
            }
        }


        if (!addrssSpaceCheck) {
            continue;
        }

        // Found an address
        for (uint32_t i = 0; i < AllocatedPorts; i++) {
            if (PortBlocks[i].Base == 0x00) {
                PortBlocks[i].Base = NewPort;
                PortBlocks[i].size = PortSize;
                //LouPrint("Address:%h\n", AlignmentCheck);
                return NewPort;
            }
        }

        if (AllocatedPorts >= (0xFFFF)) {
            // System overload
            return 0x00;
        }

        PortBlocks[AllocatedPorts].Base = NewPort;
        PortBlocks[AllocatedPorts].size = PortSize;
        AllocatedPorts++; // Increment after logging the new address
        //LouPrint("Address:%h\n", AlignmentCheck);
        return NewPort;
    }

}

void ListAllocatedPorts(){
    for(uint16_t i = 0 ; i < AllocatedPorts; i++){
        LouPrint("Port Base:%d Port Size:%d\n", PortBlocks[i].Base, PortBlocks[i].size);
    }
}