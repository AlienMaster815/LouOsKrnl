// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_0_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    enum class ExtendedExecutionReason : int32_t
    {
        Unspecified = 0,
        LocationTracking = 1,
        SavingData = 2,
    };
    enum class ExtendedExecutionResult : int32_t
    {
        Allowed = 0,
        Denied = 1,
    };
    enum class ExtendedExecutionRevokedReason : int32_t
    {
        Resumed = 0,
        SystemPolicy = 1,
    };
    struct IExtendedExecutionRevokedEventArgs;
    struct IExtendedExecutionSession;
    struct ExtendedExecutionRevokedEventArgs;
    struct ExtendedExecutionSession;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionReason" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult" };
    };
    template <> struct name<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedReason" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        static constexpr guid value{ 0xBFBC9F16,0x63B5,0x4C0B,{ 0xAA,0xD6,0x82,0x8A,0xF5,0x37,0x3E,0xC3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        static constexpr guid value{ 0xAF908A2D,0x118B,0x48F1,{ 0x93,0x08,0x0C,0x4F,0xC4,0x1E,0x20,0x0F } };
    };
    template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>
    {
        using type = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>
    {
        using type = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession;
    };
    template <> struct abi<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Reason(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentProgress(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PercentProgress(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_Revoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Revoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestExtensionAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession
    {
        [[nodiscard]] auto Reason() const;
        auto Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto PercentProgress() const;
        auto PercentProgress(uint32_t value) const;
        auto Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const;
        using Revoked_revoker = impl::event_revoker<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession, &impl::abi_t<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>::remove_Revoked>;
        Revoked_revoker Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> const& handler) const;
        auto Revoked(winrt::event_token const& token) const noexcept;
        auto RequestExtensionAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession<D>;
    };
}
#endif
