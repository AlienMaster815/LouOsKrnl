// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Policies_0_H
#define WINRT_Windows_Management_Policies_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Management::Policies
{
    enum class NamedPolicyKind : int32_t
    {
        Invalid = 0,
        Binary = 1,
        Boolean = 2,
        Int32 = 3,
        Int64 = 4,
        String = 5,
    };
    struct INamedPolicyData;
    struct INamedPolicyStatics;
    struct NamedPolicy;
    struct NamedPolicyData;
}
namespace winrt::impl
{
    template <> struct category<Windows::Management::Policies::INamedPolicyData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Policies::INamedPolicyStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Management::Policies::NamedPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Policies::NamedPolicyData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Management::Policies::NamedPolicyKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Management::Policies::INamedPolicyData>
    {
        static constexpr auto & value{ L"Windows.Management.Policies.INamedPolicyData" };
    };
    template <> struct name<Windows::Management::Policies::INamedPolicyStatics>
    {
        static constexpr auto & value{ L"Windows.Management.Policies.INamedPolicyStatics" };
    };
    template <> struct name<Windows::Management::Policies::NamedPolicy>
    {
        static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicy" };
    };
    template <> struct name<Windows::Management::Policies::NamedPolicyData>
    {
        static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicyData" };
    };
    template <> struct name<Windows::Management::Policies::NamedPolicyKind>
    {
        static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicyKind" };
    };
    template <> struct guid_storage<Windows::Management::Policies::INamedPolicyData>
    {
        static constexpr guid value{ 0x38DCB198,0x95AC,0x4077,{ 0xA6,0x43,0x80,0x78,0xCA,0xE2,0x64,0x00 } };
    };
    template <> struct guid_storage<Windows::Management::Policies::INamedPolicyStatics>
    {
        static constexpr guid value{ 0x7F793BE7,0x76C4,0x4058,{ 0x8C,0xAD,0x67,0x66,0x2C,0xD0,0x5F,0x0D } };
    };
    template <> struct default_interface<Windows::Management::Policies::NamedPolicyData>
    {
        using type = Windows::Management::Policies::INamedPolicyData;
    };
    template <> struct abi<Windows::Management::Policies::INamedPolicyData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Area(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsManaged(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserPolicy(bool*) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall GetBoolean(bool*) noexcept = 0;
            virtual int32_t __stdcall GetBinary(void**) noexcept = 0;
            virtual int32_t __stdcall GetInt32(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetInt64(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetString(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Policies::INamedPolicyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPolicyFromPath(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPolicyFromPathForUser(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Policies_INamedPolicyData
    {
        [[nodiscard]] auto Area() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto IsManaged() const;
        [[nodiscard]] auto IsUserPolicy() const;
        [[nodiscard]] auto User() const;
        auto GetBoolean() const;
        auto GetBinary() const;
        auto GetInt32() const;
        auto GetInt64() const;
        auto GetString() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const;
        using Changed_revoker = impl::event_revoker<Windows::Management::Policies::INamedPolicyData, &impl::abi_t<Windows::Management::Policies::INamedPolicyData>::remove_Changed>;
        Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const;
        auto Changed(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Management::Policies::INamedPolicyData>
    {
        template <typename D> using type = consume_Windows_Management_Policies_INamedPolicyData<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Policies_INamedPolicyStatics
    {
        auto GetPolicyFromPath(param::hstring const& area, param::hstring const& name) const;
        auto GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name) const;
    };
    template <> struct consume<Windows::Management::Policies::INamedPolicyStatics>
    {
        template <typename D> using type = consume_Windows_Management_Policies_INamedPolicyStatics<D>;
    };
}
#endif
