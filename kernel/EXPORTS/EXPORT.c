#include "ExportTable.h"

void DefineExport(uint64_t ExportNumber, void (*Handler)()){

    switch (ExportNumber){
    
        case DbgPrintFunc :{
            DbgPrint = Handler;
        }
    
        default:
            break;
    }

}
