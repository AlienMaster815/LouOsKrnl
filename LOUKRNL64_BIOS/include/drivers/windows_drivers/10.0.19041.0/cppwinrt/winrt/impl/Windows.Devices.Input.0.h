// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Input_0_H
#define WINRT_Windows_Devices_Input_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Input
{
    enum class PointerDeviceType : int32_t
    {
        Touch = 0,
        Pen = 1,
        Mouse = 2,
    };
    struct IKeyboardCapabilities;
    struct IMouseCapabilities;
    struct IMouseDevice;
    struct IMouseDeviceStatics;
    struct IMouseEventArgs;
    struct IPenButtonListener;
    struct IPenButtonListenerStatics;
    struct IPenDevice;
    struct IPenDeviceStatics;
    struct IPenDockListener;
    struct IPenDockListenerStatics;
    struct IPenDockedEventArgs;
    struct IPenTailButtonClickedEventArgs;
    struct IPenTailButtonDoubleClickedEventArgs;
    struct IPenTailButtonLongPressedEventArgs;
    struct IPenUndockedEventArgs;
    struct IPointerDevice;
    struct IPointerDevice2;
    struct IPointerDeviceStatics;
    struct ITouchCapabilities;
    struct KeyboardCapabilities;
    struct MouseCapabilities;
    struct MouseDevice;
    struct MouseEventArgs;
    struct PenButtonListener;
    struct PenDevice;
    struct PenDockListener;
    struct PenDockedEventArgs;
    struct PenTailButtonClickedEventArgs;
    struct PenTailButtonDoubleClickedEventArgs;
    struct PenTailButtonLongPressedEventArgs;
    struct PenUndockedEventArgs;
    struct PointerDevice;
    struct TouchCapabilities;
    struct MouseDelta;
    struct PointerDeviceUsage;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Input::IKeyboardCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IMouseCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IMouseDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IMouseDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IMouseEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenButtonListener>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenButtonListenerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenDockListener>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenDockListenerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenDockedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPenUndockedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPointerDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPointerDevice2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::IPointerDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::ITouchCapabilities>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Input::KeyboardCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::MouseCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::MouseDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::MouseEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenButtonListener>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenDockListener>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenDockedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenTailButtonClickedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenTailButtonLongPressedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PenUndockedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PointerDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::TouchCapabilities>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Input::PointerDeviceType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Input::MouseDelta>
    {
        using type = struct_category<int32_t, int32_t>;
    };
    template <> struct category<Windows::Devices::Input::PointerDeviceUsage>
    {
        using type = struct_category<uint32_t, uint32_t, int32_t, int32_t, int32_t, int32_t, uint32_t, float>;
    };
    template <> struct name<Windows::Devices::Input::IKeyboardCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IKeyboardCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::IMouseCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IMouseCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::IMouseDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IMouseDevice" };
    };
    template <> struct name<Windows::Devices::Input::IMouseDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IMouseDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Input::IMouseEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IMouseEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPenButtonListener>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenButtonListener" };
    };
    template <> struct name<Windows::Devices::Input::IPenButtonListenerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenButtonListenerStatics" };
    };
    template <> struct name<Windows::Devices::Input::IPenDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenDevice" };
    };
    template <> struct name<Windows::Devices::Input::IPenDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Input::IPenDockListener>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenDockListener" };
    };
    template <> struct name<Windows::Devices::Input::IPenDockListenerStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenDockListenerStatics" };
    };
    template <> struct name<Windows::Devices::Input::IPenDockedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenDockedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenTailButtonClickedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenTailButtonDoubleClickedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenTailButtonLongPressedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPenUndockedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPenUndockedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::IPointerDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPointerDevice" };
    };
    template <> struct name<Windows::Devices::Input::IPointerDevice2>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPointerDevice2" };
    };
    template <> struct name<Windows::Devices::Input::IPointerDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.IPointerDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Input::ITouchCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.ITouchCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::KeyboardCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.KeyboardCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::MouseCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.MouseCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::MouseDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.MouseDevice" };
    };
    template <> struct name<Windows::Devices::Input::MouseEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.MouseEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PenButtonListener>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenButtonListener" };
    };
    template <> struct name<Windows::Devices::Input::PenDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenDevice" };
    };
    template <> struct name<Windows::Devices::Input::PenDockListener>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenDockListener" };
    };
    template <> struct name<Windows::Devices::Input::PenDockedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenDockedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PenTailButtonClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenTailButtonClickedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenTailButtonDoubleClickedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PenTailButtonLongPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenTailButtonLongPressedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PenUndockedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PenUndockedEventArgs" };
    };
    template <> struct name<Windows::Devices::Input::PointerDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PointerDevice" };
    };
    template <> struct name<Windows::Devices::Input::TouchCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.TouchCapabilities" };
    };
    template <> struct name<Windows::Devices::Input::PointerDeviceType>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PointerDeviceType" };
    };
    template <> struct name<Windows::Devices::Input::MouseDelta>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.MouseDelta" };
    };
    template <> struct name<Windows::Devices::Input::PointerDeviceUsage>
    {
        static constexpr auto & value{ L"Windows.Devices.Input.PointerDeviceUsage" };
    };
    template <> struct guid_storage<Windows::Devices::Input::IKeyboardCapabilities>
    {
        static constexpr guid value{ 0x3A3F9B56,0x6798,0x4BBC,{ 0x83,0x3E,0x0F,0x34,0xB1,0x7C,0x65,0xFF } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IMouseCapabilities>
    {
        static constexpr guid value{ 0xBCA5E023,0x7DD9,0x4B6B,{ 0x9A,0x92,0x55,0xD4,0x3C,0xB3,0x8F,0x73 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IMouseDevice>
    {
        static constexpr guid value{ 0x88EDF458,0xF2C8,0x49F4,{ 0xBE,0x1F,0xC2,0x56,0xB3,0x88,0xBC,0x11 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IMouseDeviceStatics>
    {
        static constexpr guid value{ 0x484A9045,0x6D70,0x49DB,{ 0x8E,0x68,0x46,0xFF,0xBD,0x17,0xD3,0x8D } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IMouseEventArgs>
    {
        static constexpr guid value{ 0xF625AA5D,0x2354,0x4CC7,{ 0x92,0x30,0x96,0x94,0x1C,0x96,0x9F,0xDE } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenButtonListener>
    {
        static constexpr guid value{ 0x8245C376,0x1EE3,0x53F7,{ 0xB1,0xF7,0x83,0x34,0xA1,0x6F,0x28,0x15 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenButtonListenerStatics>
    {
        static constexpr guid value{ 0x19A8A584,0x862F,0x5F69,{ 0xBF,0xEA,0x05,0xF6,0x58,0x4F,0x13,0x3F } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenDevice>
    {
        static constexpr guid value{ 0x31856EBA,0xA738,0x5A8C,{ 0xB8,0xF6,0xF9,0x7E,0xF6,0x8D,0x18,0xEF } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenDeviceStatics>
    {
        static constexpr guid value{ 0x9DFBBE01,0x0966,0x5180,{ 0xBC,0xB4,0xB8,0x50,0x60,0xE3,0x94,0x79 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenDockListener>
    {
        static constexpr guid value{ 0x759F4D90,0x1DC0,0x55CB,{ 0xAD,0x18,0xB9,0x10,0x14,0x56,0xF5,0x92 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenDockListenerStatics>
    {
        static constexpr guid value{ 0xCAB75E9A,0x0016,0x5C72,{ 0x96,0x9E,0xA9,0x7E,0x11,0x99,0x2A,0x93 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenDockedEventArgs>
    {
        static constexpr guid value{ 0xFD4277C6,0xCA63,0x5D4E,{ 0x9E,0xD3,0xA2,0x8A,0x54,0x52,0x1C,0x8C } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
        static constexpr guid value{ 0x5D2FB7B6,0x6AD3,0x5D3E,{ 0xAB,0x29,0x05,0xEA,0x24,0x10,0xE3,0x90 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
        static constexpr guid value{ 0x846321A2,0x618A,0x5478,{ 0xB0,0x4C,0xB3,0x58,0x23,0x1D,0xA4,0xA7 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
        static constexpr guid value{ 0xF37C606E,0xC60A,0x5F42,{ 0xB8,0x18,0xA5,0x31,0x12,0x40,0x6C,0x13 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPenUndockedEventArgs>
    {
        static constexpr guid value{ 0xCCD09150,0x261B,0x59E6,{ 0xA5,0xD4,0xC1,0x96,0x4C,0xD0,0x3F,0xEB } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPointerDevice>
    {
        static constexpr guid value{ 0x93C9BAFC,0xEBCB,0x467E,{ 0x82,0xC6,0x27,0x6F,0xEA,0xE3,0x6B,0x5A } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPointerDevice2>
    {
        static constexpr guid value{ 0xF8A6D2A0,0xC484,0x489F,{ 0xAE,0x3E,0x30,0xD2,0xEE,0x1F,0xFD,0x3E } };
    };
    template <> struct guid_storage<Windows::Devices::Input::IPointerDeviceStatics>
    {
        static constexpr guid value{ 0xD8B89AA1,0xD1C6,0x416E,{ 0xBD,0x8D,0x57,0x90,0x91,0x4D,0xC5,0x63 } };
    };
    template <> struct guid_storage<Windows::Devices::Input::ITouchCapabilities>
    {
        static constexpr guid value{ 0x20DD55F9,0x13F1,0x46C8,{ 0x92,0x85,0x2C,0x05,0xFA,0x3E,0xDA,0x6F } };
    };
    template <> struct default_interface<Windows::Devices::Input::KeyboardCapabilities>
    {
        using type = Windows::Devices::Input::IKeyboardCapabilities;
    };
    template <> struct default_interface<Windows::Devices::Input::MouseCapabilities>
    {
        using type = Windows::Devices::Input::IMouseCapabilities;
    };
    template <> struct default_interface<Windows::Devices::Input::MouseDevice>
    {
        using type = Windows::Devices::Input::IMouseDevice;
    };
    template <> struct default_interface<Windows::Devices::Input::MouseEventArgs>
    {
        using type = Windows::Devices::Input::IMouseEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PenButtonListener>
    {
        using type = Windows::Devices::Input::IPenButtonListener;
    };
    template <> struct default_interface<Windows::Devices::Input::PenDevice>
    {
        using type = Windows::Devices::Input::IPenDevice;
    };
    template <> struct default_interface<Windows::Devices::Input::PenDockListener>
    {
        using type = Windows::Devices::Input::IPenDockListener;
    };
    template <> struct default_interface<Windows::Devices::Input::PenDockedEventArgs>
    {
        using type = Windows::Devices::Input::IPenDockedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PenTailButtonClickedEventArgs>
    {
        using type = Windows::Devices::Input::IPenTailButtonClickedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs>
    {
        using type = Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PenTailButtonLongPressedEventArgs>
    {
        using type = Windows::Devices::Input::IPenTailButtonLongPressedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PenUndockedEventArgs>
    {
        using type = Windows::Devices::Input::IPenUndockedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Input::PointerDevice>
    {
        using type = Windows::Devices::Input::IPointerDevice;
    };
    template <> struct default_interface<Windows::Devices::Input::TouchCapabilities>
    {
        using type = Windows::Devices::Input::ITouchCapabilities;
    };
    template <> struct abi<Windows::Devices::Input::IKeyboardCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardPresent(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IMouseCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MousePresent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalWheelPresent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalWheelPresent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SwapButtons(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfButtons(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IMouseDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MouseMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MouseMoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IMouseDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IMouseEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MouseDelta(struct struct_Windows_Devices_Input_MouseDelta*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenButtonListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsSupportedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsSupportedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TailButtonClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TailButtonClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TailButtonDoubleClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TailButtonDoubleClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TailButtonLongPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TailButtonLongPressed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenButtonListenerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PenId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFromPointerId(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenDockListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsSupportedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsSupportedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Docked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Docked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Undocked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Undocked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenDockListenerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenDockedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Input::IPenUndockedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Input::IPointerDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsIntegrated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxContacts(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_ScreenRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedUsages(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPointerDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPointersWithZDistance(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::IPointerDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPointerDevice(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetPointerDevices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Input::ITouchCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TouchPresent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Contacts(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IKeyboardCapabilities
    {
        [[nodiscard]] auto KeyboardPresent() const;
    };
    template <> struct consume<Windows::Devices::Input::IKeyboardCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IKeyboardCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IMouseCapabilities
    {
        [[nodiscard]] auto MousePresent() const;
        [[nodiscard]] auto VerticalWheelPresent() const;
        [[nodiscard]] auto HorizontalWheelPresent() const;
        [[nodiscard]] auto SwapButtons() const;
        [[nodiscard]] auto NumberOfButtons() const;
    };
    template <> struct consume<Windows::Devices::Input::IMouseCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IMouseCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IMouseDevice
    {
        auto MouseMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const;
        using MouseMoved_revoker = impl::event_revoker<Windows::Devices::Input::IMouseDevice, &impl::abi_t<Windows::Devices::Input::IMouseDevice>::remove_MouseMoved>;
        MouseMoved_revoker MouseMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const;
        auto MouseMoved(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Input::IMouseDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IMouseDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IMouseDeviceStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::Devices::Input::IMouseDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IMouseDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IMouseEventArgs
    {
        [[nodiscard]] auto MouseDelta() const;
    };
    template <> struct consume<Windows::Devices::Input::IMouseEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IMouseEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenButtonListener
    {
        auto IsSupported() const;
        auto IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Foundation::IInspectable> const& handler) const;
        using IsSupportedChanged_revoker = impl::event_revoker<Windows::Devices::Input::IPenButtonListener, &impl::abi_t<Windows::Devices::Input::IPenButtonListener>::remove_IsSupportedChanged>;
        IsSupportedChanged_revoker IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Foundation::IInspectable> const& handler) const;
        auto IsSupportedChanged(winrt::event_token const& token) const noexcept;
        auto TailButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonClickedEventArgs> const& handler) const;
        using TailButtonClicked_revoker = impl::event_revoker<Windows::Devices::Input::IPenButtonListener, &impl::abi_t<Windows::Devices::Input::IPenButtonListener>::remove_TailButtonClicked>;
        TailButtonClicked_revoker TailButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonClickedEventArgs> const& handler) const;
        auto TailButtonClicked(winrt::event_token const& token) const noexcept;
        auto TailButtonDoubleClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> const& handler) const;
        using TailButtonDoubleClicked_revoker = impl::event_revoker<Windows::Devices::Input::IPenButtonListener, &impl::abi_t<Windows::Devices::Input::IPenButtonListener>::remove_TailButtonDoubleClicked>;
        TailButtonDoubleClicked_revoker TailButtonDoubleClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonDoubleClickedEventArgs> const& handler) const;
        auto TailButtonDoubleClicked(winrt::event_token const& token) const noexcept;
        auto TailButtonLongPressed(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonLongPressedEventArgs> const& handler) const;
        using TailButtonLongPressed_revoker = impl::event_revoker<Windows::Devices::Input::IPenButtonListener, &impl::abi_t<Windows::Devices::Input::IPenButtonListener>::remove_TailButtonLongPressed>;
        TailButtonLongPressed_revoker TailButtonLongPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenButtonListener, Windows::Devices::Input::PenTailButtonLongPressedEventArgs> const& handler) const;
        auto TailButtonLongPressed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Input::IPenButtonListener>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenButtonListener<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenButtonListenerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Input::IPenButtonListenerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenButtonListenerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenDevice
    {
        [[nodiscard]] auto PenId() const;
    };
    template <> struct consume<Windows::Devices::Input::IPenDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenDeviceStatics
    {
        auto GetFromPointerId(uint32_t pointerId) const;
    };
    template <> struct consume<Windows::Devices::Input::IPenDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenDockListener
    {
        auto IsSupported() const;
        auto IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Foundation::IInspectable> const& handler) const;
        using IsSupportedChanged_revoker = impl::event_revoker<Windows::Devices::Input::IPenDockListener, &impl::abi_t<Windows::Devices::Input::IPenDockListener>::remove_IsSupportedChanged>;
        IsSupportedChanged_revoker IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Foundation::IInspectable> const& handler) const;
        auto IsSupportedChanged(winrt::event_token const& token) const noexcept;
        auto Docked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenDockedEventArgs> const& handler) const;
        using Docked_revoker = impl::event_revoker<Windows::Devices::Input::IPenDockListener, &impl::abi_t<Windows::Devices::Input::IPenDockListener>::remove_Docked>;
        Docked_revoker Docked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenDockedEventArgs> const& handler) const;
        auto Docked(winrt::event_token const& token) const noexcept;
        auto Undocked(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenUndockedEventArgs> const& handler) const;
        using Undocked_revoker = impl::event_revoker<Windows::Devices::Input::IPenDockListener, &impl::abi_t<Windows::Devices::Input::IPenDockListener>::remove_Undocked>;
        Undocked_revoker Undocked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::PenDockListener, Windows::Devices::Input::PenUndockedEventArgs> const& handler) const;
        auto Undocked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Input::IPenDockListener>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenDockListener<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenDockListenerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Input::IPenDockListenerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenDockListenerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenDockedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::Input::IPenDockedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenDockedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenTailButtonClickedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::Input::IPenTailButtonClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenTailButtonClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenTailButtonDoubleClickedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::Input::IPenTailButtonDoubleClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenTailButtonDoubleClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenTailButtonLongPressedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::Input::IPenTailButtonLongPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenTailButtonLongPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPenUndockedEventArgs
    {
    };
    template <> struct consume<Windows::Devices::Input::IPenUndockedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPenUndockedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPointerDevice
    {
        [[nodiscard]] auto PointerDeviceType() const;
        [[nodiscard]] auto IsIntegrated() const;
        [[nodiscard]] auto MaxContacts() const;
        [[nodiscard]] auto PhysicalDeviceRect() const;
        [[nodiscard]] auto ScreenRect() const;
        [[nodiscard]] auto SupportedUsages() const;
    };
    template <> struct consume<Windows::Devices::Input::IPointerDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPointerDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPointerDevice2
    {
        [[nodiscard]] auto MaxPointersWithZDistance() const;
    };
    template <> struct consume<Windows::Devices::Input::IPointerDevice2>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPointerDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_IPointerDeviceStatics
    {
        auto GetPointerDevice(uint32_t pointerId) const;
        auto GetPointerDevices() const;
    };
    template <> struct consume<Windows::Devices::Input::IPointerDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Input_IPointerDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Input_ITouchCapabilities
    {
        [[nodiscard]] auto TouchPresent() const;
        [[nodiscard]] auto Contacts() const;
    };
    template <> struct consume<Windows::Devices::Input::ITouchCapabilities>
    {
        template <typename D> using type = consume_Windows_Devices_Input_ITouchCapabilities<D>;
    };
    struct struct_Windows_Devices_Input_MouseDelta
    {
        int32_t X;
        int32_t Y;
    };
    template <> struct abi<Windows::Devices::Input::MouseDelta>
    {
        using type = struct_Windows_Devices_Input_MouseDelta;
    };
    struct struct_Windows_Devices_Input_PointerDeviceUsage
    {
        uint32_t UsagePage;
        uint32_t Usage;
        int32_t MinLogical;
        int32_t MaxLogical;
        int32_t MinPhysical;
        int32_t MaxPhysical;
        uint32_t Unit;
        float PhysicalMultiplier;
    };
    template <> struct abi<Windows::Devices::Input::PointerDeviceUsage>
    {
        using type = struct_Windows_Devices_Input_PointerDeviceUsage;
    };
}
#endif
