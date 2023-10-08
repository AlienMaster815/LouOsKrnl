// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_0_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_0_H
namespace winrt::Windows::ApplicationModel::Contacts
{
    struct Contact;
    enum class ContactSelectionMode : int32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::ApplicationModel::Contacts::Provider
{
    enum class AddContactResult : int32_t
    {
        Added = 0,
        AlreadyAdded = 1,
        Unavailable = 2,
    };
    struct IContactPickerUI;
    struct IContactPickerUI2;
    struct IContactRemovedEventArgs;
    struct ContactPickerUI;
    struct ContactRemovedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Contacts::Provider::AddContactResult>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Contacts::Provider::AddContactResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Contacts.Provider.AddContactResult" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
    {
        static constexpr guid value{ 0xE2CC1366,0xCF66,0x43C4,{ 0xA9,0x6A,0xA5,0xA1,0x12,0xDB,0x47,0x46 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        static constexpr guid value{ 0x6E449E28,0x7B25,0x4999,{ 0x9B,0x0B,0x87,0x54,0x00,0xA1,0xE8,0xC8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
    {
        static constexpr guid value{ 0x6F354338,0x3302,0x4D13,{ 0xAD,0x8D,0xAD,0xCC,0x0F,0xF9,0xE4,0x7C } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>
    {
        using type = Windows::ApplicationModel::Contacts::Provider::IContactPickerUI;
    };
    template <> struct default_interface<Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>
    {
        using type = Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddContact(void*, void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall RemoveContact(void*) noexcept = 0;
            virtual int32_t __stdcall ContainsContact(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredFields(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ContactRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContactRemoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddContact(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredFieldsWithContactFieldType(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI
    {
        auto AddContact(param::hstring const& id, Windows::ApplicationModel::Contacts::Contact const& contact) const;
        auto RemoveContact(param::hstring const& id) const;
        auto ContainsContact(param::hstring const& id) const;
        [[nodiscard]] auto DesiredFields() const;
        [[nodiscard]] auto SelectionMode() const;
        auto ContactRemoved(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> const& handler) const;
        using ContactRemoved_revoker = impl::event_revoker<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI, &impl::abi_t<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>::remove_ContactRemoved>;
        ContactRemoved_revoker ContactRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> const& handler) const;
        auto ContactRemoved(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2
    {
        auto AddContact(Windows::ApplicationModel::Contacts::Contact const& contact) const;
        [[nodiscard]] auto DesiredFieldsWithContactFieldType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Contacts_Provider_IContactRemovedEventArgs
    {
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Contacts_Provider_IContactRemovedEventArgs<D>;
    };
}
#endif
