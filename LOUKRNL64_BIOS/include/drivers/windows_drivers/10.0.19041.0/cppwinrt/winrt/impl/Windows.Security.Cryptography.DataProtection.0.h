// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_DataProtection_0_H
#define WINRT_Windows_Security_Cryptography_DataProtection_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::Security::Cryptography::DataProtection
{
    struct IDataProtectionProvider;
    struct IDataProtectionProviderFactory;
    struct DataProtectionProvider;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.DataProtection.IDataProtectionProvider" };
    };
    template <> struct name<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.DataProtection.IDataProtectionProviderFactory" };
    };
    template <> struct name<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider" };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        static constexpr guid value{ 0x09639948,0xED22,0x4270,{ 0xBD,0x1C,0x6D,0x72,0xC0,0x0F,0x87,0x87 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        static constexpr guid value{ 0xADF33DAC,0x4932,0x4CDF,{ 0xAC,0x41,0x72,0x14,0x33,0x35,0x14,0xCA } };
    };
    template <> struct default_interface<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>
    {
        using type = Windows::Security::Cryptography::DataProtection::IDataProtectionProvider;
    };
    template <> struct abi<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProtectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProtectStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprotectStreamAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateOverloadExplicit(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider
    {
        auto ProtectAsync(Windows::Storage::Streams::IBuffer const& data) const;
        auto UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const;
        auto ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const;
        auto UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const;
    };
    template <> struct consume<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory
    {
        auto CreateOverloadExplicit(param::hstring const& protectionDescriptor) const;
    };
    template <> struct consume<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory<D>;
    };
}
#endif
