// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_I2c_0_H
#define WINRT_Windows_Devices_I2c_0_H
namespace winrt::Windows::Devices::I2c::Provider
{
    struct II2cProvider;
}
namespace winrt::Windows::Devices::I2c
{
    enum class I2cBusSpeed : int32_t
    {
        StandardMode = 0,
        FastMode = 1,
    };
    enum class I2cSharingMode : int32_t
    {
        Exclusive = 0,
        Shared = 1,
    };
    enum class I2cTransferStatus : int32_t
    {
        FullTransfer = 0,
        PartialTransfer = 1,
        SlaveAddressNotAcknowledged = 2,
        ClockStretchTimeout = 3,
        UnknownError = 4,
    };
    struct II2cConnectionSettings;
    struct II2cConnectionSettingsFactory;
    struct II2cController;
    struct II2cControllerStatics;
    struct II2cDevice;
    struct II2cDeviceStatics;
    struct I2cConnectionSettings;
    struct I2cController;
    struct I2cDevice;
    struct I2cTransferResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::I2c::II2cConnectionSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::II2cConnectionSettingsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::II2cController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::II2cControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::II2cDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::II2cDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cConnectionSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cBusSpeed>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cSharingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cTransferStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::I2c::I2cTransferResult>
    {
        using type = struct_category<Windows::Devices::I2c::I2cTransferStatus, uint32_t>;
    };
    template <> struct name<Windows::Devices::I2c::II2cConnectionSettings>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cConnectionSettings" };
    };
    template <> struct name<Windows::Devices::I2c::II2cConnectionSettingsFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cConnectionSettingsFactory" };
    };
    template <> struct name<Windows::Devices::I2c::II2cController>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cController" };
    };
    template <> struct name<Windows::Devices::I2c::II2cControllerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cControllerStatics" };
    };
    template <> struct name<Windows::Devices::I2c::II2cDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cDevice" };
    };
    template <> struct name<Windows::Devices::I2c::II2cDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.II2cDeviceStatics" };
    };
    template <> struct name<Windows::Devices::I2c::I2cConnectionSettings>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cConnectionSettings" };
    };
    template <> struct name<Windows::Devices::I2c::I2cController>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cController" };
    };
    template <> struct name<Windows::Devices::I2c::I2cDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cDevice" };
    };
    template <> struct name<Windows::Devices::I2c::I2cBusSpeed>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cBusSpeed" };
    };
    template <> struct name<Windows::Devices::I2c::I2cSharingMode>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cSharingMode" };
    };
    template <> struct name<Windows::Devices::I2c::I2cTransferStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cTransferStatus" };
    };
    template <> struct name<Windows::Devices::I2c::I2cTransferResult>
    {
        static constexpr auto & value{ L"Windows.Devices.I2c.I2cTransferResult" };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cConnectionSettings>
    {
        static constexpr guid value{ 0xF2DB1307,0xAB6F,0x4639,{ 0xA7,0x67,0x54,0x53,0x6D,0xC3,0x46,0x0F } };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cConnectionSettingsFactory>
    {
        static constexpr guid value{ 0x81B586B3,0x9693,0x41B1,{ 0xA2,0x43,0xDE,0xD4,0xF6,0xE6,0x69,0x26 } };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cController>
    {
        static constexpr guid value{ 0xC48AB1B2,0x87A0,0x4166,{ 0x8E,0x3E,0xB4,0xB8,0xF9,0x7C,0xD7,0x29 } };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cControllerStatics>
    {
        static constexpr guid value{ 0x40FC0365,0x5F05,0x4E7E,{ 0x84,0xBD,0x10,0x0D,0xB8,0xE0,0xAE,0xC5 } };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cDevice>
    {
        static constexpr guid value{ 0x8636C136,0xB9C5,0x4F70,{ 0x94,0x49,0xCC,0x46,0xDC,0x6F,0x57,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::I2c::II2cDeviceStatics>
    {
        static constexpr guid value{ 0x91A33BE3,0x7334,0x4512,{ 0x96,0xBC,0xFB,0xAE,0x94,0x59,0xF5,0xF6 } };
    };
    template <> struct default_interface<Windows::Devices::I2c::I2cConnectionSettings>
    {
        using type = Windows::Devices::I2c::II2cConnectionSettings;
    };
    template <> struct default_interface<Windows::Devices::I2c::I2cController>
    {
        using type = Windows::Devices::I2c::II2cController;
    };
    template <> struct default_interface<Windows::Devices::I2c::I2cDevice>
    {
        using type = Windows::Devices::I2c::II2cDevice;
    };
    template <> struct abi<Windows::Devices::I2c::II2cConnectionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SlaveAddress(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SlaveAddress(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BusSpeed(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BusSpeed(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::I2c::II2cConnectionSettingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::I2c::II2cController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDevice(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::I2c::II2cControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::I2c::II2cDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionSettings(void**) noexcept = 0;
            virtual int32_t __stdcall Write(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall WritePartial(uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_I2cTransferResult*) noexcept = 0;
            virtual int32_t __stdcall Read(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall ReadPartial(uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_I2cTransferResult*) noexcept = 0;
            virtual int32_t __stdcall WriteRead(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall WriteReadPartial(uint32_t, uint8_t*, uint32_t, uint8_t*, struct struct_Windows_Devices_I2c_I2cTransferResult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::I2c::II2cDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromFriendlyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cConnectionSettings
    {
        [[nodiscard]] auto SlaveAddress() const;
        auto SlaveAddress(int32_t value) const;
        [[nodiscard]] auto BusSpeed() const;
        auto BusSpeed(Windows::Devices::I2c::I2cBusSpeed const& value) const;
        [[nodiscard]] auto SharingMode() const;
        auto SharingMode(Windows::Devices::I2c::I2cSharingMode const& value) const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cConnectionSettings>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cConnectionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cConnectionSettingsFactory
    {
        auto Create(int32_t slaveAddress) const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cConnectionSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cConnectionSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cController
    {
        auto GetDevice(Windows::Devices::I2c::I2cConnectionSettings const& settings) const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cController>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cControllerStatics
    {
        auto GetControllersAsync(Windows::Devices::I2c::Provider::II2cProvider const& provider) const;
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto ConnectionSettings() const;
        auto Write(array_view<uint8_t const> buffer) const;
        auto WritePartial(array_view<uint8_t const> buffer) const;
        auto Read(array_view<uint8_t> buffer) const;
        auto ReadPartial(array_view<uint8_t> buffer) const;
        auto WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
        auto WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cDevice>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_I2c_II2cDeviceStatics
    {
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(param::hstring const& friendlyName) const;
        auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::I2c::I2cConnectionSettings const& settings) const;
    };
    template <> struct consume<Windows::Devices::I2c::II2cDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_I2c_II2cDeviceStatics<D>;
    };
    struct struct_Windows_Devices_I2c_I2cTransferResult
    {
        int32_t Status;
        uint32_t BytesTransferred;
    };
    template <> struct abi<Windows::Devices::I2c::I2cTransferResult>
    {
        using type = struct_Windows_Devices_I2c_I2cTransferResult;
    };
}
#endif
