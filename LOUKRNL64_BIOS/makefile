# G++ Gcc make NASM grub xorriso



kernel_source_files := $(shell find kernel -name *.c)
kernel_object_files := $(patsubst kernel/%.c, build/kernel/%.o, $(kernel_source_files))

x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

driver_cpp_source_files := $(shell find drivers -name *.cpp)
driver_cpp_object_files := $(patsubst drivers/%.cpp, build/drivers/%.o, $(driver_cpp_source_files))

x86_64_cpp_source_files := $(shell find init -name *.cpp)
x86_64_cpp_object_files := $(patsubst init/%.cpp, build/x86_64/init/%.o, $(x86_64_cpp_source_files))


x86_64_asm_source_files := $(shell find boot -name *.asm)
x86_64_asm_object_files := $(patsubst boot/%.asm, build/x86_64/boot/%.o, $(x86_64_asm_source_files))



kernel_asm_source_files := $(shell find kernel -name *.asm)
kernel_asm_object_files := $(patsubst kernel/%.asm, build/x86_64/kernelasm/%.o, $(kernel_asm_source_files))

x86_64_object_files := $(kernel_object_files) $(x86_64_c_object_files) $(x86_64_asm_object_files) $(kernel_asm_object_files) $(driver_cpp_object_files)

$(kernel_object_files): build/kernel/%.o : kernel/%.c
	mkdir -p $(dir $@) && \
	x86_64-elf-gcc -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/kernel/%.o, kernel/%.c, $@) -o $@

$(x86_64_c_object_files): build/x86_64/init/%.o : init/%.c
	mkdir -p $(dir $@) && \
	x86_64-elf-gcc -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/x86_64/init/%.o, init/%.c, $@) -o $@

$(driver_cpp_object_files): build/drivers/%.o : drivers/%.cpp
	mkdir -p $(dir $@) && \
	x86_64-elf-g++ -m64 -c -ffreestanding -O2 -Wall -fno-exceptions -fno-rtti -fstack-protector -Werror -Wno-write-strings -fno-use-cxa-atexit -I include $(patsubst build/drivers/%.o, drivers/%.cpp, $@) -o $@ -lc

$(x86_64_asm_object_files): build/x86_64/boot/%.o : boot/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 $(patsubst build/x86_64/boot/%.o, boot/%.asm, $@) -o $@

$(kernel_asm_object_files): build/x86_64/kernelasm/%.o : kernel/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 $(patsubst build/x86_64/kernelasm/%.o, kernel/%.asm, $@) -o $@


clean:
	rm -r build


lou.exe: $(x86_64_object_files)
	mkdir -p dist/x86_64 && \
	x86_64-elf-ld -n -o dist/x86_64/LOUOSKRNL.bin -T targets/linker.ld $(x86_64_object_files)
	rm -r build

release: lou.exe
	mkdir -p release/x86_64 && \
	cp dist/x86_64/LOUOSKRNL.bin release/x86_64/LOUOSKRNL.exe


#annya.iso: lou.exe
#	rm -rf iso
#	mkdir iso
#	mkdir iso/boot
#	mkdir iso/boot/grub
#	cp dist/x86_64/LOUOSKRNL.bin iso/boot/LOUOSKRNL.exe
#	echo 'set timeout=0'                     >> iso/boot/grub/grub.cfg
#	echo 'set default=0'                     >> iso/boot/grub/grub.cfg
#	echo ''                                  >> iso/boot/grub/grub.cfg
#	echo 'menuentry "Annya/lou" {'			 >> iso/boot/grub/grub.cfg
#	echo 'multiboot /boot/LOUOSKRNL.exe'			 >> iso/boot/grub/grub.cfg
#	echo 'boot'								 >> iso/boot/grub/grub.cfg
#	echo '}'							     >> iso/boot/grub/grub.cfg
#	grub-mkrescue --output=annya.iso iso
#	rm -rf iso
