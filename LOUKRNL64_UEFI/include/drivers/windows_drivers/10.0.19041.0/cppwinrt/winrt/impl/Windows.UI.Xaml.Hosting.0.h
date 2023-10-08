// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Hosting_0_H
#define WINRT_Windows_UI_Xaml_Hosting_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::UI::Composition
{
    struct CompositionPropertySet;
    struct ICompositionAnimationBase;
    struct Visual;
}
namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
namespace winrt::Windows::UI::Xaml
{
    struct FrameworkElement;
    struct ResourceDictionary;
    struct UIElement;
}
namespace winrt::Windows::UI::Xaml::Controls
{
    struct ScrollViewer;
}
namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    enum class FlyoutPlacementMode : int32_t;
}
namespace winrt::Windows::UI::Xaml::Hosting
{
    enum class DesignerAppViewState : int32_t
    {
        Visible = 0,
        Hidden = 1,
    };
    enum class XamlSourceFocusNavigationReason : int32_t
    {
        Programmatic = 0,
        Restore = 1,
        First = 3,
        Last = 4,
        Left = 7,
        Up = 8,
        Right = 9,
        Down = 10,
    };
    struct IDesignerAppExitedEventArgs;
    struct IDesignerAppManager;
    struct IDesignerAppManagerFactory;
    struct IDesignerAppView;
    struct IDesktopWindowXamlSource;
    struct IDesktopWindowXamlSourceFactory;
    struct IDesktopWindowXamlSourceGotFocusEventArgs;
    struct IDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
    struct IElementCompositionPreview;
    struct IElementCompositionPreviewStatics;
    struct IElementCompositionPreviewStatics2;
    struct IElementCompositionPreviewStatics3;
    struct IWindowsXamlManager;
    struct IWindowsXamlManagerStatics;
    struct IXamlSourceFocusNavigationRequest;
    struct IXamlSourceFocusNavigationRequestFactory;
    struct IXamlSourceFocusNavigationResult;
    struct IXamlSourceFocusNavigationResultFactory;
    struct IXamlUIPresenter;
    struct IXamlUIPresenterHost;
    struct IXamlUIPresenterHost2;
    struct IXamlUIPresenterHost3;
    struct IXamlUIPresenterStatics;
    struct IXamlUIPresenterStatics2;
    struct DesignerAppExitedEventArgs;
    struct DesignerAppManager;
    struct DesignerAppView;
    struct DesktopWindowXamlSource;
    struct DesktopWindowXamlSourceGotFocusEventArgs;
    struct DesktopWindowXamlSourceTakeFocusRequestedEventArgs;
    struct ElementCompositionPreview;
    struct WindowsXamlManager;
    struct XamlSourceFocusNavigationRequest;
    struct XamlSourceFocusNavigationResult;
    struct XamlUIPresenter;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesignerAppManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesignerAppView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IWindowsXamlManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesignerAppManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesignerAppView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::ElementCompositionPreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::WindowsXamlManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::XamlUIPresenter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::DesignerAppViewState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesignerAppManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesignerAppManager" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesignerAppView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesignerAppView" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreview" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IWindowsXamlManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IWindowsXamlManager" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesignerAppManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesignerAppManager" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesignerAppView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesignerAppView" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::ElementCompositionPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.ElementCompositionPreview" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::WindowsXamlManager>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.WindowsXamlManager" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationResult>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::XamlUIPresenter>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.XamlUIPresenter" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::DesignerAppViewState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.DesignerAppViewState" };
    };
    template <> struct name<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationReason" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
    {
        static constexpr guid value{ 0xF6AAC86A,0x0CAD,0x410C,{ 0x8F,0x62,0xDC,0x29,0x36,0x15,0x1C,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesignerAppManager>
    {
        static constexpr guid value{ 0xA6272CAA,0xD5C6,0x40CB,{ 0xAB,0xD9,0x27,0xBA,0x43,0x83,0x1B,0xB7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
    {
        static constexpr guid value{ 0x8F9D633B,0x1266,0x4C0E,{ 0x84,0x99,0x0D,0xB8,0x5B,0xBD,0x4C,0x43 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesignerAppView>
    {
        static constexpr guid value{ 0x5C777CEA,0xDD71,0x4A84,{ 0xA5,0x6F,0xDA,0xCB,0x4B,0x14,0x70,0x6F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>
    {
        static constexpr guid value{ 0xD585BFE1,0x00FF,0x51BE,{ 0xBA,0x1D,0xA1,0x32,0x99,0x56,0xEA,0x0A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>
    {
        static constexpr guid value{ 0x5CD61DC0,0x2561,0x56E1,{ 0x8E,0x75,0x6E,0x44,0x17,0x38,0x05,0xE3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs>
    {
        static constexpr guid value{ 0x39BE4849,0xD9CC,0x5B70,{ 0x8F,0x05,0x1A,0xD9,0xA4,0xAA,0xA3,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        static constexpr guid value{ 0xFE61E4B9,0xA7AF,0x52B3,{ 0xBD,0xB9,0xC3,0x30,0x5C,0x0B,0x8D,0xF2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IElementCompositionPreview>
    {
        static constexpr guid value{ 0xB6F1A676,0xCFE6,0x46AC,{ 0xAC,0xF6,0xC4,0x68,0x7B,0xB6,0x5E,0x60 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
    {
        static constexpr guid value{ 0x08C92B38,0xEC99,0x4C55,{ 0xBC,0x85,0xA1,0xC1,0x80,0xB2,0x76,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
    {
        static constexpr guid value{ 0x24148FBB,0x23D6,0x4F37,{ 0xBA,0x0C,0x07,0x33,0xE7,0x99,0x72,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics3>
    {
        static constexpr guid value{ 0x843BC4C3,0xC105,0x59FE,{ 0xA3,0xD1,0x37,0x3C,0x1D,0x3E,0x6F,0xBC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IWindowsXamlManager>
    {
        static constexpr guid value{ 0x56096C31,0x1AA0,0x5288,{ 0x88,0x18,0x6E,0x74,0xA2,0xDC,0xAF,0xF5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>
    {
        static constexpr guid value{ 0x28258A12,0x7D82,0x505B,{ 0xB2,0x10,0x71,0x2B,0x04,0xA5,0x88,0x82 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest>
    {
        static constexpr guid value{ 0xFBB93BB5,0x1496,0x5A80,{ 0xAC,0x00,0xE7,0x57,0x35,0x97,0x55,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>
    {
        static constexpr guid value{ 0xE746AB8F,0xB4EF,0x5390,{ 0x97,0xE5,0xCC,0x0A,0x27,0x79,0xC5,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult>
    {
        static constexpr guid value{ 0x88D55A5F,0x9603,0x5D8F,{ 0x9C,0xC7,0xD1,0xC4,0x07,0x0D,0x98,0x01 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory>
    {
        static constexpr guid value{ 0x43BBADBF,0xF9E1,0x5527,{ 0xB8,0xC5,0x09,0x33,0x9F,0xF2,0xCA,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenter>
    {
        static constexpr guid value{ 0xA714944A,0x1619,0x4FC6,{ 0xB3,0x1B,0x89,0x51,0x2E,0xF0,0x22,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
    {
        static constexpr guid value{ 0xAAFB84CD,0x9F6D,0x4F80,{ 0xAC,0x2C,0x0E,0x6C,0xB9,0xF3,0x16,0x59 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
    {
        static constexpr guid value{ 0x61595672,0x7CA4,0x4A21,{ 0xB5,0x6A,0x88,0xF4,0x81,0x23,0x88,0xCA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
    {
        static constexpr guid value{ 0xB14292BF,0x7320,0x41BB,{ 0x9F,0x26,0x4D,0x6F,0xD3,0x4D,0xB4,0x5A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
    {
        static constexpr guid value{ 0x71EAEAC8,0x45E1,0x4192,{ 0x85,0xAA,0x3A,0x42,0x2E,0xDD,0x23,0xCF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
    {
        static constexpr guid value{ 0x5C6B68D2,0xCF1C,0x4F53,{ 0xBF,0x09,0x6A,0x74,0x5F,0x7A,0x97,0x03 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs>
    {
        using type = Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesignerAppManager>
    {
        using type = Windows::UI::Xaml::Hosting::IDesignerAppManager;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesignerAppView>
    {
        using type = Windows::UI::Xaml::Hosting::IDesignerAppView;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>
    {
        using type = Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs>
    {
        using type = Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::ElementCompositionPreview>
    {
        using type = Windows::UI::Xaml::Hosting::IElementCompositionPreview;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::WindowsXamlManager>
    {
        using type = Windows::UI::Xaml::Hosting::IWindowsXamlManager;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest>
    {
        using type = Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationResult>
    {
        using type = Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult;
    };
    template <> struct default_interface<Windows::UI::Xaml::Hosting::XamlUIPresenter>
    {
        using type = Windows::UI::Xaml::Hosting::IXamlUIPresenter;
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExitCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesignerAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall add_DesignerAppExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DesignerAppExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateNewViewAsync(int32_t, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall LoadObjectIntoAppAsync(void*, winrt::guid, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesignerAppView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ApplicationViewId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ViewSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall UpdateViewAsync(int32_t, Windows::Foundation::Size, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_HasFocus(bool*) noexcept = 0;
            virtual int32_t __stdcall add_TakeFocusRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TakeFocusRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NavigateFocus(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetElementVisual(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetElementChildVisual(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetElementChildVisual(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetScrollViewerManipulationPropertySet(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetImplicitShowAnimation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetImplicitHideAnimation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetIsTranslationEnabled(void*, bool) noexcept = 0;
            virtual int32_t __stdcall GetPointerPositionPropertySet(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAppWindowContent(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetAppWindowContent(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IWindowsXamlManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InitializeForCurrentThread(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HintRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithHintRect(int32_t, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithHintRectAndCorrelationId(int32_t, Windows::Foundation::Rect, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WasFocusMoved(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RootElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_RootElement(void*) noexcept = 0;
            virtual int32_t __stdcall get_ThemeKey(void**) noexcept = 0;
            virtual int32_t __stdcall put_ThemeKey(void*) noexcept = 0;
            virtual int32_t __stdcall get_ThemeResourcesXaml(void**) noexcept = 0;
            virtual int32_t __stdcall put_ThemeResourcesXaml(void*) noexcept = 0;
            virtual int32_t __stdcall SetSize(int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall Render() noexcept = 0;
            virtual int32_t __stdcall Present() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResolveFileResource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetGenericXamlFilePath(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResolveDictionaryResource(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompleteTimelinesAutomatically(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CompleteTimelinesAutomatically(bool) noexcept = 0;
            virtual int32_t __stdcall SetHost(void*) noexcept = 0;
            virtual int32_t __stdcall NotifyWindowSizeChanged() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFlyoutPlacementTargetInfo(void*, int32_t, int32_t*, bool*, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetFlyoutPlacement(Windows::Foundation::Rect, Windows::Foundation::Size, Windows::Foundation::Size, Windows::Foundation::Rect, int32_t, bool, int32_t*, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs
    {
        [[nodiscard]] auto ExitCode() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesignerAppManager
    {
        [[nodiscard]] auto AppUserModelId() const;
        auto DesignerAppExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesignerAppManager, Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> const& handler) const;
        using DesignerAppExited_revoker = impl::event_revoker<Windows::UI::Xaml::Hosting::IDesignerAppManager, &impl::abi_t<Windows::UI::Xaml::Hosting::IDesignerAppManager>::remove_DesignerAppExited>;
        DesignerAppExited_revoker DesignerAppExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesignerAppManager, Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> const& handler) const;
        auto DesignerAppExited(winrt::event_token const& token) const noexcept;
        auto CreateNewViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState const& initialViewState, Windows::Foundation::Size const& initialViewSize) const;
        auto LoadObjectIntoAppAsync(param::hstring const& dllName, winrt::guid const& classId, param::hstring const& initializationData) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesignerAppManager>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory
    {
        auto Create(param::hstring const& appUserModelId) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesignerAppView
    {
        [[nodiscard]] auto ApplicationViewId() const;
        [[nodiscard]] auto AppUserModelId() const;
        [[nodiscard]] auto ViewState() const;
        [[nodiscard]] auto ViewSize() const;
        auto UpdateViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState const& viewState, Windows::Foundation::Size const& viewSize) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesignerAppView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource
    {
        [[nodiscard]] auto Content() const;
        auto Content(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto HasFocus() const;
        auto TakeFocusRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource, Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs> const& handler) const;
        using TakeFocusRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource, &impl::abi_t<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::remove_TakeFocusRequested>;
        TakeFocusRequested_revoker TakeFocusRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource, Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs> const& handler) const;
        auto TakeFocusRequested(winrt::event_token const& token) const noexcept;
        auto GotFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource, Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs> const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource, &impl::abi_t<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::remove_GotFocus>;
        GotFocus_revoker GotFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesktopWindowXamlSource, Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs> const& handler) const;
        auto GotFocus(winrt::event_token const& token) const noexcept;
        auto NavigateFocus(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest const& request) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview
    {
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreview>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics
    {
        auto GetElementVisual(Windows::UI::Xaml::UIElement const& element) const;
        auto GetElementChildVisual(Windows::UI::Xaml::UIElement const& element) const;
        auto SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual) const;
        auto GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2
    {
        auto SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
        auto SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
        auto SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value) const;
        auto GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics3
    {
        auto SetAppWindowContent(Windows::UI::WindowManagement::AppWindow const& appWindow, Windows::UI::Xaml::UIElement const& xamlContent) const;
        auto GetAppWindowContent(Windows::UI::WindowManagement::AppWindow const& appWindow) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IWindowsXamlManager
    {
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IWindowsXamlManager>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IWindowsXamlManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics
    {
        auto InitializeForCurrentThread() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest
    {
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto HintRect() const;
        [[nodiscard]] auto CorrelationId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory
    {
        auto CreateInstance(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason) const;
        auto CreateInstanceWithHintRect(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason, Windows::Foundation::Rect const& hintRect) const;
        auto CreateInstanceWithHintRectAndCorrelationId(Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason const& reason, Windows::Foundation::Rect const& hintRect, winrt::guid const& correlationId) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult
    {
        [[nodiscard]] auto WasFocusMoved() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory
    {
        auto CreateInstance(bool focusMoved) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter
    {
        [[nodiscard]] auto RootElement() const;
        auto RootElement(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] auto ThemeKey() const;
        auto ThemeKey(param::hstring const& value) const;
        [[nodiscard]] auto ThemeResourcesXaml() const;
        auto ThemeResourcesXaml(param::hstring const& value) const;
        auto SetSize(int32_t width, int32_t height) const;
        auto Render() const;
        auto Present() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost
    {
        auto ResolveFileResource(param::hstring const& path) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2
    {
        auto GetGenericXamlFilePath() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3
    {
        auto ResolveDictionaryResource(Windows::UI::Xaml::ResourceDictionary const& dictionary, Windows::Foundation::IInspectable const& dictionaryKey, Windows::Foundation::IInspectable const& suggestedValue) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics
    {
        [[nodiscard]] auto CompleteTimelinesAutomatically() const;
        auto CompleteTimelinesAutomatically(bool value) const;
        auto SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host) const;
        auto NotifyWindowSizeChanged() const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2
    {
        auto GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks) const;
        auto GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement) const;
    };
    template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2<D>;
    };
}
#endif
