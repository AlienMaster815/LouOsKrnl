#include <LouAPI.h>

void WriteBinary64Bit(uint64_t Address, uint64_t Data) {
	#define DataType uint64_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary64BitSigned(uint64_t Address, int64_t Data) {
	#define DataType int64_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary32Bit(uint64_t Address, uint32_t Data) {
	#define DataType uint32_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType
}

void WriteBinary32BitSigned(uint64_t Address, int32_t Data) {
	#define DataType int32_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary16Bit(uint64_t Address, uint16_t Data) {
	#define DataType uint16_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary16BitSigned(uint64_t Address, int16_t Data) {
	#define DataType int16_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary8Bit(uint64_t Address,uint8_t Data) {
	#define DataType uint8_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}

void WriteBinary8BitSigned(uint64_t Address,int8_t Data) {
	#define DataType int8_t
	DataType* CastedAddress = (DataType*)Address;
	*CastedAddress = Data;
	#undef DataType	
}