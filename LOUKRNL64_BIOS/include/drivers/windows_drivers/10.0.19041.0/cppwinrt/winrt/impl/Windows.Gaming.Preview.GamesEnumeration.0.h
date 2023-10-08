// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Preview_GamesEnumeration_0_H
#define WINRT_Windows_Gaming_Preview_GamesEnumeration_0_H
namespace winrt::Windows::ApplicationModel
{
    struct AppDisplayInfo;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::Gaming::Preview::GamesEnumeration
{
    enum class GameListCategory : int32_t
    {
        Candidate = 0,
        ConfirmedBySystem = 1,
        ConfirmedByUser = 2,
    };
    enum class GameListEntryLaunchableState : int32_t
    {
        NotLaunchable = 0,
        ByLastRunningFullPath = 1,
        ByUserProvidedPath = 2,
        ByTile = 3,
    };
    struct IGameListEntry;
    struct IGameListEntry2;
    struct IGameListStatics;
    struct IGameListStatics2;
    struct IGameModeConfiguration;
    struct IGameModeUserConfiguration;
    struct IGameModeUserConfigurationStatics;
    struct GameList;
    struct GameListEntry;
    struct GameModeConfiguration;
    struct GameModeUserConfiguration;
    struct GameListChangedEventHandler;
    struct GameListRemovedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameList>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameList>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameList" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListCategory" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListEntryLaunchableState" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler" };
    };
    template <> struct name<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        static constexpr auto & value{ L"Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler" };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        static constexpr guid value{ 0x735924D3,0x811F,0x4494,{ 0xB6,0x9C,0xC6,0x41,0xA0,0xC6,0x15,0x43 } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        static constexpr guid value{ 0xD84A8F8B,0x8749,0x4A25,{ 0x90,0xD3,0xF6,0xC5,0xA4,0x27,0x88,0x6D } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        static constexpr guid value{ 0x2DDD0F6F,0x9C66,0x4B05,{ 0x94,0x5C,0xD6,0xED,0x78,0x49,0x1B,0x8C } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        static constexpr guid value{ 0x395F2098,0xEA1A,0x45AA,{ 0x92,0x68,0xA8,0x39,0x05,0x68,0x6F,0x27 } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        static constexpr guid value{ 0x78E591AF,0xB142,0x4EF0,{ 0x88,0x30,0x55,0xBC,0x2B,0xE4,0xF5,0xEA } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        static constexpr guid value{ 0x72D34AF4,0x756B,0x470F,{ 0xA0,0xC2,0xBA,0x62,0xA9,0x07,0x95,0xDB } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        static constexpr guid value{ 0x6E50D97C,0x66EA,0x478E,{ 0xA4,0xA1,0xF5,0x7C,0x0E,0x8D,0x00,0xE7 } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        static constexpr guid value{ 0x25F6A421,0xD8F5,0x4D91,{ 0xB4,0x0E,0x53,0xD5,0xE8,0x6F,0xDE,0x64 } };
    };
    template <> struct guid_storage<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        static constexpr guid value{ 0x10C5648F,0x6C8F,0x4712,{ 0x9B,0x38,0x47,0x4B,0xC2,0x2E,0x76,0xD8 } };
    };
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>
    {
        using type = Windows::Gaming::Preview::GamesEnumeration::IGameListEntry;
    };
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>
    {
        using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration;
    };
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>
    {
        using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration;
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall SetCategoryAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LaunchableState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LauncherExecutable(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchParameters(void**) noexcept = 0;
            virtual int32_t __stdcall SetLauncherExecutableFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetLauncherExecutableFileWithParamsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
            virtual int32_t __stdcall SetTitleIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_GameModeConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncPackageFamilyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_GameAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GameRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GameUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MergeEntriesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnmergeEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RelatedProcessNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuTimeAllocatedToGame(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuTimeAllocatedToGame(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuMemoryAllocatedToGame(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuMemoryAllocatedToGame(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuMemoryAllocatedToSystemCompositor(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuMemoryAllocatedToSystemCompositor(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxCpuCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxCpuCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_CpuExclusivityMaskLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_CpuExclusivityMaskLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_CpuExclusivityMaskHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_CpuExclusivityMaskHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_AffinitizeToExclusiveCpus(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AffinitizeToExclusiveCpus(bool) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GamingRelatedProcessNames(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry
    {
        [[nodiscard]] auto DisplayInfo() const;
        auto LaunchAsync() const;
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto Properties() const;
        auto SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2
    {
        [[nodiscard]] auto LaunchableState() const;
        [[nodiscard]] auto LauncherExecutable() const;
        [[nodiscard]] auto LaunchParameters() const;
        auto SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile) const;
        auto SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile, param::hstring const& launchParams) const;
        [[nodiscard]] auto TitleId() const;
        auto SetTitleIdAsync(param::hstring const& id) const;
        [[nodiscard]] auto GameModeConfiguration() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics
    {
        auto FindAllAsync() const;
        auto FindAllAsync(param::hstring const& packageFamilyName) const;
        auto GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        using GameAdded_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameAdded>;
        GameAdded_revoker GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        auto GameAdded(winrt::event_token const& token) const noexcept;
        auto GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
        using GameRemoved_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameRemoved>;
        GameRemoved_revoker GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
        auto GameRemoved(winrt::event_token const& token) const noexcept;
        auto GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        using GameUpdated_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameUpdated>;
        GameUpdated_revoker GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        auto GameUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2
    {
        auto MergeEntriesAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right) const;
        auto UnmergeEntryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry) const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto RelatedProcessNames() const;
        [[nodiscard]] auto PercentGpuTimeAllocatedToGame() const;
        auto PercentGpuTimeAllocatedToGame(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto PercentGpuMemoryAllocatedToGame() const;
        auto PercentGpuMemoryAllocatedToGame(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto PercentGpuMemoryAllocatedToSystemCompositor() const;
        auto PercentGpuMemoryAllocatedToSystemCompositor(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto MaxCpuCount() const;
        auto MaxCpuCount(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto CpuExclusivityMaskLow() const;
        auto CpuExclusivityMaskLow(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto CpuExclusivityMaskHigh() const;
        auto CpuExclusivityMaskHigh(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto AffinitizeToExclusiveCpus() const;
        auto AffinitizeToExclusiveCpus(bool value) const;
        auto SaveAsync() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration
    {
        [[nodiscard]] auto GamingRelatedProcessNames() const;
        auto SaveAsync() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics<D>;
    };
}
#endif
