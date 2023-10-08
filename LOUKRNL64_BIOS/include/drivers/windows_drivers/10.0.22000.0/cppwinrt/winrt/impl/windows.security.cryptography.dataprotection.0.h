// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_DataProtection_0_H
#define WINRT_Windows_Security_Cryptography_DataProtection_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::DataProtection
{
    struct IDataProtectionProvider;
    struct IDataProtectionProviderFactory;
    struct DataProtectionProvider;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::DataProtection::DataProtectionProvider> = L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> = L"Windows.Security.Cryptography.DataProtection.IDataProtectionProvider";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory> = L"Windows.Security.Cryptography.DataProtection.IDataProtectionProviderFactory";
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>{ 0x09639948,0xED22,0x4270,{ 0xBD,0x1C,0x6D,0x72,0xC0,0x0F,0x87,0x87 } }; // 09639948-ED22-4270-BD1C-6D72C00F8787
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>{ 0xADF33DAC,0x4932,0x4CDF,{ 0xAC,0x41,0x72,0x14,0x33,0x35,0x14,0xCA } }; // ADF33DAC-4932-4CDF-AC41-7214333514CA
    template <> struct default_interface<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>{ using type = Windows::Security::Cryptography::DataProtection::IDataProtectionProvider; };
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
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>) ProtectAsync(Windows::Storage::Streams::IBuffer const& data) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>) UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const;
    };
    template <> struct consume<Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::DataProtection::DataProtectionProvider) CreateOverloadExplicit(param::hstring const& protectionDescriptor) const;
    };
    template <> struct consume<Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory<D>;
    };
}
#endif
