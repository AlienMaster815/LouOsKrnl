#include <LouAPI.h>

bool IsIntel(string VendorID) {

	for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelString) + 1; i++) {
		if(strncmp((StrCmpCast)VendorID + i,(StrCmpCast)IntelString, strlen(IntelString)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsIntelCore(string VendorID) {
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelCoreString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)IntelCoreString, strlen(IntelCoreString)) == StrCmpTrue)return true;
	}
	return false;
}

uint8_t GetIntelCoreVersion(string VendorID) {
	for (uint8_t j = 0; j < 8; j++) {
		for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelCoreVersionString[j]) + 1; i++) {
			if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)IntelCoreVersionString[j], strlen(IntelCoreVersionString[j])) == StrCmpTrue)return j;
		}
	}
	return 0;
}

uint64_t GetIntelCoreGeneration(string VendorID) {
	for (uint8_t j = 0; j < 8; j++) {
		for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelCoreVersionString[j]) + 1; i++) {
			if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)IntelCoreVersionString[j], strlen(IntelCoreVersionString[j])) == StrCmpTrue) {
				uint64_t foo = 0; uint8_t k = 0; char bar[10];
				for (i = i + 3; i < strlen(VendorID) + 1; i++) {
					if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)" ", 1) == StrCmpTrue)return foo;
					bar[k] = *(VendorID + i); k++; bar[k] = '\0';
					string giggity = bar;
					foo = stringToUnsignedInt64(giggity);
				}
			}
		}
	}
	
	return 0;
}

bool WhatIntelSpeed(string VendorID) {
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(SpeedString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)SpeedString, strlen(SpeedString)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsIntelIntegratedGraphics() {

}

bool IsIntelPentium(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelPentiumString) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)IntelPentiumString, strlen(IntelPentiumString)) == StrCmpTrue)return true;
	}
	return false;
}


//XENONS 
bool IsIntelXenon(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(XENON_STRING) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)XENON_STRING, strlen(XENON_STRING)) == StrCmpTrue)return true;
	}
	return false;
}

uint8_t GetMasterXenonVersion(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(XENON_CORE_MASTER_STRING[0]) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)XENON_CORE_MASTER_STRING[0], strlen(XENON_CORE_MASTER_STRING[0])) == StrCmpTrue)return 51;
	}
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(XENON_CORE_MASTER_STRING[1]) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)XENON_CORE_MASTER_STRING[1], strlen(XENON_CORE_MASTER_STRING[1])) == StrCmpTrue)return 54;
	}
	return 0;
}

uint64_t GetIntelXenonGeneration(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(XENON_CORE_MASTER_STRING[0]) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)XENON_CORE_MASTER_STRING[0], strlen(XENON_CORE_MASTER_STRING[0])) == StrCmpTrue){
				string New;
				strncpy(New,VendorID + i, 2);
				return (5100 + stringToUnsignedInt8(New));
		}
	}
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(XENON_CORE_MASTER_STRING[1]) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)XENON_CORE_MASTER_STRING[1], strlen(XENON_CORE_MASTER_STRING[1])) == StrCmpTrue){
				string New;
				strncpy(New,VendorID + i, 2);
				return (5400 + stringToUnsignedInt8(New));
		}
	}
	return 0;
}

bool IsIntelCore2(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(IntelCore2String) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)IntelCore2String, strlen(IntelCore2String)) == StrCmpTrue)return true;
	}
	return false;
}

bool IsIntelAtom(string VendorID){
	for (uint8_t i = 0; i < strlen(VendorID) - strlen(ATOM_STRING) + 1; i++) {
		if (strncmp((StrCmpCast)VendorID + i, (StrCmpCast)ATOM_STRING, strlen(ATOM_STRING)) == StrCmpTrue)return true;
	}
	return false;
}