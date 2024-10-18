#include <LouAPI.h>


string GetNextDirectoryName(string PATH){

    LouPrint("Path is:%s\n", PATH);

    if(PATH[0] == '/'){
        PATH++; //takes away the / charecter
        return PATH;
    }
    else {

        return PATH + CurrenDirectoryStringLength(PATH) + 1;
        
    }
}


uint8_t CurrenDirectoryStringLength(string Dir){
    for(uint8_t i = 0; i < 255; i++){
        if(Dir[i] == '/')return i;
        else if(Dir[i] == '.')return i;
    }
    return 0x00;
}
