/*
-- Tyler Radomski-Grennier 9/6/20 11:17
-- NOTICE: This File Is Only mFor Types 
-- And The Types Are For ALL Subsystems 
-- Just Another Way We like To Say Fuck
-- You Here At "The Washington Redskins"
-- -Trey Parker
*/
#ifndef _STYPES_H
#define _STYPES_H

typedef uint8_t LouKIRQL;

typedef struct _Fixed20_12{
    int32_t FULL;
}Fixed20_12;

// Extract the integer part
#define FIXED20_12_INTEGER(value) ((value) >> 12)

// Extract the fractional part
#define FIXED20_12_FRACTIONAL(value) ((value) & 0xFFF)

// Create a fixed20_12 number from integer and fractional parts
#define MAKE_FIXED20_12(integer, fractional) (((integer) << 12) | (fractional & 0xFFF))


#define DFixedConst8(x)  ((x) << 3) // multiply by 8 and convert to fixed-point representation

#define DFixedConst(x) ((x) << 12)

#define DFixedMul(a,b) (((int64_t)(a.FULL) * (int64_t)(b.FULL)) >> 12)
#define DFixedDiv(a, b) (((int64_t)(a.FULL) << 12) / (b.FULL))
// DFixedConst_666 multiplies an integer by 666 and converts it to fixed-point format
#define DFixedConst666(x)  ((x) * 666 << 12)
// DFixed_const_half adds 0.5 to the integer and converts it to fixed-point format
#define DFixedConstHalf(x)  (((x) << 12) + (1 << 11))
#define DFixedTrunc(value) ((value).FULL >> 12)
#define DIV_ROUND_UP(n, d) (((n) + (d) - 1) / (d))

static inline Fixed20_12 DFixedInit(int32_t value) {
    Fixed20_12 result;

    // Assume the input is a whole integer and shift it into the fixed-point format.
    result.FULL = value << 12;  // Shift by 12 to fill the integer part.

    return result;
}

static inline Fixed20_12 DFixedInitHalf(int32_t integer_part){
    Fixed20_12 result;

    // Shift the integer part into the upper 20 bits
    result.FULL = integer_part << 12;

    // Add 0.5 to the fractional part
    result.FULL += 1 << 11; // 0.5 in fixed20_12 format
    return result;
}

#endif