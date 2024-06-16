#ifndef _WINAPI_TYPES_H
#define _WINAPI_TYPES_H

#include <WinAPI/NtAPI/Ntstatus.h>

typedef unsigned long ULONG;
typedef void* PVOID;
typedef PVOID HANDLE;
typedef HANDLE* PHANDLE;
typedef bool BOOLEAN;

typedef uint8_t BYTE;
typedef uint16_t WORD;

typedef unsigned short USHORT;


typedef struct _LPC_SECTION_OWNER_MEMORY {
  ULONG                   Length;
  HANDLE                  SectionHandle;
  ULONG                   OffsetInSection;
  ULONG                   ViewSize;
  PVOID                   ViewBase;
  PVOID                   OtherSideViewBase;

} LPC_SECTION_OWNER_MEMORY, *PLPC_SECTION_OWNER_MEMORY;

typedef struct _LPC_MESSAGE {
  USHORT                  DataLength;
  USHORT                  Length;
  USHORT                  MessageType;
  USHORT                  DataInfoOffset;
  CLIENT_ID               ClientId;
  ULONG                   MessageId;
  ULONG                   CallbackId;
} LPC_MESSAGE, *PLPC_MESSAGE;

typedef struct _LPC_SECTION_MEMORY {



  ULONG                   Length;
  ULONG                   ViewSize;
  PVOID                   ViewBase;

} LPC_SECTION_MEMORY, *PLPC_SECTION_MEMORY;

typedef WORD SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;


#endif