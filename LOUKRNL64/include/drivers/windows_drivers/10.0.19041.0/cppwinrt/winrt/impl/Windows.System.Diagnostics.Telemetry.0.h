// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Diagnostics_Telemetry_0_H
#define WINRT_Windows_System_Diagnostics_Telemetry_0_H
namespace winrt::Windows::System::Diagnostics::Telemetry
{
    enum class PlatformTelemetryRegistrationStatus : int32_t
    {
        Success = 0,
        SettingsOutOfRange = 1,
        UnknownFailure = 2,
    };
    struct IPlatformTelemetryClientStatics;
    struct IPlatformTelemetryRegistrationResult;
    struct IPlatformTelemetryRegistrationSettings;
    struct PlatformTelemetryClient;
    struct PlatformTelemetryRegistrationResult;
    struct PlatformTelemetryRegistrationSettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings" };
    };
    template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>
    {
        static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationStatus" };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
    {
        static constexpr guid value{ 0x9BF3F25D,0xD5C3,0x4EEA,{ 0x8D,0xBE,0x9C,0x8D,0xBB,0x0D,0x9D,0x8F } };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
    {
        static constexpr guid value{ 0x4D8518AB,0x2292,0x49BD,{ 0xA1,0x5A,0x3D,0x71,0xD2,0x14,0x51,0x12 } };
    };
    template <> struct guid_storage<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
    {
        static constexpr guid value{ 0x819A8582,0xCA19,0x415E,{ 0xBB,0x79,0x9C,0x22,0x4B,0xFA,0x3A,0x73 } };
    };
    template <> struct default_interface<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
    {
        using type = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult;
    };
    template <> struct default_interface<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
    {
        using type = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings;
    };
    template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterWithSettings(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StorageSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StorageSize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_UploadQuotaSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UploadQuotaSize(uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics
    {
        auto Register(param::hstring const& id) const;
        auto Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings) const;
    };
    template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings
    {
        [[nodiscard]] auto StorageSize() const;
        auto StorageSize(uint32_t value) const;
        [[nodiscard]] auto UploadQuotaSize() const;
        auto UploadQuotaSize(uint32_t value) const;
    };
    template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>;
    };
}
#endif
