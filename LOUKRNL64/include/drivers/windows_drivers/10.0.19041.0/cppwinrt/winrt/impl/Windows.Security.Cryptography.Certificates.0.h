// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Certificates_0_H
#define WINRT_Windows_Security_Cryptography_Certificates_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
}
namespace winrt::Windows::Security::Cryptography::Certificates
{
    enum class CertificateChainPolicy : int32_t
    {
        Base = 0,
        Ssl = 1,
        NTAuthentication = 2,
        MicrosoftRoot = 3,
    };
    enum class ChainValidationResult : int32_t
    {
        Success = 0,
        Untrusted = 1,
        Revoked = 2,
        Expired = 3,
        IncompleteChain = 4,
        InvalidSignature = 5,
        WrongUsage = 6,
        InvalidName = 7,
        InvalidCertificateAuthorityPolicy = 8,
        BasicConstraintsError = 9,
        UnknownCriticalExtension = 10,
        RevocationInformationMissing = 11,
        RevocationFailure = 12,
        OtherErrors = 13,
    };
    enum class EnrollKeyUsages : uint32_t
    {
        None = 0,
        Decryption = 0x1,
        Signing = 0x2,
        KeyAgreement = 0x4,
        All = 0xffffff,
    };
    enum class ExportOption : int32_t
    {
        NotExportable = 0,
        Exportable = 1,
    };
    enum class InstallOptions : uint32_t
    {
        None = 0,
        DeleteExpired = 0x1,
    };
    enum class KeyProtectionLevel : int32_t
    {
        NoConsent = 0,
        ConsentOnly = 1,
        ConsentWithPassword = 2,
        ConsentWithFingerprint = 3,
    };
    enum class KeySize : int32_t
    {
        Invalid = 0,
        Rsa2048 = 2048,
        Rsa4096 = 4096,
    };
    enum class SignatureValidationResult : int32_t
    {
        Success = 0,
        InvalidParameter = 1,
        BadMessage = 2,
        InvalidSignature = 3,
        OtherErrors = 4,
    };
    struct ICertificate;
    struct ICertificate2;
    struct ICertificate3;
    struct ICertificateChain;
    struct ICertificateEnrollmentManagerStatics;
    struct ICertificateEnrollmentManagerStatics2;
    struct ICertificateEnrollmentManagerStatics3;
    struct ICertificateExtension;
    struct ICertificateFactory;
    struct ICertificateKeyUsages;
    struct ICertificateQuery;
    struct ICertificateQuery2;
    struct ICertificateRequestProperties;
    struct ICertificateRequestProperties2;
    struct ICertificateRequestProperties3;
    struct ICertificateRequestProperties4;
    struct ICertificateStore;
    struct ICertificateStore2;
    struct ICertificateStoresStatics;
    struct ICertificateStoresStatics2;
    struct IChainBuildingParameters;
    struct IChainValidationParameters;
    struct ICmsAttachedSignature;
    struct ICmsAttachedSignatureFactory;
    struct ICmsAttachedSignatureStatics;
    struct ICmsDetachedSignature;
    struct ICmsDetachedSignatureFactory;
    struct ICmsDetachedSignatureStatics;
    struct ICmsSignerInfo;
    struct ICmsTimestampInfo;
    struct IKeyAlgorithmNamesStatics;
    struct IKeyAlgorithmNamesStatics2;
    struct IKeyAttestationHelperStatics;
    struct IKeyAttestationHelperStatics2;
    struct IKeyStorageProviderNamesStatics;
    struct IKeyStorageProviderNamesStatics2;
    struct IPfxImportParameters;
    struct IStandardCertificateStoreNamesStatics;
    struct ISubjectAlternativeNameInfo;
    struct ISubjectAlternativeNameInfo2;
    struct IUserCertificateEnrollmentManager;
    struct IUserCertificateEnrollmentManager2;
    struct IUserCertificateStore;
    struct Certificate;
    struct CertificateChain;
    struct CertificateEnrollmentManager;
    struct CertificateExtension;
    struct CertificateKeyUsages;
    struct CertificateQuery;
    struct CertificateRequestProperties;
    struct CertificateStore;
    struct CertificateStores;
    struct ChainBuildingParameters;
    struct ChainValidationParameters;
    struct CmsAttachedSignature;
    struct CmsDetachedSignature;
    struct CmsSignerInfo;
    struct CmsTimestampInfo;
    struct KeyAlgorithmNames;
    struct KeyAttestationHelper;
    struct KeyStorageProviderNames;
    struct PfxImportParameters;
    struct StandardCertificateStoreNames;
    struct SubjectAlternativeNameInfo;
    struct UserCertificateEnrollmentManager;
    struct UserCertificateStore;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::Certificate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateChain>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateExtension>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateQuery>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateRequestProperties>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateStores>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainBuildingParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainValidationParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsSignerInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyAlgorithmNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyAttestationHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyStorageProviderNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::PfxImportParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::UserCertificateStore>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainValidationResult>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::ExportOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::InstallOptions>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeySize>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Cryptography::Certificates::SignatureValidationResult>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificate" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificate2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificate3" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateChain" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateExtension" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateFactory" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateKeyUsages" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateQuery" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateQuery2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateStore" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateStore2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IChainBuildingParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IChainValidationParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignature" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignature" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsSignerInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ICmsTimestampInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IPfxImportParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.IUserCertificateStore" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::Certificate>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.Certificate" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateChain>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateChain" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateExtension>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateExtension" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateKeyUsages" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateQuery>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateQuery" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateRequestProperties>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateRequestProperties" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateStore>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateStore" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateStores>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateStores" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ChainBuildingParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ChainBuildingParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ChainValidationParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ChainValidationParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CmsAttachedSignature" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CmsDetachedSignature" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CmsSignerInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CmsSignerInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CmsTimestampInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::KeyAlgorithmNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.KeyAlgorithmNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::KeyAttestationHelper>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.KeyAttestationHelper" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::KeyStorageProviderNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.KeyStorageProviderNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::PfxImportParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.PfxImportParameters" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::UserCertificateStore>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.UserCertificateStore" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.CertificateChainPolicy" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ChainValidationResult>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ChainValidationResult" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.EnrollKeyUsages" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::ExportOption>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.ExportOption" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::InstallOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.InstallOptions" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.KeyProtectionLevel" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::KeySize>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.KeySize" };
    };
    template <> struct name<Windows::Security::Cryptography::Certificates::SignatureValidationResult>
    {
        static constexpr auto & value{ L"Windows.Security.Cryptography.Certificates.SignatureValidationResult" };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        static constexpr guid value{ 0x333F740C,0x04D8,0x43B3,{ 0xB2,0x78,0x8C,0x5F,0xCC,0x9B,0xE5,0xA0 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        static constexpr guid value{ 0x17B8374C,0x8A25,0x4D96,{ 0xA4,0x92,0x8F,0xC2,0x9A,0xC4,0xFD,0xA6 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        static constexpr guid value{ 0xBE51A966,0xAE5F,0x4652,{ 0xAC,0xE7,0xC6,0xD7,0xE7,0x72,0x4C,0xF3 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        static constexpr guid value{ 0x20BF5385,0x3691,0x4501,{ 0xA6,0x2C,0xFD,0x97,0x27,0x8B,0x31,0xEE } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        static constexpr guid value{ 0x8846EF3F,0xA986,0x48FB,{ 0x9F,0xD7,0x9A,0xEC,0x06,0x93,0x5B,0xF1 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        static constexpr guid value{ 0xDC5B1C33,0x6429,0x4014,{ 0x99,0x9C,0x5D,0x97,0x35,0x80,0x2D,0x1D } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        static constexpr guid value{ 0xFDEC82BE,0x617C,0x425A,{ 0xB7,0x2D,0x39,0x8B,0x26,0xAC,0x72,0x64 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        static constexpr guid value{ 0x84CF0656,0xA9E6,0x454D,{ 0x8E,0x45,0x2E,0xA7,0xC4,0xBC,0xD5,0x3B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        static constexpr guid value{ 0x17B4221C,0x4BAF,0x44A2,{ 0x96,0x08,0x04,0xFB,0x62,0xB1,0x69,0x42 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        static constexpr guid value{ 0x6AC6206F,0xE1CF,0x486A,{ 0xB4,0x85,0xA6,0x9C,0x83,0xE4,0x6F,0xD1 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        static constexpr guid value{ 0x5B082A31,0xA728,0x4916,{ 0xB5,0xEE,0xFF,0xCB,0x8A,0xCF,0x24,0x17 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        static constexpr guid value{ 0x935A0AF7,0x0BD9,0x4F75,{ 0xB8,0xC2,0xE2,0x7A,0x7F,0x74,0xEE,0xCD } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        static constexpr guid value{ 0x487E84F6,0x94E2,0x4DCE,{ 0x88,0x33,0x1A,0x70,0x0A,0x37,0xA2,0x9A } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        static constexpr guid value{ 0x3DA0C954,0xD73F,0x4FF3,{ 0xA0,0xA6,0x06,0x77,0xC0,0xAD,0xA0,0x5B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        static constexpr guid value{ 0xE687F616,0x734D,0x46B1,{ 0x9D,0x4C,0x6E,0xDF,0xDB,0xFC,0x84,0x5B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        static constexpr guid value{ 0x4E429AD2,0x1C61,0x4FEA,{ 0xB8,0xFE,0x13,0x5F,0xB1,0x9C,0xDC,0xE4 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        static constexpr guid value{ 0xB0BFF720,0x344E,0x4331,{ 0xAF,0x14,0xA7,0xF7,0xA7,0xEB,0xC9,0x3A } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        static constexpr guid value{ 0xC7E68E4A,0x417D,0x4D1A,{ 0xBA,0xBD,0x15,0x68,0x7E,0x54,0x99,0x74 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        static constexpr guid value{ 0xFBECC739,0xC6FE,0x4DE7,{ 0x99,0xCF,0x74,0xC3,0xE5,0x96,0xE0,0x32 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        static constexpr guid value{ 0xFA900B79,0xA0D4,0x4B8C,{ 0xBC,0x55,0xC0,0xA3,0x7E,0xB1,0x41,0xED } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        static constexpr guid value{ 0x422BA922,0x7C8D,0x47B7,{ 0xB5,0x9B,0xB1,0x27,0x03,0x73,0x3A,0xC3 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        static constexpr guid value{ 0xC4743B4A,0x7EB0,0x4B56,{ 0xA0,0x40,0xB9,0xC8,0xE6,0x55,0xDD,0xF3 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        static constexpr guid value{ 0x61899D9D,0x3757,0x4ECB,{ 0xBD,0xDC,0x0C,0xA3,0x57,0xD7,0xA9,0x36 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        static constexpr guid value{ 0xD0C8FC15,0xF757,0x4C64,{ 0xA3,0x62,0x52,0xCC,0x1C,0x77,0xCF,0xFB } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        static constexpr guid value{ 0x87989C8E,0xB0AD,0x498D,{ 0xA7,0xF5,0x78,0xB5,0x9B,0xCE,0x4B,0x36 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        static constexpr guid value{ 0x0F1EF154,0xF65E,0x4536,{ 0x83,0x39,0x59,0x44,0x08,0x1D,0xB2,0xCA } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        static constexpr guid value{ 0xC4AB3503,0xAE7F,0x4387,{ 0xAD,0x19,0x00,0xF1,0x50,0xE4,0x8E,0xBB } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        static constexpr guid value{ 0x3D114CFD,0xBF9B,0x4682,{ 0x9B,0xE6,0x91,0xF5,0x7C,0x05,0x38,0x08 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        static constexpr guid value{ 0x50D020DB,0x1D2F,0x4C1A,{ 0xB5,0xC5,0xD0,0x18,0x8F,0xF9,0x1F,0x47 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        static constexpr guid value{ 0x2F5F00F2,0x2C18,0x4F88,{ 0x84,0x35,0xC5,0x34,0x08,0x60,0x76,0xF5 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        static constexpr guid value{ 0x479065D7,0x7AC7,0x4581,{ 0x8C,0x3B,0xD0,0x70,0x27,0x14,0x04,0x48 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        static constexpr guid value{ 0xC99B5686,0xE1FD,0x4A4A,{ 0x89,0x3D,0xA2,0x6F,0x33,0xDD,0x8B,0xB4 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        static constexpr guid value{ 0x1648E246,0xF644,0x4326,{ 0x88,0xBE,0x3A,0xF1,0x02,0xD3,0x0E,0x0C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        static constexpr guid value{ 0x9C590B2C,0xA6C6,0x4A5E,{ 0x9E,0x64,0xE8,0x5D,0x52,0x79,0xDF,0x97 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        static constexpr guid value{ 0xAF186AE0,0x5529,0x4602,{ 0xBD,0x94,0x0A,0xAB,0x91,0x95,0x7B,0x5C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        static constexpr guid value{ 0x262D743D,0x9C2E,0x41CC,{ 0x88,0x12,0xC4,0xD9,0x71,0xDD,0x7C,0x60 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        static constexpr guid value{ 0x680D3511,0x9A08,0x47C8,{ 0x86,0x4A,0x2E,0xDD,0x4D,0x8E,0xB4,0x6C } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        static constexpr guid value{ 0x0C154ADB,0xA496,0x41F8,{ 0x8F,0xE5,0x9E,0x96,0xF3,0x6E,0xFB,0xF8 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        static constexpr guid value{ 0x582859F1,0x569D,0x4C20,{ 0xBE,0x7B,0x4E,0x1C,0x9A,0x0B,0xC5,0x2B } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        static constexpr guid value{ 0x437A78C6,0x1C51,0x41EA,{ 0xB3,0x4A,0x3D,0x65,0x43,0x98,0xA3,0x70 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        static constexpr guid value{ 0x96313718,0x22E1,0x4819,{ 0xB2,0x0B,0xAB,0x46,0xA6,0xEC,0xA0,0x6E } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        static constexpr guid value{ 0x0DAD9CB1,0x65DE,0x492A,{ 0xB8,0x6D,0xFC,0x5C,0x48,0x2C,0x37,0x47 } };
    };
    template <> struct guid_storage<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        static constexpr guid value{ 0xC9FB1D83,0x789F,0x4B4E,{ 0x91,0x80,0x04,0x5A,0x75,0x7A,0xAC,0x6D } };
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::Certificate>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificate;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateChain>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateChain;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateExtension>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateExtension;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateKeyUsages;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateQuery>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateQuery;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateRequestProperties>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateRequestProperties;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateStore>
    {
        using type = Windows::Security::Cryptography::Certificates::ICertificateStore;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::ChainBuildingParameters>
    {
        using type = Windows::Security::Cryptography::Certificates::IChainBuildingParameters;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::ChainValidationParameters>
    {
        using type = Windows::Security::Cryptography::Certificates::IChainValidationParameters;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>
    {
        using type = Windows::Security::Cryptography::Certificates::ICmsAttachedSignature;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>
    {
        using type = Windows::Security::Cryptography::Certificates::ICmsDetachedSignature;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsSignerInfo>
    {
        using type = Windows::Security::Cryptography::Certificates::ICmsSignerInfo;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>
    {
        using type = Windows::Security::Cryptography::Certificates::ICmsTimestampInfo;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::PfxImportParameters>
    {
        using type = Windows::Security::Cryptography::Certificates::IPfxImportParameters;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>
    {
        using type = Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>
    {
        using type = Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager;
    };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::UserCertificateStore>
    {
        using type = Windows::Security::Cryptography::Certificates::IUserCertificateStore;
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BuildChainAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall BuildChainWithParametersAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetHashValue(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetHashValueWithAlgorithm(void*, uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetCertificateBlob(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Issuer(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasPrivateKey(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStronglyProtected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ValidFrom(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ValidTo(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSecurityDeviceBound(bool*) noexcept = 0;
            virtual int32_t __stdcall get_KeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignatureAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignatureHashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubjectAlternativeName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPerUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_StoreName(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Validate(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ValidateWithParameters(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCertificates(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall InstallCertificateAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserCertificateEnrollmentManager(void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataToKspAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ObjectId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ObjectId(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCritical(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCritical(bool) noexcept = 0;
            virtual int32_t __stdcall EncodeValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_Value(uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCertificate(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncipherOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EncipherOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_CrlSign(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CrlSign(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyCertificateSign(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyCertificateSign(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyAgreement(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyAgreement(bool) noexcept = 0;
            virtual int32_t __stdcall get_DataEncipherment(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DataEncipherment(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyEncipherment(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyEncipherment(bool) noexcept = 0;
            virtual int32_t __stdcall get_NonRepudiation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NonRepudiation(bool) noexcept = 0;
            virtual int32_t __stdcall get_DigitalSignature(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DigitalSignature(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_IssuerName(void**) noexcept = 0;
            virtual int32_t __stdcall put_IssuerName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbprint(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbprint(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_HardwareOnly(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IncludeDuplicates(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeDuplicates(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncludeExpiredCertificates(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeExpiredCertificates(bool) noexcept = 0;
            virtual int32_t __stdcall get_StoreName(void**) noexcept = 0;
            virtual int32_t __stdcall put_StoreName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeySize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeySize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_HashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HashAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Exportable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Exportable(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyUsages(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyUsages(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyStorageProviderName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartcardReaderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_SmartcardReaderName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SigningCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_SigningCertificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_AttestationCredentialCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_AttestationCredentialCertificate(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurveName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CurveName(void*) noexcept = 0;
            virtual int32_t __stdcall get_CurveParameters(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_CurveParameters(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseExistingKey(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseExistingKey(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SuppressedDefaults(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubjectAlternativeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Delete(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllWithQueryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_TrustedRootCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserStoreByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_ValidationTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ValidationTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_RevocationCheckEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RevocationCheckEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRetrievalEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NetworkRetrievalEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AuthorityInformationAccessEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AuthorityInformationAccessEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentTimeValidationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CurrentTimeValidationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExclusiveTrustRoots(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CertificateChainPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CertificateChainPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ServerDnsName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerDnsName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Content(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_Signers(void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignature(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCmsAttachedSignature(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GenerateSignatureAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Signers(void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignatureAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCmsDetachedSignature(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GenerateSignatureAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_Certificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_HashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HashAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_TimestampInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SigningCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh521(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa521(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ecdsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DecryptTpmAttestationCredentialAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetTpmAttestationCredentialId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DecryptTpmAttestationCredentialWithContainerNameAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareKeyStorageProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmartcardKeyStorageProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlatformKeyStorageProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PassportKeyStorageProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exportable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Exportable(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyStorageProviderName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_ReaderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReaderName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Personal(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrustedRootCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateCertificationAuthorities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IPAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Url(void**) noexcept = 0;
            virtual int32_t __stdcall get_DnsName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DistinguishedName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_IPAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall get_Urls(void**) noexcept = 0;
            virtual int32_t __stdcall get_DnsNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_DistinguishedNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extension(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall InstallCertificateAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataToKspAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAddAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate
    {
        auto BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
        auto BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const& parameters) const;
        [[nodiscard]] auto SerialNumber() const;
        auto GetHashValue() const;
        auto GetHashValue(param::hstring const& hashAlgorithmName) const;
        auto GetCertificateBlob() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto Issuer() const;
        [[nodiscard]] auto HasPrivateKey() const;
        [[nodiscard]] auto IsStronglyProtected() const;
        [[nodiscard]] auto ValidFrom() const;
        [[nodiscard]] auto ValidTo() const;
        [[nodiscard]] auto EnhancedKeyUsages() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto FriendlyName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate2
    {
        [[nodiscard]] auto IsSecurityDeviceBound() const;
        [[nodiscard]] auto KeyUsages() const;
        [[nodiscard]] auto KeyAlgorithmName() const;
        [[nodiscard]] auto SignatureAlgorithmName() const;
        [[nodiscard]] auto SignatureHashAlgorithmName() const;
        [[nodiscard]] auto SubjectAlternativeName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate3
    {
        [[nodiscard]] auto IsPerUser() const;
        [[nodiscard]] auto StoreName() const;
        [[nodiscard]] auto KeyStorageProviderName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateChain
    {
        auto Validate() const;
        auto Validate(Windows::Security::Cryptography::Certificates::ChainValidationParameters const& parameter) const;
        auto GetCertificates(bool includeRoot) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics
    {
        auto CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const;
        auto InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const;
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2
    {
        [[nodiscard]] auto UserCertificateEnrollmentManager() const;
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3
    {
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateExtension
    {
        [[nodiscard]] auto ObjectId() const;
        auto ObjectId(param::hstring const& value) const;
        [[nodiscard]] auto IsCritical() const;
        auto IsCritical(bool value) const;
        auto EncodeValue(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(array_view<uint8_t const> value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateFactory
    {
        auto CreateCertificate(Windows::Storage::Streams::IBuffer const& certBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages
    {
        [[nodiscard]] auto EncipherOnly() const;
        auto EncipherOnly(bool value) const;
        [[nodiscard]] auto CrlSign() const;
        auto CrlSign(bool value) const;
        [[nodiscard]] auto KeyCertificateSign() const;
        auto KeyCertificateSign(bool value) const;
        [[nodiscard]] auto KeyAgreement() const;
        auto KeyAgreement(bool value) const;
        [[nodiscard]] auto DataEncipherment() const;
        auto DataEncipherment(bool value) const;
        [[nodiscard]] auto KeyEncipherment() const;
        auto KeyEncipherment(bool value) const;
        [[nodiscard]] auto NonRepudiation() const;
        auto NonRepudiation(bool value) const;
        [[nodiscard]] auto DigitalSignature() const;
        auto DigitalSignature(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateQuery
    {
        [[nodiscard]] auto EnhancedKeyUsages() const;
        [[nodiscard]] auto IssuerName() const;
        auto IssuerName(param::hstring const& value) const;
        [[nodiscard]] auto FriendlyName() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto Thumbprint() const;
        auto Thumbprint(array_view<uint8_t const> value) const;
        [[nodiscard]] auto HardwareOnly() const;
        auto HardwareOnly(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2
    {
        [[nodiscard]] auto IncludeDuplicates() const;
        auto IncludeDuplicates(bool value) const;
        [[nodiscard]] auto IncludeExpiredCertificates() const;
        auto IncludeExpiredCertificates(bool value) const;
        [[nodiscard]] auto StoreName() const;
        auto StoreName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties
    {
        [[nodiscard]] auto Subject() const;
        auto Subject(param::hstring const& value) const;
        [[nodiscard]] auto KeyAlgorithmName() const;
        auto KeyAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] auto KeySize() const;
        auto KeySize(uint32_t value) const;
        [[nodiscard]] auto FriendlyName() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto HashAlgorithmName() const;
        auto HashAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] auto Exportable() const;
        auto Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const;
        [[nodiscard]] auto KeyUsages() const;
        auto KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages const& value) const;
        [[nodiscard]] auto KeyProtectionLevel() const;
        auto KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const;
        [[nodiscard]] auto KeyStorageProviderName() const;
        auto KeyStorageProviderName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2
    {
        [[nodiscard]] auto SmartcardReaderName() const;
        auto SmartcardReaderName(param::hstring const& value) const;
        [[nodiscard]] auto SigningCertificate() const;
        auto SigningCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] auto AttestationCredentialCertificate() const;
        auto AttestationCredentialCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3
    {
        [[nodiscard]] auto CurveName() const;
        auto CurveName(param::hstring const& value) const;
        [[nodiscard]] auto CurveParameters() const;
        auto CurveParameters(array_view<uint8_t const> value) const;
        [[nodiscard]] auto ContainerNamePrefix() const;
        auto ContainerNamePrefix(param::hstring const& value) const;
        [[nodiscard]] auto ContainerName() const;
        auto ContainerName(param::hstring const& value) const;
        [[nodiscard]] auto UseExistingKey() const;
        auto UseExistingKey(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4
    {
        [[nodiscard]] auto SuppressedDefaults() const;
        [[nodiscard]] auto SubjectAlternativeName() const;
        [[nodiscard]] auto Extensions() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStore
    {
        auto Add(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        auto Delete(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStore2
    {
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStore2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics
    {
        auto FindAllAsync() const;
        auto FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query) const;
        [[nodiscard]] auto TrustedRootCertificationAuthorities() const;
        [[nodiscard]] auto IntermediateCertificationAuthorities() const;
        auto GetStoreByName(param::hstring const& storeName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2
    {
        auto GetUserStoreByName(param::hstring const& storeName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters
    {
        [[nodiscard]] auto EnhancedKeyUsages() const;
        [[nodiscard]] auto ValidationTimestamp() const;
        auto ValidationTimestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto RevocationCheckEnabled() const;
        auto RevocationCheckEnabled(bool value) const;
        [[nodiscard]] auto NetworkRetrievalEnabled() const;
        auto NetworkRetrievalEnabled(bool value) const;
        [[nodiscard]] auto AuthorityInformationAccessEnabled() const;
        auto AuthorityInformationAccessEnabled(bool value) const;
        [[nodiscard]] auto CurrentTimeValidationEnabled() const;
        auto CurrentTimeValidationEnabled(bool value) const;
        [[nodiscard]] auto ExclusiveTrustRoots() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters
    {
        [[nodiscard]] auto CertificateChainPolicy() const;
        auto CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy const& value) const;
        [[nodiscard]] auto ServerDnsName() const;
        auto ServerDnsName(Windows::Networking::HostName const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature
    {
        [[nodiscard]] auto Certificates() const;
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto Signers() const;
        auto VerifySignature() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory
    {
        auto CreateCmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics
    {
        auto GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature
    {
        [[nodiscard]] auto Certificates() const;
        [[nodiscard]] auto Signers() const;
        auto VerifySignatureAsync(Windows::Storage::Streams::IInputStream const& data) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory
    {
        auto CreateCmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics
    {
        auto GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo
    {
        [[nodiscard]] auto Certificate() const;
        auto Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] auto HashAlgorithmName() const;
        auto HashAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] auto TimestampInfo() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo
    {
        [[nodiscard]] auto SigningCertificate() const;
        [[nodiscard]] auto Certificates() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics
    {
        [[nodiscard]] auto Rsa() const;
        [[nodiscard]] auto Dsa() const;
        [[nodiscard]] auto Ecdh256() const;
        [[nodiscard]] auto Ecdh384() const;
        [[nodiscard]] auto Ecdh521() const;
        [[nodiscard]] auto Ecdsa256() const;
        [[nodiscard]] auto Ecdsa384() const;
        [[nodiscard]] auto Ecdsa521() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2
    {
        [[nodiscard]] auto Ecdsa() const;
        [[nodiscard]] auto Ecdh() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics
    {
        auto DecryptTpmAttestationCredentialAsync(param::hstring const& credential) const;
        auto GetTpmAttestationCredentialId(param::hstring const& credential) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2
    {
        auto DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics
    {
        [[nodiscard]] auto SoftwareKeyStorageProvider() const;
        [[nodiscard]] auto SmartcardKeyStorageProvider() const;
        [[nodiscard]] auto PlatformKeyStorageProvider() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2
    {
        [[nodiscard]] auto PassportKeyStorageProvider() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters
    {
        [[nodiscard]] auto Exportable() const;
        auto Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const;
        [[nodiscard]] auto KeyProtectionLevel() const;
        auto KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const;
        [[nodiscard]] auto InstallOptions() const;
        auto InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions const& value) const;
        [[nodiscard]] auto FriendlyName() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto KeyStorageProviderName() const;
        auto KeyStorageProviderName(param::hstring const& value) const;
        [[nodiscard]] auto ContainerNamePrefix() const;
        auto ContainerNamePrefix(param::hstring const& value) const;
        [[nodiscard]] auto ReaderName() const;
        auto ReaderName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics
    {
        [[nodiscard]] auto Personal() const;
        [[nodiscard]] auto TrustedRootCertificationAuthorities() const;
        [[nodiscard]] auto IntermediateCertificationAuthorities() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo
    {
        [[nodiscard]] auto EmailName() const;
        [[nodiscard]] auto IPAddress() const;
        [[nodiscard]] auto Url() const;
        [[nodiscard]] auto DnsName() const;
        [[nodiscard]] auto DistinguishedName() const;
        [[nodiscard]] auto PrincipalName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2
    {
        [[nodiscard]] auto EmailNames() const;
        [[nodiscard]] auto IPAddresses() const;
        [[nodiscard]] auto Urls() const;
        [[nodiscard]] auto DnsNames() const;
        [[nodiscard]] auto DistinguishedNames() const;
        [[nodiscard]] auto PrincipalNames() const;
        [[nodiscard]] auto Extension() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager
    {
        auto CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const;
        auto InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const;
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const;
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2
    {
        auto ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore
    {
        auto RequestAddAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        auto RequestDeleteAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>;
    };
}
#endif
