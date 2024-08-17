#include <LouAPI.h>

void ButtonDrawText(
    uint16_t x, uint16_t y,
    uint16_t Width, uint16_t Height,
    COLOR_MAP TextColor,
    string ButtonText
){

}

void DrawButton(
    PBUTTONHANDLE ButtonHandle
){

    //ButtonRectangleShape
    DrawRectangle(
        ButtonHandle->CurrentX, 
        ButtonHandle->CurrentY, 
        ButtonHandle->CurrentWidth, 
        ButtonHandle->CurrentHight,
        ButtonHandle->ButtonColor.r,
        ButtonHandle->ButtonColor.g,
        ButtonHandle->ButtonColor.b
    );
    if(ButtonHandle->Charecteristics.IsButton3D){
        Draw3DBorder(
            ButtonHandle->CurrentX, 
            ButtonHandle->CurrentY, 
            ButtonHandle->CurrentWidth, 
            ButtonHandle->CurrentHight,
            ButtonHandle->ForwardHighLite.r,
            ButtonHandle->ForwardHighLite.g,
            ButtonHandle->ForwardHighLite.b,
            ButtonHandle->AftHighLight.r,
            ButtonHandle->AftHighLight.g,
            ButtonHandle->AftHighLight.b
        );
    }

    ButtonDrawText(
            ButtonHandle->CurrentX, 
            ButtonHandle->CurrentY, 
            ButtonHandle->CurrentWidth, 
            ButtonHandle->CurrentHight,
            ButtonHandle->Letters,
            ButtonHandle->Charecteristics.ButtonText
        );

}

void LouUpdateButton(
    uint16_t x, uint16_t y,
    uint16_t Width, uint16_t Height,
    PBUTTONHANDLE HBUTTON
){
        //fill out the basic information
    HBUTTON->CurrentX = x;
    HBUTTON->CurrentY = y;
    HBUTTON->CurrentWidth = Width;
    HBUTTON->CurrentHight = Height;

    DrawButton(HBUTTON);
}

PBUTTONHANDLE LouCreateButton(
    uint16_t x, uint16_t y,
    uint16_t Width, uint16_t Height,
    uintptr_t ParentWindow,
    PBUTTON_CHARECTERISTICS Charecteristics
){
    PBUTTONHANDLE HBUTTON = LouMalloc(sizeof(BUTTONHANDLE));

    //fill out the basic information
    HBUTTON->CurrentX = x;
    HBUTTON->CurrentY = y;
    HBUTTON->CurrentWidth = Width;
    HBUTTON->CurrentHight = Height;

    //fill out colors
    HBUTTON->Letters.r = 0;
    HBUTTON->Letters.g = 0;
    HBUTTON->Letters.b = 0;

    HBUTTON->ButtonColor.r = 198;
    HBUTTON->ButtonColor.g = 198;
    HBUTTON->ButtonColor.b = 198;

    HBUTTON->ForwardHighLite.r = 255; 
    HBUTTON->ForwardHighLite.g = 255; 
    HBUTTON->ForwardHighLite.b = 255;

    HBUTTON->AftHighLight.r = 64; 
    HBUTTON->AftHighLight.g = 64; 
    HBUTTON->AftHighLight.b = 64; 

    //Fill Out Affinitys
    HBUTTON->ParentWindow = ParentWindow;
    HBUTTON->ChildWindow = 0x00;
    HBUTTON->NumberOfChildWindows = 0x00;

    //Fill Out Charecteristics
    HBUTTON->Charecteristics.Type       = Charecteristics->Type;
    HBUTTON->Charecteristics.ButtonName = Charecteristics->ButtonName;
    HBUTTON->Charecteristics.ButtonText = Charecteristics->ButtonText;
    HBUTTON->Charecteristics.IsButton3D = Charecteristics->IsButton3D;

    DrawButton(HBUTTON);

    return HBUTTON;
}