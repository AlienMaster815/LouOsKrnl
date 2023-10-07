// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_UserProfile_1_H
#define WINRT_Windows_System_UserProfile_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.System.UserProfile.0.h"
WINRT_EXPORT namespace winrt::Windows::System::UserProfile
{
    struct __declspec(empty_bases) IAdvertisingManagerForUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvertisingManagerForUser>
    {
        IAdvertisingManagerForUser(std::nullptr_t = nullptr) noexcept {}
        IAdvertisingManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdvertisingManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvertisingManagerStatics>
    {
        IAdvertisingManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IAdvertisingManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdvertisingManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvertisingManagerStatics2>
    {
        IAdvertisingManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IAdvertisingManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAssignedAccessSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAssignedAccessSettings>
    {
        IAssignedAccessSettings(std::nullptr_t = nullptr) noexcept {}
        IAssignedAccessSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAssignedAccessSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAssignedAccessSettingsStatics>
    {
        IAssignedAccessSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IAssignedAccessSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDiagnosticsSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDiagnosticsSettings>
    {
        IDiagnosticsSettings(std::nullptr_t = nullptr) noexcept {}
        IDiagnosticsSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDiagnosticsSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDiagnosticsSettingsStatics>
    {
        IDiagnosticsSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IDiagnosticsSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFirstSignInSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFirstSignInSettings>,
        impl::require<Windows::System::UserProfile::IFirstSignInSettings, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
    {
        IFirstSignInSettings(std::nullptr_t = nullptr) noexcept {}
        IFirstSignInSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFirstSignInSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFirstSignInSettingsStatics>
    {
        IFirstSignInSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IFirstSignInSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGlobalizationPreferencesForUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGlobalizationPreferencesForUser>
    {
        IGlobalizationPreferencesForUser(std::nullptr_t = nullptr) noexcept {}
        IGlobalizationPreferencesForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGlobalizationPreferencesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGlobalizationPreferencesStatics>
    {
        IGlobalizationPreferencesStatics(std::nullptr_t = nullptr) noexcept {}
        IGlobalizationPreferencesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGlobalizationPreferencesStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGlobalizationPreferencesStatics2>
    {
        IGlobalizationPreferencesStatics2(std::nullptr_t = nullptr) noexcept {}
        IGlobalizationPreferencesStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGlobalizationPreferencesStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGlobalizationPreferencesStatics3>
    {
        IGlobalizationPreferencesStatics3(std::nullptr_t = nullptr) noexcept {}
        IGlobalizationPreferencesStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenImageFeedStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenImageFeedStatics>
    {
        ILockScreenImageFeedStatics(std::nullptr_t = nullptr) noexcept {}
        ILockScreenImageFeedStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenStatics>
    {
        ILockScreenStatics(std::nullptr_t = nullptr) noexcept {}
        ILockScreenStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserInformationStatics>
    {
        IUserInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IUserInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserProfilePersonalizationSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserProfilePersonalizationSettings>
    {
        IUserProfilePersonalizationSettings(std::nullptr_t = nullptr) noexcept {}
        IUserProfilePersonalizationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserProfilePersonalizationSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserProfilePersonalizationSettingsStatics>
    {
        IUserProfilePersonalizationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IUserProfilePersonalizationSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
