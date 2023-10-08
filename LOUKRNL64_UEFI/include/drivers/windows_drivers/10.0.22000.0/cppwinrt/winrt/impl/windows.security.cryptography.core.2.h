// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Core_2_H
#define WINRT_Windows_Security_Cryptography_Core_2_H
#include "winrt/impl/Windows.Security.Cryptography.Certificates.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Core
{
    struct AsymmetricAlgorithmNames
    {
        AsymmetricAlgorithmNames() = delete;
        [[nodiscard]] static auto RsaPkcs1();
        [[nodiscard]] static auto RsaOaepSha1();
        [[nodiscard]] static auto RsaOaepSha256();
        [[nodiscard]] static auto RsaOaepSha384();
        [[nodiscard]] static auto RsaOaepSha512();
        [[nodiscard]] static auto EcdsaP256Sha256();
        [[nodiscard]] static auto EcdsaP384Sha384();
        [[nodiscard]] static auto EcdsaP521Sha512();
        [[nodiscard]] static auto DsaSha1();
        [[nodiscard]] static auto DsaSha256();
        [[nodiscard]] static auto RsaSignPkcs1Sha1();
        [[nodiscard]] static auto RsaSignPkcs1Sha256();
        [[nodiscard]] static auto RsaSignPkcs1Sha384();
        [[nodiscard]] static auto RsaSignPkcs1Sha512();
        [[nodiscard]] static auto RsaSignPssSha1();
        [[nodiscard]] static auto RsaSignPssSha256();
        [[nodiscard]] static auto RsaSignPssSha384();
        [[nodiscard]] static auto RsaSignPssSha512();
        [[nodiscard]] static auto EcdsaSha256();
        [[nodiscard]] static auto EcdsaSha384();
        [[nodiscard]] static auto EcdsaSha512();
    };
    struct __declspec(empty_bases) AsymmetricKeyAlgorithmProvider : Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider,
        impl::require<AsymmetricKeyAlgorithmProvider, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
    {
        AsymmetricKeyAlgorithmProvider(std::nullptr_t) noexcept {}
        AsymmetricKeyAlgorithmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider(ptr, take_ownership_from_abi) {}
        static auto OpenAlgorithm(param::hstring const& algorithm);
    };
    struct CryptographicEngine
    {
        CryptographicEngine() = delete;
        static auto Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv);
        static auto Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv);
        static auto EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData);
        static auto DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData);
        static auto Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data);
        static auto VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature);
        static auto DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize);
        static auto SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data);
        static auto VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature);
        static auto DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv);
        static auto SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data);
        static auto SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data);
    };
    struct __declspec(empty_bases) CryptographicHash : Windows::Security::Cryptography::Core::IHashComputation
    {
        CryptographicHash(std::nullptr_t) noexcept {}
        CryptographicHash(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IHashComputation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CryptographicKey : Windows::Security::Cryptography::Core::ICryptographicKey
    {
        CryptographicKey(std::nullptr_t) noexcept {}
        CryptographicKey(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::ICryptographicKey(ptr, take_ownership_from_abi) {}
    };
    struct EccCurveNames
    {
        EccCurveNames() = delete;
        [[nodiscard]] static auto BrainpoolP160r1();
        [[nodiscard]] static auto BrainpoolP160t1();
        [[nodiscard]] static auto BrainpoolP192r1();
        [[nodiscard]] static auto BrainpoolP192t1();
        [[nodiscard]] static auto BrainpoolP224r1();
        [[nodiscard]] static auto BrainpoolP224t1();
        [[nodiscard]] static auto BrainpoolP256r1();
        [[nodiscard]] static auto BrainpoolP256t1();
        [[nodiscard]] static auto BrainpoolP320r1();
        [[nodiscard]] static auto BrainpoolP320t1();
        [[nodiscard]] static auto BrainpoolP384r1();
        [[nodiscard]] static auto BrainpoolP384t1();
        [[nodiscard]] static auto BrainpoolP512r1();
        [[nodiscard]] static auto BrainpoolP512t1();
        [[nodiscard]] static auto Curve25519();
        [[nodiscard]] static auto Ec192wapi();
        [[nodiscard]] static auto NistP192();
        [[nodiscard]] static auto NistP224();
        [[nodiscard]] static auto NistP256();
        [[nodiscard]] static auto NistP384();
        [[nodiscard]] static auto NistP521();
        [[nodiscard]] static auto NumsP256t1();
        [[nodiscard]] static auto NumsP384t1();
        [[nodiscard]] static auto NumsP512t1();
        [[nodiscard]] static auto SecP160k1();
        [[nodiscard]] static auto SecP160r1();
        [[nodiscard]] static auto SecP160r2();
        [[nodiscard]] static auto SecP192k1();
        [[nodiscard]] static auto SecP192r1();
        [[nodiscard]] static auto SecP224k1();
        [[nodiscard]] static auto SecP224r1();
        [[nodiscard]] static auto SecP256k1();
        [[nodiscard]] static auto SecP256r1();
        [[nodiscard]] static auto SecP384r1();
        [[nodiscard]] static auto SecP521r1();
        [[nodiscard]] static auto Wtls7();
        [[nodiscard]] static auto Wtls9();
        [[nodiscard]] static auto Wtls12();
        [[nodiscard]] static auto X962P192v1();
        [[nodiscard]] static auto X962P192v2();
        [[nodiscard]] static auto X962P192v3();
        [[nodiscard]] static auto X962P239v1();
        [[nodiscard]] static auto X962P239v2();
        [[nodiscard]] static auto X962P239v3();
        [[nodiscard]] static auto X962P256v1();
        [[nodiscard]] static auto AllEccCurveNames();
    };
    struct __declspec(empty_bases) EncryptedAndAuthenticatedData : Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData
    {
        EncryptedAndAuthenticatedData(std::nullptr_t) noexcept {}
        EncryptedAndAuthenticatedData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData(ptr, take_ownership_from_abi) {}
    };
    struct HashAlgorithmNames
    {
        HashAlgorithmNames() = delete;
        [[nodiscard]] static auto Md5();
        [[nodiscard]] static auto Sha1();
        [[nodiscard]] static auto Sha256();
        [[nodiscard]] static auto Sha384();
        [[nodiscard]] static auto Sha512();
    };
    struct __declspec(empty_bases) HashAlgorithmProvider : Windows::Security::Cryptography::Core::IHashAlgorithmProvider
    {
        HashAlgorithmProvider(std::nullptr_t) noexcept {}
        HashAlgorithmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IHashAlgorithmProvider(ptr, take_ownership_from_abi) {}
        static auto OpenAlgorithm(param::hstring const& algorithm);
    };
    struct KeyDerivationAlgorithmNames
    {
        KeyDerivationAlgorithmNames() = delete;
        [[nodiscard]] static auto Pbkdf2Md5();
        [[nodiscard]] static auto Pbkdf2Sha1();
        [[nodiscard]] static auto Pbkdf2Sha256();
        [[nodiscard]] static auto Pbkdf2Sha384();
        [[nodiscard]] static auto Pbkdf2Sha512();
        [[nodiscard]] static auto Sp800108CtrHmacMd5();
        [[nodiscard]] static auto Sp800108CtrHmacSha1();
        [[nodiscard]] static auto Sp800108CtrHmacSha256();
        [[nodiscard]] static auto Sp800108CtrHmacSha384();
        [[nodiscard]] static auto Sp800108CtrHmacSha512();
        [[nodiscard]] static auto Sp80056aConcatMd5();
        [[nodiscard]] static auto Sp80056aConcatSha1();
        [[nodiscard]] static auto Sp80056aConcatSha256();
        [[nodiscard]] static auto Sp80056aConcatSha384();
        [[nodiscard]] static auto Sp80056aConcatSha512();
        [[nodiscard]] static auto CapiKdfMd5();
        [[nodiscard]] static auto CapiKdfSha1();
        [[nodiscard]] static auto CapiKdfSha256();
        [[nodiscard]] static auto CapiKdfSha384();
        [[nodiscard]] static auto CapiKdfSha512();
    };
    struct __declspec(empty_bases) KeyDerivationAlgorithmProvider : Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider
    {
        KeyDerivationAlgorithmProvider(std::nullptr_t) noexcept {}
        KeyDerivationAlgorithmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider(ptr, take_ownership_from_abi) {}
        static auto OpenAlgorithm(param::hstring const& algorithm);
    };
    struct __declspec(empty_bases) KeyDerivationParameters : Windows::Security::Cryptography::Core::IKeyDerivationParameters,
        impl::require<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
    {
        KeyDerivationParameters(std::nullptr_t) noexcept {}
        KeyDerivationParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IKeyDerivationParameters(ptr, take_ownership_from_abi) {}
        static auto BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount);
        static auto BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context);
        static auto BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo);
        static auto BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm);
    };
    struct MacAlgorithmNames
    {
        MacAlgorithmNames() = delete;
        [[nodiscard]] static auto HmacMd5();
        [[nodiscard]] static auto HmacSha1();
        [[nodiscard]] static auto HmacSha256();
        [[nodiscard]] static auto HmacSha384();
        [[nodiscard]] static auto HmacSha512();
        [[nodiscard]] static auto AesCmac();
    };
    struct __declspec(empty_bases) MacAlgorithmProvider : Windows::Security::Cryptography::Core::IMacAlgorithmProvider,
        impl::require<MacAlgorithmProvider, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
    {
        MacAlgorithmProvider(std::nullptr_t) noexcept {}
        MacAlgorithmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::IMacAlgorithmProvider(ptr, take_ownership_from_abi) {}
        static auto OpenAlgorithm(param::hstring const& algorithm);
    };
    struct PersistedKeyProvider
    {
        PersistedKeyProvider() = delete;
        static auto OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding);
        static auto OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding);
    };
    struct SymmetricAlgorithmNames
    {
        SymmetricAlgorithmNames() = delete;
        [[nodiscard]] static auto DesCbc();
        [[nodiscard]] static auto DesEcb();
        [[nodiscard]] static auto TripleDesCbc();
        [[nodiscard]] static auto TripleDesEcb();
        [[nodiscard]] static auto Rc2Cbc();
        [[nodiscard]] static auto Rc2Ecb();
        [[nodiscard]] static auto AesCbc();
        [[nodiscard]] static auto AesEcb();
        [[nodiscard]] static auto AesGcm();
        [[nodiscard]] static auto AesCcm();
        [[nodiscard]] static auto AesCbcPkcs7();
        [[nodiscard]] static auto AesEcbPkcs7();
        [[nodiscard]] static auto DesCbcPkcs7();
        [[nodiscard]] static auto DesEcbPkcs7();
        [[nodiscard]] static auto TripleDesCbcPkcs7();
        [[nodiscard]] static auto TripleDesEcbPkcs7();
        [[nodiscard]] static auto Rc2CbcPkcs7();
        [[nodiscard]] static auto Rc2EcbPkcs7();
        [[nodiscard]] static auto Rc4();
    };
    struct __declspec(empty_bases) SymmetricKeyAlgorithmProvider : Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider
    {
        SymmetricKeyAlgorithmProvider(std::nullptr_t) noexcept {}
        SymmetricKeyAlgorithmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider(ptr, take_ownership_from_abi) {}
        static auto OpenAlgorithm(param::hstring const& algorithm);
    };
}
#endif
