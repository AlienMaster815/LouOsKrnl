// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_0_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    enum class UserDataAccountContentKinds : uint32_t
    {
        Email = 0x1,
        Contact = 0x2,
        Appointment = 0x4,
    };
    enum class UserDataAccountOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Full = 1,
        None = 2,
    };
    enum class UserDataAccountStoreAccessType : int32_t
    {
        AllAccountsReadOnly = 0,
        AppAccountsReadWrite = 1,
    };
    struct IUserDataAccount;
    struct IUserDataAccount2;
    struct IUserDataAccount3;
    struct IUserDataAccount4;
    struct IUserDataAccountManagerForUser;
    struct IUserDataAccountManagerStatics;
    struct IUserDataAccountManagerStatics2;
    struct IUserDataAccountStore;
    struct IUserDataAccountStore2;
    struct IUserDataAccountStore3;
    struct IUserDataAccountStoreChangedEventArgs;
    struct UserDataAccount;
    struct UserDataAccountManager;
    struct UserDataAccountManagerForUser;
    struct UserDataAccountStore;
    struct UserDataAccountStoreChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount2" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount3" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount4" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore2" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore3" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStoreChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccount" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManager" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManagerForUser" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStore" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreChangedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountContentKinds" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountOtherAppReadAccess" };
    };
    template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreAccessType" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        static constexpr guid value{ 0xB9C4367E,0xB348,0x4910,{ 0xBE,0x94,0x4A,0xD4,0xBB,0xA6,0xDE,0xA7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        static constexpr guid value{ 0x078CD89F,0xDE82,0x404B,{ 0x81,0x95,0xC8,0xA3,0xAC,0x19,0x8F,0x60 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        static constexpr guid value{ 0x01533845,0x6C43,0x4286,{ 0x9D,0x69,0x3E,0x17,0x09,0xA1,0xF2,0x66 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        static constexpr guid value{ 0xC4315210,0xEAE5,0x4F0A,{ 0xA8,0xB2,0x1C,0xCA,0x11,0x5E,0x00,0x8F } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        static constexpr guid value{ 0x56A6E8DB,0xDB8F,0x41AB,{ 0xA6,0x5F,0x8C,0x59,0x71,0xAA,0xC9,0x82 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        static constexpr guid value{ 0x0D9B89EA,0x1928,0x4A20,{ 0x86,0xD5,0x3C,0x73,0x7F,0x7D,0xC3,0xB0 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        static constexpr guid value{ 0x6A3DED88,0x316B,0x435E,{ 0xB5,0x34,0xF7,0xD4,0xB4,0xB7,0xDB,0xA6 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        static constexpr guid value{ 0x2073B0AD,0x7D0A,0x4E76,{ 0xBF,0x45,0x23,0x68,0xF9,0x78,0xA5,0x9A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        static constexpr guid value{ 0xB1E0AEF7,0x9560,0x4631,{ 0x8A,0xF0,0x06,0x1D,0x30,0x16,0x14,0x69 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        static constexpr guid value{ 0x8142C094,0xF3C9,0x478B,{ 0xB1,0x17,0x65,0x85,0xBE,0xBB,0x67,0x89 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        static constexpr guid value{ 0x84E3E2E5,0x8820,0x4512,{ 0xB1,0xF6,0x2E,0x03,0x5B,0xE1,0x07,0x2C } };
    };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>
    {
        using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccount;
    };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>
    {
        using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser;
    };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>
    {
        using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore;
    };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>
    {
        using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserDisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAccountTypeId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindEmailMailboxesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactAnnotationListsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsProtectedUnderLock(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExplictReadAccessPackageFamilyNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanShowCreateContactGroup(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanShowCreateContactGroup(bool) noexcept = 0;
            virtual int32_t __stdcall get_ProviderProperties(void**) noexcept = 0;
            virtual int32_t __stdcall FindUserDataTaskListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactGroupsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowCreateContactGroupAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsProtectedUnderLock(bool) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAccountSettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAccountErrorResolverAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAccountAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAccountWithPackageRelativeAppIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_StoreChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StoreChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto UserDisplayName() const;
        auto UserDisplayName(param::hstring const& value) const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess const& value) const;
        [[nodiscard]] auto Icon() const;
        [[nodiscard]] auto DeviceAccountTypeId() const;
        [[nodiscard]] auto PackageFamilyName() const;
        auto SaveAsync() const;
        auto DeleteAsync() const;
        auto FindAppointmentCalendarsAsync() const;
        auto FindEmailMailboxesAsync() const;
        auto FindContactListsAsync() const;
        auto FindContactAnnotationListsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2
    {
        [[nodiscard]] auto EnterpriseId() const;
        [[nodiscard]] auto IsProtectedUnderLock() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3
    {
        [[nodiscard]] auto ExplictReadAccessPackageFamilyNames() const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4
    {
        [[nodiscard]] auto CanShowCreateContactGroup() const;
        auto CanShowCreateContactGroup(bool value) const;
        [[nodiscard]] auto ProviderProperties() const;
        auto FindUserDataTaskListsAsync() const;
        auto FindContactGroupsAsync() const;
        auto TryShowCreateContactGroupAsync() const;
        auto IsProtectedUnderLock(bool value) const;
        auto Icon(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser
    {
        auto RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics
    {
        auto RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
        auto ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds) const;
        auto ShowAccountSettingsAsync(param::hstring const& id) const;
        auto ShowAccountErrorResolverAsync(param::hstring const& id) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore
    {
        auto FindAccountsAsync() const;
        auto GetAccountAsync(param::hstring const& id) const;
        auto CreateAccountAsync(param::hstring const& userDisplayName) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2
    {
        auto CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId) const;
        auto StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
        using StoreChanged_revoker = impl::event_revoker<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, &impl::abi_t<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::remove_StoreChanged>;
        StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
        auto StoreChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3
    {
        auto CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId, param::hstring const& enterpriseId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs<D>;
    };
}
#endif
