// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Gpio_0_H
#define WINRT_Windows_Devices_Gpio_0_H
namespace winrt::Windows::Devices::Gpio::Provider
{
    struct IGpioProvider;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Gpio
{
    enum class GpioChangePolarity : int32_t
    {
        Falling = 0,
        Rising = 1,
        Both = 2,
    };
    enum class GpioOpenStatus : int32_t
    {
        PinOpened = 0,
        PinUnavailable = 1,
        SharingViolation = 2,
        MuxingConflict = 3,
        UnknownError = 4,
    };
    enum class GpioPinDriveMode : int32_t
    {
        Input = 0,
        Output = 1,
        InputPullUp = 2,
        InputPullDown = 3,
        OutputOpenDrain = 4,
        OutputOpenDrainPullUp = 5,
        OutputOpenSource = 6,
        OutputOpenSourcePullDown = 7,
    };
    enum class GpioPinEdge : int32_t
    {
        FallingEdge = 0,
        RisingEdge = 1,
    };
    enum class GpioPinValue : int32_t
    {
        Low = 0,
        High = 1,
    };
    enum class GpioSharingMode : int32_t
    {
        Exclusive = 0,
        SharedReadOnly = 1,
    };
    struct IGpioChangeCounter;
    struct IGpioChangeCounterFactory;
    struct IGpioChangeReader;
    struct IGpioChangeReaderFactory;
    struct IGpioController;
    struct IGpioControllerStatics;
    struct IGpioControllerStatics2;
    struct IGpioPin;
    struct IGpioPinValueChangedEventArgs;
    struct GpioChangeCounter;
    struct GpioChangeReader;
    struct GpioController;
    struct GpioPin;
    struct GpioPinValueChangedEventArgs;
    struct GpioChangeCount;
    struct GpioChangeRecord;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Gpio::IGpioChangeCounter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioChangeReader>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioController>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioControllerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioPin>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioChangeCounter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioChangeReader>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioController>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioPin>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioChangePolarity>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioOpenStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioPinDriveMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioPinEdge>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioPinValue>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioSharingMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Gpio::GpioChangeCount>
    {
        using type = struct_category<uint64_t, Windows::Foundation::TimeSpan>;
    };
    template <> struct category<Windows::Devices::Gpio::GpioChangeRecord>
    {
        using type = struct_category<Windows::Foundation::TimeSpan, Windows::Devices::Gpio::GpioPinEdge>;
    };
    template <> struct name<Windows::Devices::Gpio::IGpioChangeCounter>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeCounter" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeCounterFactory" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioChangeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeReader" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeReaderFactory" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioController>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioController" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioControllerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioControllerStatics" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioControllerStatics2" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioPin>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioPin" };
    };
    template <> struct name<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioPinValueChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioChangeCounter>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeCounter" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioChangeReader>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeReader" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioController>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioController" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioPin>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPin" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioChangePolarity>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangePolarity" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioOpenStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioOpenStatus" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioPinDriveMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinDriveMode" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioPinEdge>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinEdge" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioPinValue>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinValue" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioSharingMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioSharingMode" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioChangeCount>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeCount" };
    };
    template <> struct name<Windows::Devices::Gpio::GpioChangeRecord>
    {
        static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeRecord" };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeCounter>
    {
        static constexpr guid value{ 0xCB5EC0DE,0x6801,0x43FF,{ 0x80,0x3D,0x45,0x76,0x62,0x8A,0x8B,0x26 } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        static constexpr guid value{ 0x147D94B6,0x0A9E,0x410C,{ 0xB4,0xFA,0xF8,0x9F,0x40,0x52,0x08,0x4D } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeReader>
    {
        static constexpr guid value{ 0x0ABC885F,0xE031,0x48E8,{ 0x85,0x90,0x70,0xDE,0x78,0x36,0x3C,0x6D } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        static constexpr guid value{ 0xA9598EF3,0x390E,0x441A,{ 0x9D,0x1C,0xE8,0xDE,0x0B,0x2D,0xF0,0xDF } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioController>
    {
        static constexpr guid value{ 0x284012E3,0x7461,0x469C,{ 0xA8,0xBC,0x61,0xD6,0x9D,0x08,0xA5,0x3C } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioControllerStatics>
    {
        static constexpr guid value{ 0x2ED6F42E,0x7AF7,0x4116,{ 0x95,0x33,0xC4,0x3D,0x99,0xA1,0xFB,0x64 } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        static constexpr guid value{ 0x912B7D20,0x6CA4,0x4106,{ 0xA3,0x73,0xFF,0xFD,0x34,0x6B,0x0E,0x5B } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioPin>
    {
        static constexpr guid value{ 0x11D9B087,0xAFAE,0x4790,{ 0x9E,0xE9,0xE0,0xEA,0xC9,0x42,0xD2,0x01 } };
    };
    template <> struct guid_storage<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        static constexpr guid value{ 0x3137AAE1,0x703D,0x4059,{ 0xBD,0x24,0xB5,0xB2,0x5D,0xFF,0xB8,0x4E } };
    };
    template <> struct default_interface<Windows::Devices::Gpio::GpioChangeCounter>
    {
        using type = Windows::Devices::Gpio::IGpioChangeCounter;
    };
    template <> struct default_interface<Windows::Devices::Gpio::GpioChangeReader>
    {
        using type = Windows::Devices::Gpio::IGpioChangeReader;
    };
    template <> struct default_interface<Windows::Devices::Gpio::GpioController>
    {
        using type = Windows::Devices::Gpio::IGpioController;
    };
    template <> struct default_interface<Windows::Devices::Gpio::GpioPin>
    {
        using type = Windows::Devices::Gpio::IGpioPin;
    };
    template <> struct default_interface<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>
    {
        using type = Windows::Devices::Gpio::IGpioPinValueChangedEventArgs;
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioChangeCounter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Polarity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Polarity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStarted(bool*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Read(struct struct_Windows_Devices_Gpio_GpioChangeCount*) noexcept = 0;
            virtual int32_t __stdcall Reset(struct struct_Windows_Devices_Gpio_GpioChangeCount*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Length(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsEmpty(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverflowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Polarity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Polarity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsStarted(bool*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall GetNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord*) noexcept = 0;
            virtual int32_t __stdcall PeekNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord*) noexcept = 0;
            virtual int32_t __stdcall GetAllItems(void**) noexcept = 0;
            virtual int32_t __stdcall WaitForItemsAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithCapacity(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall OpenPin(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall OpenPinWithSharingMode(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryOpenPin(int32_t, int32_t, void**, int32_t*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioPin>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ValueChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_DebounceTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DebounceTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_PinNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsDriveModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetDriveMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetDriveMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall Write(int32_t) noexcept = 0;
            virtual int32_t __stdcall Read(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Edge(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioChangeCounter
    {
        auto Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const;
        [[nodiscard]] auto Polarity() const;
        [[nodiscard]] auto IsStarted() const;
        auto Start() const;
        auto Stop() const;
        auto Read() const;
        auto Reset() const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioChangeCounter>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeCounter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioChangeCounterFactory
    {
        auto Create(Windows::Devices::Gpio::GpioPin const& pin) const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioChangeCounterFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeCounterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioChangeReader
    {
        [[nodiscard]] auto Capacity() const;
        [[nodiscard]] auto Length() const;
        [[nodiscard]] auto IsEmpty() const;
        [[nodiscard]] auto IsOverflowed() const;
        auto Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const;
        [[nodiscard]] auto Polarity() const;
        [[nodiscard]] auto IsStarted() const;
        auto Start() const;
        auto Stop() const;
        auto Clear() const;
        auto GetNextItem() const;
        auto PeekNextItem() const;
        auto GetAllItems() const;
        auto WaitForItemsAsync(int32_t count) const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioChangeReader>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioChangeReaderFactory
    {
        auto Create(Windows::Devices::Gpio::GpioPin const& pin) const;
        auto CreateWithCapacity(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioChangeReaderFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioController
    {
        [[nodiscard]] auto PinCount() const;
        auto OpenPin(int32_t pinNumber) const;
        auto OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode) const;
        auto TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode, Windows::Devices::Gpio::GpioPin& pin, Windows::Devices::Gpio::GpioOpenStatus& openStatus) const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioController>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioControllerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioControllerStatics2
    {
        auto GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider) const;
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioControllerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioPin
    {
        auto ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const;
        using ValueChanged_revoker = impl::event_revoker<Windows::Devices::Gpio::IGpioPin, &impl::abi_t<Windows::Devices::Gpio::IGpioPin>::remove_ValueChanged>;
        ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const;
        auto ValueChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto DebounceTimeout() const;
        auto DebounceTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto PinNumber() const;
        [[nodiscard]] auto SharingMode() const;
        auto IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode const& driveMode) const;
        auto GetDriveMode() const;
        auto SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode const& value) const;
        auto Write(Windows::Devices::Gpio::GpioPinValue const& value) const;
        auto Read() const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioPin>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioPin<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs
    {
        [[nodiscard]] auto Edge() const;
    };
    template <> struct consume<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs<D>;
    };
    struct struct_Windows_Devices_Gpio_GpioChangeCount
    {
        uint64_t Count;
        int64_t RelativeTime;
    };
    template <> struct abi<Windows::Devices::Gpio::GpioChangeCount>
    {
        using type = struct_Windows_Devices_Gpio_GpioChangeCount;
    };
    struct struct_Windows_Devices_Gpio_GpioChangeRecord
    {
        int64_t RelativeTime;
        int32_t Edge;
    };
    template <> struct abi<Windows::Devices::Gpio::GpioChangeRecord>
    {
        using type = struct_Windows_Devices_Gpio_GpioChangeRecord;
    };
}
#endif
