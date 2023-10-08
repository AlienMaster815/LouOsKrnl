// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Spi_0_H
#define WINRT_Windows_Devices_Spi_0_H
namespace winrt::Windows::Devices::Spi::Provider
{
    struct ISpiProvider;
}
namespace winrt::Windows::Devices::Spi
{
    enum class SpiMode : int32_t
    {
        Mode0 = 0,
        Mode1 = 1,
        Mode2 = 2,
        Mode3 = 3,
    };
    enum class SpiSharingMode : int32_t
    {
        Exclusive = 0,
        Shared = 1,
    };
    struct ISpiBusInfo;
    struct ISpiConnectionSettings;
    struct ISpiConnectionSettingsFactory;
    struct ISpiController;
    struct ISpiControllerStatics;
    struct ISpiDevice;
    struct ISpiDeviceStatics;
    struct SpiBusInfo;
    struct SpiConnectionSettings;
    struct SpiController;
    struct SpiDevice;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Spi::ISpiBusInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiConnectionSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::ISpiDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiBusInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiConnectionSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Spi::SpiSharingMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Spi::ISpiBusInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiBusInfo" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiConnectionSettings>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiConnectionSettings" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiConnectionSettingsFactory" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiController>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiController" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiControllerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiControllerStatics" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiDevice" };
    };
    template <> struct name<Windows::Devices::Spi::ISpiDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.ISpiDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Spi::SpiBusInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiBusInfo" };
    };
    template <> struct name<Windows::Devices::Spi::SpiConnectionSettings>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiConnectionSettings" };
    };
    template <> struct name<Windows::Devices::Spi::SpiController>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiController" };
    };
    template <> struct name<Windows::Devices::Spi::SpiDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiDevice" };
    };
    template <> struct name<Windows::Devices::Spi::SpiMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiMode" };
    };
    template <> struct name<Windows::Devices::Spi::SpiSharingMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Spi.SpiSharingMode" };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiBusInfo>
    {
        static constexpr guid value{ 0x9929444A,0x54F2,0x48C6,{ 0xB9,0x52,0x9C,0x32,0xFC,0x02,0xC6,0x69 } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiConnectionSettings>
    {
        static constexpr guid value{ 0x5283A37F,0xF935,0x4B9F,{ 0xA7,0xA7,0x3A,0x78,0x90,0xAF,0xA5,0xCE } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
    {
        static constexpr guid value{ 0xFF99081E,0x10C4,0x44B7,{ 0x9F,0xEA,0xA7,0x48,0xB5,0xA4,0x6F,0x31 } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiController>
    {
        static constexpr guid value{ 0xA8D3C829,0x9895,0x4159,{ 0xA9,0x34,0x87,0x41,0xF1,0xEE,0x6D,0x27 } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiControllerStatics>
    {
        static constexpr guid value{ 0x0D5229E2,0x138B,0x4E48,{ 0xB9,0x64,0x4F,0x2F,0x79,0xB9,0xC5,0xA2 } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiDevice>
    {
        static constexpr guid value{ 0x05D5356D,0x11B6,0x4D39,{ 0x84,0xD5,0x95,0xDF,0xB4,0xC9,0xF2,0xCE } };
    };
    template <> struct guid_storage<Windows::Devices::Spi::ISpiDeviceStatics>
    {
        static constexpr guid value{ 0xA278E559,0x5720,0x4D3F,{ 0xBD,0x93,0x56,0xF5,0xFF,0x5A,0x58,0x79 } };
    };
    template <> struct default_interface<Windows::Devices::Spi::SpiBusInfo>
    {
        using type = Windows::Devices::Spi::ISpiBusInfo;
    };
    template <> struct default_interface<Windows::Devices::Spi::SpiConnectionSettings>
    {
        using type = Windows::Devices::Spi::ISpiConnectionSettings;
    };
    template <> struct default_interface<Windows::Devices::Spi::SpiController>
    {
        using type = Windows::Devices::Spi::ISpiController;
    };
    template <> struct default_interface<Windows::Devices::Spi::SpiDevice>
    {
        using type = Windows::Devices::Spi::ISpiDevice;
    };
    template <> struct abi<Windows::Devices::Spi::ISpiBusInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChipSelectLineCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinClockFrequency(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxClockFrequency(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedDataBitLengths(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiConnectionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChipSelectLine(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChipSelectLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DataBitLength(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataBitLength(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ClockFrequency(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClockFrequency(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDevice(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetControllersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionSettings(void**) noexcept = 0;
            virtual int32_t __stdcall Write(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall Read(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferSequential(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferFullDuplex(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::ISpiDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromFriendlyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetBusInfo(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiBusInfo
    {
        [[nodiscard]] auto ChipSelectLineCount() const;
        [[nodiscard]] auto MinClockFrequency() const;
        [[nodiscard]] auto MaxClockFrequency() const;
        [[nodiscard]] auto SupportedDataBitLengths() const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiBusInfo>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiBusInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiConnectionSettings
    {
        [[nodiscard]] auto ChipSelectLine() const;
        auto ChipSelectLine(int32_t value) const;
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::Devices::Spi::SpiMode const& value) const;
        [[nodiscard]] auto DataBitLength() const;
        auto DataBitLength(int32_t value) const;
        [[nodiscard]] auto ClockFrequency() const;
        auto ClockFrequency(int32_t value) const;
        [[nodiscard]] auto SharingMode() const;
        auto SharingMode(Windows::Devices::Spi::SpiSharingMode const& value) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiConnectionSettings>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiConnectionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiConnectionSettingsFactory
    {
        auto Create(int32_t chipSelectLine) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiConnectionSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiController
    {
        auto GetDevice(Windows::Devices::Spi::SpiConnectionSettings const& settings) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiController>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiControllerStatics
    {
        auto GetDefaultAsync() const;
        auto GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider const& provider) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto ConnectionSettings() const;
        auto Write(array_view<uint8_t const> buffer) const;
        auto Read(array_view<uint8_t> buffer) const;
        auto TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
        auto TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_ISpiDeviceStatics
    {
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(param::hstring const& friendlyName) const;
        auto GetBusInfo(param::hstring const& busId) const;
        auto FromIdAsync(param::hstring const& busId, Windows::Devices::Spi::SpiConnectionSettings const& settings) const;
    };
    template <> struct consume<Windows::Devices::Spi::ISpiDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_ISpiDeviceStatics<D>;
    };
}
#endif
