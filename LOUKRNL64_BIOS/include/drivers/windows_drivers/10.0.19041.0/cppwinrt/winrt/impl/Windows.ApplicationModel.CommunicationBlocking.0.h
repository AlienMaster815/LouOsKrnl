// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_0_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::ApplicationModel::CommunicationBlocking
{
    struct ICommunicationBlockingAccessManagerStatics;
    struct ICommunicationBlockingAppManagerStatics;
    struct ICommunicationBlockingAppManagerStatics2;
    struct CommunicationBlockingAccessManager;
    struct CommunicationBlockingAppManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>
    {
        using type = class_category;
    };
    template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAccessManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager" };
    };
    template <> struct name<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        static constexpr guid value{ 0x1C969998,0x9D2A,0x5DB7,{ 0xED,0xD5,0x0C,0xE4,0x07,0xFC,0x25,0x95 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        static constexpr guid value{ 0x77DB58EC,0x14A6,0x4BAA,{ 0x94,0x2A,0x6A,0x67,0x3D,0x99,0x9B,0xF2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        static constexpr guid value{ 0x14A68EDD,0xED88,0x457A,{ 0xA3,0x64,0xA3,0x63,0x4D,0x6F,0x16,0x6D } };
    };
    template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBlockingActive(bool*) noexcept = 0;
            virtual int32_t __stdcall IsBlockedNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowBlockNumbersUI(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ShowUnblockNumbersUI(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall ShowBlockedCallsUI() noexcept = 0;
            virtual int32_t __stdcall ShowBlockedMessagesUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCurrentAppActiveBlockingApp(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowCommunicationBlockingSettingsUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestSetAsActiveBlockingAppAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics
    {
        [[nodiscard]] auto IsBlockingActive() const;
        auto IsBlockedNumberAsync(param::hstring const& number) const;
        auto ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers) const;
        auto ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers) const;
        auto ShowBlockedCallsUI() const;
        auto ShowBlockedMessagesUI() const;
    };
    template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics
    {
        [[nodiscard]] auto IsCurrentAppActiveBlockingApp() const;
        auto ShowCommunicationBlockingSettingsUI() const;
    };
    template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2
    {
        auto RequestSetAsActiveBlockingAppAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2<D>;
    };
}
#endif
