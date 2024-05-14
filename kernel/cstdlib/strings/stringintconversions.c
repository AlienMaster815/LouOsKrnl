#include <LouAPI.h>


int64_t stringToInt64(const char* str) {
    int64_t result = 0;
    int64_t sign = 1;
    int64_t i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return sign * result;
}


uint64_t stringToUnsignedInt64(const char* str) {
    uint64_t result = 0;

    for (uint64_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return result;
}



int32_t stringToInt32(const char* str) {
    int32_t result = 0;
    int32_t sign = 1;
    int32_t i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return sign * result;
}

uint32_t stringToUnsignedInt32(const char* str) {
    uint32_t result = 0;

    for (uint32_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return result;
}

int16_t stringToInt16(const char* str) {
    int16_t result = 0;
    int16_t sign = 1;
    int16_t i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return sign * result;
}

uint16_t stringToUnsignedInt16(const char* str) {
    uint16_t result = 0;

    for (uint16_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return result;
}

int8_t stringToInt8(const char* str) {
    int8_t result = 0;
    int8_t sign = 1;
    int8_t i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return sign * result;
}

uint8_t stringToUnsignedInt8(const char* str) {
    uint8_t result = 0;

    for (uint8_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            result = result * 10;
        }
    }

    return result;
}


void UIntToString(unsigned int num, char* str) {
    uint8_t* NumberBuffer = (uint8_t*)&num;
    int i;
    for (i = 0; i < sizeof(int); i++) {
        str[sizeof(int) - 1 - i] = NumberBuffer[i];
    }
    str[sizeof(int)] = '\0';
}


