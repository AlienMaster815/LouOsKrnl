// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ApplicationSettings_1_H
#define WINRT_Windows_UI_ApplicationSettings_1_H
#include "winrt/impl/Windows.UI.ApplicationSettings.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings
{
    struct __declspec(empty_bases) IAccountsSettingsPane :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPane>
    {
        IAccountsSettingsPane(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneCommandsRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneCommandsRequestedEventArgs>
    {
        IAccountsSettingsPaneCommandsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneCommandsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneCommandsRequestedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneCommandsRequestedEventArgs2>
    {
        IAccountsSettingsPaneCommandsRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneCommandsRequestedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneEventDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneEventDeferral>
    {
        IAccountsSettingsPaneEventDeferral(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneEventDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneStatics>
    {
        IAccountsSettingsPaneStatics(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneStatics2>,
        impl::require<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
    {
        IAccountsSettingsPaneStatics2(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAccountsSettingsPaneStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAccountsSettingsPaneStatics3>
    {
        IAccountsSettingsPaneStatics3(std::nullptr_t = nullptr) noexcept {}
        IAccountsSettingsPaneStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICredentialCommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICredentialCommand>
    {
        ICredentialCommand(std::nullptr_t = nullptr) noexcept {}
        ICredentialCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICredentialCommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICredentialCommandFactory>
    {
        ICredentialCommandFactory(std::nullptr_t = nullptr) noexcept {}
        ICredentialCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsCommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsCommandFactory>
    {
        ISettingsCommandFactory(std::nullptr_t = nullptr) noexcept {}
        ISettingsCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsCommandStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsCommandStatics>
    {
        ISettingsCommandStatics(std::nullptr_t = nullptr) noexcept {}
        ISettingsCommandStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsPane :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsPane>
    {
        ISettingsPane(std::nullptr_t = nullptr) noexcept {}
        ISettingsPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsPaneCommandsRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsPaneCommandsRequest>
    {
        ISettingsPaneCommandsRequest(std::nullptr_t = nullptr) noexcept {}
        ISettingsPaneCommandsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsPaneCommandsRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsPaneCommandsRequestedEventArgs>
    {
        ISettingsPaneCommandsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISettingsPaneCommandsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISettingsPaneStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISettingsPaneStatics>
    {
        ISettingsPaneStatics(std::nullptr_t = nullptr) noexcept {}
        ISettingsPaneStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountCommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountCommand>
    {
        IWebAccountCommand(std::nullptr_t = nullptr) noexcept {}
        IWebAccountCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountCommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountCommandFactory>
    {
        IWebAccountCommandFactory(std::nullptr_t = nullptr) noexcept {}
        IWebAccountCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountInvokedArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountInvokedArgs>
    {
        IWebAccountInvokedArgs(std::nullptr_t = nullptr) noexcept {}
        IWebAccountInvokedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderCommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderCommand>
    {
        IWebAccountProviderCommand(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderCommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderCommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderCommandFactory>
    {
        IWebAccountProviderCommandFactory(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
