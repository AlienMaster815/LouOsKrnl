// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_Injection_0_H
#define WINRT_Windows_UI_Input_Preview_Injection_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Gaming::Input
{
    enum class GamepadButtons : uint32_t;
    struct GamepadReading;
}
namespace winrt::Windows::UI::Input::Preview::Injection
{
    enum class InjectedInputButtonChangeKind : int32_t
    {
        None = 0,
        FirstButtonDown = 1,
        FirstButtonUp = 2,
        SecondButtonDown = 3,
        SecondButtonUp = 4,
        ThirdButtonDown = 5,
        ThirdButtonUp = 6,
        FourthButtonDown = 7,
        FourthButtonUp = 8,
        FifthButtonDown = 9,
        FifthButtonUp = 10,
    };
    enum class InjectedInputKeyOptions : uint32_t
    {
        None = 0,
        ExtendedKey = 0x1,
        KeyUp = 0x2,
        ScanCode = 0x8,
        Unicode = 0x4,
    };
    enum class InjectedInputMouseOptions : uint32_t
    {
        None = 0,
        Move = 0x1,
        LeftDown = 0x2,
        LeftUp = 0x4,
        RightDown = 0x8,
        RightUp = 0x10,
        MiddleDown = 0x20,
        MiddleUp = 0x40,
        XDown = 0x80,
        XUp = 0x100,
        Wheel = 0x800,
        HWheel = 0x1000,
        MoveNoCoalesce = 0x2000,
        VirtualDesk = 0x4000,
        Absolute = 0x8000,
    };
    enum class InjectedInputPenButtons : uint32_t
    {
        None = 0,
        Barrel = 0x1,
        Inverted = 0x2,
        Eraser = 0x4,
    };
    enum class InjectedInputPenParameters : uint32_t
    {
        None = 0,
        Pressure = 0x1,
        Rotation = 0x2,
        TiltX = 0x4,
        TiltY = 0x8,
    };
    enum class InjectedInputPointerOptions : uint32_t
    {
        None = 0,
        New = 0x1,
        InRange = 0x2,
        InContact = 0x4,
        FirstButton = 0x10,
        SecondButton = 0x20,
        Primary = 0x2000,
        Confidence = 0x4000,
        Canceled = 0x8000,
        PointerDown = 0x10000,
        Update = 0x20000,
        PointerUp = 0x40000,
        CaptureChanged = 0x200000,
    };
    enum class InjectedInputShortcut : int32_t
    {
        Back = 0,
        Start = 1,
        Search = 2,
    };
    enum class InjectedInputTouchParameters : uint32_t
    {
        None = 0,
        Contact = 0x1,
        Orientation = 0x2,
        Pressure = 0x4,
    };
    enum class InjectedInputVisualizationMode : int32_t
    {
        None = 0,
        Default = 1,
        Indirect = 2,
    };
    struct IInjectedInputGamepadInfo;
    struct IInjectedInputGamepadInfoFactory;
    struct IInjectedInputKeyboardInfo;
    struct IInjectedInputMouseInfo;
    struct IInjectedInputPenInfo;
    struct IInjectedInputTouchInfo;
    struct IInputInjector;
    struct IInputInjector2;
    struct IInputInjectorStatics;
    struct IInputInjectorStatics2;
    struct InjectedInputGamepadInfo;
    struct InjectedInputKeyboardInfo;
    struct InjectedInputMouseInfo;
    struct InjectedInputPenInfo;
    struct InjectedInputTouchInfo;
    struct InputInjector;
    struct InjectedInputPoint;
    struct InjectedInputPointerInfo;
    struct InjectedInputRectangle;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InputInjector>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputShortcut>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        using type = struct_category<int32_t, int32_t>;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        using type = struct_category<uint32_t, Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions, Windows::UI::Input::Preview::Injection::InjectedInputPoint, uint32_t, uint64_t>;
    };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        using type = struct_category<int32_t, int32_t, int32_t, int32_t>;
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjector" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjector2" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InputInjector>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InputInjector" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputButtonChangeKind" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputKeyOptions" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputMouseOptions" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenButtons" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenParameters" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPointerOptions" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputShortcut>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputShortcut" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputTouchParameters" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputVisualizationMode" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPoint" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPointerInfo" };
    };
    template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputRectangle" };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        static constexpr guid value{ 0x20AE9A3F,0xDF11,0x4572,{ 0xA9,0xAB,0xD7,0x5B,0x8A,0x5E,0x48,0xAD } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        static constexpr guid value{ 0x59596876,0x6C39,0x4EC4,{ 0x8B,0x2A,0x29,0xEF,0x7D,0xE1,0x8A,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        static constexpr guid value{ 0x4B46D140,0x2B6A,0x5FFA,{ 0x7E,0xAE,0xBD,0x07,0x7B,0x05,0x2A,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        static constexpr guid value{ 0x96F56E6B,0xE47A,0x5CF4,{ 0x41,0x8D,0x8A,0x5F,0xB9,0x67,0x0C,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        static constexpr guid value{ 0x6B40AD03,0xCA1E,0x5527,{ 0x7E,0x02,0x28,0x28,0x54,0x0B,0xB1,0xD4 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        static constexpr guid value{ 0x224FD1DF,0x43E8,0x5EF5,{ 0x51,0x0A,0x69,0xCA,0x8C,0x9B,0x4C,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        static constexpr guid value{ 0x8EC26F84,0x0B02,0x4BD2,{ 0xAD,0x7A,0x3D,0x46,0x58,0xBE,0x3E,0x18 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        static constexpr guid value{ 0x8E7A905D,0x1453,0x43A7,{ 0x9B,0xCB,0x06,0xD6,0xD7,0xB3,0x05,0xF7 } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        static constexpr guid value{ 0xDEAE6943,0x7402,0x4141,{ 0xA5,0xC6,0x0C,0x01,0xAA,0x57,0xB1,0x6A } };
    };
    template <> struct guid_storage<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        static constexpr guid value{ 0xA4DB38FB,0xDD8C,0x414F,{ 0x95,0xEA,0xF8,0x7E,0xF4,0xC0,0xAE,0x6C } };
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>
    {
        using type = Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo;
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>
    {
        using type = Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo;
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>
    {
        using type = Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo;
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>
    {
        using type = Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo;
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>
    {
        using type = Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo;
    };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InputInjector>
    {
        using type = Windows::UI::Input::Preview::Injection::IInputInjector;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Buttons(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Buttons(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_LeftThumbstickX(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftThumbstickX(double) noexcept = 0;
            virtual int32_t __stdcall get_LeftThumbstickY(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftThumbstickY(double) noexcept = 0;
            virtual int32_t __stdcall get_LeftTrigger(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftTrigger(double) noexcept = 0;
            virtual int32_t __stdcall get_RightThumbstickX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightThumbstickX(double) noexcept = 0;
            virtual int32_t __stdcall get_RightThumbstickY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightThumbstickY(double) noexcept = 0;
            virtual int32_t __stdcall get_RightTrigger(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightTrigger(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceFromGamepadReading(struct struct_Windows_Gaming_Input_GamepadReading, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScanCode(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScanCode(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_VirtualKey(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_VirtualKey(uint16_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MouseOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MouseOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MouseData(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MouseData(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeltaY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaY(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeltaX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TimeOffsetInMilliseconds(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimeOffsetInMilliseconds(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo*) noexcept = 0;
            virtual int32_t __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo) noexcept = 0;
            virtual int32_t __stdcall get_PenButtons(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenButtons(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PenParameters(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenParameters(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pressure(double) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(double*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(double) noexcept = 0;
            virtual int32_t __stdcall get_TiltX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltY(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle*) noexcept = 0;
            virtual int32_t __stdcall put_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo*) noexcept = 0;
            virtual int32_t __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pressure(double) noexcept = 0;
            virtual int32_t __stdcall get_TouchParameters(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TouchParameters(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InjectKeyboardInput(void*) noexcept = 0;
            virtual int32_t __stdcall InjectMouseInput(void*) noexcept = 0;
            virtual int32_t __stdcall InitializeTouchInjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall InjectTouchInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializeTouchInjection() noexcept = 0;
            virtual int32_t __stdcall InitializePenInjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall InjectPenInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializePenInjection() noexcept = 0;
            virtual int32_t __stdcall InjectShortcut(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InitializeGamepadInjection() noexcept = 0;
            virtual int32_t __stdcall InjectGamepadInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializeGamepadInjection() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateForAppBroadcastOnly(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo
    {
        [[nodiscard]] auto Buttons() const;
        auto Buttons(Windows::Gaming::Input::GamepadButtons const& value) const;
        [[nodiscard]] auto LeftThumbstickX() const;
        auto LeftThumbstickX(double value) const;
        [[nodiscard]] auto LeftThumbstickY() const;
        auto LeftThumbstickY(double value) const;
        [[nodiscard]] auto LeftTrigger() const;
        auto LeftTrigger(double value) const;
        [[nodiscard]] auto RightThumbstickX() const;
        auto RightThumbstickX(double value) const;
        [[nodiscard]] auto RightThumbstickY() const;
        auto RightThumbstickY(double value) const;
        [[nodiscard]] auto RightTrigger() const;
        auto RightTrigger(double value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory
    {
        auto CreateInstance(Windows::Gaming::Input::GamepadReading const& reading) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo
    {
        [[nodiscard]] auto KeyOptions() const;
        auto KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const;
        [[nodiscard]] auto ScanCode() const;
        auto ScanCode(uint16_t value) const;
        [[nodiscard]] auto VirtualKey() const;
        auto VirtualKey(uint16_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo
    {
        [[nodiscard]] auto MouseOptions() const;
        auto MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const;
        [[nodiscard]] auto MouseData() const;
        auto MouseData(uint32_t value) const;
        [[nodiscard]] auto DeltaY() const;
        auto DeltaY(int32_t value) const;
        [[nodiscard]] auto DeltaX() const;
        auto DeltaX(int32_t value) const;
        [[nodiscard]] auto TimeOffsetInMilliseconds() const;
        auto TimeOffsetInMilliseconds(uint32_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo
    {
        [[nodiscard]] auto PointerInfo() const;
        auto PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
        [[nodiscard]] auto PenButtons() const;
        auto PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const;
        [[nodiscard]] auto PenParameters() const;
        auto PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const;
        [[nodiscard]] auto Pressure() const;
        auto Pressure(double value) const;
        [[nodiscard]] auto Rotation() const;
        auto Rotation(double value) const;
        [[nodiscard]] auto TiltX() const;
        auto TiltX(int32_t value) const;
        [[nodiscard]] auto TiltY() const;
        auto TiltY(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo
    {
        [[nodiscard]] auto Contact() const;
        auto Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const;
        [[nodiscard]] auto Orientation() const;
        auto Orientation(int32_t value) const;
        [[nodiscard]] auto PointerInfo() const;
        auto PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
        [[nodiscard]] auto Pressure() const;
        auto Pressure(double value) const;
        [[nodiscard]] auto TouchParameters() const;
        auto TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjector
    {
        auto InjectKeyboardInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const& input) const;
        auto InjectMouseInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const& input) const;
        auto InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
        auto InjectTouchInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const& input) const;
        auto UninitializeTouchInjection() const;
        auto InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
        auto InjectPenInput(Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const& input) const;
        auto UninitializePenInjection() const;
        auto InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut const& shortcut) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjector2
    {
        auto InitializeGamepadInjection() const;
        auto InjectGamepadInput(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const& input) const;
        auto UninitializeGamepadInjection() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics
    {
        auto TryCreate() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2
    {
        auto TryCreateForAppBroadcastOnly() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2<D>;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPoint
    {
        int32_t PositionX;
        int32_t PositionY;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputPoint;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo
    {
        uint32_t PointerId;
        uint32_t PointerOptions;
        struct{ int32_t PositionX; int32_t PositionY; } PixelLocation;
        uint32_t TimeOffsetInMilliseconds;
        uint64_t PerformanceCount;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle
    {
        int32_t Left;
        int32_t Top;
        int32_t Bottom;
        int32_t Right;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle;
    };
}
#endif
