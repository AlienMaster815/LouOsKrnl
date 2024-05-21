#include <LouAPI.h>

//So Nobody is confused this goes from lsb to msb in memory



void LouKeSetBitU64(
	uint64_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBitU64(
	uint64_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBitU64(
	uint64_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSetU64(
	uint64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU64(Base, Index);
	if (!Result)LouKeSetBitU64(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSetU64(
	uint64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU64(Base, Index);
	if (Result) LouKeUnSetBitU64(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBitU64(
	uint64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU64(Base, Index);
	if (Result) {
		LouKeUnSetBitU64(Base, Index);
		while (LouKeTestBitU64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBitU64(Base, Index);
		while (!LouKeTestBitU64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBitU64(Base, Index);
		while (!LouKeTestBitU64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBit64(
	int64_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBit64(
	int64_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBit64(
	int64_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSet64(
	int64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit64(Base, Index);
	if (!Result)LouKeSetBit64(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSet64(
	int64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit64(Base, Index);
	if (Result) LouKeUnSetBit64(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBit64(
	int64_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit64(Base, Index);
	if (Result) {
		LouKeUnSetBit64(Base, Index);
		while (LouKeTestBit64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBit64(Base, Index);
		while (!LouKeTestBit64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBit64(Base, Index);
		while (!LouKeTestBit64(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBitU32(
	uint32_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBitU32(
	uint32_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBitU32(
	uint32_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSetU32(
	uint32_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU32(Base, Index);
	if (!Result)LouKeSetBitU32(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSetU32(
	uint32_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU32(Base, Index);
	if (Result) LouKeUnSetBitU32(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBitU32(
	uint32_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU32(Base, Index);
	if (Result) {
		LouKeUnSetBitU32(Base, Index);
		while (LouKeTestBitU32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBitU32(Base, Index);
		while (!LouKeTestBitU32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBitU32(Base, Index);
		while (!LouKeTestBitU32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBit32(
	int32_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBit32(
	int32_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBit32(
	int32_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSet32(
	int32_t* Base,
	int8_t Index
) {
	uint8_t Result = LouKeTestBit32(Base, Index);
	if (!Result)LouKeSetBit32(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSet32(
	int32_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit32(Base, Index);
	if (Result) LouKeUnSetBit32(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBit32(
	int32_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit32(Base, Index);
	if (Result) {
		LouKeUnSetBit32(Base, Index);
		while (LouKeTestBit32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBit32(Base, Index);
		while (!LouKeTestBit32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBit32(Base, Index);
		while (!LouKeTestBit32(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}



void LouKeSetBitU16(
	uint16_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBitU16(
	uint16_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBitU16(
	uint16_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSetU16(
	uint16_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU16(Base, Index);
	if (!Result)LouKeSetBitU16(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSetU16(
	uint16_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU16(Base, Index);
	if (Result) LouKeUnSetBitU16(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBitU16(
	uint16_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU16(Base, Index);
	if (Result) {
		LouKeUnSetBitU16(Base, Index);
		while (LouKeTestBitU16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBitU16(Base, Index);
		while (!LouKeTestBitU16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBitU16(Base, Index);
		while (!LouKeTestBitU16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBit16(
	int16_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBit16(
	int16_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBit16(
	int16_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSet16(
	int16_t* Base,
	int8_t Index
) {
	uint8_t Result = LouKeTestBit16(Base, Index);
	if (!Result)LouKeSetBit16(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSet16(
	int16_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit16(Base, Index);
	if (Result) LouKeUnSetBit16(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBit16(
	int16_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit16(Base, Index);
	if (Result) {
		LouKeUnSetBit16(Base, Index);
		while (LouKeTestBit16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBit16(Base, Index);
		while (!LouKeTestBit16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBit16(Base, Index);
		while (!LouKeTestBit16(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBitU8(
	uint8_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBitU8(
	uint8_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBitU8(
	uint8_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSetU8(
	uint8_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU8(Base, Index);
	if (!Result)LouKeSetBitU8(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSetU8(
	uint8_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU8(Base, Index);
	if (Result) LouKeUnSetBitU8(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBitU8(
	uint8_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBitU8(Base, Index);
	if (Result) {
		LouKeUnSetBitU8(Base, Index);
		while (LouKeTestBitU8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBitU8(Base, Index);
		while (!LouKeTestBitU8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBitU8(Base, Index);
		while (!LouKeTestBitU8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}

void LouKeSetBit8(
	int8_t* Base,
	uint8_t Index
) {
	*Base |= (1ULL << Index);
}

void LouKeUnSetBit8(
	int8_t* Base,
	uint8_t Index
) {
	*Base &= ~(1ULL << Index);
}

uint8_t LouKeTestBit8(
	int8_t* Base,
	uint8_t Index
) {
	return(*Base >> Index) & 0x01;
}

uint8_t LouKeTestBitAndSet8(
	int8_t* Base,
	int8_t Index
) {
	uint8_t Result = LouKeTestBit8(Base, Index);
	if (!Result)LouKeSetBit8(Base, Index);
	return Result;
}

uint8_t LouKeTestBitAndUnSet8(
	int8_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit8(Base, Index);
	if (Result) LouKeUnSetBit8(Base, Index);
	return Result;
}

uint8_t LouKeTestAndResetBit8(
	int8_t* Base,
	uint8_t Index
) {
	uint8_t Result = LouKeTestBit8(Base, Index);
	if (Result) {
		LouKeUnSetBit8(Base, Index);
		while (LouKeTestBit8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		LouKeSetBit8(Base, Index);
		while (!LouKeTestBit8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
	else {
		LouKeSetBit8(Base, Index);
		while (!LouKeTestBit8(Base, Index)) {
			sleep(100);
			//sleeps for one second if the bit is not set 
			// for memory systems with delayed responce
		}
		return Result;
	}
}