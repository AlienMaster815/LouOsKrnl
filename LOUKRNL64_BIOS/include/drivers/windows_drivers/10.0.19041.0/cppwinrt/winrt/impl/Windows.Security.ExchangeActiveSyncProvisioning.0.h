// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_0_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_0_H
namespace winrt::Windows::Foundation
{
}
namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    enum class EasDisallowConvenienceLogonResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
    };
    enum class EasEncryptionProviderType : int32_t
    {
        NotEvaluated = 0,
        WindowsEncryption = 1,
        OtherEncryption = 2,
    };
    enum class EasMaxInactivityTimeLockResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        InvalidParameter = 4,
    };
    enum class EasMaxPasswordFailedAttemptsResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        InvalidParameter = 4,
    };
    enum class EasMinPasswordComplexCharactersResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        RequestedPolicyNotEnforceable = 4,
        InvalidParameter = 5,
        CurrentUserHasBlankPassword = 6,
        AdminsHaveBlankPassword = 7,
        UserCannotChangePassword = 8,
        AdminsCannotChangePassword = 9,
        LocalControlledUsersCannotChangePassword = 10,
        ConnectedAdminsProviderPolicyIsWeak = 11,
        ConnectedUserProviderPolicyIsWeak = 12,
        ChangeConnectedAdminsPassword = 13,
        ChangeConnectedUserPassword = 14,
    };
    enum class EasMinPasswordLengthResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        RequestedPolicyNotEnforceable = 4,
        InvalidParameter = 5,
        CurrentUserHasBlankPassword = 6,
        AdminsHaveBlankPassword = 7,
        UserCannotChangePassword = 8,
        AdminsCannotChangePassword = 9,
        LocalControlledUsersCannotChangePassword = 10,
        ConnectedAdminsProviderPolicyIsWeak = 11,
        ConnectedUserProviderPolicyIsWeak = 12,
        ChangeConnectedAdminsPassword = 13,
        ChangeConnectedUserPassword = 14,
    };
    enum class EasPasswordExpirationResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        RequestedExpirationIncompatible = 4,
        InvalidParameter = 5,
        UserCannotChangePassword = 6,
        AdminsCannotChangePassword = 7,
        LocalControlledUsersCannotChangePassword = 8,
    };
    enum class EasPasswordHistoryResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        RequestedPolicyIsStricter = 3,
        InvalidParameter = 4,
    };
    enum class EasRequireEncryptionResult : int32_t
    {
        NotEvaluated = 0,
        Compliant = 1,
        CanBeCompliant = 2,
        NotProvisionedOnAllVolumes = 3,
        DeFixedDataNotSupported = 4,
        FixedDataNotSupported = 4,
        DeHardwareNotCompliant = 5,
        HardwareNotCompliant = 5,
        DeWinReNotConfigured = 6,
        LockNotConfigured = 6,
        DeProtectionSuspended = 7,
        ProtectionSuspended = 7,
        DeOsVolumeNotProtected = 8,
        OsVolumeNotProtected = 8,
        DeProtectionNotYetEnabled = 9,
        ProtectionNotYetEnabled = 9,
        NoFeatureLicense = 10,
        OsNotProtected = 11,
        UnexpectedFailure = 12,
    };
    struct IEasClientDeviceInformation;
    struct IEasClientDeviceInformation2;
    struct IEasClientSecurityPolicy;
    struct IEasComplianceResults;
    struct IEasComplianceResults2;
    struct EasClientDeviceInformation;
    struct EasClientSecurityPolicy;
    struct EasComplianceResults;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasDisallowConvenienceLogonResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasEncryptionProviderType" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMaxInactivityTimeLockResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMaxPasswordFailedAttemptsResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordComplexCharactersResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordLengthResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordExpirationResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordHistoryResult" };
    };
    template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>
    {
        static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasRequireEncryptionResult" };
    };
    template <> struct guid_storage<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        static constexpr guid value{ 0x54DFD981,0x1968,0x4CA3,{ 0xB9,0x58,0xE5,0x95,0xD1,0x65,0x05,0xEB } };
    };
    template <> struct guid_storage<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        static constexpr guid value{ 0xFFB35923,0xBB26,0x4D6A,{ 0x81,0xBC,0x16,0x5A,0xEE,0x0A,0xD7,0x54 } };
    };
    template <> struct guid_storage<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        static constexpr guid value{ 0x45B72362,0xDFBA,0x4A9B,{ 0xAC,0xED,0x6F,0xE2,0xAD,0xCB,0x64,0x20 } };
    };
    template <> struct guid_storage<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        static constexpr guid value{ 0x463C299C,0x7F19,0x4C66,{ 0xB4,0x03,0xCB,0x45,0xDD,0x57,0xA2,0xB3 } };
    };
    template <> struct guid_storage<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        static constexpr guid value{ 0x2FBE60C9,0x1AA8,0x47F5,{ 0x88,0xBB,0xCB,0x3E,0xF0,0xBF,0xFB,0x15 } };
    };
    template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>
    {
        using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation;
    };
    template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>
    {
        using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy;
    };
    template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>
    {
        using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults;
    };
    template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_OperatingSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemProductName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemSku(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemHardwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemFirmwareVersion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequireEncryption(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequireEncryption(bool) noexcept = 0;
            virtual int32_t __stdcall get_MinPasswordLength(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinPasswordLength(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_DisallowConvenienceLogon(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DisallowConvenienceLogon(bool) noexcept = 0;
            virtual int32_t __stdcall get_MinPasswordComplexCharacters(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinPasswordComplexCharacters(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PasswordExpiration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_PasswordExpiration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_PasswordHistory(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PasswordHistory(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxPasswordFailedAttempts(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxPasswordFailedAttempts(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxInactivityTimeLock(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxInactivityTimeLock(int64_t) noexcept = 0;
            virtual int32_t __stdcall CheckCompliance(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compliant(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RequireEncryptionResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinPasswordLengthResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisallowConvenienceLogonResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinPasswordComplexCharactersResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PasswordExpirationResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PasswordHistoryResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPasswordFailedAttemptsResult(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxInactivityTimeLockResult(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncryptionProviderType(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto OperatingSystem() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto SystemManufacturer() const;
        [[nodiscard]] auto SystemProductName() const;
        [[nodiscard]] auto SystemSku() const;
    };
    template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2
    {
        [[nodiscard]] auto SystemHardwareVersion() const;
        [[nodiscard]] auto SystemFirmwareVersion() const;
    };
    template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy
    {
        [[nodiscard]] auto RequireEncryption() const;
        auto RequireEncryption(bool value) const;
        [[nodiscard]] auto MinPasswordLength() const;
        auto MinPasswordLength(uint8_t value) const;
        [[nodiscard]] auto DisallowConvenienceLogon() const;
        auto DisallowConvenienceLogon(bool value) const;
        [[nodiscard]] auto MinPasswordComplexCharacters() const;
        auto MinPasswordComplexCharacters(uint8_t value) const;
        [[nodiscard]] auto PasswordExpiration() const;
        auto PasswordExpiration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto PasswordHistory() const;
        auto PasswordHistory(uint32_t value) const;
        [[nodiscard]] auto MaxPasswordFailedAttempts() const;
        auto MaxPasswordFailedAttempts(uint8_t value) const;
        [[nodiscard]] auto MaxInactivityTimeLock() const;
        auto MaxInactivityTimeLock(Windows::Foundation::TimeSpan const& value) const;
        auto CheckCompliance() const;
        auto ApplyAsync() const;
    };
    template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults
    {
        [[nodiscard]] auto Compliant() const;
        [[nodiscard]] auto RequireEncryptionResult() const;
        [[nodiscard]] auto MinPasswordLengthResult() const;
        [[nodiscard]] auto DisallowConvenienceLogonResult() const;
        [[nodiscard]] auto MinPasswordComplexCharactersResult() const;
        [[nodiscard]] auto PasswordExpirationResult() const;
        [[nodiscard]] auto PasswordHistoryResult() const;
        [[nodiscard]] auto MaxPasswordFailedAttemptsResult() const;
        [[nodiscard]] auto MaxInactivityTimeLockResult() const;
    };
    template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>;
    };
    template <typename D>
    struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2
    {
        [[nodiscard]] auto EncryptionProviderType() const;
    };
    template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2<D>;
    };
}
#endif
