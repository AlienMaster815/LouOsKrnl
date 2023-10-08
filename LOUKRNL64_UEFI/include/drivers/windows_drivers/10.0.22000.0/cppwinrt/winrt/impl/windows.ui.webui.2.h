// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WebUI_2_H
#define WINRT_Windows_UI_WebUI_2_H
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.UI.1.h"
#include "winrt/impl/Windows.UI.WebUI.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI
{
    struct ActivatedEventHandler : Windows::Foundation::IUnknown
    {
        ActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ActivatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ActivatedEventHandler(L lambda);
        template <typename F> ActivatedEventHandler(F* function);
        template <typename O, typename M> ActivatedEventHandler(O* object, M method);
        template <typename O, typename M> ActivatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ActivatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::Activation::IActivatedEventArgs const& eventArgs) const;
    };
    struct BackgroundActivatedEventHandler : Windows::Foundation::IUnknown
    {
        BackgroundActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        BackgroundActivatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> BackgroundActivatedEventHandler(L lambda);
        template <typename F> BackgroundActivatedEventHandler(F* function);
        template <typename O, typename M> BackgroundActivatedEventHandler(O* object, M method);
        template <typename O, typename M> BackgroundActivatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> BackgroundActivatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs const& eventArgs) const;
    };
    struct EnteredBackgroundEventHandler : Windows::Foundation::IUnknown
    {
        EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        EnteredBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> EnteredBackgroundEventHandler(L lambda);
        template <typename F> EnteredBackgroundEventHandler(F* function);
        template <typename O, typename M> EnteredBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> EnteredBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::IEnteredBackgroundEventArgs const& e) const;
    };
    struct LeavingBackgroundEventHandler : Windows::Foundation::IUnknown
    {
        LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
        LeavingBackgroundEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> LeavingBackgroundEventHandler(L lambda);
        template <typename F> LeavingBackgroundEventHandler(F* function);
        template <typename O, typename M> LeavingBackgroundEventHandler(O* object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> LeavingBackgroundEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ILeavingBackgroundEventArgs const& e) const;
    };
    struct NavigatedEventHandler : Windows::Foundation::IUnknown
    {
        NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NavigatedEventHandler(L lambda);
        template <typename F> NavigatedEventHandler(F* function);
        template <typename O, typename M> NavigatedEventHandler(O* object, M method);
        template <typename O, typename M> NavigatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::WebUI::IWebUINavigatedEventArgs const& e) const;
    };
    struct ResumingEventHandler : Windows::Foundation::IUnknown
    {
        ResumingEventHandler(std::nullptr_t = nullptr) noexcept {}
        ResumingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ResumingEventHandler(L lambda);
        template <typename F> ResumingEventHandler(F* function);
        template <typename O, typename M> ResumingEventHandler(O* object, M method);
        template <typename O, typename M> ResumingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ResumingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender) const;
    };
    struct SuspendingEventHandler : Windows::Foundation::IUnknown
    {
        SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
        SuspendingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SuspendingEventHandler(L lambda);
        template <typename F> SuspendingEventHandler(F* function);
        template <typename O, typename M> SuspendingEventHandler(O* object, M method);
        template <typename O, typename M> SuspendingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SuspendingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ISuspendingEventArgs const& e) const;
    };
    struct __declspec(empty_bases) ActivatedDeferral : Windows::UI::WebUI::IActivatedDeferral
    {
        ActivatedDeferral(std::nullptr_t) noexcept {}
        ActivatedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IActivatedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivatedOperation : Windows::UI::WebUI::IActivatedOperation
    {
        ActivatedOperation(std::nullptr_t) noexcept {}
        ActivatedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IActivatedOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BackgroundActivatedEventArgs : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs
    {
        BackgroundActivatedEventArgs(std::nullptr_t) noexcept {}
        BackgroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EnteredBackgroundEventArgs : Windows::ApplicationModel::IEnteredBackgroundEventArgs
    {
        EnteredBackgroundEventArgs(std::nullptr_t) noexcept {}
        EnteredBackgroundEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::IEnteredBackgroundEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HtmlPrintDocumentSource : Windows::UI::WebUI::IHtmlPrintDocumentSource,
        impl::require<HtmlPrintDocumentSource, Windows::Foundation::IClosable>
    {
        HtmlPrintDocumentSource(std::nullptr_t) noexcept {}
        HtmlPrintDocumentSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IHtmlPrintDocumentSource(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LeavingBackgroundEventArgs : Windows::ApplicationModel::ILeavingBackgroundEventArgs
    {
        LeavingBackgroundEventArgs(std::nullptr_t) noexcept {}
        LeavingBackgroundEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ILeavingBackgroundEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NewWebUIViewCreatedEventArgs : Windows::UI::WebUI::INewWebUIViewCreatedEventArgs
    {
        NewWebUIViewCreatedEventArgs(std::nullptr_t) noexcept {}
        NewWebUIViewCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::INewWebUIViewCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SuspendingDeferral : Windows::ApplicationModel::ISuspendingDeferral
    {
        SuspendingDeferral(std::nullptr_t) noexcept {}
        SuspendingDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ISuspendingDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SuspendingEventArgs : Windows::ApplicationModel::ISuspendingEventArgs
    {
        SuspendingEventArgs(std::nullptr_t) noexcept {}
        SuspendingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ISuspendingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SuspendingOperation : Windows::ApplicationModel::ISuspendingOperation
    {
        SuspendingOperation(std::nullptr_t) noexcept {}
        SuspendingOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::ISuspendingOperation(ptr, take_ownership_from_abi) {}
    };
    struct WebUIApplication
    {
        WebUIApplication() = delete;
        static auto Activated(Windows::UI::WebUI::ActivatedEventHandler const& handler);
        using Activated_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Activated>;
        [[nodiscard]] static Activated_revoker Activated(auto_revoke_t, Windows::UI::WebUI::ActivatedEventHandler const& handler);
        static auto Activated(winrt::event_token const& token);
        static auto Suspending(Windows::UI::WebUI::SuspendingEventHandler const& handler);
        using Suspending_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Suspending>;
        [[nodiscard]] static Suspending_revoker Suspending(auto_revoke_t, Windows::UI::WebUI::SuspendingEventHandler const& handler);
        static auto Suspending(winrt::event_token const& token);
        static auto Resuming(Windows::UI::WebUI::ResumingEventHandler const& handler);
        using Resuming_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Resuming>;
        [[nodiscard]] static Resuming_revoker Resuming(auto_revoke_t, Windows::UI::WebUI::ResumingEventHandler const& handler);
        static auto Resuming(winrt::event_token const& token);
        static auto Navigated(Windows::UI::WebUI::NavigatedEventHandler const& handler);
        using Navigated_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics>::remove_Navigated>;
        [[nodiscard]] static Navigated_revoker Navigated(auto_revoke_t, Windows::UI::WebUI::NavigatedEventHandler const& handler);
        static auto Navigated(winrt::event_token const& token);
        static auto LeavingBackground(Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler);
        using LeavingBackground_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_LeavingBackground>;
        [[nodiscard]] static LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler);
        static auto LeavingBackground(winrt::event_token const& token);
        static auto EnteredBackground(Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler);
        using EnteredBackground_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics2>::remove_EnteredBackground>;
        [[nodiscard]] static EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler);
        static auto EnteredBackground(winrt::event_token const& token);
        static auto EnablePrelaunch(bool value);
        static auto RequestRestartAsync(param::hstring const& launchArguments);
        static auto RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments);
        static auto NewWebUIViewCreated(Windows::Foundation::EventHandler<Windows::UI::WebUI::NewWebUIViewCreatedEventArgs> const& handler);
        using NewWebUIViewCreated_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics4, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics4>::remove_NewWebUIViewCreated>;
        [[nodiscard]] static NewWebUIViewCreated_revoker NewWebUIViewCreated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::WebUI::NewWebUIViewCreatedEventArgs> const& handler);
        static auto NewWebUIViewCreated(winrt::event_token const& token);
        static auto BackgroundActivated(Windows::UI::WebUI::BackgroundActivatedEventHandler const& handler);
        using BackgroundActivated_revoker = impl::factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics4, &impl::abi_t<Windows::UI::WebUI::IWebUIActivationStatics4>::remove_BackgroundActivated>;
        [[nodiscard]] static BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::UI::WebUI::BackgroundActivatedEventHandler const& handler);
        static auto BackgroundActivated(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) WebUIAppointmentsProviderAddAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs,
        impl::require<WebUIAppointmentsProviderAddAppointmentActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIAppointmentsProviderAddAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs,
        impl::require<WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs,
        impl::require<WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs,
        impl::require<WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs,
        impl::require<WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WebUIBackgroundTaskInstance
    {
        WebUIBackgroundTaskInstance() = delete;
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) WebUIBackgroundTaskInstanceRuntimeClass : Windows::UI::WebUI::IWebUIBackgroundTaskInstance,
        impl::require<WebUIBackgroundTaskInstanceRuntimeClass, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        WebUIBackgroundTaskInstanceRuntimeClass(std::nullptr_t) noexcept {}
        WebUIBackgroundTaskInstanceRuntimeClass(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IWebUIBackgroundTaskInstance(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIBarcodeScannerPreviewActivatedEventArgs : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs,
        impl::require<WebUIBarcodeScannerPreviewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIBarcodeScannerPreviewActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIBarcodeScannerPreviewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUICachedFileUpdaterActivatedEventArgs : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs,
        impl::require<WebUICachedFileUpdaterActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUICachedFileUpdaterActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUICachedFileUpdaterActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUICameraSettingsActivatedEventArgs : Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs,
        impl::require<WebUICameraSettingsActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUICameraSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUICameraSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUICommandLineActivatedEventArgs : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs,
        impl::require<WebUICommandLineActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUICommandLineActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUICommandLineActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactCallActivatedEventArgs : Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs,
        impl::require<WebUIContactCallActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactCallActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactMapActivatedEventArgs : Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs,
        impl::require<WebUIContactMapActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactMapActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactMapActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactMessageActivatedEventArgs : Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs,
        impl::require<WebUIContactMessageActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactMessageActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactMessageActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactPanelActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs,
        impl::require<WebUIContactPanelActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIContactPanelActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactPanelActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactPickerActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs,
        impl::require<WebUIContactPickerActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactPickerActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactPostActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs,
        impl::require<WebUIContactPostActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactPostActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactPostActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIContactVideoCallActivatedEventArgs : Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs,
        impl::require<WebUIContactVideoCallActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIContactVideoCallActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIContactVideoCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIDeviceActivatedEventArgs : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs,
        impl::require<WebUIDeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIDeviceActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIDeviceActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIDevicePairingActivatedEventArgs : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs,
        impl::require<WebUIDevicePairingActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIDevicePairingActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIDevicePairingActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIDialReceiverActivatedEventArgs : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs,
        impl::require<WebUIDialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIDialReceiverActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIDialReceiverActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFileActivatedEventArgs : Windows::ApplicationModel::Activation::IFileActivatedEventArgs,
        impl::require<WebUIFileActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFileActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIFileActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFileOpenPickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs,
        impl::require<WebUIFileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFileOpenPickerActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIFileOpenPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFileOpenPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs,
        impl::require<WebUIFileOpenPickerContinuationEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFileOpenPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebUIFileOpenPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFileSavePickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs,
        impl::require<WebUIFileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFileSavePickerActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIFileSavePickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFileSavePickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs,
        impl::require<WebUIFileSavePickerContinuationEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFileSavePickerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebUIFileSavePickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIFolderPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs,
        impl::require<WebUIFolderPickerContinuationEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIFolderPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebUIFolderPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUILaunchActivatedEventArgs : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,
        impl::require<WebUILaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    {
        WebUILaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUILaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUILockScreenActivatedEventArgs : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs,
        impl::require<WebUILockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUILockScreenActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUILockScreenActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUILockScreenCallActivatedEventArgs : Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs,
        impl::require<WebUILockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUILockScreenCallActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUILockScreenCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUILockScreenComponentActivatedEventArgs : Windows::ApplicationModel::Activation::IActivatedEventArgs,
        impl::require<WebUILockScreenComponentActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUILockScreenComponentActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUILockScreenComponentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUINavigatedDeferral : Windows::UI::WebUI::IWebUINavigatedDeferral
    {
        WebUINavigatedDeferral(std::nullptr_t) noexcept {}
        WebUINavigatedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IWebUINavigatedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUINavigatedEventArgs : Windows::UI::WebUI::IWebUINavigatedEventArgs
    {
        WebUINavigatedEventArgs(std::nullptr_t) noexcept {}
        WebUINavigatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IWebUINavigatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUINavigatedOperation : Windows::UI::WebUI::IWebUINavigatedOperation
    {
        WebUINavigatedOperation(std::nullptr_t) noexcept {}
        WebUINavigatedOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IWebUINavigatedOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIPhoneCallActivatedEventArgs : Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs,
        impl::require<WebUIPhoneCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIPhoneCallActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIPhoneCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIPrint3DWorkflowActivatedEventArgs : Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs,
        impl::require<WebUIPrint3DWorkflowActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIPrint3DWorkflowActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIPrint3DWorkflowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIPrintTaskSettingsActivatedEventArgs : Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs,
        impl::require<WebUIPrintTaskSettingsActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIPrintTaskSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIPrintTaskSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIPrintWorkflowForegroundTaskActivatedEventArgs : Windows::ApplicationModel::Activation::IActivatedEventArgs,
        impl::require<WebUIPrintWorkflowForegroundTaskActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIPrintWorkflowForegroundTaskActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIPrintWorkflowForegroundTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIProtocolActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,
        impl::require<WebUIProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIProtocolActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIProtocolActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIProtocolForResultsActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs,
        impl::require<WebUIProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIProtocolForResultsActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIProtocolForResultsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIRestrictedLaunchActivatedEventArgs : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs,
        impl::require<WebUIRestrictedLaunchActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIRestrictedLaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIRestrictedLaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUISearchActivatedEventArgs : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs,
        impl::require<WebUISearchActivatedEventArgs, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUISearchActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUISearchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIShareTargetActivatedEventArgs : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs,
        impl::require<WebUIShareTargetActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIShareTargetActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIShareTargetActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIStartupTaskActivatedEventArgs : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs,
        impl::require<WebUIStartupTaskActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIStartupTaskActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIStartupTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIToastNotificationActivatedEventArgs : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs,
        impl::require<WebUIToastNotificationActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIToastNotificationActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIToastNotificationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIUserDataAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs,
        impl::require<WebUIUserDataAccountProviderActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIUserDataAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIUserDataAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIView : Windows::UI::WebUI::IWebUIView,
        impl::require<WebUIView, Windows::Web::UI::IWebViewControl, Windows::Web::UI::IWebViewControl2>
    {
        WebUIView(std::nullptr_t) noexcept {}
        WebUIView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::IWebUIView(ptr, take_ownership_from_abi) {}
        static auto CreateAsync();
        static auto CreateAsync(Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) WebUIVoiceCommandActivatedEventArgs : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs,
        impl::require<WebUIVoiceCommandActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIVoiceCommandActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIVoiceCommandActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIWalletActionActivatedEventArgs : Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs,
        impl::require<WebUIWalletActionActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIWalletActionActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIWalletActionActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIWebAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs,
        impl::require<WebUIWebAccountProviderActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebUIWebAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        WebUIWebAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUIWebAuthenticationBrokerContinuationEventArgs : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs,
        impl::require<WebUIWebAuthenticationBrokerContinuationEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
    {
        WebUIWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebUIWebAuthenticationBrokerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
