// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_0_H
#define WINRT_Windows_Security_Authentication_Identity_0_H
namespace winrt::Windows::Security::Authentication::Identity
{
    struct IEnterpriseKeyCredentialRegistrationInfo;
    struct IEnterpriseKeyCredentialRegistrationManager;
    struct IEnterpriseKeyCredentialRegistrationManagerStatics;
    struct EnterpriseKeyCredentialRegistrationInfo;
    struct EnterpriseKeyCredentialRegistrationManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationInfo" };
    };
    template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManager" };
    };
    template <> struct name<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManagerStatics" };
    };
    template <> struct name<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationInfo" };
    };
    template <> struct name<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
    {
        static constexpr auto & value{ L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationManager" };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        static constexpr guid value{ 0x38321ACC,0x672B,0x4823,{ 0xB6,0x03,0x6B,0x3C,0x75,0x3D,0xAF,0x97 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        static constexpr guid value{ 0x83F3BE3F,0xA25F,0x4CBA,{ 0xBB,0x8E,0xBD,0xC3,0x2D,0x03,0xC2,0x97 } };
    };
    template <> struct guid_storage<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        static constexpr guid value{ 0x77B85E9E,0xACF4,0x4BC0,{ 0xBA,0xC2,0x40,0xBB,0x46,0xEF,0xBB,0x3F } };
    };
    template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
    {
        using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo;
    };
    template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
    {
        using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager;
    };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TenantId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TenantName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyId(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetRegistrationsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo
    {
        [[nodiscard]] auto TenantId() const;
        [[nodiscard]] auto TenantName() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto KeyId() const;
        [[nodiscard]] auto KeyName() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager
    {
        auto GetRegistrationsAsync() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics<D>;
    };
}
#endif
