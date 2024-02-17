#include <LouAPI.h>

bool IsAMD(string VendorID) {

	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDString, strlen(AMDString)) == StrCmpTrue)return true;
	}

	return false;
}


bool IsAMDIntegratedGraphics() {

}