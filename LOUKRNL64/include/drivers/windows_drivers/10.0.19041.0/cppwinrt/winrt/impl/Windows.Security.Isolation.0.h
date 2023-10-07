// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Isolation_0_H
#define WINRT_Windows_Security_Isolation_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct IAsyncAction;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Security::Isolation
{
    enum class IsolatedWindowsEnvironmentActivator : int32_t
    {
        System = 0,
        User = 1,
    };
    enum class IsolatedWindowsEnvironmentAllowedClipboardFormats : uint32_t
    {
        None = 0,
        Text = 0x1,
        Image = 0x2,
    };
    enum class IsolatedWindowsEnvironmentAvailablePrinters : uint32_t
    {
        None = 0,
        Local = 0x1,
        Network = 0x2,
        SystemPrintToPdf = 0x4,
        SystemPrintToXps = 0x8,
    };
    enum class IsolatedWindowsEnvironmentClipboardCopyPasteDirections : uint32_t
    {
        None = 0,
        HostToIsolatedWindowsEnvironment = 0x1,
        IsolatedWindowsEnvironmentToHost = 0x2,
    };
    enum class IsolatedWindowsEnvironmentCreateStatus : int32_t
    {
        Success = 0,
        FailureByPolicy = 1,
        UnknownFailure = 2,
    };
    enum class IsolatedWindowsEnvironmentHostError : int32_t
    {
        AdminPolicyIsDisabledOrNotPresent = 0,
        FeatureNotInstalled = 1,
        HardwareRequirementsNotMet = 2,
        RebootRequired = 3,
        UnknownError = 4,
    };
    enum class IsolatedWindowsEnvironmentLaunchFileStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        EnvironmentUnavailable = 2,
        FileNotFound = 3,
        TimedOut = 4,
    };
    enum class IsolatedWindowsEnvironmentOwnerRegistrationStatus : int32_t
    {
        Success = 0,
        InvalidArgument = 1,
        AccessDenied = 2,
        InsufficientMemory = 3,
        UnknownFailure = 4,
    };
    enum class IsolatedWindowsEnvironmentPostMessageStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        EnvironmentUnavailable = 2,
    };
    enum class IsolatedWindowsEnvironmentProcessState : int32_t
    {
        Running = 1,
        Aborted = 2,
        Completed = 3,
    };
    enum class IsolatedWindowsEnvironmentProgressState : int32_t
    {
        Queued = 0,
        Processing = 1,
        Completed = 2,
    };
    enum class IsolatedWindowsEnvironmentShareFolderStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        EnvironmentUnavailable = 2,
        FolderNotFound = 3,
        AccessDenied = 4,
    };
    enum class IsolatedWindowsEnvironmentStartProcessStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        EnvironmentUnavailable = 2,
        FileNotFound = 3,
        AppNotRegistered = 4,
    };
    struct IIsolatedWindowsEnvironment;
    struct IIsolatedWindowsEnvironment2;
    struct IIsolatedWindowsEnvironmentCreateResult;
    struct IIsolatedWindowsEnvironmentFactory;
    struct IIsolatedWindowsEnvironmentFile;
    struct IIsolatedWindowsEnvironmentHostStatics;
    struct IIsolatedWindowsEnvironmentLaunchFileResult;
    struct IIsolatedWindowsEnvironmentOptions;
    struct IIsolatedWindowsEnvironmentOwnerRegistrationData;
    struct IIsolatedWindowsEnvironmentOwnerRegistrationResult;
    struct IIsolatedWindowsEnvironmentOwnerRegistrationStatics;
    struct IIsolatedWindowsEnvironmentPostMessageResult;
    struct IIsolatedWindowsEnvironmentProcess;
    struct IIsolatedWindowsEnvironmentShareFolderRequestOptions;
    struct IIsolatedWindowsEnvironmentShareFolderResult;
    struct IIsolatedWindowsEnvironmentStartProcessResult;
    struct IIsolatedWindowsEnvironmentTelemetryParameters;
    struct IIsolatedWindowsHostMessengerStatics;
    struct IIsolatedWindowsHostMessengerStatics2;
    struct IsolatedWindowsEnvironment;
    struct IsolatedWindowsEnvironmentCreateResult;
    struct IsolatedWindowsEnvironmentFile;
    struct IsolatedWindowsEnvironmentHost;
    struct IsolatedWindowsEnvironmentLaunchFileResult;
    struct IsolatedWindowsEnvironmentOptions;
    struct IsolatedWindowsEnvironmentOwnerRegistration;
    struct IsolatedWindowsEnvironmentOwnerRegistrationData;
    struct IsolatedWindowsEnvironmentOwnerRegistrationResult;
    struct IsolatedWindowsEnvironmentPostMessageResult;
    struct IsolatedWindowsEnvironmentProcess;
    struct IsolatedWindowsEnvironmentShareFolderRequestOptions;
    struct IsolatedWindowsEnvironmentShareFolderResult;
    struct IsolatedWindowsEnvironmentStartProcessResult;
    struct IsolatedWindowsEnvironmentTelemetryParameters;
    struct IsolatedWindowsHostMessenger;
    struct IsolatedWindowsEnvironmentCreateProgress;
    struct HostMessageReceivedCallback;
    struct MessageReceivedCallback;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironment>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironment2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironment>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentFile>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentHost>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentLaunchFileResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentPostMessageResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentProcess>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentStartProcessResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsHostMessenger>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentActivator>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentAllowedClipboardFormats>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentAvailablePrinters>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentClipboardCopyPasteDirections>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentLaunchFileStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentPostMessageStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentProcessState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentProgressState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentStartProcessStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateProgress>
    {
        using type = struct_category<Windows::Security::Isolation::IsolatedWindowsEnvironmentProgressState, uint32_t>;
    };
    template <> struct category<Windows::Security::Isolation::HostMessageReceivedCallback>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::Security::Isolation::MessageReceivedCallback>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironment>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironment" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironment2>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironment2" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentCreateResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFactory>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentFactory" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentFile" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentHostStatics" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentLaunchFileResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentOptions" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentOwnerRegistrationData" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentOwnerRegistrationResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentOwnerRegistrationStatics" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentPostMessageResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentProcess" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentShareFolderRequestOptions" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentShareFolderResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentStartProcessResult" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsEnvironmentTelemetryParameters" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsHostMessengerStatics" };
    };
    template <> struct name<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics2>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IIsolatedWindowsHostMessengerStatics2" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironment>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironment" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentCreateResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentFile>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentFile" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentHost>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentHost" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentLaunchFileResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentLaunchFileResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentOptions" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistration>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentOwnerRegistration" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentOwnerRegistrationData" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentOwnerRegistrationResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentPostMessageResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentPostMessageResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentProcess>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentProcess" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentShareFolderRequestOptions" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentShareFolderResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentStartProcessResult>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentStartProcessResult" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentTelemetryParameters" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsHostMessenger>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsHostMessenger" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentActivator>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentActivator" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentAllowedClipboardFormats>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentAllowedClipboardFormats" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentAvailablePrinters>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentAvailablePrinters" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentClipboardCopyPasteDirections>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentClipboardCopyPasteDirections" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentCreateStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentHostError" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentLaunchFileStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentLaunchFileStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentOwnerRegistrationStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentPostMessageStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentPostMessageStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentProcessState>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentProcessState" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentProgressState>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentProgressState" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentShareFolderStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentStartProcessStatus>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentStartProcessStatus" };
    };
    template <> struct name<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateProgress>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.IsolatedWindowsEnvironmentCreateProgress" };
    };
    template <> struct name<Windows::Security::Isolation::HostMessageReceivedCallback>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.HostMessageReceivedCallback" };
    };
    template <> struct name<Windows::Security::Isolation::MessageReceivedCallback>
    {
        static constexpr auto & value{ L"Windows.Security.Isolation.MessageReceivedCallback" };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironment>
    {
        static constexpr guid value{ 0x41D24597,0xC328,0x4467,{ 0xB3,0x7F,0x4D,0xFC,0x6F,0x60,0xB6,0xBC } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironment2>
    {
        static constexpr guid value{ 0x2D365F39,0x88BD,0x4AB4,{ 0x93,0xCF,0x7E,0x2B,0xCE,0xF3,0x37,0xC0 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult>
    {
        static constexpr guid value{ 0xEF9A5E58,0xDCD7,0x45C2,{ 0x9C,0x85,0xAB,0x64,0x2A,0x71,0x5E,0x8E } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFactory>
    {
        static constexpr guid value{ 0x1ACA93E7,0xE804,0x454D,{ 0x84,0x66,0xF9,0x89,0x7C,0x20,0xB0,0xF6 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile>
    {
        static constexpr guid value{ 0x4D5AE1EF,0x029F,0x4101,{ 0x8C,0x35,0xFE,0x91,0xBF,0x9C,0xD5,0xF0 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics>
    {
        static constexpr guid value{ 0x2C0E22C7,0x05A0,0x517A,{ 0xB8,0x1C,0x6E,0xE8,0x79,0x0C,0x38,0x1F } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult>
    {
        static constexpr guid value{ 0x685D4176,0xF6E0,0x4569,{ 0xB1,0xAA,0x21,0x5C,0x0F,0xF5,0xB2,0x57 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions>
    {
        static constexpr guid value{ 0xB71D98F7,0x61F0,0x4008,{ 0xB2,0x07,0x0B,0xF9,0xEB,0x2D,0x76,0xF2 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        static constexpr guid value{ 0xF888EC22,0xE8CF,0x56C0,{ 0xB1,0xDF,0x90,0xAF,0x4A,0xD8,0x0E,0x84 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        static constexpr guid value{ 0x6DAB9451,0x6169,0x55DF,{ 0x8F,0x51,0x79,0x0E,0x99,0xD7,0x27,0x7D } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationStatics>
    {
        static constexpr guid value{ 0x10951754,0x204B,0x5EC9,{ 0x9D,0xE3,0xDF,0x79,0x2D,0x07,0x4A,0x61 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult>
    {
        static constexpr guid value{ 0x0DFA28FA,0x2EF0,0x4D8F,{ 0xB3,0x41,0x31,0x71,0xB2,0xDF,0x93,0xB1 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess>
    {
        static constexpr guid value{ 0xA858C3EF,0x8172,0x4F10,{ 0xAF,0x93,0xCB,0xE6,0x0A,0xF8,0x8D,0x09 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        static constexpr guid value{ 0xC405EB7D,0x7053,0x4F6A,{ 0x9B,0x87,0x74,0x68,0x46,0xED,0x19,0xB2 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult>
    {
        static constexpr guid value{ 0x556BA72E,0xCA9D,0x4211,{ 0xB1,0x43,0x1C,0xED,0xC8,0x6E,0xB2,0xFE } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult>
    {
        static constexpr guid value{ 0x8FA1DC2F,0x57DA,0x4BB5,{ 0x9C,0x06,0xFA,0x07,0x2D,0x20,0x32,0xE2 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters>
    {
        static constexpr guid value{ 0xEBDB3CAB,0x7A3A,0x4524,{ 0xA0,0xF4,0xF9,0x6E,0x28,0x4D,0x33,0xCD } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics>
    {
        static constexpr guid value{ 0x06E444BB,0x53C0,0x4889,{ 0x8F,0xA3,0x53,0x59,0x2E,0x37,0xCF,0x21 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics2>
    {
        static constexpr guid value{ 0x55EF9EBC,0x0444,0x42AD,{ 0x83,0x2D,0x1B,0x89,0xC0,0x89,0xD1,0xCA } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::HostMessageReceivedCallback>
    {
        static constexpr guid value{ 0xFAF26FFA,0x8CE1,0x4CC1,{ 0xB2,0x78,0x32,0x2D,0x31,0xA5,0xE4,0xA3 } };
    };
    template <> struct guid_storage<Windows::Security::Isolation::MessageReceivedCallback>
    {
        static constexpr guid value{ 0xF5B4C8FF,0x1D9D,0x4995,{ 0x9F,0xEA,0x4D,0x15,0x25,0x7C,0x07,0x57 } };
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironment>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironment;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentFile>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentLaunchFileResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentPostMessageResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentProcess>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentStartProcessResult>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult;
    };
    template <> struct default_interface<Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters>
    {
        using type = Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters;
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall StartProcessSilentlyAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StartProcessSilentlyWithTelemetryAsync(void*, void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShareFolderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShareFolderWithTelemetryAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFileWithUIAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFileWithUIAndTelemetryAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TerminateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TerminateWithTelemetryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterMessageReceiver(winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterMessageReceiver(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironment2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PostMessageToReceiverAsync(winrt::guid, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PostMessageToReceiverWithTelemetryAsync(winrt::guid, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Environment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTelemetryAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetById(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindByOwnerId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_HostPath(void**) noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReady(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HostErrors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnvironmentOwnerId(void**) noexcept = 0;
            virtual int32_t __stdcall put_EnvironmentOwnerId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowedClipboardFormats(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllowedClipboardFormats(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ClipboardCopyPasteDirections(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClipboardCopyPasteDirections(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AvailablePrinters(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AvailablePrinters(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharedHostFolderPath(void**) noexcept = 0;
            virtual int32_t __stdcall get_SharedFolderNameInEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall ShareHostFolderForUntrustedItems(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_PersistUserProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PersistUserProfile(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowGraphicsHardwareAcceleration(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowGraphicsHardwareAcceleration(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowCameraAndMicrophoneAccess(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCameraAndMicrophoneAccess(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShareableFolders(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProcessesRunnableAsSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProcessesRunnableAsUser(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActivationFileExtensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Unregister(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExitCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall WaitForExit() noexcept = 0;
            virtual int32_t __stdcall WaitForExitWithTimeout(uint32_t) noexcept = 0;
            virtual int32_t __stdcall WaitForExitAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowWrite(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowWrite(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Process(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_CorrelationId(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PostMessageToReceiver(winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall GetFileId(void*, winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterHostMessageReceiver(winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterHostMessageReceiver(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::HostMessageReceivedCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(winrt::guid, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Isolation::MessageReceivedCallback>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(winrt::guid, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironment
    {
        [[nodiscard]] auto Id() const;
        auto StartProcessSilentlyAsync(param::hstring const& hostExePath, param::hstring const& arguments, Windows::Security::Isolation::IsolatedWindowsEnvironmentActivator const& activator) const;
        auto StartProcessSilentlyAsync(param::hstring const& hostExePath, param::hstring const& arguments, Windows::Security::Isolation::IsolatedWindowsEnvironmentActivator const& activator, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
        auto ShareFolderAsync(param::hstring const& hostFolder, Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderRequestOptions const& requestOptions) const;
        auto ShareFolderAsync(param::hstring const& hostFolder, Windows::Security::Isolation::IsolatedWindowsEnvironmentShareFolderRequestOptions const& requestOptions, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
        auto LaunchFileWithUIAsync(param::hstring const& appExePath, param::hstring const& argumentsTemplate, param::hstring const& filePath) const;
        auto LaunchFileWithUIAsync(param::hstring const& appExePath, param::hstring const& argumentsTemplate, param::hstring const& filePath, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
        auto TerminateAsync() const;
        auto TerminateAsync(Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
        auto RegisterMessageReceiver(winrt::guid const& receiverId, Windows::Security::Isolation::MessageReceivedCallback const& messageReceivedCallback) const;
        auto UnregisterMessageReceiver(winrt::guid const& receiverId) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironment>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironment<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironment2
    {
        auto PostMessageToReceiverAsync(winrt::guid const& receiverId, param::async_iterable<Windows::Foundation::IInspectable> const& message) const;
        auto PostMessageToReceiverAsync(winrt::guid const& receiverId, param::async_iterable<Windows::Foundation::IInspectable> const& message, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironment2>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironment2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentCreateResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto Environment() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentCreateResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentCreateResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentFactory
    {
        auto CreateAsync(Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions const& options) const;
        auto CreateAsync(Windows::Security::Isolation::IsolatedWindowsEnvironmentOptions const& options, Windows::Security::Isolation::IsolatedWindowsEnvironmentTelemetryParameters const& telemetryParameters) const;
        auto GetById(param::hstring const& environmentId) const;
        auto FindByOwnerId(param::hstring const& environmentOwnerId) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFactory>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentFile
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto HostPath() const;
        auto Close() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentFile>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentFile<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentHostStatics
    {
        [[nodiscard]] auto IsReady() const;
        [[nodiscard]] auto HostErrors() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentHostStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentLaunchFileResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto File() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentLaunchFileResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentLaunchFileResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOptions
    {
        [[nodiscard]] auto EnvironmentOwnerId() const;
        auto EnvironmentOwnerId(param::hstring const& value) const;
        [[nodiscard]] auto AllowedClipboardFormats() const;
        auto AllowedClipboardFormats(Windows::Security::Isolation::IsolatedWindowsEnvironmentAllowedClipboardFormats const& value) const;
        [[nodiscard]] auto ClipboardCopyPasteDirections() const;
        auto ClipboardCopyPasteDirections(Windows::Security::Isolation::IsolatedWindowsEnvironmentClipboardCopyPasteDirections const& value) const;
        [[nodiscard]] auto AvailablePrinters() const;
        auto AvailablePrinters(Windows::Security::Isolation::IsolatedWindowsEnvironmentAvailablePrinters const& value) const;
        [[nodiscard]] auto SharedHostFolderPath() const;
        [[nodiscard]] auto SharedFolderNameInEnvironment() const;
        auto ShareHostFolderForUntrustedItems(param::hstring const& SharedHostFolderPath, param::hstring const& ShareFolderNameInEnvironment) const;
        [[nodiscard]] auto PersistUserProfile() const;
        auto PersistUserProfile(bool value) const;
        [[nodiscard]] auto AllowGraphicsHardwareAcceleration() const;
        auto AllowGraphicsHardwareAcceleration(bool value) const;
        [[nodiscard]] auto AllowCameraAndMicrophoneAccess() const;
        auto AllowCameraAndMicrophoneAccess(bool value) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOptions>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationData
    {
        [[nodiscard]] auto ShareableFolders() const;
        [[nodiscard]] auto ProcessesRunnableAsSystem() const;
        [[nodiscard]] auto ProcessesRunnableAsUser() const;
        [[nodiscard]] auto ActivationFileExtensions() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationData>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationData<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationStatics
    {
        auto Register(param::hstring const& ownerName, Windows::Security::Isolation::IsolatedWindowsEnvironmentOwnerRegistrationData const& ownerRegistrationData) const;
        auto Unregister(param::hstring const& ownerName) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentOwnerRegistrationStatics>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentOwnerRegistrationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentPostMessageResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentPostMessageResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentPostMessageResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentProcess
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ExitCode() const;
        auto WaitForExit() const;
        auto WaitForExitWithTimeout(uint32_t timeoutMilliseconds) const;
        auto WaitForExitAsync() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentProcess>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentProcess<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentShareFolderRequestOptions
    {
        [[nodiscard]] auto AllowWrite() const;
        auto AllowWrite(bool value) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderRequestOptions>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentShareFolderRequestOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentShareFolderResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentShareFolderResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentShareFolderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentStartProcessResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto Process() const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentStartProcessResult>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentStartProcessResult<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentTelemetryParameters
    {
        [[nodiscard]] auto CorrelationId() const;
        auto CorrelationId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsEnvironmentTelemetryParameters>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsEnvironmentTelemetryParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsHostMessengerStatics
    {
        auto PostMessageToReceiver(winrt::guid const& receiverId, param::vector_view<Windows::Foundation::IInspectable> const& message) const;
        auto GetFileId(param::hstring const& filePath) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsHostMessengerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Isolation_IIsolatedWindowsHostMessengerStatics2
    {
        auto RegisterHostMessageReceiver(winrt::guid const& receiverId, Windows::Security::Isolation::HostMessageReceivedCallback const& hostMessageReceivedCallback) const;
        auto UnregisterHostMessageReceiver(winrt::guid const& receiverId) const;
    };
    template <> struct consume<Windows::Security::Isolation::IIsolatedWindowsHostMessengerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Isolation_IIsolatedWindowsHostMessengerStatics2<D>;
    };
    struct struct_Windows_Security_Isolation_IsolatedWindowsEnvironmentCreateProgress
    {
        int32_t State;
        uint32_t PercentComplete;
    };
    template <> struct abi<Windows::Security::Isolation::IsolatedWindowsEnvironmentCreateProgress>
    {
        using type = struct_Windows_Security_Isolation_IsolatedWindowsEnvironmentCreateProgress;
    };
}
#endif
