#include <LouDDK.h>
#include <NtAPI.h>

void IoDisconnectInterrupt(
  _In_ PKINTERRUPT InterruptObject
){
    RegisterInterruptHandler(0x00, InterruptObject->Vector);
}

NTSTATUS IoConnectInterrupt(
  _Out_          PKINTERRUPT       *InterruptObject,
  _In_           PKSERVICE_ROUTINE  ServiceRoutine,
  _In_opt_ PVOID                    ServiceContext,
  _In_opt_ PKSPIN_LOCK              SpinLock,
  _In_           ULONG              Vector,
  _In_           KIRQL              Irql,
  _In_           KIRQL              SynchronizeIrql,
  _In_           KINTERRUPT_MODE    InterruptMode,
  _In_           BOOLEAN            ShareVector,
  _In_           KAFFINITY          ProcessorEnableMask,
  _In_           BOOLEAN            FloatingSave
){
    //we will do more later
    RegisterInterruptHandler((void(*)())ServiceRoutine ,Vector);

    return STATUS_SUCCESS;
}

void IoDisconnectInterruptEx(
   PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
){

    // Validate the Parameters
    if (Parameters == 0x00) {
        return;
    }

    // Handle different versions of IO_DISCONNECT_INTERRUPT_PARAMETERS
    switch (Parameters->Version) {
        case CONNECT_FULLY_SPECIFIED:
            // Disconnect fully specified interrupt
            IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
            break;

        case CONNECT_LINE_BASED:
            // Disconnect line-based interrupt
            IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
            break;

        case CONNECT_MESSAGE_BASED:
            // Disconnect message-based interrupt
            IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
            break;

        default:
            // Invalid version
            // You might want to handle this case differently, such as logging an error
            break;
    }

}

NTSTATUS IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters){
    NTSTATUS status = STATUS_SUCCESS;

    // Validate the Parameters
    if (Parameters == 0x00) {
        return STATUS_INVALID_PARAMETER;
    }

    // Handle different versions of IO_CONNECT_INTERRUPT_PARAMETERS
    switch (Parameters->Version) {
        case CONNECT_FULLY_SPECIFIED:
            // Connect fully specified interrupt
            status = IoConnectInterrupt(
                Parameters->FullySpecified.InterruptObject,
                Parameters->FullySpecified.ServiceRoutine,
                Parameters->FullySpecified.ServiceContext,
                Parameters->FullySpecified.SpinLock,
                Parameters->FullySpecified.Vector,
                Parameters->FullySpecified.Irql,
                Parameters->FullySpecified.Irql, // SynchronizeIrql
                Parameters->FullySpecified.InterruptMode,
                Parameters->FullySpecified.ShareVector,
                Parameters->FullySpecified.ProcessorEnableMask,
                Parameters->FullySpecified.FloatingSave
            );
            break;

        case CONNECT_LINE_BASED:
            // Connect line-based interrupt
            status = IoConnectInterrupt(
                Parameters->LineBased.InterruptObject,
                Parameters->LineBased.ServiceRoutine,
                Parameters->LineBased.ServiceContext,
                0x00,
                Parameters->LineBased.Vector,
                Parameters->LineBased.Irql,
                Parameters->LineBased.Irql, // SynchronizeIrql
                Parameters->LineBased.InterruptMode,
                Parameters->LineBased.ShareVector,
                0,
                false
            );
            break;

        case CONNECT_MESSAGE_BASED:
            // Connect message-based interrupt
            status = IoConnectInterrupt(
                Parameters->MessageBased.InterruptObject,
                Parameters->MessageBased.ServiceRoutine,
                Parameters->MessageBased.ServiceContext,
                0x00,
                Parameters->MessageBased.MessageInfo->MessageInfo[0].Vector,
                Parameters->MessageBased.MessageInfo->MessageInfo[0].Irql,
                Parameters->MessageBased.MessageInfo->MessageInfo[0].Irql,
                Parameters->MessageBased.InterruptMode,
                true,
                0,
                false
            );
            break;

        default:
            // Invalid version
            status = STATUS_INVALID_PARAMETER;
            break;
    }

    return status;
}

void RtlCopyMemory(
   void*       Destination,
   const void* Source,
   size_t      Length
){
    memcpy(Destination, Source, Length);
}

 VOID RtlCopyUnicodeString(
            PUNICODE_STRING  DestinationString,
            _In_opt_ PCUNICODE_STRING SourceString
){

    LouPrint("RtlCopyUnicodeString()\n");


    // If the source string is NULL, set the destination string to empty
    if (SourceString == 0x00) {
        DestinationString->Length = 0;
        if (DestinationString->MaximumLength > 0) {
            DestinationString->Buffer[0] = L'\0';
        }
        return;
    }

    // Determine the number of bytes to copy
    USHORT bytesToCopy = min(SourceString->Length, DestinationString->MaximumLength - sizeof(WCHAR));

    // Copy the characters from source to destination
    RtlCopyMemory(DestinationString->Buffer, SourceString->Buffer, bytesToCopy);

    // Set the length of the destination string
    DestinationString->Length = bytesToCopy;

    // Null-terminate the destination string if there is room
    if (DestinationString->MaximumLength > bytesToCopy) {
        DestinationString->Buffer[bytesToCopy / sizeof(WCHAR)] = L'\0';
    }

}
