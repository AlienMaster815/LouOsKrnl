# G++ Gcc make NASM grub xorriso


# Change These Compiler Values To Your Correct Values if you Are on an x64 machine Use GCC Else You need a cross compiler \n
# (e.g x86_64-elf-gcc)

# Target Architecture Supported x86_64 ARM 



TARGET_ARCH = x86_64
HOST_ARCH = ARM
FIRMWARE_TARGET = BIOS

ExportTable = Config/ExportTable.xml

KernelEXPORTS := $(shell awk -F '[<>]' '/<KernelExport>/{print "-K " $$3}' $(ExportTable) | tr '\n' ' ')
WDFLDRModuleEXPORTS := $(shell awk -F '[<>]' '/<WDFLDRModuleExport>/{print "-K " $$3}' $(ExportTable) | tr '\n' ' ')


EXPORT := $(KernelEXPORTS) $(WDFLDRModuleEXPORTS)

ifeq ($(HOST_ARCH),x86_64)
    CC = gcc
    CP = g++
    LD = ld

endif

ifeq ($(HOST_ARCH),ARM)
    CC = x86_64-elf-gcc
    CP = x86_64-elf-g++
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
CFLAGS = -c -fstack-protector -ffreestanding -Werror -I include
CPPFLAGS = -c -fstack-protector -ffreestanding -O2 -Wall -fno-exceptions -fno-rtti -Werror -Wno-write-strings -fno-use-cxa-atexit -I include
endif

ifeq ($(TARGET_ARCH),x86)
CFLAGS = -c -ffreestanding -Werror -I include
CPPFLAGS = -c -ffreestanding -O2 -Wall -fno-exceptions -fno-rtti -Werror -Wno-write-strings -fno-use-cxa-atexit -I include
endif


kernel_source_files := $(shell find kernel -name *.c)
kernel_object_files := $(patsubst kernel/%.c, build/kernel/%.o, $(kernel_source_files))

x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

driver_cpp_source_files := $(shell find drivers -name *.cpp)
driver_cpp_object_files := $(patsubst drivers/%.cpp, build/drivers/%.o, $(driver_cpp_source_files))


x86_64_API_cpp_source_files := $(shell find API -name *.cpp)
x86_64_API_cpp_object_files := $(patsubst API/%.cpp, build/x86_64/API/%.o, $(x86_64_API_cpp_source_files))


x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

driver_cpp_source_files := $(shell find drivers -name *.cpp)
driver_cpp_object_files := $(patsubst drivers/%.cpp, build/drivers/%.o, $(driver_cpp_source_files))



x86_64_API_cpp_source_files := $(shell find API -name *.cpp)
x86_64_API_cpp_object_filee := $(patsubst API/%.cpp, build/x86_64/API/%.o, $(x86_64_API_cpp_source_files))

x86_64_API_asm_source_files := $(shell find API -name *.asm)
x86_64_API_asm_object_files := $(patsubst API/%.asm, build/x86_64/asm/API/%.o, $(x86_64_API_asm_source_files))


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
x86_64_object_files := $(kernel_object_files) $(x86_64_c_object_files) $(x86_64_asm_object_files) $(kernel_asm_object_files) $(driver_cpp_object_files) $(x86_64_API_asm_object_files) $(x86_64_API_cpp_object_files)
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






clean:
	rm -r build
	rm -r release


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
	strip $(EXPORT) \
	release/x86/LOUOSKRNL.exe

endif


annya.iso: release
	rm -rf iso
	
	#Make The System Directories
	
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	mkdir iso/Annya

ifeq ($(TARGET_ARCH),x86_64)

	#Create Files For Backwords Compatibility

	mkdir iso/Annya/System32
	#mkdir iso/Annya/Profiles ALREADY DEFINED
	mkdir iso/Annya/System32/drivers

	#Create Files For Regular Systems

	mkdir iso/Annya/System64
	mkdir iso/Annya/Profiles
	mkdir iso/Annya/System64/drivers

	#Copy System Files To The Appropriate Directories
	
	cp SYS/KModeDrvRevEng.sys iso/Annya/System64/drivers/KModeDrvRevEng.sys
	cp Registry/System64/Config iso/Annya/System64/Config
	cp release/x86_64/LOUOSKRNL.exe iso/Annya/System64/LOUOSKRNL.exe
endif

ifeq ($(TARGET_ARCH),x86)

	#Create System Files

	mkdir iso/Annya/System32
	mkdir iso/Annya/Profiles
	mkdir iso/Annya/System32/drivers

	#Copy System Files To The Appropriate Directories

	cp SYS/KModeDrvRevEng.sys iso/Annya/System32/drivers/KModeDrvRevEng.sys
	cp Registry/System64/Config iso/Annya/System32/Config
	cp release/x86/LOUOSKRNL.exe iso/Annya/System32/LOUOSKRNL.exe
endif

	cp Registry/Profiles/Username iso/Annya/Profiles/Username

	#Create A Grub Boot CFG For The Kernel And Make The Image

ifeq ($(TARGET_ARCH),x86_64)

	echo 'set timeout=0'                    		 >> iso/boot/grub/grub.cfg
	echo 'set default=0'                    		 >> iso/boot/grub/grub.cfg
	echo ''                                  	     	 >> iso/boot/grub/grub.cfg
	echo 'menuentry "Annya/lou" {'				 >> iso/boot/grub/grub.cfg
	echo 'multiboot /Annya/System64/LOUOSKRNL.exe'		 >> iso/boot/grub/grub.cfg
	echo 'boot'						 >> iso/boot/grub/grub.cfg
	echo '}'						 >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=annya.iso iso

endif

ifeq ($(TARGET_ARCH),x86)

	echo 'set timeout=0'                    		 >> iso/boot/grub/grub.cfg
	echo 'set default=0'                    		 >> iso/boot/grub/grub.cfg
	echo ''                                  	     	 >> iso/boot/grub/grub.cfg
	echo 'menuentry "Annya/lou" {'				 >> iso/boot/grub/grub.cfg
	echo 'multiboot /Annya/System32/LOUOSKRNL.exe'		 >> iso/boot/grub/grub.cfg
	echo 'boot'						 >> iso/boot/grub/grub.cfg
	echo '}'						 >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=annya.iso iso

endif
	rm -rf release
	rm -rf iso



PublicRelease: annya.iso
	cp annya.iso $(RELEASE_PATH)
	rm -rf annya.iso
