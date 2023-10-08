// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ApplicationSettings_2_H
#define WINRT_Windows_UI_ApplicationSettings_2_H
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.ApplicationSettings.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings
{
    struct CredentialCommandCredentialDeletedHandler : Windows::Foundation::IUnknown
    {
        CredentialCommandCredentialDeletedHandler(std::nullptr_t = nullptr) noexcept {}
        CredentialCommandCredentialDeletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CredentialCommandCredentialDeletedHandler(L lambda);
        template <typename F> CredentialCommandCredentialDeletedHandler(F* function);
        template <typename O, typename M> CredentialCommandCredentialDeletedHandler(O* object, M method);
        template <typename O, typename M> CredentialCommandCredentialDeletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> CredentialCommandCredentialDeletedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::ApplicationSettings::CredentialCommand const& command) const;
    };
    struct WebAccountCommandInvokedHandler : Windows::Foundation::IUnknown
    {
        WebAccountCommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
        WebAccountCommandInvokedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WebAccountCommandInvokedHandler(L lambda);
        template <typename F> WebAccountCommandInvokedHandler(F* function);
        template <typename O, typename M> WebAccountCommandInvokedHandler(O* object, M method);
        template <typename O, typename M> WebAccountCommandInvokedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WebAccountCommandInvokedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::ApplicationSettings::WebAccountCommand const& command, Windows::UI::ApplicationSettings::WebAccountInvokedArgs const& args) const;
    };
    struct WebAccountProviderCommandInvokedHandler : Windows::Foundation::IUnknown
    {
        WebAccountProviderCommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
        WebAccountProviderCommandInvokedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WebAccountProviderCommandInvokedHandler(L lambda);
        template <typename F> WebAccountProviderCommandInvokedHandler(F* function);
        template <typename O, typename M> WebAccountProviderCommandInvokedHandler(O* object, M method);
        template <typename O, typename M> WebAccountProviderCommandInvokedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WebAccountProviderCommandInvokedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::ApplicationSettings::WebAccountProviderCommand const& command) const;
    };
    struct __declspec(empty_bases) AccountsSettingsPane : Windows::UI::ApplicationSettings::IAccountsSettingsPane
    {
        AccountsSettingsPane(std::nullptr_t) noexcept {}
        AccountsSettingsPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IAccountsSettingsPane(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto Show();
        static auto ShowManageAccountsAsync();
        static auto ShowAddAccountAsync();
        static auto ShowManageAccountsForUserAsync(Windows::System::User const& user);
        static auto ShowAddAccountForUserAsync(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) AccountsSettingsPaneCommandsRequestedEventArgs : Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs,
        impl::require<AccountsSettingsPaneCommandsRequestedEventArgs, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        AccountsSettingsPaneCommandsRequestedEventArgs(std::nullptr_t) noexcept {}
        AccountsSettingsPaneCommandsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccountsSettingsPaneEventDeferral : Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral
    {
        AccountsSettingsPaneEventDeferral(std::nullptr_t) noexcept {}
        AccountsSettingsPaneEventDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CredentialCommand : Windows::UI::ApplicationSettings::ICredentialCommand
    {
        CredentialCommand(std::nullptr_t) noexcept {}
        CredentialCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::ICredentialCommand(ptr, take_ownership_from_abi) {}
        explicit CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential);
        CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted);
    };
    struct __declspec(empty_bases) SettingsCommand : Windows::UI::Popups::IUICommand
    {
        SettingsCommand(std::nullptr_t) noexcept {}
        SettingsCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Popups::IUICommand(ptr, take_ownership_from_abi) {}
        SettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler);
        [[nodiscard]] static auto AccountsCommand();
    };
    struct __declspec(empty_bases) SettingsPane : Windows::UI::ApplicationSettings::ISettingsPane
    {
        SettingsPane(std::nullptr_t) noexcept {}
        SettingsPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::ISettingsPane(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto Show();
        [[nodiscard]] static auto Edge();
    };
    struct __declspec(empty_bases) SettingsPaneCommandsRequest : Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest
    {
        SettingsPaneCommandsRequest(std::nullptr_t) noexcept {}
        SettingsPaneCommandsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SettingsPaneCommandsRequestedEventArgs : Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs
    {
        SettingsPaneCommandsRequestedEventArgs(std::nullptr_t) noexcept {}
        SettingsPaneCommandsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountCommand : Windows::UI::ApplicationSettings::IWebAccountCommand
    {
        WebAccountCommand(std::nullptr_t) noexcept {}
        WebAccountCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IWebAccountCommand(ptr, take_ownership_from_abi) {}
        WebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions);
    };
    struct __declspec(empty_bases) WebAccountInvokedArgs : Windows::UI::ApplicationSettings::IWebAccountInvokedArgs
    {
        WebAccountInvokedArgs(std::nullptr_t) noexcept {}
        WebAccountInvokedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IWebAccountInvokedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderCommand : Windows::UI::ApplicationSettings::IWebAccountProviderCommand
    {
        WebAccountProviderCommand(std::nullptr_t) noexcept {}
        WebAccountProviderCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ApplicationSettings::IWebAccountProviderCommand(ptr, take_ownership_from_abi) {}
        WebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked);
    };
}
#endif
