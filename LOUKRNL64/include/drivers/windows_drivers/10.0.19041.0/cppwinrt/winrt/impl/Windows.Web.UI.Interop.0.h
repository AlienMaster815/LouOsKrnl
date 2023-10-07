// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_UI_Interop_0_H
#define WINRT_Windows_Web_UI_Interop_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::System
{
    enum class VirtualKey : int32_t;
}
namespace winrt::Windows::UI::Core
{
    enum class CoreAcceleratorKeyEventType : int32_t;
    struct CorePhysicalKeyStatus;
}
namespace winrt::Windows::Web::UI
{
    struct IWebViewControl;
}
namespace winrt::Windows::Web::UI::Interop
{
    enum class WebViewControlAcceleratorKeyRoutingStage : int32_t
    {
        Tunneling = 0,
        Bubbling = 1,
    };
    enum class WebViewControlMoveFocusReason : int32_t
    {
        Programmatic = 0,
        Next = 1,
        Previous = 2,
    };
    enum class WebViewControlProcessCapabilityState : int32_t
    {
        Default = 0,
        Disabled = 1,
        Enabled = 2,
    };
    struct IWebViewControlAcceleratorKeyPressedEventArgs;
    struct IWebViewControlMoveFocusRequestedEventArgs;
    struct IWebViewControlProcess;
    struct IWebViewControlProcessFactory;
    struct IWebViewControlProcessOptions;
    struct IWebViewControlSite;
    struct IWebViewControlSite2;
    struct WebViewControl;
    struct WebViewControlAcceleratorKeyPressedEventArgs;
    struct WebViewControlMoveFocusRequestedEventArgs;
    struct WebViewControlProcess;
    struct WebViewControlProcessOptions;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlSite>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlProcess>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlProcessOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlAcceleratorKeyPressedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlMoveFocusRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcess" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcessFactory" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcessOptions" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlSite>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlSite" };
    };
    template <> struct name<Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlSite2" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControl>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControl" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlAcceleratorKeyPressedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlMoveFocusRequestedEventArgs" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlProcess>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcess" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlProcessOptions>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcessOptions" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlAcceleratorKeyRoutingStage" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlMoveFocusReason" };
    };
    template <> struct name<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>
    {
        static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcessCapabilityState" };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        static constexpr guid value{ 0x77A2A53E,0x7C74,0x437D,{ 0xA2,0x90,0x3A,0xC0,0xD8,0xCD,0x56,0x55 } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        static constexpr guid value{ 0x6B2A340D,0x4BD0,0x405E,{ 0xB7,0xC1,0x1E,0x72,0xA4,0x92,0xF4,0x46 } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        static constexpr guid value{ 0x02C723EC,0x98D6,0x424A,{ 0xB6,0x3E,0xC6,0x13,0x6C,0x36,0xA0,0xF2 } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        static constexpr guid value{ 0x47B65CF9,0xA2D2,0x453C,{ 0xB0,0x97,0xF6,0x77,0x9D,0x4B,0x8E,0x02 } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        static constexpr guid value{ 0x1CCA72A7,0x3BD6,0x4826,{ 0x82,0x61,0x6C,0x81,0x89,0x50,0x5D,0x89 } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlSite>
    {
        static constexpr guid value{ 0x133F47C6,0x12DC,0x4898,{ 0xBD,0x47,0x04,0x96,0x7D,0xE6,0x48,0xBA } };
    };
    template <> struct guid_storage<Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        static constexpr guid value{ 0xD13B2E3F,0x48EE,0x4730,{ 0x82,0x43,0xD2,0xED,0x0C,0x05,0x60,0x6A } };
    };
    template <> struct default_interface<Windows::Web::UI::Interop::WebViewControl>
    {
        using type = Windows::Web::UI::IWebViewControl;
    };
    template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>
    {
        using type = Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>
    {
        using type = Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlProcess>
    {
        using type = Windows::Web::UI::Interop::IWebViewControlProcess;
    };
    template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlProcessOptions>
    {
        using type = Windows::Web::UI::Interop::IWebViewControlProcessOptions;
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VirtualKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
            virtual int32_t __stdcall get_RoutingStage(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProcessId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPrivateNetworkClientServerCapabilityEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall CreateWebViewControlAsync(int64_t, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall GetWebViewControls(void**) noexcept = 0;
            virtual int32_t __stdcall Terminate() noexcept = 0;
            virtual int32_t __stdcall add_ProcessExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProcessExited(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithOptions(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_EnterpriseId(void*) noexcept = 0;
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrivateNetworkClientServerCapability(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PrivateNetworkClientServerCapability(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlSite>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Process(void**) noexcept = 0;
            virtual int32_t __stdcall put_Scale(double) noexcept = 0;
            virtual int32_t __stdcall get_Scale(double*) noexcept = 0;
            virtual int32_t __stdcall put_Bounds(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_IsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
            virtual int32_t __stdcall MoveFocus(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_MoveFocusRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MoveFocusRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AcceleratorKeyPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AcceleratorKeyPressed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs
    {
        [[nodiscard]] auto EventType() const;
        [[nodiscard]] auto VirtualKey() const;
        [[nodiscard]] auto KeyStatus() const;
        [[nodiscard]] auto RoutingStage() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlProcess
    {
        [[nodiscard]] auto ProcessId() const;
        [[nodiscard]] auto EnterpriseId() const;
        [[nodiscard]] auto IsPrivateNetworkClientServerCapabilityEnabled() const;
        auto CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect const& bounds) const;
        auto GetWebViewControls() const;
        auto Terminate() const;
        auto ProcessExited(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const;
        using ProcessExited_revoker = impl::event_revoker<Windows::Web::UI::Interop::IWebViewControlProcess, &impl::abi_t<Windows::Web::UI::Interop::IWebViewControlProcess>::remove_ProcessExited>;
        ProcessExited_revoker ProcessExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const;
        auto ProcessExited(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcess>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory
    {
        auto CreateWithOptions(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) const;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcessFactory>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions
    {
        auto EnterpriseId(param::hstring const& value) const;
        [[nodiscard]] auto EnterpriseId() const;
        auto PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const& value) const;
        [[nodiscard]] auto PrivateNetworkClientServerCapability() const;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcessOptions>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlSite
    {
        [[nodiscard]] auto Process() const;
        auto Scale(double value) const;
        [[nodiscard]] auto Scale() const;
        auto Bounds(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] auto Bounds() const;
        auto IsVisible(bool value) const;
        [[nodiscard]] auto IsVisible() const;
        auto Close() const;
        auto MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason const& reason) const;
        auto MoveFocusRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const;
        using MoveFocusRequested_revoker = impl::event_revoker<Windows::Web::UI::Interop::IWebViewControlSite, &impl::abi_t<Windows::Web::UI::Interop::IWebViewControlSite>::remove_MoveFocusRequested>;
        MoveFocusRequested_revoker MoveFocusRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const;
        auto MoveFocusRequested(winrt::event_token const& token) const noexcept;
        auto AcceleratorKeyPressed(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const;
        using AcceleratorKeyPressed_revoker = impl::event_revoker<Windows::Web::UI::Interop::IWebViewControlSite, &impl::abi_t<Windows::Web::UI::Interop::IWebViewControlSite>::remove_AcceleratorKeyPressed>;
        AcceleratorKeyPressed_revoker AcceleratorKeyPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const;
        auto AcceleratorKeyPressed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlSite>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlSite<D>;
    };
    template <typename D>
    struct consume_Windows_Web_UI_Interop_IWebViewControlSite2
    {
        auto GotFocus(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::Web::UI::Interop::IWebViewControlSite2, &impl::abi_t<Windows::Web::UI::Interop::IWebViewControlSite2>::remove_GotFocus>;
        GotFocus_revoker GotFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        auto GotFocus(winrt::event_token const& token) const noexcept;
        auto LostFocus(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        using LostFocus_revoker = impl::event_revoker<Windows::Web::UI::Interop::IWebViewControlSite2, &impl::abi_t<Windows::Web::UI::Interop::IWebViewControlSite2>::remove_LostFocus>;
        LostFocus_revoker LostFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Foundation::IInspectable> const& handler) const;
        auto LostFocus(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlSite2<D>;
    };
}
#endif
