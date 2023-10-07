// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Protection_PlayReady_1_H
#define WINRT_Windows_Media_Protection_PlayReady_1_H
#include "winrt/impl/Windows.Media.Protection.0.h"
#include "winrt/impl/Windows.Media.Protection.PlayReady.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Protection::PlayReady
{
    struct __declspec(empty_bases) INDClient :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDClient>
    {
        INDClient(std::nullptr_t = nullptr) noexcept {}
        INDClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDClientFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDClientFactory>
    {
        INDClientFactory(std::nullptr_t = nullptr) noexcept {}
        INDClientFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDClosedCaptionDataReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDClosedCaptionDataReceivedEventArgs>
    {
        INDClosedCaptionDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INDClosedCaptionDataReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDCustomData :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDCustomData>
    {
        INDCustomData(std::nullptr_t = nullptr) noexcept {}
        INDCustomData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDCustomDataFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDCustomDataFactory>
    {
        INDCustomDataFactory(std::nullptr_t = nullptr) noexcept {}
        INDCustomDataFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDDownloadEngine :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDDownloadEngine>
    {
        INDDownloadEngine(std::nullptr_t = nullptr) noexcept {}
        INDDownloadEngine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDDownloadEngineNotifier :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDDownloadEngineNotifier>
    {
        INDDownloadEngineNotifier(std::nullptr_t = nullptr) noexcept {}
        INDDownloadEngineNotifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDLicenseFetchCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDLicenseFetchCompletedEventArgs>
    {
        INDLicenseFetchCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INDLicenseFetchCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDLicenseFetchDescriptor :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDLicenseFetchDescriptor>
    {
        INDLicenseFetchDescriptor(std::nullptr_t = nullptr) noexcept {}
        INDLicenseFetchDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDLicenseFetchDescriptorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDLicenseFetchDescriptorFactory>
    {
        INDLicenseFetchDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
        INDLicenseFetchDescriptorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDLicenseFetchResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDLicenseFetchResult>
    {
        INDLicenseFetchResult(std::nullptr_t = nullptr) noexcept {}
        INDLicenseFetchResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDMessenger :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDMessenger>
    {
        INDMessenger(std::nullptr_t = nullptr) noexcept {}
        INDMessenger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDProximityDetectionCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDProximityDetectionCompletedEventArgs>
    {
        INDProximityDetectionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INDProximityDetectionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDRegistrationCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDRegistrationCompletedEventArgs>
    {
        INDRegistrationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        INDRegistrationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDSendResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDSendResult>
    {
        INDSendResult(std::nullptr_t = nullptr) noexcept {}
        INDSendResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDStartResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDStartResult>
    {
        INDStartResult(std::nullptr_t = nullptr) noexcept {}
        INDStartResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDStorageFileHelper :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDStorageFileHelper>
    {
        INDStorageFileHelper(std::nullptr_t = nullptr) noexcept {}
        INDStorageFileHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDStreamParser :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDStreamParser>
    {
        INDStreamParser(std::nullptr_t = nullptr) noexcept {}
        INDStreamParser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDStreamParserNotifier :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDStreamParserNotifier>
    {
        INDStreamParserNotifier(std::nullptr_t = nullptr) noexcept {}
        INDStreamParserNotifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDTCPMessengerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDTCPMessengerFactory>
    {
        INDTCPMessengerFactory(std::nullptr_t = nullptr) noexcept {}
        INDTCPMessengerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) INDTransmitterProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<INDTransmitterProperties>
    {
        INDTransmitterProperties(std::nullptr_t = nullptr) noexcept {}
        INDTransmitterProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyContentHeader :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyContentHeader>
    {
        IPlayReadyContentHeader(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyContentHeader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyContentHeader2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyContentHeader2>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>
    {
        IPlayReadyContentHeader2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyContentHeader2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyContentHeaderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyContentHeaderFactory>
    {
        IPlayReadyContentHeaderFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyContentHeaderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyContentHeaderFactory2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyContentHeaderFactory2>
    {
        IPlayReadyContentHeaderFactory2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyContentHeaderFactory2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyContentResolver :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyContentResolver>
    {
        IPlayReadyContentResolver(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyContentResolver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyDomain :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyDomain>
    {
        IPlayReadyDomain(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyDomain(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyDomainIterableFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyDomainIterableFactory>
    {
        IPlayReadyDomainIterableFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyDomainIterableFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyDomainJoinServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyDomainJoinServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyDomainJoinServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyDomainJoinServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyDomainLeaveServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyDomainLeaveServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyDomainLeaveServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyDomainLeaveServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyITADataGenerator :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyITADataGenerator>
    {
        IPlayReadyITADataGenerator(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyITADataGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyIndividualizationServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyIndividualizationServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyIndividualizationServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyIndividualizationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicense :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicense>
    {
        IPlayReadyLicense(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicense2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicense2>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyLicense2, Windows::Media::Protection::PlayReady::IPlayReadyLicense>
    {
        IPlayReadyLicense2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicense2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseAcquisitionServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyLicenseAcquisitionServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseAcquisitionServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseAcquisitionServiceRequest2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest2>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>
    {
        IPlayReadyLicenseAcquisitionServiceRequest2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseAcquisitionServiceRequest2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseAcquisitionServiceRequest3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseAcquisitionServiceRequest3>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>
    {
        IPlayReadyLicenseAcquisitionServiceRequest3(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseAcquisitionServiceRequest3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseIterableFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseIterableFactory>
    {
        IPlayReadyLicenseIterableFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseIterableFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseManagement :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseManagement>
    {
        IPlayReadyLicenseManagement(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseManagement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseSession>
    {
        IPlayReadyLicenseSession(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseSession2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseSession2>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>
    {
        IPlayReadyLicenseSession2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseSession2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyLicenseSessionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyLicenseSessionFactory>
    {
        IPlayReadyLicenseSessionFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyLicenseSessionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyMeteringReportServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyMeteringReportServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyMeteringReportServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyMeteringReportServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyRevocationServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyRevocationServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadyRevocationServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyRevocationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadySecureStopIterableFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadySecureStopIterableFactory>
    {
        IPlayReadySecureStopIterableFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadySecureStopIterableFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadySecureStopServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadySecureStopServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
    {
        IPlayReadySecureStopServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadySecureStopServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadySecureStopServiceRequestFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadySecureStopServiceRequestFactory>
    {
        IPlayReadySecureStopServiceRequestFactory(std::nullptr_t = nullptr) noexcept {}
        IPlayReadySecureStopServiceRequestFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyServiceRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyServiceRequest>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest, Windows::Media::Protection::IMediaProtectionServiceRequest>
    {
        IPlayReadyServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadySoapMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadySoapMessage>
    {
        IPlayReadySoapMessage(std::nullptr_t = nullptr) noexcept {}
        IPlayReadySoapMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyStatics>
    {
        IPlayReadyStatics(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyStatics2>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyStatics2, Windows::Media::Protection::PlayReady::IPlayReadyStatics>
    {
        IPlayReadyStatics2(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyStatics3>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyStatics3, Windows::Media::Protection::PlayReady::IPlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2>
    {
        IPlayReadyStatics3(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyStatics4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyStatics4>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyStatics4, Windows::Media::Protection::PlayReady::IPlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>
    {
        IPlayReadyStatics4(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyStatics4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlayReadyStatics5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlayReadyStatics5>,
        impl::require<Windows::Media::Protection::PlayReady::IPlayReadyStatics5, Windows::Media::Protection::PlayReady::IPlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2, Windows::Media::Protection::PlayReady::IPlayReadyStatics3, Windows::Media::Protection::PlayReady::IPlayReadyStatics4>
    {
        IPlayReadyStatics5(std::nullptr_t = nullptr) noexcept {}
        IPlayReadyStatics5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
