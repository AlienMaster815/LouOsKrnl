#sudo apt install gnu-efi


kernel_source_files := $(shell find kernel -name *.c)
kernel_object_files := $(patsubst kernel/%.c, build/kernel/%.o, $(kernel_source_files))

x86_64_c_source_files := $(shell find init -name *.c)
x86_64_c_object_files := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

kernel_cpp_source_files := $(shell find kernel -name *.cpp)
kernel_cpp_object_files := $(patsubst kernel/%.cpp, build/kernel/%.o, $(kernel_cpp_source_files))

x86_64_cpp_source_files := $(shell find init -name *.cpp)
x86_64_cpp_object_files := $(patsubst init/%.cpp, build/x86_64/init/%.o, $(x86_64_cpp_source_files))


x86_64_asm_source_files := $(shell find boot -name *.asm)
x86_64_asm_object_files := $(patsubst boot/%.asm, build/x86_64/boot/%.o, $(x86_64_asm_source_files))

x86_64_c_bootloader_source_files := $(shell find bootloader -name *.c)
x86_64_c_bootloader_object_files := $(patsubst bootloader/%.c, build/x86_64/bootloader/%.o, $(x86_64_c_bootloader_source_files))

kernel_asm_source_files := $(shell find kernel -name *.asm)
kernel_asm_object_files := $(patsubst kernel/%.asm, build/x86_64/kernelasm/%.o, $(kernel_asm_source_files))

x86_64_object_files := $(kernel_object_files) $(x86_64_c_object_files) $(kernel_asm_object_files) $(x86_64_asm_object_files)

$(kernel_object_files): build/kernel/%.o : kernel/%.c
	mkdir -p $(dir $@) && \
	clang -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/kernel/%.o, kernel/%.c, $@) -o $@

$(x86_64_c_object_files): build/x86_64/init/%.o : init/%.c
	mkdir -p $(dir $@) && \
	clang -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/x86_64/init/%.o, init/%.c, $@) -o $@


$(x86_64_c_bootloader_object_files): build/x86_64/bootloader/%.o : bootloader/%.c
	mkdir -p $(dir $@) && \
	gcc -I include -Ignu-efi/inc -fpic -ffreestanding -fno-stack-protector -fno-stack-check -fshort-wchar -mno-red-zone -maccumulate-outgoing-args -Werror -c $(patsubst build/x86_64/bootloader/%.o, bootloader/%.c, $@) -o $@



$(x86_64_asm_object_files): build/x86_64/boot/%.o : boot/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 -o $@ $(patsubst build/x86_64/boot/%.o, boot/%.asm, $@)

$(kernel_asm_object_files): build/x86_64/kernelasm/%.o : kernel/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 -o $@ $(patsubst build/x86_64/kernelasm/%.o, kernel/%.asm, $@)


clean:
	rm -r build


lou.exe: $(x86_64_object_files)
	rm -r dist
	mkdir -p dist/x86_64 && \
	ld -n -o dist/x86_64/LOUOSKRNL.bin -T targets/linker.ld $(x86_64_object_files)
	rm -r build



annya.iso: lou.exe
	rm -rf iso
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp dist/x86_64/LOUOSKRNL.bin iso/boot/LOUOSKRNL.exe
	echo 'set timeout=0'                     >> iso/boot/grub/grub.cfg
	echo 'set default=0'                     >> iso/boot/grub/grub.cfg
	echo 'menuentry "Annya/Lou" {'  	 >> iso/boot/grub/grub.cfg
	echo 'multiboot2 /boot/LOUOSKRNL.exe'    >> iso/boot/grub/grub.cfg
	echo 'boot' >> iso/boot/grub/grub.cfg
	echo '}'                               >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=annya.iso iso
	rm -rf iso
