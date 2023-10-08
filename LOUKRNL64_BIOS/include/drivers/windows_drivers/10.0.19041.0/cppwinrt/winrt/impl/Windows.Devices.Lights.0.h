// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Lights_0_H
#define WINRT_Windows_Devices_Lights_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::System
{
    enum class VirtualKey : int32_t;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::Devices::Lights
{
    enum class LampArrayKind : int32_t
    {
        Undefined = 0,
        Keyboard = 1,
        Mouse = 2,
        GameController = 3,
        Peripheral = 4,
        Scene = 5,
        Notification = 6,
        Chassis = 7,
        Wearable = 8,
        Furniture = 9,
        Art = 10,
    };
    enum class LampPurposes : uint32_t
    {
        Undefined = 0,
        Control = 0x1,
        Accent = 0x2,
        Branding = 0x4,
        Status = 0x8,
        Illumination = 0x10,
        Presentation = 0x20,
    };
    struct ILamp;
    struct ILampArray;
    struct ILampArrayStatics;
    struct ILampAvailabilityChangedEventArgs;
    struct ILampInfo;
    struct ILampStatics;
    struct Lamp;
    struct LampArray;
    struct LampAvailabilityChangedEventArgs;
    struct LampInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Lights::ILamp>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::ILampArray>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::ILampArrayStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::ILampInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::ILampStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Lights::Lamp>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Lights::LampArray>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Lights::LampInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Lights::LampArrayKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Lights::LampPurposes>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Lights::ILamp>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILamp" };
    };
    template <> struct name<Windows::Devices::Lights::ILampArray>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILampArray" };
    };
    template <> struct name<Windows::Devices::Lights::ILampArrayStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILampArrayStatics" };
    };
    template <> struct name<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Lights::ILampInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILampInfo" };
    };
    template <> struct name<Windows::Devices::Lights::ILampStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.ILampStatics" };
    };
    template <> struct name<Windows::Devices::Lights::Lamp>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.Lamp" };
    };
    template <> struct name<Windows::Devices::Lights::LampArray>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.LampArray" };
    };
    template <> struct name<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Lights::LampInfo>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.LampInfo" };
    };
    template <> struct name<Windows::Devices::Lights::LampArrayKind>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.LampArrayKind" };
    };
    template <> struct name<Windows::Devices::Lights::LampPurposes>
    {
        static constexpr auto & value{ L"Windows.Devices.Lights.LampPurposes" };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILamp>
    {
        static constexpr guid value{ 0x047D5B9A,0xEA45,0x4B2B,{ 0xB1,0xA2,0x14,0xDF,0xF0,0x0B,0xDE,0x7B } };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILampArray>
    {
        static constexpr guid value{ 0x7ACE9787,0xC8A0,0x4E95,{ 0xA1,0xE0,0xD5,0x86,0x76,0x53,0x86,0x49 } };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILampArrayStatics>
    {
        static constexpr guid value{ 0x7BB8C98D,0x5FC1,0x452D,{ 0xBB,0x1F,0x4A,0xD4,0x10,0xD3,0x98,0xFF } };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        static constexpr guid value{ 0x4F6E3DED,0x07A2,0x499D,{ 0x92,0x60,0x67,0xE3,0x04,0x53,0x2B,0xA4 } };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILampInfo>
    {
        static constexpr guid value{ 0x30BB521C,0x0ACF,0x49DA,{ 0x8C,0x10,0x15,0x0B,0x9C,0xF6,0x27,0x13 } };
    };
    template <> struct guid_storage<Windows::Devices::Lights::ILampStatics>
    {
        static constexpr guid value{ 0xA822416C,0x8885,0x401E,{ 0xB8,0x21,0x8E,0x8B,0x38,0xA8,0xE8,0xEC } };
    };
    template <> struct default_interface<Windows::Devices::Lights::Lamp>
    {
        using type = Windows::Devices::Lights::ILamp;
    };
    template <> struct default_interface<Windows::Devices::Lights::LampArray>
    {
        using type = Windows::Devices::Lights::ILampArray;
    };
    template <> struct default_interface<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>
    {
        using type = Windows::Devices::Lights::ILampAvailabilityChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Lights::LampInfo>
    {
        using type = Windows::Devices::Lights::ILampInfo;
    };
    template <> struct abi<Windows::Devices::Lights::ILamp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(float*) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessLevel(float) noexcept = 0;
            virtual int32_t __stdcall get_IsColorSettable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall add_AvailabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailabilityChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampArray>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HardwareVendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareVersion(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LampArrayKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LampCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinUpdateInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingBox(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(double*) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessLevel(double) noexcept = 0;
            virtual int32_t __stdcall get_IsConnected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsVirtualKeys(bool*) noexcept = 0;
            virtual int32_t __stdcall GetLampInfo(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIndicesForKey(int32_t, uint32_t* __resultSize, int32_t**) noexcept = 0;
            virtual int32_t __stdcall GetIndicesForPurposes(uint32_t, uint32_t* __resultSize, int32_t**) noexcept = 0;
            virtual int32_t __stdcall SetColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetColorForIndex(int32_t, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetSingleColorForIndices(struct struct_Windows_UI_Color, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForIndices(uint32_t, struct struct_Windows_UI_Color*, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForKey(struct struct_Windows_UI_Color, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetColorsForKeys(uint32_t, struct struct_Windows_UI_Color*, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForPurposes(struct struct_Windows_UI_Color, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SendMessageAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestMessageAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampArrayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAvailable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Index(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Purposes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RedLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_GreenLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BlueLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_GainLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FixedColor(void**) noexcept = 0;
            virtual int32_t __stdcall GetNearestSupportedColor(struct struct_Windows_UI_Color, struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateLatency(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILamp
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto BrightnessLevel() const;
        auto BrightnessLevel(float value) const;
        [[nodiscard]] auto IsColorSettable() const;
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        auto AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
        using AvailabilityChanged_revoker = impl::event_revoker<Windows::Devices::Lights::ILamp, &impl::abi_t<Windows::Devices::Lights::ILamp>::remove_AvailabilityChanged>;
        AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
        auto AvailabilityChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Lights::ILamp>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILamp<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampArray
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto HardwareVendorId() const;
        [[nodiscard]] auto HardwareProductId() const;
        [[nodiscard]] auto HardwareVersion() const;
        [[nodiscard]] auto LampArrayKind() const;
        [[nodiscard]] auto LampCount() const;
        [[nodiscard]] auto MinUpdateInterval() const;
        [[nodiscard]] auto BoundingBox() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto BrightnessLevel() const;
        auto BrightnessLevel(double value) const;
        [[nodiscard]] auto IsConnected() const;
        [[nodiscard]] auto SupportsVirtualKeys() const;
        auto GetLampInfo(int32_t lampIndex) const;
        auto GetIndicesForKey(Windows::System::VirtualKey const& key) const;
        auto GetIndicesForPurposes(Windows::Devices::Lights::LampPurposes const& purposes) const;
        auto SetColor(Windows::UI::Color const& desiredColor) const;
        auto SetColorForIndex(int32_t lampIndex, Windows::UI::Color const& desiredColor) const;
        auto SetSingleColorForIndices(Windows::UI::Color const& desiredColor, array_view<int32_t const> lampIndexes) const;
        auto SetColorsForIndices(array_view<Windows::UI::Color const> desiredColors, array_view<int32_t const> lampIndexes) const;
        auto SetColorsForKey(Windows::UI::Color const& desiredColor, Windows::System::VirtualKey const& key) const;
        auto SetColorsForKeys(array_view<Windows::UI::Color const> desiredColors, array_view<Windows::System::VirtualKey const> keys) const;
        auto SetColorsForPurposes(Windows::UI::Color const& desiredColor, Windows::Devices::Lights::LampPurposes const& purposes) const;
        auto SendMessageAsync(int32_t messageId, Windows::Storage::Streams::IBuffer const& message) const;
        auto RequestMessageAsync(int32_t messageId) const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampArray>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampArray<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampArrayStatics
    {
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampArrayStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampArrayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs
    {
        [[nodiscard]] auto IsAvailable() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampInfo
    {
        [[nodiscard]] auto Index() const;
        [[nodiscard]] auto Purposes() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto RedLevelCount() const;
        [[nodiscard]] auto GreenLevelCount() const;
        [[nodiscard]] auto BlueLevelCount() const;
        [[nodiscard]] auto GainLevelCount() const;
        [[nodiscard]] auto FixedColor() const;
        auto GetNearestSupportedColor(Windows::UI::Color const& desiredColor) const;
        [[nodiscard]] auto UpdateLatency() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampInfo>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampStatics
    {
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampStatics<D>;
    };
}
#endif
