# G++ Gcc make NASM grub xorriso gnu-efi

# Target Architecture Supported x86_64 ARM 

#dll targets
#x86_64-w64-mingw32-gcc -shared -o mydll.dll mydll.c -nostdlib -nodefaultlibs 

#lib compile line
#x86_64-w64-mingw32-dlltool --input-def KernelDefs.def --output-lib louoskrnl.lib

#AnnyaExp Compile Line
#x86_64-w64-mingw32-gcc -ffreestanding -nostdlib -nostartfiles -o AnnyaExp.exe AnnyaExp.c 

TARGET_ARCH = x86_64
HOST_ARCH = x86_64
FIRMWARE_TARGET = BIOS

ExportTable = Config/Kernel_Config/ExportTable.xml
DriverTable = Config/System_Config/drivers.xml
FileStructureTable = Config/System_Config/FileStructure.xml
SystemFileTable = Config/System_Config/SystemFiles.xml

OSBUILDX64 := $(shell cat Config/OSIMGBUILDX64.cfg)
OSBUILDX86 := $(shell cat Config/OSIMGBUILDX86.cfg)

KernelEXPORTS := $(shell awk -F '[<>]' '/<KernelExport>/{print "-K " $$3}' $(ExportTable) | tr '\n' ' ')
WDFLDRModuleEXPORTS := $(shell awk -F '[<>]' '/<WDFLDRModuleExport>/{print "-K " $$3}' $(ExportTable) | tr '\n' ' ')


MAKEDIR := $(shell awk -F '[<>]' '/<MainDirectoryStructure>/{print " " $$3 ";"}' $(FileStructureTable) | tr '\n' ' ')
MAKEDIR64 := $(shell awk -F '[<>]' '/<MainDirectoryStructure64>/{print " " $$3 ";"}' $(FileStructureTable) | tr '\n' ' ')

CPY32 := $(shell awk -F '[<>]' '/<FILETOCPY32>/{print " " $$3 ";"}' $(SystemFileTable) | tr '\n' ' ')
CPY64 := $(shell awk -F '[<>]' '/<FILETOCPY64>/{print " " $$3 ";"}' $(SystemFileTable) | tr '\n' ' ')

Drivers32 := $(shell awk -F '[<>]' '/<DRIVERTOCPY32>/{print " " $$3 ";"}' $(DriverTable) | tr '\n' ' ')
Drivers64 := $(shell awk -F '[<>]' '/<DRIVERTOCPY64>/{print " " $$3 ";"}' $(DriverTable) | tr '\n' ' ')

EXPORT := $(KernelEXPORTS) $(WDFLDRModuleEXPORTS)

ifeq ($(HOST_ARCH),x86_64)
    CC = x86_64-w64-mingw32-gcc
    CP = x86_64-w64-mingw32-g++
    LD = ld

endif

ifeq ($(HOST_ARCH),ARM)
    CC = x86_64-w64-mingw32-gcc
    CP = x86_64-w64-mingw32-g++
    LD = x86_64-elf-ld
endif

ifeq ($(TARGET_ARCH),x86_64)
    C_COMPILE_FLAGS = -m64
    NASM_COMPILE_FLAGS = elf64
endif

ifeq ($(TARGET_ARCH),x86)
    C_COMPILE_FLAGS = -m32
    NASM_COMPILE_FLAGS = elf32
endif


ifeq ($(TARGET_ARCH),x86_64)
	ifeq ($(FIRMWARE_TARGET),BIOS)
		RELEASE_PATH = Releases/64BIOS/Annya.iso
	endif
	ifeq ($(FIRMWARE_TARGET),UEFI)
		RELEASE_PATH = Releases/64UEFI/Annya.iso
	endif
endif


ifeq ($(TARGET_ARCH),x86)
	ifeq ($(FIRMWARE_TARGET),BIOS)
		RELEASE_PATH = Releases/32BIOS/Annya.iso
	endif
	ifeq ($(FIRMWARE_TARGET),UEFI)
		RELEASE_PATH = Releases/32UEFI/Annya.iso
	endif
endif

ifeq ($(TARGET_ARCH),x86_64)
CFLAGS = -c -ffreestanding -Werror -I include -Wno-multichar -fno-omit-frame-pointer -O0 -mmmx -msse
CPPFLAGS = -c -ffreestanding -Wall -fno-exceptions -fno-rtti -Werror -Wno-write-strings -fno-use-cxa-atexit -I include -Wno-multichar -fno-omit-frame-pointer -O0 -mmmx -msse



endif

ifeq ($(TARGET_ARCH),x86)
CFLAGS = -c -ffreestanding -Werror -I include -Wno-multichar -mmmx -msse
CPPFLAGS = -c -ffreestanding -O2 -Wall -fno-exceptions -fno-rtti -msse -mmmx -Werror -Wno-write-strings -fno-use-cxa-atexit -I include -Wno-multichar
endif


kernel_source_files := $(shell find kernel -name *.c)
kernel_object_files := $(patsubst kernel/%.c, build/kernel/%.o, $(kernel_source_files))

x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

driver_cpp_source_files := $(shell find drivers/AGP -name *.cpp)
driver_cpp_source_files += $(shell find drivers/Audio -name *.cpp)
driver_cpp_source_files += $(shell find drivers/DriverInterrupts -name *.cpp)
driver_cpp_source_files += $(shell find drivers/FileSystems -name *.cpp)
driver_cpp_source_files += $(shell find drivers/gpu/InternalGpuFunctions -name *.cpp)
driver_cpp_source_files += $(shell find drivers/io -name *.cpp)
driver_cpp_source_files += $(shell find drivers/ISA -name *.cpp)
driver_cpp_source_files += $(shell find drivers/MotherBoards -name *.cpp)
driver_cpp_source_files += $(shell find drivers/Networking -name *.cpp)
driver_cpp_source_files += $(shell find drivers/pci_systems -name *.cpp)
driver_cpp_source_files += $(shell find drivers/PnP -name *.cpp)
driver_cpp_source_files += $(shell find drivers/processors -name *.cpp)
driver_cpp_source_files += $(shell find drivers/Serial -name *.cpp)
driver_cpp_source_files += $(shell find drivers/storage/InternalStorageDrivers -name *.cpp)
driver_cpp_source_files += $(shell find drivers/USB -name *.cpp)
driver_cpp_source_files += $(shell find drivers/virtualization -name *.cpp)

driver_cpp_object_files := $(patsubst drivers/%.cpp, build/drivers/%.o, $(driver_cpp_source_files))

x86_64_API_cpp_source_files := $(shell find API -name *.cpp)
x86_64_API_cpp_object_files := $(patsubst API/%.cpp, build/x86_64/API/%.o, $(x86_64_API_cpp_source_files))


x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))


x86_64_API_cpp_source_files := $(shell find API -name *.cpp)
x86_64_API_cpp_object_filee := $(patsubst API/%.cpp, build/x86_64/API/%.o, $(x86_64_API_cpp_source_files))

x86_64_API_asm_source_files := $(shell find API -name *.asm)
x86_64_API_asm_object_files := $(patsubst API/%.asm, build/x86_64/asm/API/%.o, $(x86_64_API_asm_source_files))

kernel_s_source_files := $(shell find kernel -name *.s)
kernel_s_object_files := $(patsubst kernel/%.s, build/kernel/%.o, $(kernel_s_source_files))


ifeq ($(TARGET_ARCH), x86_64)
x86_64_asm_source_files = boot/x86_64/BOOT.asm
endif


ifeq ($(TARGET_ARCH), x86)
x86_64_asm_source_files = boot/x86/BOOT.asm
endif

x86_64_asm_object_files = build/x86_64/boot/boot.o 



kernel_asm_source_files := $(shell find kernel -name *.asm)
kernel_asm_object_files := $(patsubst kernel/%.asm, build/x86_64/kernelasm/%.o, $(kernel_asm_source_files))

ifeq ($(FIRMWARE_TARGET),BIOS)
x86_64_object_files := $(kernel_object_files) $(x86_64_c_object_files) $(x86_64_asm_object_files) $(driver_cpp_object_files) $(x86_64_API_asm_object_files) $(x86_64_API_cpp_object_files) $(kernel_asm_object_files) $(kernel_s_object_files)
endif




$(kernel_object_files): build/kernel/%.o : kernel/%.c
	mkdir -p $(dir $@) && \
	$(CC) $(C_COMPILE_FLAGS) $(CFLAGS) $(patsubst build/kernel/%.o, kernel/%.c, $@) -o $@

$(x86_64_c_object_files): build/x86_64/init/%.o : init/%.c
	mkdir -p $(dir $@) && \
	$(CC) $(C_COMPILE_FLAGS) $(CFLAGS) $(patsubst build/x86_64/init/%.o, init/%.c, $@) -o $@

$(driver_cpp_object_files): build/drivers/%.o : drivers/%.cpp
	mkdir -p $(dir $@) && \
	$(CP) $(C_COMPILE_FLAGS) $(CPPFLAGS) $(patsubst build/drivers/%.o, drivers/%.cpp, $@) -o $@ -lc
	


$(x86_64_API_cpp_object_files): build/x86_64/API/%.o : API/%.cpp
	mkdir -p $(dir $@) && \
	$(CP) $(C_COMPILE_FLAGS) $(CPPFLAGS) $(patsubst build/x86_64/API/%.o, API/%.cpp, $@) -o $@ -lc

$(x86_64_API_asm_object_files): build/x86_64/asm/API/%.o : API/%.asm
	mkdir -p $(dir $@) && \
	nasm -f $(NASM_COMPILE_FLAGS) $(patsubst build/x86_64/asm/API/%.o, API/%.asm, $@) -o $@


$(x86_64_asm_object_files): $(x86_64_asm_source_files)
	mkdir -p $(dir $@) && \
	nasm -f $(NASM_COMPILE_FLAGS) $(x86_64_asm_source_files) -o $@

$(kernel_asm_object_files): build/x86_64/kernelasm/%.o : kernel/%.asm
	mkdir -p $(dir $@) && \
	nasm -f $(NASM_COMPILE_FLAGS) $(patsubst build/x86_64/kernelasm/%.o, kernel/%.asm, $@) -o $@


$(kernel_s_object_files): build/kernel/%.o : kernel/%.s
	mkdir -p $(dir $@) && \
	$(CC) -c $(C_COMPILE_FLAGS) $(patsubst build/kernel/%.o, kernel/%.s, $@) -o $@




clean:
	rm -r build


ifeq ($(TARGET_ARCH), x86_64)
lou.exe: $(x86_64_object_files)
	mkdir -p dist/x86_64 && \
	$(LD) -n -o dist/x86_64/LOUOSKRNL.bin -T targets/x86_64/linker.ld $(x86_64_object_files)
	rm -r build
endif


ifeq ($(TARGET_ARCH), x86)
lou.exe: $(x86_64_object_files)
	mkdir -p dist/x86 && \
	$(LD) -melf_i386 -n -o dist/x86/LOUOSKRNL.bin -T targets/x86/linker.ld $(x86_64_object_files)
	rm -r build
endif

ifeq ($(TARGET_ARCH), x86_64)
release: lou.exe
	mkdir -p release/x86_64 && \
	cp dist/x86_64/LOUOSKRNL.bin release/x86_64/LOUOSKRNL.exe
	strip $(EXPORT) \
	release/x86_64/LOUOSKRNL.exe
endif


ifeq ($(TARGET_ARCH), x86)
release: lou.exe
	
	mkdir -p release/x86 && \
	cp dist/x86/LOUOSKRNL.bin release/x86/LOUOSKRNL.exe
	release/x86/LOUOSKRNL.exe

endif




annya.iso: release
	rm -rf ISO
	
	#Make The System Directories
	$(MAKEDIR)


ifeq ($(TARGET_ARCH),x86_64)

	#Make 64 Bit System Directories
	$(MAKEDIR64)
	#Copy System Files To The Appropriate Directories
	$(CPY64)
	$(Drivers64)
	#Build The Image In One Shabang
	$(OSBUILDX64)

endif

ifeq ($(TARGET_ARCH),x86)

	#Copy System Files To The Appropriate Directories
	$(CPY32)
	#$(Drivers32)
	#Build The Image In One Shabang
	$(OSBUILDX86)

endif

	rm -rf release
	#rm -rf ISO



PublicRelease: annya.iso
	cp annya.iso $(RELEASE_PATH)
	rm -rf annya.iso
