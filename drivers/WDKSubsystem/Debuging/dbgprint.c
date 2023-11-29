#include <WDKSubsystem/WDKSubsystem.h>
#include <LouDDK.h>
#include <stdarg.h>
#include <kernel/exports.h>
//I Will Need To Change The Cases To The Real Cases

DefineExport(0x01, DbgPrint);

uint64_t DbgPrint(_In_z_ _Printf_format_string_ PCSTR Format, ...){
    va_list args;
    va_start(args, Format);

    while (*Format) {
        if (*Format == '%') {
            Format++; // Move past '%'

            // Handle format specifiers
            switch (*Format) {
            case 'd': {
                int64_t num = va_arg(args, int64_t);  // Use int64_t instead of uint64_t
                LouPrint("%d", num);
                break;
            }
            case 's': {
                char* text = va_arg(args, char*);
                LouPrint(text);
                break;
            }
            case 'x': {
                uint64_t X = va_arg(args, uint64_t);
                LouPrint("%x",X);
                break;
            }
            case 'y': {
                uint64_t Y = va_arg(args, uint64_t);
                LouPrint("%y",Y);
                break;
            }
            case 'c': {
                char c = va_arg(args, int);
                LouPrint("%c", c);
                break;
            }
            case 'h':{
                int64_t num = va_arg(args, int64_t); // get the Number in integer Form
                LouPrint("%h", num); // Print Hex String;
                break;
            }
            default: {
                LouPrint("%");
                LouPrint("%c", *Format);
                break;
            }
            }

            Format++; // Move to the next character in the format string
        }
        else if(*Format == '\r'){
                //Do Nothing In This Case
                Format++;
        }
        else {
            LouPrint("%c", *Format);
            Format++;
        }
    }

    va_end(args);
    return 0;
}

ULONG DbgPrintEx ( _In_ ULONG ComponentId, _In_ ULONG Level, _In_z_ _Printf_format_string_ PCSTR Format, ...){
 
    return 0;
}
