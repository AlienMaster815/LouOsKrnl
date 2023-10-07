// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Core_2_H
#define WINRT_Windows_ApplicationModel_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct __declspec(empty_bases) AppListEntry : Windows::ApplicationModel::Core::IAppListEntry,
        impl::require<AppListEntry, Windows::ApplicationModel::Core::IAppListEntry2, Windows::ApplicationModel::Core::IAppListEntry3, Windows::ApplicationModel::Core::IAppListEntry4>
    {
        AppListEntry(std::nullptr_t) noexcept {}
        AppListEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::IAppListEntry(ptr, take_ownership_from_abi) {}
    };
    struct CoreApplication
    {
        CoreApplication() = delete;
        [[nodiscard]] static auto Id();
        static auto Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler);
        using Suspending_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending>;
        [[nodiscard]] static Suspending_revoker Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler);
        static auto Suspending(winrt::event_token const& token);
        static auto Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using Resuming_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming>;
        [[nodiscard]] static Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto Resuming(winrt::event_token const& token);
        [[nodiscard]] static auto Properties();
        static auto GetCurrentView();
        static auto Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
        static auto RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback);
        static auto BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
        using BackgroundActivated_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated>;
        [[nodiscard]] static BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
        static auto BackgroundActivated(winrt::event_token const& token);
        static auto LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
        using LeavingBackground_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground>;
        [[nodiscard]] static LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
        static auto LeavingBackground(winrt::event_token const& token);
        static auto EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
        using EnteredBackground_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground>;
        [[nodiscard]] static EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
        static auto EnteredBackground(winrt::event_token const& token);
        static auto EnablePrelaunch(bool value);
        static auto RequestRestartAsync(param::hstring const& launchArguments);
        static auto RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments);
        static auto Exit();
        static auto Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using Exiting_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting>;
        [[nodiscard]] static Exiting_revoker Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto Exiting(winrt::event_token const& token);
        static auto UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
        using UnhandledErrorDetected_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected>;
        [[nodiscard]] static UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
        static auto UnhandledErrorDetected(winrt::event_token const& token);
        static auto IncrementApplicationUseCount();
        static auto DecrementApplicationUseCount();
        [[nodiscard]] static auto Views();
        static auto CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint);
        [[nodiscard]] static auto MainView();
        static auto CreateNewView();
        static auto CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
    };
    struct __declspec(empty_bases) CoreApplicationView : Windows::ApplicationModel::Core::ICoreApplicationView,
        impl::require<CoreApplicationView, Windows::ApplicationModel::Core::ICoreApplicationView2, Windows::ApplicationModel::Core::ICoreApplicationView3, Windows::ApplicationModel::Core::ICoreApplicationView5, Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        CoreApplicationView(std::nullptr_t) noexcept {}
        CoreApplicationView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::ICoreApplicationView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreApplicationViewTitleBar : Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar
    {
        CoreApplicationViewTitleBar(std::nullptr_t) noexcept {}
        CoreApplicationViewTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HostedViewClosingEventArgs : Windows::ApplicationModel::Core::IHostedViewClosingEventArgs
    {
        HostedViewClosingEventArgs(std::nullptr_t) noexcept {}
        HostedViewClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::IHostedViewClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UnhandledError : Windows::ApplicationModel::Core::IUnhandledError
    {
        UnhandledError(std::nullptr_t) noexcept {}
        UnhandledError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::IUnhandledError(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UnhandledErrorDetectedEventArgs : Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs
    {
        UnhandledErrorDetectedEventArgs(std::nullptr_t) noexcept {}
        UnhandledErrorDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
