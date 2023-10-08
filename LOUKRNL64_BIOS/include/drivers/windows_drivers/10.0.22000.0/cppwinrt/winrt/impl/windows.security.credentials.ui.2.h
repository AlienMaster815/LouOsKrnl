// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Credentials_UI_2_H
#define WINRT_Windows_Security_Credentials_UI_2_H
#include "winrt/impl/Windows.Security.Credentials.UI.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Credentials::UI
{
    struct CredentialPicker
    {
        CredentialPicker() = delete;
        static auto PickAsync(Windows::Security::Credentials::UI::CredentialPickerOptions const& options);
        static auto PickAsync(param::hstring const& targetName, param::hstring const& message);
        static auto PickAsync(param::hstring const& targetName, param::hstring const& message, param::hstring const& caption);
    };
    struct __declspec(empty_bases) CredentialPickerOptions : Windows::Security::Credentials::UI::ICredentialPickerOptions
    {
        CredentialPickerOptions(std::nullptr_t) noexcept {}
        CredentialPickerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::UI::ICredentialPickerOptions(ptr, take_ownership_from_abi) {}
        CredentialPickerOptions();
    };
    struct __declspec(empty_bases) CredentialPickerResults : Windows::Security::Credentials::UI::ICredentialPickerResults
    {
        CredentialPickerResults(std::nullptr_t) noexcept {}
        CredentialPickerResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Credentials::UI::ICredentialPickerResults(ptr, take_ownership_from_abi) {}
    };
    struct UserConsentVerifier
    {
        UserConsentVerifier() = delete;
        static auto CheckAvailabilityAsync();
        static auto RequestVerificationAsync(param::hstring const& message);
    };
}
#endif
