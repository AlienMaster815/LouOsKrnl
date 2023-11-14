

EE_c_source_filesX64 := $(shell find init -name *.c)
EE_c_object_filesX64 := $(patsubst init/%.c, build/x86_64/init/%.o, $(x86_64_c_source_files))

kernel_source_files := $(shell find kernel -name *.c)
kernel_object_files := $(patsubst kernel/%.c, build/kernel/%.o, $(kernel_source_files))

CC = #will be a cross compiler when i set it up

$(kernel_object_files): build/kernel/%.o : kernel/%.c
	mkdir -p $(dir $@) && \
	$(CC) -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/kernel/%.o, kernel/%.c, $@) -o $@

$(EE_c_object_files): build/x86_64/init/%.o : init/%.c
	mkdir -p $(dir $@) && \
	$(CC) -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/x86_64/init/%.o, init/%.c, $@) -o $@

$(EE_BOOT_object_files): build/x86_64/boot/%.o : boot/%.c
	mkdir -p $(dir $@) && \
	$(CC) -m64 -c -fstack-protector -ffreestanding -Werror -I include $(patsubst build/x86_64/init/%.o, init/%.c, $@) -o $@


EE_OBJ = EE_c_object_files kernel_source_files EE_BOOT_object_files

EE_BIN=test.elf

EE_LIBS=-ldma -lgraph -ldraw -lkernel -ldebug

EE_CFLAGS += -Wall --std=c99
EE_LDFLAGS = -L$(PSDSDK)/ee/common/lib -L$(PS2SDK)/ee/lib


PS2SDK=/usr/local/ps2dev/ps2sdk

ISO_TGT=test.iso

include $(PS2SDK)/samples/Makefile.eeglobal
include $(PS2SDK)/samples/Makefile.pref

all: $(ISO_TGT)

$(ISO_TGT): $(EE_BIN)
	mkisofs -l -o $(ISO_TGT) $(EE_BIN) SYSTEM.CNF

.PHONY: docker-build
docker-build:
	docker run -v $(shell pwd):/src ps2build make


.PHONY: clean
clean:
	rm -rf $(ISO_TGT) $(EE_BIN) $(EE_OBJS)
