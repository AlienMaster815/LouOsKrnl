#define USER32_API __declspec(dllexport)

typedef unsigned short uint16_t;
typedef unsigned char uint8_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;
typedef uint64_t uintptr_t;
typedef uint8_t BOOL;
typedef void* HMODULE;
typedef uint32_t DWORD;
typedef void* LPVOID;

#define TRUE 1
#define FALSE 0

BOOL USER32_API DllMainCRTStartup(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}


typedef struct __attribute__((packed)) _InitializationData {
	uintptr_t Framebuffer;
	uint16_t Height;
	uint16_t Width;
	uint8_t BPP;
	uint32_t Pitch;
}INIT_DATA, * PINIT_DATA;

static
INIT_DATA UserData;

USER32_API void 
InitializeUserModeData(
	PINIT_DATA PUserData
) {
	//this is a kernel function that is called in a privaledged mode
	UserData.Framebuffer = PUserData->Framebuffer;
	UserData.Height = PUserData->Height;
    UserData.Width = PUserData->Width;
    UserData.BPP = PUserData->BPP;
    UserData.Pitch = PUserData->Pitch;
}

USER32_API void
LouUsrPutPixel(
	uint16_t X,
	uint16_t Y,
	uint8_t r,
	uint8_t g,
	uint8_t b,
    uint8_t a
) {
    // Calculate the offset in the framebuffer
    uint32_t bytes_per_pixel = UserData.BPP / 8;
    uint8_t* framebuffer = (uint8_t*)(uintptr_t)UserData.Framebuffer;

    // Ensure x and y are within the screen bounds
    if (X >= UserData.Width || Y >= UserData.Height) {
        return; // Out of bounds, do nothing
    }

    // Calculate the position in the framebuffer
    uint32_t pixel_offset = (Y * UserData.Pitch) + (X * bytes_per_pixel);

    // Set the pixel value based on the framebuffer format
    if (bytes_per_pixel == 4) {
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
        framebuffer[pixel_offset + 3] = a;    // Reserved or Alpha
    }
    else if (bytes_per_pixel == 3) {
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
    }
}

USER32_API 
void LouUsrCreateUserThread(
	void (*Function)(void*),
	void* Parameters
) {
	//this is the LouUsrCreateUserThread stub for allowing the
	//stub to run in a lower privledge
	Function(Parameters);
	//later we will free the thread
	while (1);
}

USER32_API
void FillRectangle(
    uint16_t x, 
    uint16_t y, 
    uint16_t Width, 
    uint16_t Height,
    uint8_t r,
    uint8_t g,
    uint8_t b,
    uint8_t a
) {
    for (uint16_t j = 0; j < Height; j++) {
        for (uint16_t i = 0; i < Width; i++) {
            LouUsrPutPixel(x+i, y+j, r,g,b,a);
        }
    }
}

USER32_API
void UserModeTestFunction() {
    
    FillRectangle(0,0, UserData.Width, UserData.Height,0,128,128,0);

}

USER32_API
void* AnnyaStartUserMode(){


    return 0x00;
}