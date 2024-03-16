#include <LouDDK.h>
#include <NtAPI.h>






DOS_Header* FindDriverFile(uintptr_t MemmoryOffset) {

	UNUSED DOS_Header* Header;

	UNUSED uintptr_t foo = 4ULL * 1024 * 1024 * 1024;

	for (uintptr_t i = MemmoryOffset; i < foo; i++) {
		Header = (DOS_Header*)i;
		
		if ((Header->e_magic[0] == 'M') && (Header->e_magic[1] == 'Z')) {
			//MAYBE LETS SEE 
            //LouPrint("FOO IS %c\n", Header->e_magic[0]);
            //LouPrint("FOO2 IS %c\n", Header->e_magic[1]);
            UNUSED COFF_Header* COFF = (COFF_Header*)(i + Header->e_lfanew);

            //LouPrint("MAGIC IS:%s\n", COFF->magic);
            if (strncmp("PE", COFF->magic, 2) == 0) return (DOS_Header*)Header;

		}
		else continue;

	}

	return 0;
}



