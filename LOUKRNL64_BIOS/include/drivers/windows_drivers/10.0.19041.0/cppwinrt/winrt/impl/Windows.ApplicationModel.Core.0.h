// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Core_0_H
#define WINRT_Windows_ApplicationModel_Core_0_H
namespace winrt::Windows::ApplicationModel
{
    struct AppDisplayInfo;
    struct EnteredBackgroundEventArgs;
    struct LeavingBackgroundEventArgs;
    struct SuspendingEventArgs;
}
namespace winrt::Windows::ApplicationModel::Activation
{
    struct BackgroundActivatedEventArgs;
    struct IActivatedEventArgs;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct IGetActivationFactory;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
}
namespace winrt::Windows::System
{
    struct DispatcherQueue;
    struct User;
}
namespace winrt::Windows::UI::Core
{
    struct CoreDispatcher;
    struct CoreWindow;
}
namespace winrt::Windows::ApplicationModel::Core
{
    enum class AppRestartFailureReason : int32_t
    {
        RestartPending = 0,
        NotInForeground = 1,
        InvalidUser = 2,
        Other = 3,
    };
    struct IAppListEntry;
    struct IAppListEntry2;
    struct IAppListEntry3;
    struct ICoreApplication;
    struct ICoreApplication2;
    struct ICoreApplication3;
    struct ICoreApplicationExit;
    struct ICoreApplicationUnhandledError;
    struct ICoreApplicationUseCount;
    struct ICoreApplicationView;
    struct ICoreApplicationView2;
    struct ICoreApplicationView3;
    struct ICoreApplicationView5;
    struct ICoreApplicationView6;
    struct ICoreApplicationViewTitleBar;
    struct ICoreImmersiveApplication;
    struct ICoreImmersiveApplication2;
    struct ICoreImmersiveApplication3;
    struct IFrameworkView;
    struct IFrameworkViewSource;
    struct IHostedViewClosingEventArgs;
    struct IUnhandledError;
    struct IUnhandledErrorDetectedEventArgs;
    struct AppListEntry;
    struct CoreApplication;
    struct CoreApplicationView;
    struct CoreApplicationViewTitleBar;
    struct HostedViewClosingEventArgs;
    struct UnhandledError;
    struct UnhandledErrorDetectedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IFrameworkView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IUnhandledError>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::AppListEntry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplication>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplicationView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::UnhandledError>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Core::AppRestartFailureReason>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::Core::IAppListEntry>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IAppListEntry" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IAppListEntry2" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IAppListEntry3" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplication>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplication" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplication2" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplication3" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationExit" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationUnhandledError" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationUseCount" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView2" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView3" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView5" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView6" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationViewTitleBar" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication2" };
    };
    template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication3" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IFrameworkView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IFrameworkView" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IFrameworkViewSource" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IHostedViewClosingEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IUnhandledError>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IUnhandledError" };
    };
    template <> struct name<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.IUnhandledErrorDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Core::AppListEntry>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.AppListEntry" };
    };
    template <> struct name<Windows::ApplicationModel::Core::CoreApplication>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplication" };
    };
    template <> struct name<Windows::ApplicationModel::Core::CoreApplicationView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplicationView" };
    };
    template <> struct name<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplicationViewTitleBar" };
    };
    template <> struct name<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.HostedViewClosingEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Core::UnhandledError>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.UnhandledError" };
    };
    template <> struct name<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::Core::AppRestartFailureReason>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Core.AppRestartFailureReason" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IAppListEntry>
    {
        static constexpr guid value{ 0xEF00F07F,0x2108,0x490A,{ 0x87,0x7A,0x8A,0x9F,0x17,0xC2,0x5F,0xAD } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        static constexpr guid value{ 0xD0A618AD,0xBF35,0x42AC,{ 0xAC,0x06,0x86,0xEE,0xEB,0x41,0xD0,0x4B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        static constexpr guid value{ 0x6099F28D,0xFC32,0x470A,{ 0xBC,0x69,0x4B,0x06,0x1A,0x76,0xEF,0x2E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplication>
    {
        static constexpr guid value{ 0x0AACF7A4,0x5E1D,0x49DF,{ 0x80,0x34,0xFB,0x6A,0x68,0xBC,0x5E,0xD1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        static constexpr guid value{ 0x998681FB,0x1AB6,0x4B7F,{ 0xBE,0x4A,0x9A,0x06,0x45,0x22,0x4C,0x04 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        static constexpr guid value{ 0xFEEC0D39,0x598B,0x4507,{ 0x8A,0x67,0x77,0x26,0x32,0x58,0x0A,0x57 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        static constexpr guid value{ 0xCF86461D,0x261E,0x4B72,{ 0x9A,0xCD,0x44,0xED,0x2A,0xCE,0x6A,0x29 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        static constexpr guid value{ 0xF0E24AB0,0xDD09,0x42E1,{ 0xB0,0xBC,0xE0,0xE1,0x31,0xF7,0x8D,0x7E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        static constexpr guid value{ 0x518DC408,0xC077,0x475B,{ 0x80,0x9E,0x0B,0xC0,0xC5,0x7E,0x4B,0x74 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        static constexpr guid value{ 0x638BB2DB,0x451D,0x4661,{ 0xB0,0x99,0x41,0x4F,0x34,0xFF,0xB9,0xF1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        static constexpr guid value{ 0x68EB7ADF,0x917F,0x48EB,{ 0x9A,0xEB,0x7D,0xE5,0x3E,0x08,0x6A,0xB1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        static constexpr guid value{ 0x07EBE1B3,0xA4CF,0x4550,{ 0xAB,0x70,0xB0,0x7E,0x85,0x33,0x0B,0xC8 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        static constexpr guid value{ 0x2BC095A8,0x8EF0,0x446D,{ 0x9E,0x60,0x3A,0x3E,0x04,0x28,0xC6,0x71 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        static constexpr guid value{ 0xC119D49A,0x0679,0x49BA,{ 0x80,0x3F,0xB7,0x9C,0x5C,0xF3,0x4C,0xCA } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        static constexpr guid value{ 0x006D35E3,0xE1F1,0x431B,{ 0x95,0x08,0x29,0xB9,0x69,0x26,0xAC,0x53 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        static constexpr guid value{ 0x1ADA0E3E,0xE4A2,0x4123,{ 0xB4,0x51,0xDC,0x96,0xBF,0x80,0x04,0x19 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        static constexpr guid value{ 0x828E1E36,0xE9E3,0x4CFC,{ 0x9B,0x66,0x48,0xB7,0x8E,0xA9,0xBB,0x2C } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        static constexpr guid value{ 0x34A05B2F,0xEE0D,0x41E5,{ 0x83,0x14,0xCF,0x10,0xC9,0x1B,0xF0,0xAF } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IFrameworkView>
    {
        static constexpr guid value{ 0xFAAB5CD0,0x8924,0x45AC,{ 0xAD,0x0F,0xA0,0x8F,0xAE,0x5D,0x03,0x24 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        static constexpr guid value{ 0xCD770614,0x65C4,0x426C,{ 0x94,0x94,0x34,0xFC,0x43,0x55,0x48,0x62 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        static constexpr guid value{ 0xD238943C,0xB24E,0x4790,{ 0xAC,0xB5,0x3E,0x42,0x43,0xC4,0xFF,0x87 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IUnhandledError>
    {
        static constexpr guid value{ 0x9459B726,0x53B5,0x4686,{ 0x9E,0xAF,0xFA,0x81,0x62,0xDC,0x39,0x80 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        static constexpr guid value{ 0x679AB78B,0xB336,0x4822,{ 0xAC,0x40,0x0D,0x75,0x0F,0x0B,0x7A,0x2B } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::AppListEntry>
    {
        using type = Windows::ApplicationModel::Core::IAppListEntry;
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationView>
    {
        using type = Windows::ApplicationModel::Core::ICoreApplicationView;
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>
    {
        using type = Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar;
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>
    {
        using type = Windows::ApplicationModel::Core::IHostedViewClosingEventArgs;
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledError>
    {
        using type = Windows::ApplicationModel::Core::IUnhandledError;
    };
    template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>
    {
        using type = Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchForUserAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall add_Suspending(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Suspending(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Resuming(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Resuming(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall Run(void*) noexcept = 0;
            virtual int32_t __stdcall RunWithActivationFactories(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BackgroundActivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackgroundActivated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LeavingBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LeavingBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnteredBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnteredBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall EnablePrelaunch(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestRestartAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestRestartForUserAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Exit() noexcept = 0;
            virtual int32_t __stdcall add_Exiting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Exiting(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UnhandledErrorDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnhandledErrorDetected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IncrementApplicationUseCount() noexcept = 0;
            virtual int32_t __stdcall DecrementApplicationUseCount() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoreWindow(void**) noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsMain(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHosted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsComponent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TitleBar(void**) noexcept = 0;
            virtual int32_t __stdcall add_HostedViewClosing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HostedViewClosing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ExtendViewIntoTitleBar(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtendViewIntoTitleBar(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SystemOverlayLeftInset(double*) noexcept = 0;
            virtual int32_t __stdcall get_SystemOverlayRightInset(double*) noexcept = 0;
            virtual int32_t __stdcall get_Height(double*) noexcept = 0;
            virtual int32_t __stdcall add_LayoutMetricsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LayoutMetricsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsVisibleChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsVisibleChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Views(void**) noexcept = 0;
            virtual int32_t __stdcall CreateNewView(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MainView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNewViewFromMainView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNewViewWithViewSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IFrameworkView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Initialize(void*) noexcept = 0;
            virtual int32_t __stdcall SetWindow(void*) noexcept = 0;
            virtual int32_t __stdcall Load(void*) noexcept = 0;
            virtual int32_t __stdcall Run() noexcept = 0;
            virtual int32_t __stdcall Uninitialize() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IUnhandledError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall Propagate() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnhandledError(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry
    {
        [[nodiscard]] auto DisplayInfo() const;
        auto LaunchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry2
    {
        [[nodiscard]] auto AppUserModelId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry3
    {
        auto LaunchForUserAsync(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication
    {
        [[nodiscard]] auto Id() const;
        auto Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
        using Suspending_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending>;
        Suspending_revoker Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
        auto Suspending(winrt::event_token const& token) const noexcept;
        auto Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Resuming_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming>;
        Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Resuming(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Properties() const;
        auto GetCurrentView() const;
        auto Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
        auto RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication2
    {
        auto BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        using BackgroundActivated_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated>;
        BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        auto BackgroundActivated(winrt::event_token const& token) const noexcept;
        auto LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
        using LeavingBackground_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground>;
        LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
        auto LeavingBackground(winrt::event_token const& token) const noexcept;
        auto EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
        using EnteredBackground_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground>;
        EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
        auto EnteredBackground(winrt::event_token const& token) const noexcept;
        auto EnablePrelaunch(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication3
    {
        auto RequestRestartAsync(param::hstring const& launchArguments) const;
        auto RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationExit
    {
        auto Exit() const;
        auto Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Exiting_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting>;
        Exiting_revoker Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        auto Exiting(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError
    {
        auto UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
        using UnhandledErrorDetected_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected>;
        UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
        auto UnhandledErrorDetected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount
    {
        auto IncrementApplicationUseCount() const;
        auto DecrementApplicationUseCount() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView
    {
        [[nodiscard]] auto CoreWindow() const;
        auto Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
        using Activated_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationView>::remove_Activated>;
        Activated_revoker Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
        auto Activated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto IsMain() const;
        [[nodiscard]] auto IsHosted() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView2
    {
        [[nodiscard]] auto Dispatcher() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView3
    {
        [[nodiscard]] auto IsComponent() const;
        [[nodiscard]] auto TitleBar() const;
        auto HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
        using HostedViewClosing_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView3, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationView3>::remove_HostedViewClosing>;
        HostedViewClosing_revoker HostedViewClosing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
        auto HostedViewClosing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView5
    {
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView6
    {
        [[nodiscard]] auto DispatcherQueue() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView6<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar
    {
        auto ExtendViewIntoTitleBar(bool value) const;
        [[nodiscard]] auto ExtendViewIntoTitleBar() const;
        [[nodiscard]] auto SystemOverlayLeftInset() const;
        [[nodiscard]] auto SystemOverlayRightInset() const;
        [[nodiscard]] auto Height() const;
        auto LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        using LayoutMetricsChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_LayoutMetricsChanged>;
        LayoutMetricsChanged_revoker LayoutMetricsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        auto LayoutMetricsChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto IsVisible() const;
        auto IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        using IsVisibleChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_IsVisibleChanged>;
        IsVisibleChanged_revoker IsVisibleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        auto IsVisibleChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication
    {
        [[nodiscard]] auto Views() const;
        auto CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint) const;
        [[nodiscard]] auto MainView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2
    {
        auto CreateNewView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3
    {
        auto CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IFrameworkView
    {
        auto Initialize(Windows::ApplicationModel::Core::CoreApplicationView const& applicationView) const;
        auto SetWindow(Windows::UI::Core::CoreWindow const& window) const;
        auto Load(param::hstring const& entryPoint) const;
        auto Run() const;
        auto Uninitialize() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IFrameworkView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IFrameworkViewSource
    {
        auto CreateView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkViewSource<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IUnhandledError
    {
        [[nodiscard]] auto Handled() const;
        auto Propagate() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IUnhandledError>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledError<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs
    {
        [[nodiscard]] auto UnhandledError() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs<D>;
    };
}
#endif
