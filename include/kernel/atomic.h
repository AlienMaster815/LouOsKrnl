#ifndef _ATOMIC_H
#define _ATOMIC_H

#define REX_64 0x48


#ifndef _ONE_BYTE
#define _ONE_BYTE
#define AAA 0x37 //One Byte Instruction
#define AAD 0xD5 //One Byte Instruction
#define AAS 0x3f
#endif

#ifndef _TWO_BYTE
#define _TWO_BYTE

#define AAM 0xD4

#endif

#define ADC 11

typedef struct {
	int counter;
}atomic_t;

typedef atomic_t* p_atomic_t;

#define BITMASK(bit) (1 << bit)

#endif
