#ifndef _KERNEL_MODULE_

#ifndef _BITCHECK_H
#define _BITCHECK_H
#ifdef __cplusplus

#include <LouDDK.h>
#include <NtAPI.h>
#ifndef _KERNEL_MODULE_
//So Nobody is confused this goes from lsb to msb in memory
KERNEL_IMPORT void LouKeSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSetU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSetU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSet64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSet64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSetU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSetU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSet32(
	int32_t* Base,
	int8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSet32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSetU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSetU16(
	uint16_t* Base,
	uint8_t Index
);


KERNEL_IMPORT UCHAR LouKeTestAndResetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSet16(
	int16_t* Base,
	int8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSet16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSetU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSetU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeSetBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT void LouKeUnSetBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndSet8(
	int8_t* Base,
	int8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestBitAndUnSet8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_IMPORT UCHAR LouKeTestAndResetBit8(
	int8_t* Base,
	uint8_t Index
);
#else 


KERNEL_EXPORT void LouKeSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSetU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSetU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBitU64(
	uint64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSet64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSet64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBit64(
	int64_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSetU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSetU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBitU32(
	uint32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSet32(
	int32_t* Base,
	int8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSet32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBit32(
	int32_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSetU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSetU16(
	uint16_t* Base,
	uint8_t Index
);


KERNEL_EXPORT UCHAR LouKeTestAndResetBitU16(
	uint16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSet16(
	int16_t* Base,
	int8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSet16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBit16(
	int16_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSetU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSetU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBitU8(
	uint8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeSetBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT void LouKeUnSetBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBit8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndSet8(
	int8_t* Base,
	int8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestBitAndUnSet8(
	int8_t* Base,
	uint8_t Index
);

KERNEL_EXPORT UCHAR LouKeTestAndResetBit8(
	int8_t* Base,
	uint8_t Index
);

#endif


#endif

#ifndef  __cplusplus
#include <LouAPI.h>

void LouKeSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

void LouKeUnSetBitU64(
	uint64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitU64(
	uint64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSetU64(
	uint64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndUnSetU64(
	uint64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBitU64(
	uint64_t* Base,
	uint8_t Index
);

void LouKeSetBit64(
	int64_t* Base,
	uint8_t Index
);

void LouKeUnSetBit64(
	int64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBit64(
	int64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSet64(
	int64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndUnSet64(
	int64_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBit64(
	int64_t* Base,
	uint8_t Index
);

void LouKeSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

void LouKeUnSetBitU32(
	uint32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitU32(
	uint32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSetU32(
	uint32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndUnSetU32(
	uint32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBitU32(
	uint32_t* Base,
	uint8_t Index
);

void LouKeSetBit32(
	int32_t* Base,
	uint8_t Index
);

void LouKeUnSetBit32(
	int32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBit32(
	int32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSet32(
	int32_t* Base,
	int8_t Index
);

uint8_t LouKeTestBitAndUnSet32(
	int32_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBit32(
	int32_t* Base,
	uint8_t Index
);

void LouKeSetBitU16(
	uint16_t* Base,
	uint8_t Index
);
void LouKeUnSetBitU16(
	uint16_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitU16(
	uint16_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBitU16(
	uint16_t* Base,
	uint8_t Index
);

void LouKeSetBit16(
	int16_t* Base,
	uint8_t Index
);

void LouKeUnSetBit16(
	int16_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBit16(
	int16_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSet16(
	int16_t* Base,
	int8_t Index
);

uint8_t LouKeTestBitAndUnSet16(
	int16_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBit16(
	int16_t* Base,
	uint8_t Index
);

void LouKeSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

void LouKeUnSetBitU8(
	uint8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitU8(
	uint8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSetU8(
	uint8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndUnSetU8(
	uint8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBitU8(
	uint8_t* Base,
	uint8_t Index
);

void LouKeSetBit8(
	int8_t* Base,
	uint8_t Index
);

void LouKeUnSetBit8(
	int8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBit8(
	int8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestBitAndSet8(
	int8_t* Base,
	int8_t Index
);

uint8_t LouKeTestBitAndUnSet8(
	int8_t* Base,
	uint8_t Index
);

uint8_t LouKeTestAndResetBit8(
	int8_t* Base,
	uint8_t Index
);


#endif

#endif

#endif