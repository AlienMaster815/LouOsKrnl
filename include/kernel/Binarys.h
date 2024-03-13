#ifndef _BINARYS_H
#define _BINARYS_H
#ifndef __cplusplus
#include <LouAPI.h>
uint64_t* ProbeBinary64Bit(uint64_t Address, uint64_t Buffer);
uint32_t* ProbeBinary32Bit(uint64_t Address, uint64_t Buffer);
uint16_t* ProbeBinary16Bit(uint64_t Address, uint64_t Buffer);
uint8_t* ProbeBinary8Bit(uint64_t Address, uint64_t Buffer);

int64_t* ProbeBinary64BitSigned(uint64_t Address, uint64_t Buffer);
int32_t* ProbeBinary32BitSinged(uint64_t Address, uint64_t Buffer);
int16_t* ProbeBinary16BitSigned(uint64_t Address, uint64_t Buffer);
int8_t* ProbeBinary8BitSigned(uint64_t Address, uint64_t Buffer);
uint64_t GetSysBinaryChunk(uint64_t Address, uint32_t ChunkSize);
void ReleaseSysBinaryChunk(uint64_t Address, uint32_t ChunkSize);
#else
#include <LouDDK.h>
extern "C" uint64_t GetSysBinaryChunk(uint64_t Address, uint32_t ChunkSize);
extern "C" void ReleaseSysBinaryChunk(uint64_t Address, uint32_t ChunkSize);
#endif
#endif