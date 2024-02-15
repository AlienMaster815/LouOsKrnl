#include <LouAPI.h>

bool IsIntel(string VendorID) {

	for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelString) + 1; i++) {
		if(strncmp((StrCmpCast)VendorID + i,(StrCmpCast)IntelString, strlen(IntelString)) == StrCmpTrue)return true;
	}
	return false;
}