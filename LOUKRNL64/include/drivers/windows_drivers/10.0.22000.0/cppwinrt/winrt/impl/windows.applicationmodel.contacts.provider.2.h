// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider
{
    struct __declspec(empty_bases) ContactPickerUI : Windows::ApplicationModel::Contacts::Provider::IContactPickerUI,
        impl::require<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        ContactPickerUI(std::nullptr_t) noexcept {}
        ContactPickerUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::Provider::IContactPickerUI(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Contacts::Provider::IContactPickerUI::AddContact;
        using impl::consume_t<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>::AddContact;
    };
    struct __declspec(empty_bases) ContactRemovedEventArgs : Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs
    {
        ContactRemovedEventArgs(std::nullptr_t) noexcept {}
        ContactRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
