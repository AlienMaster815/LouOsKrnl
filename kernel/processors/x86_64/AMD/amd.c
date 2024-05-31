#include <LouAPI.h>

bool IsAMD(string VendorID) {

	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDString, strlen(AMDString)) == StrCmpTrue)return true;
	}

	return false;
}


bool IsAMDAthlonX1(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDAthlonX1String) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDAthlonX1String, strlen(AMDAthlonX1String)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsAMDAthlonX2(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDAthlonX2String) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDAthlonX2String, strlen(AMDAthlonX2String)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsAMDPhenom(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDPhenomString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDPhenomString, strlen(AMDPhenomString)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsAMDRyzen(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(AMDRyzenString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)AMDRyzenString, strlen(AMDRyzenString)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsAMDIntegratedGraphics() {

}