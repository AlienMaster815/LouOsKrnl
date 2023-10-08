// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_UserProfile_2_H
#define WINRT_Windows_System_UserProfile_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.System.UserProfile.1.h"
WINRT_EXPORT namespace winrt::Windows::System::UserProfile
{
    struct AdvertisingManager
    {
        AdvertisingManager() = delete;
        [[nodiscard]] static auto AdvertisingId();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) AdvertisingManagerForUser : Windows::System::UserProfile::IAdvertisingManagerForUser
    {
        AdvertisingManagerForUser(std::nullptr_t) noexcept {}
        AdvertisingManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IAdvertisingManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AssignedAccessSettings : Windows::System::UserProfile::IAssignedAccessSettings
    {
        AssignedAccessSettings(std::nullptr_t) noexcept {}
        AssignedAccessSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IAssignedAccessSettings(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) DiagnosticsSettings : Windows::System::UserProfile::IDiagnosticsSettings
    {
        DiagnosticsSettings(std::nullptr_t) noexcept {}
        DiagnosticsSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IDiagnosticsSettings(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) FirstSignInSettings : Windows::System::UserProfile::IFirstSignInSettings
    {
        FirstSignInSettings(std::nullptr_t) noexcept {}
        FirstSignInSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IFirstSignInSettings(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct GlobalizationPreferences
    {
        GlobalizationPreferences() = delete;
        [[nodiscard]] static auto Calendars();
        [[nodiscard]] static auto Clocks();
        [[nodiscard]] static auto Currencies();
        [[nodiscard]] static auto Languages();
        [[nodiscard]] static auto HomeGeographicRegion();
        [[nodiscard]] static auto WeekStartsOn();
        static auto TrySetHomeGeographicRegion(param::hstring const& region);
        static auto TrySetLanguages(param::iterable<hstring> const& languageTags);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) GlobalizationPreferencesForUser : Windows::System::UserProfile::IGlobalizationPreferencesForUser
    {
        GlobalizationPreferencesForUser(std::nullptr_t) noexcept {}
        GlobalizationPreferencesForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IGlobalizationPreferencesForUser(ptr, take_ownership_from_abi) {}
    };
    struct LockScreen
    {
        LockScreen() = delete;
        static auto RequestSetImageFeedAsync(Windows::Foundation::Uri const& syndicationFeedUri);
        static auto TryRemoveImageFeed();
        [[nodiscard]] static auto OriginalImageFile();
        static auto GetImageStream();
        static auto SetImageFileAsync(Windows::Storage::IStorageFile const& value);
        static auto SetImageStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& value);
    };
    struct UserInformation
    {
        UserInformation() = delete;
        [[nodiscard]] static auto AccountPictureChangeEnabled();
        [[nodiscard]] static auto NameAccessAllowed();
        static auto GetAccountPicture(Windows::System::UserProfile::AccountPictureKind const& kind);
        static auto SetAccountPictureAsync(Windows::Storage::IStorageFile const& image);
        static auto SetAccountPicturesAsync(Windows::Storage::IStorageFile const& smallImage, Windows::Storage::IStorageFile const& largeImage, Windows::Storage::IStorageFile const& video);
        static auto SetAccountPictureFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& image);
        static auto SetAccountPicturesFromStreamsAsync(Windows::Storage::Streams::IRandomAccessStream const& smallImage, Windows::Storage::Streams::IRandomAccessStream const& largeImage, Windows::Storage::Streams::IRandomAccessStream const& video);
        static auto AccountPictureChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
        using AccountPictureChanged_revoker = impl::factory_event_revoker<Windows::System::UserProfile::IUserInformationStatics, &impl::abi_t<Windows::System::UserProfile::IUserInformationStatics>::remove_AccountPictureChanged>;
        [[nodiscard]] static AccountPictureChanged_revoker AccountPictureChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
        static auto AccountPictureChanged(winrt::event_token const& token);
        static auto GetDisplayNameAsync();
        static auto GetFirstNameAsync();
        static auto GetLastNameAsync();
        static auto GetPrincipalNameAsync();
        static auto GetSessionInitiationProtocolUriAsync();
        static auto GetDomainNameAsync();
    };
    struct __declspec(empty_bases) UserProfilePersonalizationSettings : Windows::System::UserProfile::IUserProfilePersonalizationSettings
    {
        UserProfilePersonalizationSettings(std::nullptr_t) noexcept {}
        UserProfilePersonalizationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::UserProfile::IUserProfilePersonalizationSettings(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
        static auto IsSupported();
    };
}
#endif
