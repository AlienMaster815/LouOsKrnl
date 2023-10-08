// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_SerialCommunication_0_H
#define WINRT_Windows_Devices_SerialCommunication_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::Devices::SerialCommunication
{
    enum class SerialError : int32_t
    {
        Frame = 0,
        BufferOverrun = 1,
        ReceiveFull = 2,
        ReceiveParity = 3,
        TransmitFull = 4,
    };
    enum class SerialHandshake : int32_t
    {
        None = 0,
        RequestToSend = 1,
        XOnXOff = 2,
        RequestToSendXOnXOff = 3,
    };
    enum class SerialParity : int32_t
    {
        None = 0,
        Odd = 1,
        Even = 2,
        Mark = 3,
        Space = 4,
    };
    enum class SerialPinChange : int32_t
    {
        BreakSignal = 0,
        CarrierDetect = 1,
        ClearToSend = 2,
        DataSetReady = 3,
        RingIndicator = 4,
    };
    enum class SerialStopBitCount : int32_t
    {
        One = 0,
        OnePointFive = 1,
        Two = 2,
    };
    struct IErrorReceivedEventArgs;
    struct IPinChangedEventArgs;
    struct ISerialDevice;
    struct ISerialDeviceStatics;
    struct ErrorReceivedEventArgs;
    struct PinChangedEventArgs;
    struct SerialDevice;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::IPinChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::ISerialDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::ISerialDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::PinChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialError>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialHandshake>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialParity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialPinChange>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::SerialCommunication::SerialStopBitCount>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.IErrorReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::IPinChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.IPinChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::ISerialDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.ISerialDevice" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::ISerialDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.ISerialDeviceStatics" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.ErrorReceivedEventArgs" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::PinChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.PinChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialDevice" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialError>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialError" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialHandshake>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialHandshake" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialParity>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialParity" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialPinChange>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialPinChange" };
    };
    template <> struct name<Windows::Devices::SerialCommunication::SerialStopBitCount>
    {
        static constexpr auto & value{ L"Windows.Devices.SerialCommunication.SerialStopBitCount" };
    };
    template <> struct guid_storage<Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
    {
        static constexpr guid value{ 0xFCC6BF59,0x1283,0x4D8A,{ 0xBF,0xDF,0x56,0x6B,0x33,0xDD,0xB2,0x8F } };
    };
    template <> struct guid_storage<Windows::Devices::SerialCommunication::IPinChangedEventArgs>
    {
        static constexpr guid value{ 0xA2BF1DB0,0xFC9C,0x4607,{ 0x93,0xD0,0xFA,0x5E,0x83,0x43,0xEE,0x22 } };
    };
    template <> struct guid_storage<Windows::Devices::SerialCommunication::ISerialDevice>
    {
        static constexpr guid value{ 0xE187CCC6,0x2210,0x414F,{ 0xB6,0x5A,0xF5,0x55,0x3A,0x03,0x37,0x2A } };
    };
    template <> struct guid_storage<Windows::Devices::SerialCommunication::ISerialDeviceStatics>
    {
        static constexpr guid value{ 0x058C4A70,0x0836,0x4993,{ 0xAE,0x1A,0xB6,0x1A,0xE3,0xBE,0x05,0x6B } };
    };
    template <> struct default_interface<Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>
    {
        using type = Windows::Devices::SerialCommunication::IErrorReceivedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SerialCommunication::PinChangedEventArgs>
    {
        using type = Windows::Devices::SerialCommunication::IPinChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::SerialCommunication::SerialDevice>
    {
        using type = Windows::Devices::SerialCommunication::ISerialDevice;
    };
    template <> struct abi<Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SerialCommunication::IPinChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinChange(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SerialCommunication::ISerialDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaudRate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BaudRate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BreakSignalState(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BreakSignalState(bool) noexcept = 0;
            virtual int32_t __stdcall get_BytesReceived(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CarrierDetectState(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ClearToSendState(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DataBits(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataBits(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_DataSetReadyState(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Handshake(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Handshake(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsDataTerminalReadyEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDataTerminalReadyEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRequestToSendEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRequestToSendEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Parity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Parity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PortName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReadTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StopBits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StopBits(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_UsbVendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsbProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_WriteTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall add_ErrorReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PinChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PinChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::SerialCommunication::ISerialDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromPortName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromUsbVidPid(uint16_t, uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs
    {
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SerialCommunication_IPinChangedEventArgs
    {
        [[nodiscard]] auto PinChange() const;
    };
    template <> struct consume<Windows::Devices::SerialCommunication::IPinChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_SerialCommunication_IPinChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SerialCommunication_ISerialDevice
    {
        [[nodiscard]] auto BaudRate() const;
        auto BaudRate(uint32_t value) const;
        [[nodiscard]] auto BreakSignalState() const;
        auto BreakSignalState(bool value) const;
        [[nodiscard]] auto BytesReceived() const;
        [[nodiscard]] auto CarrierDetectState() const;
        [[nodiscard]] auto ClearToSendState() const;
        [[nodiscard]] auto DataBits() const;
        auto DataBits(uint16_t value) const;
        [[nodiscard]] auto DataSetReadyState() const;
        [[nodiscard]] auto Handshake() const;
        auto Handshake(Windows::Devices::SerialCommunication::SerialHandshake const& value) const;
        [[nodiscard]] auto IsDataTerminalReadyEnabled() const;
        auto IsDataTerminalReadyEnabled(bool value) const;
        [[nodiscard]] auto IsRequestToSendEnabled() const;
        auto IsRequestToSendEnabled(bool value) const;
        [[nodiscard]] auto Parity() const;
        auto Parity(Windows::Devices::SerialCommunication::SerialParity const& value) const;
        [[nodiscard]] auto PortName() const;
        [[nodiscard]] auto ReadTimeout() const;
        auto ReadTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto StopBits() const;
        auto StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount const& value) const;
        [[nodiscard]] auto UsbVendorId() const;
        [[nodiscard]] auto UsbProductId() const;
        [[nodiscard]] auto WriteTimeout() const;
        auto WriteTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto InputStream() const;
        [[nodiscard]] auto OutputStream() const;
        auto ErrorReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> const& reportHandler) const;
        using ErrorReceived_revoker = impl::event_revoker<Windows::Devices::SerialCommunication::ISerialDevice, &impl::abi_t<Windows::Devices::SerialCommunication::ISerialDevice>::remove_ErrorReceived>;
        ErrorReceived_revoker ErrorReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> const& reportHandler) const;
        auto ErrorReceived(winrt::event_token const& token) const noexcept;
        auto PinChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> const& reportHandler) const;
        using PinChanged_revoker = impl::event_revoker<Windows::Devices::SerialCommunication::ISerialDevice, &impl::abi_t<Windows::Devices::SerialCommunication::ISerialDevice>::remove_PinChanged>;
        PinChanged_revoker PinChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> const& reportHandler) const;
        auto PinChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::SerialCommunication::ISerialDevice>
    {
        template <typename D> using type = consume_Windows_Devices_SerialCommunication_ISerialDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics
    {
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(param::hstring const& portName) const;
        auto GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId) const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::SerialCommunication::ISerialDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics<D>;
    };
}
#endif
