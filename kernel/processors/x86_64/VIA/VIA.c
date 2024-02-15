#include <LouAPI.h>

bool IsVIA(string VendorID) {
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(VIAString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)VIAString, strlen(VIAString)) == StrCmpTrue)return true;
	}
	return false;
}