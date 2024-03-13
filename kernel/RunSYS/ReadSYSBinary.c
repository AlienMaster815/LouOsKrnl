#include <LouAPI.h>


uint64_t GetSysBinaryChunk(uint64_t Address, uint32_t ChunkSize) {
	uint64_t ChunkSize64 = (uint64_t)ChunkSize;long double ChecksumFloat; uint64_t Checksum;
	Checksum = (Address / ChunkSize64); ChecksumFloat = (Address / ChunkSize64);
	if (Checksum != ChecksumFloat) { //Address Is Aligned To Data Type No Need ToFix It
		return Address;
	}
	return (uint64_t)ProbeBinary8Bit(Address, ChunkSize);
}

void ReleaseSysBinaryChunk(uint64_t Address,uint32_t ChunkSize) {
	Lou_Free_Mem((RAMADD)Address, ChunkSize);
}