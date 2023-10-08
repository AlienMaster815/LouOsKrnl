// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Activation_1_H
#define WINRT_Windows_ApplicationModel_Activation_1_H
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct __declspec(empty_bases) IActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedEventArgs>
    {
        IActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivatedEventArgsWithUser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedEventArgsWithUser>,
        impl::require<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IActivatedEventArgsWithUser(std::nullptr_t = nullptr) noexcept {}
        IActivatedEventArgsWithUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IApplicationViewActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationViewActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IApplicationViewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IApplicationViewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IAppointmentsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderAddAppointmentActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderAddAppointmentActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderAddAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderRemoveAppointmentActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderRemoveAppointmentActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderRemoveAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderReplaceAppointmentActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderReplaceAppointmentActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderReplaceAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderShowTimeFrameActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderShowTimeFrameActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderShowTimeFrameActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundActivatedEventArgs>
    {
        IBackgroundActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackgroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerPreviewActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerPreviewActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IBarcodeScannerPreviewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerPreviewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICachedFileUpdaterActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraSettingsActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICameraSettingsActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICameraSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICameraSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommandLineActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommandLineActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICommandLineActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICommandLineActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommandLineActivationOperation :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICommandLineActivationOperation>
    {
        ICommandLineActivationOperation(std::nullptr_t = nullptr) noexcept {}
        ICommandLineActivationOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactCallActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactCallActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactMapActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactMapActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactMapActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactMapActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactMessageActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactMessageActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactMessageActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactMessageActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPanelActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPanelActivatedEventArgs>
    {
        IContactPanelActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPanelActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPickerActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPostActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPostActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactPostActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPostActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactVideoCallActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactVideoCallActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactVideoCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactVideoCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactsProviderActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactsProviderActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactsProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContinuationActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContinuationActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContinuationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContinuationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IDeviceActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeviceActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IDevicePairingActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDialReceiverActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDialReceiverActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        IDialReceiverActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDialReceiverActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFileActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgsWithCallerPackageFamilyName :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgsWithCallerPackageFamilyName>,
        impl::require<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileActivatedEventArgsWithCallerPackageFamilyName(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgsWithCallerPackageFamilyName(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgsWithNeighboringFiles :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgsWithNeighboringFiles>,
        impl::require<Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        IFileActivatedEventArgsWithNeighboringFiles(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgsWithNeighboringFiles(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileOpenPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerActivatedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerActivatedEventArgs2>
    {
        IFileOpenPickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerContinuationEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerContinuationEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFileOpenPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileSavePickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerActivatedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerActivatedEventArgs2>
    {
        IFileSavePickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerContinuationEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerContinuationEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFileSavePickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFolderPickerContinuationEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFolderPickerContinuationEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFolderPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFolderPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILaunchActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILaunchActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ILaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILaunchActivatedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILaunchActivatedEventArgs2>,
        impl::require<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        ILaunchActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        ILaunchActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ILockScreenActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILockScreenActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenCallActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenCallActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        ILockScreenCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILockScreenCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneCallActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPhoneCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPickerReturnedActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPickerReturnedActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPickerReturnedActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPickerReturnedActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrelaunchActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrelaunchActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrelaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrelaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrint3DWorkflowActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DWorkflowActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrint3DWorkflowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrint3DWorkflowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskSettingsActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskSettingsActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrintTaskSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IProtocolActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>,
        impl::require<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(std::nullptr_t = nullptr) noexcept {}
        IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolForResultsActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolForResultsActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolForResultsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IProtocolForResultsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRestrictedLaunchActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRestrictedLaunchActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IRestrictedLaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRestrictedLaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISearchActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISearchActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ISearchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISearchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISearchActivatedEventArgsWithLinguisticDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISearchActivatedEventArgsWithLinguisticDetails>
    {
        ISearchActivatedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
        ISearchActivatedEventArgsWithLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareTargetActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IShareTargetActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IShareTargetActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareTargetActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISplashScreen :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISplashScreen>
    {
        ISplashScreen(std::nullptr_t = nullptr) noexcept {}
        ISplashScreen(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStartupTaskActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStartupTaskActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IStartupTaskActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStartupTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITileActivatedInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITileActivatedInfo>
    {
        ITileActivatedInfo(std::nullptr_t = nullptr) noexcept {}
        ITileActivatedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IToastNotificationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IUserDataAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IViewSwitcherProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IViewSwitcherProvider>,
        impl::require<Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IViewSwitcherProvider(std::nullptr_t = nullptr) noexcept {}
        IViewSwitcherProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVoiceCommandActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVoiceCommandActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IVoiceCommandActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVoiceCommandActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWalletActionActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWalletActionActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IWalletActionActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWalletActionActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderActivatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderActivatedEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IWebAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAuthenticationBrokerContinuationEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAuthenticationBrokerContinuationEventArgs>,
        impl::require<Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebAuthenticationBrokerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
