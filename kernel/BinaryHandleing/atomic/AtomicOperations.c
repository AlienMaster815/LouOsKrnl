#include "LouAPI.h"


uint64_t
LouKeAndOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
) {
	uint64_t BAR = *Destination;
	uint64_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}


int64_t
LouKeAndOperationLongLong(
	int64_t volatile* Destination,
	int64_t Value
) {
	int64_t BAR = *Destination;
	int64_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}

uint32_t
LouKeAndOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
) {
	uint32_t BAR = *Destination;
	uint32_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}


int32_t 
LouKeAndOperationLong(
	int32_t volatile* Destination,
	int32_t Value
) {
	int32_t BAR = *Destination; 
	int32_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}

uint16_t
LouKeAndOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
) {
	uint16_t BAR = *Destination;
	uint16_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}


int16_t
LouKeAndOperationShort(
	int16_t volatile* Destination,
	int16_t Value
) {
	int16_t BAR = *Destination;
	int16_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}

uint8_t
LouKeAndOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
) {
	uint8_t BAR = *Destination;
	uint8_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}


int8_t
LouKeAndOperationChar(
	int8_t volatile* Destination,
	int8_t Value
) {
	int8_t BAR = *Destination;
	int8_t FOO = BAR; //this lines for our Veterans P.S Its German
	FOO &= Value;
	*Destination = FOO;
	return  BAR;
}

uint64_t
LouKeCompareAtomicULongLongValue(
	uint64_t volatile* Destination,
	uint64_t ExChange,
	uint64_t CompareValue
) {
	uint64_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}


int64_t
LouKeCompareAtomicLongLongValue(
	int64_t volatile* Destination,
	int64_t ExChange,
	int64_t CompareValue
) {
	int64_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}

uint32_t
LouKeCompareAtomicULongValue(
	uint32_t volatile* Destination,
	uint32_t ExChange,
	uint32_t CompareValue
) {
	uint32_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}


int32_t 
LouKeCompareAtomicLongValue(
	int32_t volatile* Destination,
	int32_t ExChange,
	int32_t CompareValue
) {
	int32_t BAR = *Destination;	
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}

uint16_t
LouKeCompareAtomicUShortValue(
	uint16_t volatile* Destination,
	uint16_t ExChange,
	uint16_t CompareValue
) {
	uint16_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}


int16_t
LouKeCompareAtomicShortValue(
	int16_t volatile* Destination,
	int16_t ExChange,
	int16_t CompareValue
) {
	int16_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}

uint8_t
LouKeCompareAtomicUCharValue(
	uint8_t volatile* Destination,
	uint8_t ExChange,
	uint8_t CompareValue
) {
	uint8_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}


int8_t
LouKeCompareAtomicCharValue(
	int8_t volatile* Destination,
	int8_t ExChange,
	int8_t CompareValue
) {
	int8_t BAR = *Destination;
	if (BAR == CompareValue)*Destination = ExChange;
	return BAR;
}

void* LouKeComparePointer(
	void* volatile* Destination,
	void* ExChange,
	void* CompareValue
) {
	void* BAR = *Destination;
	if (CompareValue == BAR)*Destination = ExChange;
	return BAR;
}

uint64_t
LouKeOrOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t	       Value
) {
	uint64_t BAR = *Destination;
	uint64_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


int64_t
LouKeOrOperationLongLong(
	int64_t volatile* Destination,
	int64_t			  Value
) {
	int64_t BAR = *Destination;
	int64_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


uint32_t
LouKeOrOperationULong(
	uint32_t volatile* Destination,
	uint32_t	       Value
) {
	uint32_t BAR = *Destination;
	uint32_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


int32_t
LouKeOrOperationLong(
	int32_t volatile* Destination,
	int32_t			  Value
) {
	int32_t BAR = *Destination;
	int32_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


uint16_t
LouKeOrOperationUShort(
	uint16_t volatile* Destination,
	uint16_t	       Value
) {
	uint16_t BAR = *Destination;
	uint16_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


int16_t
LouKeOrOperationShort(
	int16_t volatile* Destination,
	int16_t			  Value
) {
	int16_t BAR = *Destination;
	int16_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


uint8_t
LouKeOrOperationUChar(
	uint8_t volatile* Destination,
	uint8_t	       Value
) {
	uint8_t BAR = *Destination;
	uint8_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}


int8_t
LouKeOrOperationChar(
	int8_t volatile* Destination,
	int8_t			  Value
) {
	int8_t BAR = *Destination;
	int8_t FOO = BAR;
	//OR FOO THEN PLACE IT BACK
	FOO |= Value;
	*Destination = FOO;
	return BAR;
}




uint64_t 
LouKeXorOperationULongLong(
	uint64_t volatile* Destination,
	uint64_t Value
) {
	uint64_t BAR = *Destination;
	uint64_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

int64_t 
LouKeXorOperationLongLong(
	int64_t volatile* Destination,
	int64_t Value
) {
	int64_t BAR = *Destination;
	int64_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

uint32_t 
LouKeXorOperationULong(
	uint32_t volatile* Destination,
	uint32_t Value
) {
	uint32_t BAR = *Destination;
	uint32_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

int32_t 
LouKeXorOperationLong(
	int32_t volatile* Destination,
	int32_t Value
) {
	int32_t BAR = *Destination;
	int32_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

uint16_t 
LouKeXorOperationUShort(
	uint16_t volatile* Destination,
	uint16_t Value
) {
	uint16_t BAR = *Destination;
	uint16_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;
	
	return BAR;
}

int16_t LouKeXorOperationShort(
	int16_t volatile* Destination,
	int16_t Value
) {
	int16_t BAR = *Destination;
	int16_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

uint8_t 
LouKeXorOperationUChar(
	uint8_t volatile* Destination,
	uint8_t Value
) {
	uint8_t BAR = *Destination;
	uint8_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}

int8_t 
LouKeXorOperationChar(
	int8_t volatile* Destination,
	int8_t Value
) {
	int8_t BAR = *Destination;	
	int8_t FOO = BAR;

	FOO ^= Value;
	*Destination = FOO;

	return BAR;
}