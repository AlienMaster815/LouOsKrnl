#include <NtDDK.h>

#include <stdarg.h>

typedef long int32_t;
typedef unsigned long long uint64_t;

__declspec(dllimport) int32_t (*LouPrint)(char* string, ...);


__declspec(dllexport) uint64_t LousineModuleEntry(uint64_t IoManagerComand) {

	if (IoManagerComand == 0) {
		LouPrint("Hello World\n");
	}
	return 0;
}


