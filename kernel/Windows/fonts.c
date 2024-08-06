#include <LouAPI.h>



CharMapping charMap[] = {
    {'A',8,{
        0b00001000,
        0b00001000,
        0b00010100,
        0b00010100,
        0b00100010,
        0b00100010,
        0b00111110,
        0b01000001,
        0b01000001,
    }},
    {'a',8,{
        0b0000000,
        0b0000000,
        0b0000000,
        0b0011100,
        0b0000010,
        0b0011110,
        0b0100010,
        0b0100010,
        0b0011110,
    }},
    {'B',8,{
        0b1111110,
        0b1000001,
        0b1000001,
        0b1000001,
        0b1111110,
        0b1000001,
        0b1000001,
        0b1000001,
        0b1111110,
    }},
    {'b',8,{
        0b0100000,
        0b0100000,
        0b0100000,
        0b0111100,
        0b0100010,
        0b0100010,
        0b0100010,
        0b0100010,
        0b0111100,
    }}
};

/**Generic Kernel Map
CharMapping charMap[] = {
    {'a',{
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
        0b0000000,
    }}
};
*/


CharMapping* GetCharecterMap(char Charecter){

    for(uint8_t i = 0; i < SupportedCharecters; i++){

        if(charMap[i].character == Charecter)return &charMap[i];

    }

}

