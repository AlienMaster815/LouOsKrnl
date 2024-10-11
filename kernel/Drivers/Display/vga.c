//#include <drivers/display/vga.h>
#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

#define VGA_RGB_FRAMEBUFFER 0xFF


extern struct multiboot_tag_vbe VBE_INFO;
CharMapping* GetCharecterMap(char Charecter);


size_t col = 0;
size_t row = 0;

Char* VgaBuffer = (Char*)0xb8000;

uint8_t color;

void Set_Y(uint64_t y) {
    if(vga_current == VGA_MODE_80x25)row = y;
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void Set_X(uint64_t x) {
    if(vga_current == VGA_MODE_80x25)col = x;
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}
void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg) {
    if(vga_current == VGA_MODE_80x25)color = fg | bg << 4;
    
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void clear_row(size_t row) {
    if(vga_current == VGA_MODE_80x25){    
        Char empty;
        empty.character = ' ';
        empty.color = color;


        for (size_t col = 0; col < NUM_COLS; col++) {
            VgaBuffer[col + NUM_COLS * row] = empty;
        }
    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }
}

void ScanForVideoHardware();

void init_terminal() {

    ScanForVideoHardware();

}

void print_clear() {


}

void print_newline() {



}

void print_char(char character) {
    if(vga_current == VGA_MODE_80x25){
    if (character == '\n') {
        print_newline();
        return;
    }

        if (col > NUM_COLS) {
            print_newline();
        }

        if(vga_current == VGA_MODE_80x25){
            VgaBuffer[col + NUM_COLS * row].character = (uint8_t)character;
            VgaBuffer[col + NUM_COLS * row].color = color;
            col++;
        }
    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void print_str(char* str) {
    for (size_t i = 0; 1; i++) {
        char character = (uint8_t)str[i];

        if (character == '\0') {
            return;
        }

        print_char(character);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    if(vga_current == VGA_MODE_80x25)color = foreground + (background << 4);
}

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle, TEXT_WINDOW_EVENT Update);

void VgaPutCharecterRgb(char Character, PWINDHANDLE Handle, uint8_t r, uint8_t g, uint8_t b) {
    uint16_t xz, yz;

    if (Character == '\n') {
        Handle->Cursor.x = 0;
        if ((Handle->Cursor.y + 34) > Handle->Charecteristics.Dimentions.height) {
            LouUpdateTextWindow(Handle, TEXT_WINDOW_BUFFER_OVERFLOW);
            }else{
            Handle->Cursor.y += 17;
        }
        return;
    } else if (Character == ' ') {
        Handle->Cursor.x += 8;
        return;
    }

    CharMapping* Map = GetCharecterMap(Character);

    if (Map == 0x00) {
        return;
    }

    if ((Handle->Cursor.x + Map->width + 8) > Handle->Charecteristics.Dimentions.width) {
        VgaPutCharecterRgb('\n', Handle , 0, 0, 0);
    }

    uint16_t x = Handle->Charecteristics.Dimentions.x + Handle->Cursor.x;
    uint16_t y = Handle->Charecteristics.Dimentions.y + Handle->Cursor.y;

    for (yz = 0; yz < 16; yz++) {
        wchar_t Ybyte = Map->pixels[yz];
        for (xz = 0; xz < 16; xz++) {
            if ((Ybyte >> (15 - xz)) & 0x01) {
                LouKeDrsdPutPixelMirrored(x + xz, y + yz, r, g, b);
            }
        }
    }

    Handle->Cursor.x += Map->width;
}

void* GetFrameBufferAddress(
    PDrsdVRamObject FBDEV,
    uint16_t x, uint16_t y
){

    // Calculate the offset in the framebuffer
    uint32_t bytes_per_pixel = FBDEV->FrameBuffer.Bpp / 8;
    uint8_t* framebuffer = (uint8_t*)(uintptr_t)FBDEV->FrameBuffer.FramebufferBase;

    // Ensure x and y are within the screen bounds
    if (x >= FBDEV->FrameBuffer.Width || y >= FBDEV->FrameBuffer.Height) {
        return false; // Out of bounds, do nothing
    }

    //Calculate the position in the framebuffer
    uint32_t pixel_offset = (y * FBDEV->FrameBuffer.Pitch) + (x * bytes_per_pixel);

    return(void*)&framebuffer[pixel_offset];
}

