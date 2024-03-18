#include <LouAPI.h>
/*
///
/// CopyRight Tyler Grenier (2024)
///

	Tyler Grenier 3/12/24 : 6:17 PM
	Explanation: The file you see before you is a precursor to the kernel
	being able to read binary files loaded into memory through grub and the 
	kernel... Allow me to explaoin how this works, When a binary file is 
	loaded into ram it needs to be placed in the first address posible However.....
	The Binary Itself Needs to be alligned in a specific Way In Order For It 
	To Actually Work And Be Readable So In Order To do this we need to analyse
	the byte per byte system of the file in order to map it to an address and 
	align it and read the binary if needed for instance how do we know if somthing
	is loaded if we can read it in c this file will be used to get the system to align
	each byte and compare it as necisary...

*/

#ifdef __x86_64__

uint64_t* ProbeBinary64Bit(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType uint64_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

uint32_t* ProbeBinary32Bit(uint64_t Address,uint64_t Buffer) {
	#define BufferDataType uint32_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

uint16_t* ProbeBinary16Bit(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType uint16_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

uint8_t* ProbeBinary8Bit(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType uint8_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

int64_t* ProbeBinary64BitSigned(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType int64_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

int32_t* ProbeBinary32BitSinged(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType int32_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

int16_t* ProbeBinary16BitSigned(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType int16_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray,(void*)AddressCasted,Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}

int8_t* ProbeBinary8BitSigned(uint64_t Address, uint64_t Buffer) {
	#define BufferDataType int8_t
	BufferDataType* ReturnBufferArray = (BufferDataType*)Lou_Alloc_Mem(sizeof(BufferDataType) * Buffer);
	BufferDataType* AddressCasted = (BufferDataType*)Address;

	memcpy((void*)ReturnBufferArray, (void*)AddressCasted, Buffer);

	return ReturnBufferArray;
	#undef BufferDataType
}
#endif