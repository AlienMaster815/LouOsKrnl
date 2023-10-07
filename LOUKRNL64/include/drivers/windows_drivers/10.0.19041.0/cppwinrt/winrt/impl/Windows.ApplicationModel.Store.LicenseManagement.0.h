// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_LicenseManagement_0_H
#define WINRT_Windows_ApplicationModel_Store_LicenseManagement_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::ApplicationModel::Store::LicenseManagement
{
    enum class LicenseRefreshOption : int32_t
    {
        RunningLicenses = 0,
        AllLicenses = 1,
    };
    struct ILicenseManagerStatics;
    struct ILicenseManagerStatics2;
    struct ILicenseSatisfactionInfo;
    struct ILicenseSatisfactionResult;
    struct LicenseManager;
    struct LicenseSatisfactionInfo;
    struct LicenseSatisfactionResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult" };
    };
    template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseRefreshOption" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
    {
        static constexpr guid value{ 0xB5AC3AE0,0xDA47,0x4F20,{ 0x9A,0x23,0x09,0x18,0x2C,0x94,0x76,0xFF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
    {
        static constexpr guid value{ 0xAB2EC47B,0x1F79,0x4480,{ 0xB8,0x7E,0x2C,0x49,0x9E,0x60,0x1B,0xA3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
    {
        static constexpr guid value{ 0x3CCBB08F,0xDB31,0x48D5,{ 0x83,0x84,0xFA,0x17,0xC8,0x14,0x74,0xE2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
    {
        static constexpr guid value{ 0x3C674F73,0x3C87,0x4EE1,{ 0x82,0x01,0xF4,0x28,0x35,0x9B,0xD3,0xAF } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>
    {
        using type = Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>
    {
        using type = Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult;
    };
    template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddLicenseAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSatisfactionInfosAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RefreshLicensesAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SatisfiedByDevice(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SatisfiedByOpenLicense(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SatisfiedByTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SatisfiedByPass(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SatisfiedByInstallMedia(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SatisfiedBySignedInUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSatisfied(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LicenseSatisfactionInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics
    {
        auto AddLicenseAsync(Windows::Storage::Streams::IBuffer const& license) const;
        auto GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2
    {
        auto RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo
    {
        [[nodiscard]] auto SatisfiedByDevice() const;
        [[nodiscard]] auto SatisfiedByOpenLicense() const;
        [[nodiscard]] auto SatisfiedByTrial() const;
        [[nodiscard]] auto SatisfiedByPass() const;
        [[nodiscard]] auto SatisfiedByInstallMedia() const;
        [[nodiscard]] auto SatisfiedBySignedInUser() const;
        [[nodiscard]] auto IsSatisfied() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult
    {
        [[nodiscard]] auto LicenseSatisfactionInfos() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult<D>;
    };
}
#endif
