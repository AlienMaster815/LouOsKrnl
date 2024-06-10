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


