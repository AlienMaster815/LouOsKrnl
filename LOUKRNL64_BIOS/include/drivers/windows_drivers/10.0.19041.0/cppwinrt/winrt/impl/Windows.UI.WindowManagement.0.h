// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WindowManagement_0_H
#define WINRT_Windows_UI_WindowManagement_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
namespace winrt::Windows::UI
{
    struct Color;
    struct UIContentRoot;
    struct UIContext;
}
namespace winrt::Windows::UI::WindowManagement
{
    enum class AppWindowClosedReason : int32_t
    {
        Other = 0,
        AppInitiated = 1,
        UserInitiated = 2,
    };
    enum class AppWindowFrameStyle : int32_t
    {
        Default = 0,
        NoFrame = 1,
    };
    enum class AppWindowPresentationKind : int32_t
    {
        Default = 0,
        CompactOverlay = 1,
        FullScreen = 2,
    };
    enum class AppWindowTitleBarVisibility : int32_t
    {
        Default = 0,
        AlwaysHidden = 1,
    };
    enum class WindowingEnvironmentKind : int32_t
    {
        Unknown = 0,
        Overlapped = 1,
        Tiled = 2,
    };
    struct IAppWindow;
    struct IAppWindowChangedEventArgs;
    struct IAppWindowCloseRequestedEventArgs;
    struct IAppWindowClosedEventArgs;
    struct IAppWindowFrame;
    struct IAppWindowFrameStyle;
    struct IAppWindowPlacement;
    struct IAppWindowPresentationConfiguration;
    struct IAppWindowPresentationConfigurationFactory;
    struct IAppWindowPresenter;
    struct IAppWindowStatics;
    struct IAppWindowTitleBar;
    struct IAppWindowTitleBarOcclusion;
    struct IAppWindowTitleBarVisibility;
    struct ICompactOverlayPresentationConfiguration;
    struct IDefaultPresentationConfiguration;
    struct IDisplayRegion;
    struct IFullScreenPresentationConfiguration;
    struct IWindowingEnvironment;
    struct IWindowingEnvironmentAddedEventArgs;
    struct IWindowingEnvironmentChangedEventArgs;
    struct IWindowingEnvironmentRemovedEventArgs;
    struct IWindowingEnvironmentStatics;
    struct AppWindow;
    struct AppWindowChangedEventArgs;
    struct AppWindowCloseRequestedEventArgs;
    struct AppWindowClosedEventArgs;
    struct AppWindowFrame;
    struct AppWindowPlacement;
    struct AppWindowPresentationConfiguration;
    struct AppWindowPresenter;
    struct AppWindowTitleBar;
    struct AppWindowTitleBarOcclusion;
    struct CompactOverlayPresentationConfiguration;
    struct DefaultPresentationConfiguration;
    struct DisplayRegion;
    struct FullScreenPresentationConfiguration;
    struct WindowingEnvironment;
    struct WindowingEnvironmentAddedEventArgs;
    struct WindowingEnvironmentChangedEventArgs;
    struct WindowingEnvironmentRemovedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::WindowManagement::IAppWindow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IDisplayRegion>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowClosedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowFrame>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPlacement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresentationConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresenter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::DefaultPresentationConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::DisplayRegion>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::FullScreenPresentationConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowClosedReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowFrameStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresentationKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBarVisibility>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindow>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindow" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowCloseRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowClosedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowFrame" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowFrameStyle" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowPlacement" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowPresentationConfigurationFactory" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowPresenter" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowStatics" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowTitleBar" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowTitleBarOcclusion" };
    };
    template <> struct name<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IAppWindowTitleBarVisibility" };
    };
    template <> struct name<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.ICompactOverlayPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IDefaultPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::IDisplayRegion>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IDisplayRegion" };
    };
    template <> struct name<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IFullScreenPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IWindowingEnvironment" };
    };
    template <> struct name<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IWindowingEnvironmentAddedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IWindowingEnvironmentChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IWindowingEnvironmentRemovedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.IWindowingEnvironmentStatics" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindow>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindow" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowCloseRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowClosedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowClosedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowFrame>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowFrame" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowPlacement>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowPlacement" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowPresenter" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowTitleBar>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowTitleBar" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowTitleBarOcclusion" };
    };
    template <> struct name<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.CompactOverlayPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::DefaultPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.DefaultPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::DisplayRegion>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.DisplayRegion" };
    };
    template <> struct name<Windows::UI::WindowManagement::FullScreenPresentationConfiguration>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.FullScreenPresentationConfiguration" };
    };
    template <> struct name<Windows::UI::WindowManagement::WindowingEnvironment>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.WindowingEnvironment" };
    };
    template <> struct name<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.WindowingEnvironmentAddedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.WindowingEnvironmentChangedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.WindowingEnvironmentRemovedEventArgs" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowClosedReason>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowClosedReason" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowFrameStyle>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowFrameStyle" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowPresentationKind>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowPresentationKind" };
    };
    template <> struct name<Windows::UI::WindowManagement::AppWindowTitleBarVisibility>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.AppWindowTitleBarVisibility" };
    };
    template <> struct name<Windows::UI::WindowManagement::WindowingEnvironmentKind>
    {
        static constexpr auto & value{ L"Windows.UI.WindowManagement.WindowingEnvironmentKind" };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindow>
    {
        static constexpr guid value{ 0x663014A6,0xB75E,0x5DBD,{ 0x99,0x5C,0xF0,0x11,0x7F,0xA3,0xFB,0x61 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        static constexpr guid value{ 0x1DE1F3BE,0xA655,0x55AD,{ 0xB2,0xB6,0xEB,0x24,0x0F,0x88,0x03,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        static constexpr guid value{ 0xE9FF01DA,0xE7A2,0x57A8,{ 0x8B,0x5E,0x39,0xC4,0x00,0x3A,0xFD,0xBB } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        static constexpr guid value{ 0xCC7DF816,0x9520,0x5A06,{ 0x82,0x1E,0x45,0x6A,0xD8,0xB3,0x58,0xAA } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        static constexpr guid value{ 0x9EE22601,0x7E5D,0x52AF,{ 0x84,0x6B,0x01,0xDC,0x6C,0x29,0x65,0x67 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        static constexpr guid value{ 0xAC412946,0xE1AC,0x5230,{ 0x94,0x4A,0xC6,0x08,0x73,0xDC,0xF4,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        static constexpr guid value{ 0x03DC815E,0xE7A9,0x5857,{ 0x9C,0x03,0x7D,0x67,0x05,0x94,0x41,0x0E } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        static constexpr guid value{ 0xB5A43EE3,0xDF33,0x5E67,{ 0xBD,0x31,0x10,0x72,0x45,0x73,0x00,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        static constexpr guid value{ 0xFD3606A6,0x7875,0x5DE8,{ 0x84,0xFF,0x63,0x51,0xEE,0x13,0xDD,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        static constexpr guid value{ 0x5AE9ED73,0xE1FD,0x5317,{ 0xAD,0x78,0x5A,0x3E,0xD2,0x71,0xBB,0xDE } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        static constexpr guid value{ 0xFF1F3EA3,0xB769,0x50EF,{ 0x98,0x73,0x10,0x8C,0xD0,0xE8,0x97,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        static constexpr guid value{ 0x6E932C84,0xF644,0x541D,{ 0xA2,0xD7,0x0C,0x26,0x24,0x37,0x84,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        static constexpr guid value{ 0xFEA3CFFD,0x2CCF,0x5FC3,{ 0xAE,0xAE,0xF8,0x43,0x87,0x6B,0xF3,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        static constexpr guid value{ 0xA215A4E3,0x6E7E,0x5651,{ 0x8C,0x3B,0x62,0x48,0x19,0x52,0x81,0x54 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        static constexpr guid value{ 0xA7E5750F,0x5730,0x56C6,{ 0x8E,0x1F,0xD6,0x3F,0xF4,0xD7,0x98,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        static constexpr guid value{ 0xD8C2B53B,0x2168,0x5703,{ 0xA8,0x53,0xD5,0x25,0x58,0x9F,0xE2,0xB9 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IDisplayRegion>
    {
        static constexpr guid value{ 0xDB50C3A2,0x4094,0x5F47,{ 0x8C,0xB1,0xEA,0x01,0xDD,0xAF,0xAA,0x94 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        static constexpr guid value{ 0x43D3DCD8,0xD2A8,0x503D,{ 0xA6,0x26,0x15,0x53,0x3D,0x6D,0x5F,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        static constexpr guid value{ 0x264363C0,0x2A49,0x5417,{ 0xB3,0xAE,0x48,0xA7,0x1C,0x63,0xA3,0xBD } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        static constexpr guid value{ 0xFF2A5B7F,0xF183,0x5C66,{ 0x99,0xB2,0x42,0x90,0x82,0x06,0x92,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        static constexpr guid value{ 0x4160CFC6,0x023D,0x5E9A,{ 0xB4,0x31,0x35,0x0E,0x67,0xDC,0x97,0x8A } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        static constexpr guid value{ 0x2E5B5473,0xBEFF,0x5E53,{ 0x93,0x16,0x7E,0x77,0x5F,0xE5,0x68,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        static constexpr guid value{ 0x874E9FB7,0xC642,0x55AB,{ 0x8A,0xA2,0x16,0x2F,0x73,0x4A,0x9A,0x72 } };
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindow>
    {
        using type = Windows::UI::WindowManagement::IAppWindow;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowChangedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IAppWindowChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowClosedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IAppWindowClosedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowFrame>
    {
        using type = Windows::UI::WindowManagement::IAppWindowFrame;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPlacement>
    {
        using type = Windows::UI::WindowManagement::IAppWindowPlacement;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPresentationConfiguration>
    {
        using type = Windows::UI::WindowManagement::IAppWindowPresentationConfiguration;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPresenter>
    {
        using type = Windows::UI::WindowManagement::IAppWindowPresenter;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowTitleBar>
    {
        using type = Windows::UI::WindowManagement::IAppWindowTitleBar;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>
    {
        using type = Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration>
    {
        using type = Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::DefaultPresentationConfiguration>
    {
        using type = Windows::UI::WindowManagement::IDefaultPresentationConfiguration;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::DisplayRegion>
    {
        using type = Windows::UI::WindowManagement::IDisplayRegion;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::FullScreenPresentationConfiguration>
    {
        using type = Windows::UI::WindowManagement::IFullScreenPresentationConfiguration;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironment>
    {
        using type = Windows::UI::WindowManagement::IWindowingEnvironment;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs>
    {
        using type = Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs;
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PersistedStateId(void**) noexcept = 0;
            virtual int32_t __stdcall put_PersistedStateId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Presenter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_TitleBar(void**) noexcept = 0;
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall CloseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPlacement(void**) noexcept = 0;
            virtual int32_t __stdcall GetDisplayRegions(void**) noexcept = 0;
            virtual int32_t __stdcall RequestMoveToDisplayRegion(void*) noexcept = 0;
            virtual int32_t __stdcall RequestMoveAdjacentToCurrentView() noexcept = 0;
            virtual int32_t __stdcall RequestMoveAdjacentToWindow(void*) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToWindowContent(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToCurrentViewContent(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToDisplayRegion(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestSize(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall TryShowAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CloseRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DidAvailableWindowPresentationsChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidDisplayRegionsChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidFrameChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidSizeChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidTitleBarChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidVisibilityChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidWindowingEnvironmentChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidWindowPresentationChange(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragRegionVisuals(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFrameStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetFrameStyle(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall IsPresentationSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestPresentation(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestPresentationByKind(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearAllPersistedState() noexcept = 0;
            virtual int32_t __stdcall ClearPersistedState(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendsContentIntoTitleBar(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExtendsContentIntoTitleBar(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall GetTitleBarOcclusions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludingRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPreferredVisibility(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPreferredVisibility(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IDisplayRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayMonitorDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_WorkAreaOffset(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WorkAreaSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsExclusive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsExclusive(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDisplayRegions(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAll(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllWithKind(int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindow
    {
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto DispatcherQueue() const;
        [[nodiscard]] auto Frame() const;
        [[nodiscard]] auto IsVisible() const;
        [[nodiscard]] auto PersistedStateId() const;
        auto PersistedStateId(param::hstring const& value) const;
        [[nodiscard]] auto Presenter() const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto TitleBar() const;
        [[nodiscard]] auto UIContext() const;
        [[nodiscard]] auto WindowingEnvironment() const;
        auto CloseAsync() const;
        auto GetPlacement() const;
        auto GetDisplayRegions() const;
        auto RequestMoveToDisplayRegion(Windows::UI::WindowManagement::DisplayRegion const& displayRegion) const;
        auto RequestMoveAdjacentToCurrentView() const;
        auto RequestMoveAdjacentToWindow(Windows::UI::WindowManagement::AppWindow const& anchorWindow) const;
        auto RequestMoveRelativeToWindowContent(Windows::UI::WindowManagement::AppWindow const& anchorWindow, Windows::Foundation::Point const& contentOffset) const;
        auto RequestMoveRelativeToCurrentViewContent(Windows::Foundation::Point const& contentOffset) const;
        auto RequestMoveRelativeToDisplayRegion(Windows::UI::WindowManagement::DisplayRegion const& displayRegion, Windows::Foundation::Point const& displayRegionOffset) const;
        auto RequestSize(Windows::Foundation::Size const& frameSize) const;
        auto TryShowAsync() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowChangedEventArgs> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowChangedEventArgs> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
        auto Closed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_Closed>;
        Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto CloseRequested(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs> const& handler) const;
        using CloseRequested_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_CloseRequested>;
        CloseRequested_revoker CloseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs> const& handler) const;
        auto CloseRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindow>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs
    {
        [[nodiscard]] auto DidAvailableWindowPresentationsChange() const;
        [[nodiscard]] auto DidDisplayRegionsChange() const;
        [[nodiscard]] auto DidFrameChange() const;
        [[nodiscard]] auto DidSizeChange() const;
        [[nodiscard]] auto DidTitleBarChange() const;
        [[nodiscard]] auto DidVisibilityChange() const;
        [[nodiscard]] auto DidWindowingEnvironmentChange() const;
        [[nodiscard]] auto DidWindowPresentationChange() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowCloseRequestedEventArgs
    {
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowCloseRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowClosedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowFrame
    {
        [[nodiscard]] auto DragRegionVisuals() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowFrameStyle
    {
        auto GetFrameStyle() const;
        auto SetFrameStyle(Windows::UI::WindowManagement::AppWindowFrameStyle const& frameStyle) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowFrameStyle<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPlacement
    {
        [[nodiscard]] auto DisplayRegion() const;
        [[nodiscard]] auto Offset() const;
        [[nodiscard]] auto Size() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPlacement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresentationConfiguration
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresentationConfigurationFactory
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresentationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresenter
    {
        auto GetConfiguration() const;
        auto IsPresentationSupported(Windows::UI::WindowManagement::AppWindowPresentationKind const& presentationKind) const;
        auto RequestPresentation(Windows::UI::WindowManagement::AppWindowPresentationConfiguration const& configuration) const;
        auto RequestPresentation(Windows::UI::WindowManagement::AppWindowPresentationKind const& presentationKind) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowStatics
    {
        auto TryCreateAsync() const;
        auto ClearAllPersistedState() const;
        auto ClearPersistedState(param::hstring const& key) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBar
    {
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonBackgroundColor() const;
        auto ButtonBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonForegroundColor() const;
        auto ButtonForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonHoverBackgroundColor() const;
        auto ButtonHoverBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonHoverForegroundColor() const;
        auto ButtonHoverForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonInactiveBackgroundColor() const;
        auto ButtonInactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonInactiveForegroundColor() const;
        auto ButtonInactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonPressedBackgroundColor() const;
        auto ButtonPressedBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ButtonPressedForegroundColor() const;
        auto ButtonPressedForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto ExtendsContentIntoTitleBar() const;
        auto ExtendsContentIntoTitleBar(bool value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto InactiveBackgroundColor() const;
        auto InactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto InactiveForegroundColor() const;
        auto InactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] auto IsVisible() const;
        auto GetTitleBarOcclusions() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBarOcclusion
    {
        [[nodiscard]] auto OccludingRect() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBarOcclusion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBarVisibility
    {
        auto GetPreferredVisibility() const;
        auto SetPreferredVisibility(Windows::UI::WindowManagement::AppWindowTitleBarVisibility const& visibilityMode) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBarVisibility<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_ICompactOverlayPresentationConfiguration
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_ICompactOverlayPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IDefaultPresentationConfiguration
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IDefaultPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IDisplayRegion
    {
        [[nodiscard]] auto DisplayMonitorDeviceId() const;
        [[nodiscard]] auto IsVisible() const;
        [[nodiscard]] auto WorkAreaOffset() const;
        [[nodiscard]] auto WorkAreaSize() const;
        [[nodiscard]] auto WindowingEnvironment() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::DisplayRegion, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IDisplayRegion, &impl::abi_t<Windows::UI::WindowManagement::IDisplayRegion>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::DisplayRegion, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IDisplayRegion>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IDisplayRegion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IFullScreenPresentationConfiguration
    {
        [[nodiscard]] auto IsExclusive() const;
        auto IsExclusive(bool value) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IFullScreenPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironment
    {
        [[nodiscard]] auto IsEnabled() const;
        [[nodiscard]] auto Kind() const;
        auto GetDisplayRegions() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::WindowingEnvironment, Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IWindowingEnvironment, &impl::abi_t<Windows::UI::WindowManagement::IWindowingEnvironment>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::WindowingEnvironment, Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentAddedEventArgs
    {
        [[nodiscard]] auto WindowingEnvironment() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentRemovedEventArgs
    {
        [[nodiscard]] auto WindowingEnvironment() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics
    {
        auto FindAll() const;
        auto FindAll(Windows::UI::WindowManagement::WindowingEnvironmentKind const& kind) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics<D>;
    };
}
#endif
