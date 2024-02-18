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
					//LouPrint("giggity is: %s 1\n", giggity);
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