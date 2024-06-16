CC = x86_64-w64-mingw32-gcc
CXX = x86_64-w64-mingw32-g++
NASM = nasm
LD = $(CXX)
RM = rm -f

CFLAGS = -Wall -O2 -shared -I ../../../include -m64
LDFLAGS =

DLL_NAME = LouDLL.dll
SRC = LouDLLMain.cpp
ASM_SRC = LouDLL.asm

.PHONY: all clean

all: $(DLL_NAME)

$(DLL_NAME): $(SRC) $(ASM_SRC:.asm=.o)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.asm
	$(NASM) -f win64 $< -o $@

clean:
	$(RM) $(DLL_NAME) $(ASM_SRC:.asm=.o)
