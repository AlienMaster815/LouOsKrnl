// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_UI_0_H
#define WINRT_Windows_Web_UI_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::Web
{
    struct IUriToStreamResolver;
    enum class WebErrorStatus : int32_t;
}
namespace winrt::Windows::Web::Http
{
    struct HttpRequestMessage;
    struct HttpResponseMessage;
}
namespace winrt::Windows::Web::UI
{
    enum class WebViewControlPermissionState : int32_t
    {
        Unknown = 0,
        Defer = 1,
        Allow = 2,
        Deny = 3,
    };
    enum class WebViewControlPermissionType : int32_t
    {
        Geolocation = 0,
        UnlimitedIndexedDBQuota = 1,
        Media = 2,
        PointerLock = 3,
        WebNotifications = 4,
        Screen = 5,
        ImmersiveView = 6,
    };
    struct IWebViewControl;
    struct IWebViewControl2;
    struct IWebViewControlContentLoadingEventArgs;
    struct IWebViewControlDOMContentLoadedEventArgs;
    struct IWebViewControlDeferredPermissionRequest;
    struct IWebViewControlLongRunningScriptDetectedEventArgs;
    struct IWebViewControlNavigationCompletedEventArgs;
    struct IWebViewControlNavigationStartingEventArgs;
    struct IWebViewControlNewWindowRequestedEventArgs;
    struct IWebViewControlNewWindowRequestedEventArgs2;
    struct IWebViewControlPermissionRequest;
    struct IWebViewControlPermissionRequestedEventArgs;
    struct IWebViewControlScriptNotifyEventArgs;
    struct IWebViewControlSettings;
    struct IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
    struct IWebViewControlUnviewableContentIdentifiedEventArgs;
    struct IWebViewControlWebResourceRequestedEventArgs;
    struct WebViewControlContentLoadingEventArgs;
    struct WebViewControlDOMContentLoadedEventArgs;
    struct WebViewControlDeferredPermissionRequest;
    struct WebViewControlLongRunningScriptDetectedEventArgs;
    struct WebViewControlNavigationCompletedEventArgs;
    struct WebViewControlNavigationStartingEventArgs;
    struct WebViewControlNewWindowRequestedEventArgs;
    struct WebViewControlPermissionRequest;
    struct WebViewControlPermissionRequestedEventArgs;
    struct WebViewControlScriptNotifyEventArgs;
    struct WebViewControlSettings;
    struct WebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
    struct WebViewControlUnviewableContentIdentifiedEventArgs;
    struct WebViewControlWebResourceRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::UI::IWebViewControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlPermissionRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlContentLoadingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlDeferredPermissionRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlPermissionRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlPermissionState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::UI::WebViewControlPermissionType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Web::UI::IWebViewControl>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControl" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControl2>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControl2" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlContentLoadingEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlDOMContentLoadedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlDeferredPermissionRequest" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlLongRunningScriptDetectedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNavigationCompletedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNavigationStartingEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNewWindowRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNewWindowRequestedEventArgs2" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlPermissionRequest>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlPermissionRequest" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlPermissionRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlScriptNotifyEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlSettings>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlSettings" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlUnviewableContentIdentifiedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlWebResourceRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlContentLoadingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlContentLoadingEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlDOMContentLoadedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlDeferredPermissionRequest>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlDeferredPermissionRequest" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlLongRunningScriptDetectedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNavigationCompletedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNavigationStartingEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNewWindowRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlPermissionRequest>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionRequest" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlScriptNotifyEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlSettings>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlSettings" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlUnsupportedUriSchemeIdentifiedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlUnviewableContentIdentifiedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlWebResourceRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlPermissionState>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionState" };
    };
    template <> struct name<Windows::Web::UI::WebViewControlPermissionType>
    {
        static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionType" };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControl>
    {
        static constexpr guid value{ 0x3F921316,0xBC70,0x4BDA,{ 0x91,0x36,0xC9,0x43,0x70,0x89,0x9F,0xAB } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControl2>
    {
        static constexpr guid value{ 0x4D3C06F9,0xC8DF,0x41CC,{ 0x8B,0xD5,0x2A,0x94,0x7B,0x20,0x45,0x03 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
    {
        static constexpr guid value{ 0x9A3FCCB2,0xB9BB,0x404B,{ 0xA2,0x2B,0x66,0xDC,0xCD,0x12,0x50,0xC6 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
    {
        static constexpr guid value{ 0xBE8BC008,0x9541,0x4545,{ 0x9F,0xF2,0x2D,0xF5,0x85,0xB2,0x9F,0x7D } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
    {
        static constexpr guid value{ 0x2CE349E0,0xD759,0x445C,{ 0x99,0x26,0x89,0x95,0x29,0x8F,0x15,0x2B } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
    {
        static constexpr guid value{ 0x2A6E5BBA,0x98B4,0x45BC,{ 0xBB,0xEB,0x0F,0x69,0xCE,0x49,0xC5,0x99 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
    {
        static constexpr guid value{ 0x20409918,0x4A15,0x4C46,{ 0xA5,0x5D,0xF7,0x9E,0xDB,0x0B,0xDE,0x8B } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
    {
        static constexpr guid value{ 0x0C9057C5,0x0A08,0x41C7,{ 0x86,0x3B,0x71,0xE3,0xA9,0x54,0x91,0x37 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
    {
        static constexpr guid value{ 0x3DF44BBB,0xA124,0x46D5,{ 0xA0,0x83,0xD0,0x2C,0xAC,0xDF,0xF5,0xAD } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        static constexpr guid value{ 0xB53C5CA6,0x2AAE,0x4BFC,{ 0x92,0xB9,0xC3,0x0E,0x92,0xB4,0x80,0x98 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlPermissionRequest>
    {
        static constexpr guid value{ 0xE5BC836C,0xF22F,0x40E2,{ 0x95,0xB2,0x77,0x29,0xF8,0x40,0xEB,0x7F } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
    {
        static constexpr guid value{ 0x27204D51,0x2488,0x4CC5,{ 0x96,0x8E,0x0A,0x77,0x1E,0x59,0xC1,0x47 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
    {
        static constexpr guid value{ 0x491DE57B,0x6F49,0x41BB,{ 0xB5,0x91,0x51,0xB8,0x5B,0x81,0x70,0x37 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlSettings>
    {
        static constexpr guid value{ 0xC9967FBF,0x5E98,0x4CFD,{ 0x8C,0xCE,0x27,0xB0,0x91,0x1E,0x3D,0xE8 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        static constexpr guid value{ 0xE3B81944,0xE4FC,0x43DC,{ 0x94,0xCA,0xF9,0x80,0xF3,0x0B,0xC5,0x1D } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
    {
        static constexpr guid value{ 0x4A9680DB,0x88F2,0x4E20,{ 0xB6,0x93,0xB4,0xE2,0xDF,0x4A,0xA5,0x81 } };
    };
    template <> struct guid_storage<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
    {
        static constexpr guid value{ 0x44D6524D,0x55A4,0x4D8B,{ 0x89,0x1C,0x93,0x1D,0x8E,0x25,0xD4,0x2E } };
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlContentLoadingEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlContentLoadingEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlDeferredPermissionRequest>
    {
        using type = Windows::Web::UI::IWebViewControlDeferredPermissionRequest;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlNavigationStartingEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlPermissionRequest>
    {
        using type = Windows::Web::UI::IWebViewControlPermissionRequest;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlScriptNotifyEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlSettings>
    {
        using type = Windows::Web::UI::IWebViewControlSettings;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>
    {
        using type = Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs;
    };
    template <> struct abi<Windows::Web::UI::IWebViewControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
            virtual int32_t __stdcall get_DocumentTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanGoBack(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanGoForward(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultBackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_DefaultBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_ContainsFullScreenElement(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Settings(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeferredPermissionRequests(void**) noexcept = 0;
            virtual int32_t __stdcall GoForward() noexcept = 0;
            virtual int32_t __stdcall GoBack() noexcept = 0;
            virtual int32_t __stdcall Refresh() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Navigate(void*) noexcept = 0;
            virtual int32_t __stdcall NavigateToString(void*) noexcept = 0;
            virtual int32_t __stdcall NavigateToLocalStreamUri(void*, void*) noexcept = 0;
            virtual int32_t __stdcall NavigateWithHttpRequestMessage(void*) noexcept = 0;
            virtual int32_t __stdcall InvokeScriptAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CapturePreviewToStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CaptureSelectedContentToDataPackageAsync(void**) noexcept = 0;
            virtual int32_t __stdcall BuildLocalStreamUri(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferredPermissionRequestById(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_NavigationStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ContentLoading(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContentLoading(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DOMContentLoaded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DOMContentLoaded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NavigationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FrameNavigationStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameNavigationStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FrameContentLoading(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameContentLoading(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FrameDOMContentLoaded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameDOMContentLoaded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FrameNavigationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameNavigationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ScriptNotify(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScriptNotify(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LongRunningScriptDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LongRunningScriptDetected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UnsafeContentWarningDisplaying(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnsafeContentWarningDisplaying(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UnviewableContentIdentified(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnviewableContentIdentified(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PermissionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PermissionRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UnsupportedUriSchemeIdentified(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnsupportedUriSchemeIdentified(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NewWindowRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NewWindowRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ContainsFullScreenElementChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContainsFullScreenElementChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_WebResourceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_WebResourceRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddInitializeScript(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_PermissionType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Allow() noexcept = 0;
            virtual int32_t __stdcall Deny() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExecutionTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_StopPageScriptExecution(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StopPageScriptExecution(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSuccess(bool*) noexcept = 0;
            virtual int32_t __stdcall get_WebErrorStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Referrer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewWindow(void**) noexcept = 0;
            virtual int32_t __stdcall put_NewWindow(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlPermissionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_PermissionType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Defer() noexcept = 0;
            virtual int32_t __stdcall Allow() noexcept = 0;
            virtual int32_t __stdcall Deny() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PermissionRequest(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsJavaScriptEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsJavaScriptEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIndexedDBEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsIndexedDBEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsScriptNotifyAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsScriptNotifyAllowed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Referrer(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall put_Response(void*) noexcept = 0;
            virtual int32_t __stdcall get_Response(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControl
    {
        [[nodiscard]] auto Source() const;
        auto Source(Windows::Foundation::Uri const& source) const;
        [[nodiscard]] auto DocumentTitle() const;
        [[nodiscard]] auto CanGoBack() const;
        [[nodiscard]] auto CanGoForward() const;
        auto DefaultBackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto DefaultBackgroundColor() const;
        [[nodiscard]] auto ContainsFullScreenElement() const;
        [[nodiscard]] auto Settings() const;
        [[nodiscard]] auto DeferredPermissionRequests() const;
        auto GoForward() const;
        auto GoBack() const;
        auto Refresh() const;
        auto Stop() const;
        auto Navigate(Windows::Foundation::Uri const& source) const;
        auto NavigateToString(param::hstring const& text) const;
        auto NavigateToLocalStreamUri(Windows::Foundation::Uri const& source, Windows::Web::IUriToStreamResolver const& streamResolver) const;
        auto NavigateWithHttpRequestMessage(Windows::Web::Http::HttpRequestMessage const& requestMessage) const;
        auto InvokeScriptAsync(param::hstring const& scriptName, param::async_iterable<hstring> const& arguments) const;
        auto CapturePreviewToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto CaptureSelectedContentToDataPackageAsync() const;
        auto BuildLocalStreamUri(param::hstring const& contentIdentifier, param::hstring const& relativePath) const;
        auto GetDeferredPermissionRequestById(uint32_t id, Windows::Web::UI::WebViewControlDeferredPermissionRequest& result) const;
        auto NavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
        using NavigationStarting_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_NavigationStarting>;
        NavigationStarting_revoker NavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
        auto NavigationStarting(winrt::event_token const& token) const noexcept;
        auto ContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
        using ContentLoading_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_ContentLoading>;
        ContentLoading_revoker ContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
        auto ContentLoading(winrt::event_token const& token) const noexcept;
        auto DOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
        using DOMContentLoaded_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_DOMContentLoaded>;
        DOMContentLoaded_revoker DOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
        auto DOMContentLoaded(winrt::event_token const& token) const noexcept;
        auto NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
        using NavigationCompleted_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_NavigationCompleted>;
        NavigationCompleted_revoker NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
        auto NavigationCompleted(winrt::event_token const& token) const noexcept;
        auto FrameNavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
        using FrameNavigationStarting_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameNavigationStarting>;
        FrameNavigationStarting_revoker FrameNavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
        auto FrameNavigationStarting(winrt::event_token const& token) const noexcept;
        auto FrameContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
        using FrameContentLoading_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameContentLoading>;
        FrameContentLoading_revoker FrameContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
        auto FrameContentLoading(winrt::event_token const& token) const noexcept;
        auto FrameDOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
        using FrameDOMContentLoaded_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameDOMContentLoaded>;
        FrameDOMContentLoaded_revoker FrameDOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
        auto FrameDOMContentLoaded(winrt::event_token const& token) const noexcept;
        auto FrameNavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
        using FrameNavigationCompleted_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameNavigationCompleted>;
        FrameNavigationCompleted_revoker FrameNavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
        auto FrameNavigationCompleted(winrt::event_token const& token) const noexcept;
        auto ScriptNotify(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const;
        using ScriptNotify_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_ScriptNotify>;
        ScriptNotify_revoker ScriptNotify(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const;
        auto ScriptNotify(winrt::event_token const& token) const noexcept;
        auto LongRunningScriptDetected(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const;
        using LongRunningScriptDetected_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_LongRunningScriptDetected>;
        LongRunningScriptDetected_revoker LongRunningScriptDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const;
        auto LongRunningScriptDetected(winrt::event_token const& token) const noexcept;
        auto UnsafeContentWarningDisplaying(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        using UnsafeContentWarningDisplaying_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_UnsafeContentWarningDisplaying>;
        UnsafeContentWarningDisplaying_revoker UnsafeContentWarningDisplaying(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        auto UnsafeContentWarningDisplaying(winrt::event_token const& token) const noexcept;
        auto UnviewableContentIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const;
        using UnviewableContentIdentified_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_UnviewableContentIdentified>;
        UnviewableContentIdentified_revoker UnviewableContentIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const;
        auto UnviewableContentIdentified(winrt::event_token const& token) const noexcept;
        auto PermissionRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const;
        using PermissionRequested_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_PermissionRequested>;
        PermissionRequested_revoker PermissionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const;
        auto PermissionRequested(winrt::event_token const& token) const noexcept;
        auto UnsupportedUriSchemeIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const;
        using UnsupportedUriSchemeIdentified_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_UnsupportedUriSchemeIdentified>;
        UnsupportedUriSchemeIdentified_revoker UnsupportedUriSchemeIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const;
        auto UnsupportedUriSchemeIdentified(winrt::event_token const& token) const noexcept;
        auto NewWindowRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const;
        using NewWindowRequested_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_NewWindowRequested>;
        NewWindowRequested_revoker NewWindowRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const;
        auto NewWindowRequested(winrt::event_token const& token) const noexcept;
        auto ContainsFullScreenElementChanged(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        using ContainsFullScreenElementChanged_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_ContainsFullScreenElementChanged>;
        ContainsFullScreenElementChanged_revoker ContainsFullScreenElementChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        auto ContainsFullScreenElementChanged(winrt::event_token const& token) const noexcept;
        auto WebResourceRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const;
        using WebResourceRequested_revoker = impl::event_revoker<Windows::Web::UI::IWebViewControl, &impl::abi_t<Windows::Web::UI::IWebViewControl>::remove_WebResourceRequested>;
        WebResourceRequested_revoker WebResourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const;
        auto WebResourceRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControl>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControl<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControl2
    {
        auto AddInitializeScript(param::hstring const& script) const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControl2>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlContentLoadingEventArgs
    {
        [[nodiscard]] auto Uri() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlContentLoadingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs
    {
        [[nodiscard]] auto Uri() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto PermissionType() const;
        auto Allow() const;
        auto Deny() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs
    {
        [[nodiscard]] auto ExecutionTime() const;
        [[nodiscard]] auto StopPageScriptExecution() const;
        auto StopPageScriptExecution(bool value) const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto IsSuccess() const;
        [[nodiscard]] auto WebErrorStatus() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Referrer() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs2
    {
        [[nodiscard]] auto NewWindow() const;
        auto NewWindow(Windows::Web::UI::IWebViewControl const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlPermissionRequest
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto PermissionType() const;
        [[nodiscard]] auto State() const;
        auto Defer() const;
        auto Allow() const;
        auto Deny() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlPermissionRequest>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs
    {
        [[nodiscard]] auto PermissionRequest() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlSettings
    {
        auto IsJavaScriptEnabled(bool value) const;
        [[nodiscard]] auto IsJavaScriptEnabled() const;
        auto IsIndexedDBEnabled(bool value) const;
        [[nodiscard]] auto IsIndexedDBEnabled() const;
        auto IsScriptNotifyAllowed(bool value) const;
        [[nodiscard]] auto IsScriptNotifyAllowed() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlSettings>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Referrer() const;
        [[nodiscard]] auto MediaType() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto Request() const;
        auto Response(Windows::Web::Http::HttpResponseMessage const& value) const;
        [[nodiscard]] auto Response() const;
    };
    template <> struct consume<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>;
    };
}
#endif
