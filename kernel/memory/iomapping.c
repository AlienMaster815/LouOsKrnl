#include <LouAPI.h>

// For A Reference GetPageOfFaultValue gets the current Entry Value
// and GetPageValue Gets the Value Of the 
// Virtual Address + what is would be with a specific vle of flags


uint64_t CalculateIterations(uint64_t startAddress, uint64_t bufferSize) {
	// Calculate the end address of the buffer
	uint64_t endAddress = startAddress + bufferSize;
	// Align the start address to the nearest 2MB boundary
	uint64_t alignedStartAddress = (startAddress + (2 * MEGABYTE) - 1) & ~((2 * MEGABYTE) - 1);
	// Align the end address to the nearest 2MB boundary
	uint64_t alignedEndAddress = (endAddress + (2 * MEGABYTE) - 1) & ~((2 * MEGABYTE) - 1);
	// Calculate the aligned buffer size
	uint64_t alignedBufferSize = alignedEndAddress - alignedStartAddress;
	// Calculate the number of 2MB pages needed to cover the aligned buffer
	return alignedBufferSize / (2 * MEGABYTE);
}


LOUSTATUS LouKeMapIO(uint64_t PADDRESS,uint64_t MemoryBuffer,uint64_t FLAGS) {

	for (uint64_t i = 0; i < CalculateIterations(PADDRESS, MemoryBuffer); i++) {
			//well get to error handleing later when we get to modules for now were just creating a function for internal drivers
			if( (GetPageOfFaultValue(PADDRESS) == GetPageValue(PADDRESS,KERNEL_PAGE_WRITE_PRESENT)) &&
				(GetPageOfFaultValue(PADDRESS) == GetPageValue(PADDRESS, KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT))) { //Checks If Virtual Address Is Not Free 
				if ((GetPageOfFaultValue(PADDRESS) == KERNEL_PAGE_WRITE_PRESENT) &&
					(GetPageOfFaultValue(PADDRESS) == KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT)) {
				//reset the mappings for no leaks
					LouPrint("Virtual Address Table Value Is:%h\n", GetPageOfFaultValue(PADDRESS));

					for (uint64_t j = 0; j < MemoryBuffer; j ++) {
						LouMapAddress(0, PADDRESS + (i * (2 * MEGABYTE)), 0); //set the address to 0 and map no flags
					}
					return ERRMAPPINGIO;
				}
			}
			//LouPrint("Mapping Address:%h\n",PADDRESS + (i * (2*MEGABYTE)));
			LouMapAddress(PADDRESS + (i * (2 * MEGABYTE)), PADDRESS + (i * (2 * MEGABYTE)), FLAGS);
	}
	LouPrint("System Mapped\n");
	return LOUSTATUS_GOOD;
}