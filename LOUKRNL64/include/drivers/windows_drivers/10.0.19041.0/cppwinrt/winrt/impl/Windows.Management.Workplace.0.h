// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Workplace_0_H
#define WINRT_Windows_Management_Workplace_0_H
namespace winrt::Windows::Management::Workplace
{
    enum class MessagingSyncPolicy : int32_t
    {
        Disallowed = 0,
        Allowed = 1,
        Required = 2,
    };
    struct IMdmAllowPolicyStatics;
    struct IMdmPolicyStatics2;
    struct IWorkplaceSettingsStatics;
    struct MdmPolicy;
    struct WorkplaceSettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Workplace::MdmPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Workplace::WorkplaceSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Workplace::MessagingSyncPolicy>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.IMdmAllowPolicyStatics" };
    };
    template <> struct name<Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.IMdmPolicyStatics2" };
    };
    template <> struct name<Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.IWorkplaceSettingsStatics" };
    };
    template <> struct name<Windows::Management::Workplace::MdmPolicy>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.MdmPolicy" };
    };
    template <> struct name<Windows::Management::Workplace::WorkplaceSettings>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.WorkplaceSettings" };
    };
    template <> struct name<Windows::Management::Workplace::MessagingSyncPolicy>
    {
        static constexpr auto & value{ L"Windows.Management.Workplace.MessagingSyncPolicy" };
    };
    template <> struct guid_storage<Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        static constexpr guid value{ 0xC39709E7,0x741C,0x41F2,{ 0xA4,0xB6,0x31,0x4C,0x31,0x50,0x25,0x86 } };
    };
    template <> struct guid_storage<Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        static constexpr guid value{ 0xC99C7526,0x03D4,0x49F9,{ 0xA9,0x93,0x43,0xEF,0xCC,0xD2,0x65,0xC4 } };
    };
    template <> struct guid_storage<Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        static constexpr guid value{ 0xE4676FFD,0x2D92,0x4C08,{ 0xBA,0xD4,0xF6,0x59,0x0B,0x54,0xA6,0xD3 } };
    };
    template <> struct abi<Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsBrowserAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCameraAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsMicrosoftAccountAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsStoreAllowed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMessagingSyncPolicy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMicrosoftAccountOptional(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IMdmAllowPolicyStatics
    {
        auto IsBrowserAllowed() const;
        auto IsCameraAllowed() const;
        auto IsMicrosoftAccountAllowed() const;
        auto IsStoreAllowed() const;
    };
    template <> struct consume<Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IMdmPolicyStatics2
    {
        auto GetMessagingSyncPolicy() const;
    };
    template <> struct consume<Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IMdmPolicyStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IWorkplaceSettingsStatics
    {
        [[nodiscard]] auto IsMicrosoftAccountOptional() const;
    };
    template <> struct consume<Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IWorkplaceSettingsStatics<D>;
    };
}
#endif
