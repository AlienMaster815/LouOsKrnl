// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Update_2_H
#define WINRT_Windows_System_Update_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Update.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Update
{
    struct __declspec(empty_bases) SystemUpdateItem : Windows::System::Update::ISystemUpdateItem
    {
        SystemUpdateItem(std::nullptr_t) noexcept {}
        SystemUpdateItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Update::ISystemUpdateItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemUpdateLastErrorInfo : Windows::System::Update::ISystemUpdateLastErrorInfo
    {
        SystemUpdateLastErrorInfo(std::nullptr_t) noexcept {}
        SystemUpdateLastErrorInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Update::ISystemUpdateLastErrorInfo(ptr, take_ownership_from_abi) {}
    };
    struct SystemUpdateManager
    {
        SystemUpdateManager() = delete;
        static auto IsSupported();
        [[nodiscard]] static auto State();
        static auto StateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using StateChanged_revoker = impl::factory_event_revoker<Windows::System::Update::ISystemUpdateManagerStatics, &impl::abi_t<Windows::System::Update::ISystemUpdateManagerStatics>::remove_StateChanged>;
        [[nodiscard]] static StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto StateChanged(winrt::event_token const& token);
        [[nodiscard]] static auto DownloadProgress();
        [[nodiscard]] static auto InstallProgress();
        [[nodiscard]] static auto UserActiveHoursStart();
        [[nodiscard]] static auto UserActiveHoursEnd();
        [[nodiscard]] static auto UserActiveHoursMax();
        static auto TrySetUserActiveHours(Windows::Foundation::TimeSpan const& start, Windows::Foundation::TimeSpan const& end);
        [[nodiscard]] static auto LastUpdateCheckTime();
        [[nodiscard]] static auto LastUpdateInstallTime();
        [[nodiscard]] static auto LastErrorInfo();
        static auto GetAutomaticRebootBlockIds();
        static auto BlockAutomaticRebootAsync(param::hstring const& lockId);
        static auto UnblockAutomaticRebootAsync(param::hstring const& lockId);
        [[nodiscard]] static auto ExtendedError();
        static auto GetUpdateItems();
        [[nodiscard]] static auto AttentionRequiredReason();
        static auto SetFlightRing(param::hstring const& flightRing);
        static auto GetFlightRing();
        static auto StartInstall(Windows::System::Update::SystemUpdateStartInstallAction const& action);
        static auto RebootToCompleteInstall();
        static auto StartCancelUpdates();
    };
}
#endif
