// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Activation_2_H
#define WINRT_Windows_ApplicationModel_Activation_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct __declspec(empty_bases) AppointmentsProviderAddAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderAddAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentsProviderRemoveAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentsProviderReplaceAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentsProviderShowAppointmentDetailsActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs,
        impl::require<AppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppointmentsProviderShowTimeFrameActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs,
        impl::require<AppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderShowTimeFrameActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BackgroundActivatedEventArgs : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs
    {
        BackgroundActivatedEventArgs(std::nullptr_t) noexcept {}
        BackgroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerPreviewActivatedEventArgs : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs,
        impl::require<BarcodeScannerPreviewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        BarcodeScannerPreviewActivatedEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerPreviewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CachedFileUpdaterActivatedEventArgs : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs,
        impl::require<CachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        CachedFileUpdaterActivatedEventArgs(std::nullptr_t) noexcept {}
        CachedFileUpdaterActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CameraSettingsActivatedEventArgs : Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs
    {
        CameraSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
        CameraSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandLineActivatedEventArgs : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs,
        impl::require<CommandLineActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        CommandLineActivatedEventArgs(std::nullptr_t) noexcept {}
        CommandLineActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandLineActivationOperation : Windows::ApplicationModel::Activation::ICommandLineActivationOperation
    {
        CommandLineActivationOperation(std::nullptr_t) noexcept {}
        CommandLineActivationOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICommandLineActivationOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactCallActivatedEventArgs : Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs
    {
        ContactCallActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactMapActivatedEventArgs : Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs
    {
        ContactMapActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactMapActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactMessageActivatedEventArgs : Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs
    {
        ContactMessageActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactMessageActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPanelActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs,
        impl::require<ContactPanelActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ContactPanelActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactPanelActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPickerActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs
    {
        ContactPickerActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactPostActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs
    {
        ContactPostActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactPostActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactVideoCallActivatedEventArgs : Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs
    {
        ContactVideoCallActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactVideoCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceActivatedEventArgs : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs,
        impl::require<DeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DeviceActivatedEventArgs(std::nullptr_t) noexcept {}
        DeviceActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePairingActivatedEventArgs : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs,
        impl::require<DevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DevicePairingActivatedEventArgs(std::nullptr_t) noexcept {}
        DevicePairingActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DialReceiverActivatedEventArgs : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs,
        impl::require<DialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DialReceiverActivatedEventArgs(std::nullptr_t) noexcept {}
        DialReceiverActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileActivatedEventArgs : Windows::ApplicationModel::Activation::IFileActivatedEventArgs,
        impl::require<FileActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileActivatedEventArgs(std::nullptr_t) noexcept {}
        FileActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileOpenPickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs,
        impl::require<FileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileOpenPickerActivatedEventArgs(std::nullptr_t) noexcept {}
        FileOpenPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileOpenPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs,
        impl::require<FileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileOpenPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FileOpenPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileSavePickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs,
        impl::require<FileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileSavePickerActivatedEventArgs(std::nullptr_t) noexcept {}
        FileSavePickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileSavePickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs,
        impl::require<FileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileSavePickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FileSavePickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FolderPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs,
        impl::require<FolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FolderPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FolderPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LaunchActivatedEventArgs : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,
        impl::require<LaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        LaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        LaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenActivatedEventArgs : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs,
        impl::require<LockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        LockScreenActivatedEventArgs(std::nullptr_t) noexcept {}
        LockScreenActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenCallActivatedEventArgs : Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs,
        impl::require<LockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
    {
        LockScreenCallActivatedEventArgs(std::nullptr_t) noexcept {}
        LockScreenCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenComponentActivatedEventArgs : Windows::ApplicationModel::Activation::IActivatedEventArgs
    {
        LockScreenComponentActivatedEventArgs(std::nullptr_t) noexcept {}
        LockScreenComponentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneCallActivatedEventArgs : Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs,
        impl::require<PhoneCallActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        PhoneCallActivatedEventArgs(std::nullptr_t) noexcept {}
        PhoneCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerReturnedActivatedEventArgs : Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs
    {
        PickerReturnedActivatedEventArgs(std::nullptr_t) noexcept {}
        PickerReturnedActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DWorkflowActivatedEventArgs : Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs
    {
        Print3DWorkflowActivatedEventArgs(std::nullptr_t) noexcept {}
        Print3DWorkflowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintTaskSettingsActivatedEventArgs : Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs
    {
        PrintTaskSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
        PrintTaskSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtocolActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,
        impl::require<ProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ProtocolActivatedEventArgs(std::nullptr_t) noexcept {}
        ProtocolActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtocolForResultsActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs,
        impl::require<ProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ProtocolForResultsActivatedEventArgs(std::nullptr_t) noexcept {}
        ProtocolForResultsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RestrictedLaunchActivatedEventArgs : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs,
        impl::require<RestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        RestrictedLaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        RestrictedLaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchActivatedEventArgs : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs,
        impl::require<SearchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        SearchActivatedEventArgs(std::nullptr_t) noexcept {}
        SearchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareTargetActivatedEventArgs : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs,
        impl::require<ShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ShareTargetActivatedEventArgs(std::nullptr_t) noexcept {}
        ShareTargetActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SplashScreen : Windows::ApplicationModel::Activation::ISplashScreen
    {
        SplashScreen(std::nullptr_t) noexcept {}
        SplashScreen(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ISplashScreen(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StartupTaskActivatedEventArgs : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs,
        impl::require<StartupTaskActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        StartupTaskActivatedEventArgs(std::nullptr_t) noexcept {}
        StartupTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TileActivatedInfo : Windows::ApplicationModel::Activation::ITileActivatedInfo
    {
        TileActivatedInfo(std::nullptr_t) noexcept {}
        TileActivatedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ITileActivatedInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ToastNotificationActivatedEventArgs : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs,
        impl::require<ToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        ToastNotificationActivatedEventArgs(std::nullptr_t) noexcept {}
        ToastNotificationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserDataAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs
    {
        UserDataAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        UserDataAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VoiceCommandActivatedEventArgs : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs,
        impl::require<VoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        VoiceCommandActivatedEventArgs(std::nullptr_t) noexcept {}
        VoiceCommandActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WalletActionActivatedEventArgs : Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs
    {
        WalletActionActivatedEventArgs(std::nullptr_t) noexcept {}
        WalletActionActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs,
        impl::require<WebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        WebAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAuthenticationBrokerContinuationEventArgs : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs
    {
        WebAuthenticationBrokerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebAuthenticationBrokerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
