#ifndef _ATOMIC_H
#define _ATOMIC_H

#define REX_64 0x48


#ifndef _ONE_BYTE
#define _ONE_BYTE
#define AAA 0x37 //One Byte Instruction
#define AAD 0xD5 //One Byte Instruction
#define AAS 0x3f
#endif

#ifndef _TWO_BYTE
#define _TWO_BYTE

#define AAM 0xD4

#endif

#define ADC 11

#ifndef _ATOMIC_STRUCTURE
#define _ATOMIC_STRUCTURE
typedef struct {
	int counter;
}atomic_t;

typedef atomic_t* p_atomic_t;
#endif

#define BITMASK(bit) (1 << bit)
#define BIT_SET 1
#define BIT_NOT_SET 0


#ifdef __cplusplus

#include <LouDDK.h>
#include <NtAPI.h>


KERNEL_IMPORT uint64_t LouKeAndOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
);

KERNEL_IMPORT int64_t LouKeAndOperationLongLong(
	uint64_t volatile* Destination,
	uint64_t Value
);


KERNEL_IMPORT int32_t LouKeAndOperationLong(
	int32_t volatile* Destination,
	int32_t Value
);

KERNEL_IMPORT uint32_t LouKeAndOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
);

KERNEL_IMPORT uint16_t LouKeAndOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
);

KERNEL_IMPORT int16_t LouKeAndOperationShort(
	int16_t volatile* Destination,
	int16_t Value
);

KERNEL_IMPORT uint8_t LouKeAndOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
);

KERNEL_IMPORT int8_t LouKeAndOperationChar(
	int8_t volatile* Destination,
	int8_t Value
);

KERNEL_IMPORT int32_t LouKeCompareAtomicLongValue(
	int32_t volatile* Destination,
	int32_t ExChange,
	int32_t CompareValue
);

KERNEL_IMPORT uint16_t LouKeCompareAtomicUShortValue(
	uint16_t volatile* Destination,
	uint16_t ExChange,
	uint16_t CompareValue
);

KERNEL_IMPORT int16_t LouKeCompareAtomicShortValue(
	int16_t volatile* Destination,
	int16_t ExChange,
	int16_t CompareValue
);

KERNEL_IMPORT uint8_t LouKeCompareAtomicUCharValue(
	uint8_t volatile* Destination,
	uint8_t ExChange,
	uint8_t CompareValue
);

KERNEL_IMPORT int8_t LouKeCompareAtomicCharValue(
	int8_t volatile* Destination,
	int8_t ExChange,
	int8_t CompareValue
);

KERNEL_IMPORT void* LouKeComparePointer(
	void* volatile* Destination,
	void* ExChange,
	void* CompareValue
);

KERNEL_IMPORT uint64_t LouKeOrOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t		   Value
);

KERNEL_IMPORT int64_t LouKeOrOperationLongLong(
	int64_t volatile* Destination,
	int64_t			  Value
);

KERNEL_IMPORT uint32_t LouKeOrOperationULong(
	uint32_t volatile* Destination,
	uint32_t		   Value
);

KERNEL_IMPORT int32_t LouKeOrOperationLong(
	int32_t volatile* Destination,
	int32_t			  Value
);

KERNEL_IMPORT uint16_t LouKeOrOperationUShort(
	uint16_t volatile* Destination,
	uint16_t		   Value
);

KERNEL_IMPORT int16_t LouKeOrOperationShort(
	int16_t volatile* Destination,
	int16_t			  Value
);

KERNEL_IMPORT uint8_t LouKeOrOperationUChar(
	uint8_t volatile* Destination,
	uint8_t 		  Value
);

KERNEL_IMPORT int8_t LouKeOrOperationChar(
	int8_t volatile* Destination,
	int8_t 		     Value
);


KERNEL_IMPORT uint64_t LouKeXorOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
);

KERNEL_IMPORT int64_t LouKeXorOperationLongLong(
	int64_t volatile* Destination,
	int64_t Value
);

KERNEL_IMPORT uint32_t LouKeXorOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
);

KERNEL_IMPORT int32_t LouKeXorOperationLong(
	int32_t volatile* Destination,
	int32_t Value
);

KERNEL_IMPORT uint16_t LouKeXorOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
);

KERNEL_IMPORT int16_t LouKeXorOperationShort(
	int16_t volatile* Destination,
	int16_t Value
);

KERNEL_IMPORT uint8_t LouKeXorOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
);

KERNEL_IMPORT int8_t LouKeXorOperationChar(
	int8_t volatile* Destination,
	int8_t Value
);

#endif
#ifndef __cplusplus

#include <LouAPI.h>

uint64_t LouKeAndOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
);

int64_t LouKeAndOperationLongLong(
	int64_t volatile* Destination,
	int64_t Value
);

uint32_t LouKeAndOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
);

int32_t LouKeAndOperationLong(
	int32_t volatile* Destination,
	int32_t Value
);

uint16_t LouKeAndOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
);

int16_t LouKeAndOperationShort(
	int16_t volatile* Destination,
	int16_t Value
);

uint8_t LouKeAndOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
);

int8_t LouKeAndOperationChar(
	int8_t volatile* Destination,
	int8_t Value
);


uint64_t LouKeCompareAtomicULongLongValue(
	uint64_t volatile* Destination,
	uint64_t ExChange,
	uint64_t CompareValue
);

int64_t LouKeCompareAtomicLongLongValue(
	int64_t volatile* Destination,
	int64_t ExChange,
	int64_t CompareValue
);

uint32_t LouKeCompareAtomicULongValue(
	uint32_t volatile* Destination,
	uint32_t ExChange,
	uint32_t CompareValue
);

int32_t LouKeCompareAtomicLongValue(
	int32_t volatile* Destination,
	int32_t ExChange,
	int32_t CompareValue
);

uint16_t LouKeCompareAtomicUShortValue(
	uint16_t volatile* Destination,
	uint16_t ExChange,
	uint16_t CompareValue
);

int16_t LouKeCompareAtomicShortValue(
	int16_t volatile* Destination,
	int16_t ExChange,
	int16_t CompareValue
);

uint8_t LouKeCompareAtomicUCharValue(
	uint8_t volatile* Destination,
	uint8_t ExChange,
	uint8_t CompareValue
);

int8_t LouKeCompareAtomicCharValue(
	int8_t volatile* Destination,
	int8_t ExChange,
	int8_t CompareValue
);

void* LouKeComparePointer(
	void* volatile* Destination,
	void* ExChange,
	void* CompareValue
);


int32_t LouKeOrOperationLong(
	int32_t volatile* Destination,
	int32_t 		  Value
);

uint64_t LouKeOrOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t		   Value
);

int64_t LouKeOrOperationLongLong(
	int64_t volatile* Destination,
	int64_t			  Value
);


uint16_t LouKeOrOperationUShort(
	uint16_t volatile* Destination,
	uint16_t		   Value
);

int16_t LouKeOrOperationShort(
	int16_t volatile* Destination,
	int16_t			  Value
);

uint8_t LouKeOrOperationUChar(
	uint8_t volatile* Destination,
	uint8_t 		  Value
);

int8_t LouKeOrOperationChar(
	int8_t volatile* Destination,
	int8_t 		     Value
);


uint64_t LouKeXorOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
);

int64_t LouKeXorOperationLongLong(
	int64_t volatile* Destination,
	int64_t Value
);

uint32_t LouKeXorOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
);

int32_t LouKeXorOperationLong(
	int32_t volatile* Destination,
	int32_t Value
);

uint16_t LouKeXorOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
);

int16_t LouKeXorOperationShort(
	int16_t volatile* Destination,
	int16_t Value
);

uint8_t LouKeXorOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
);

int8_t LouKeXorOperationChar(
	int8_t volatile* Destination,
	int8_t Value
);



#endif

#define STATIC_ASSERT(cond, msg) typedef char static_assertion_##msg[(cond) ? 1 : -1]

#endif
