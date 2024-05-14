#include <LouAPI.h>

char* LouKeCharArrayToString(char* ConvertingString, uint16_t ArraySize) {

	uint16_t I = 0;

	char* ConvertedString = (char*)LouMalloc(sizeof(char) * ArraySize + 1);

	for (I; I < ArraySize; I++) {
		ConvertedString[I] = ConvertingString[I];
	}
	I++;
	ConvertedString[I] = '\0';

	return ConvertedString;
}