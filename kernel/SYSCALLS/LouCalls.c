#include <LouAPI.h>


void LouUserMalloc(uint64_t Data);
void LouKeDrsdResetFBDEV(uint64_t* FBDEV);
void LouKeFOpenCall(uint64_t* Data);

void CheckLouCallTables(uint64_t Call, uint64_t Data){

    switch (Call){
        case LOUVMALLOC:{
            LouUserMalloc(Data);
            break;
        } 
        case LOUCREATETHREAD:{

            break;
        }
        case LOURESETMONITOR:{
            LouKeDrsdResetFBDEV((uint64_t*)Data);
            break;
        }
        case LOULOADFILE:{
            LouKeFOpenCall((uint64_t*)Data);
            break;
        }
        case LOUPRINTCALL:{ 
            *(uint64_t*)Data = LouPrint((string)*(uint64_t*)Data);\
            break;
        }
        default:
        LouPrint("Unkown Call\n");
    }

}