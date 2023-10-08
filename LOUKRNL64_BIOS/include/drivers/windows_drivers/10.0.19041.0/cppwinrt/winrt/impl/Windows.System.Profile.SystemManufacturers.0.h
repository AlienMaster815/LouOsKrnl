// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Profile_SystemManufacturers_0_H
#define WINRT_Windows_System_Profile_SystemManufacturers_0_H
namespace winrt::Windows::Foundation
{
    struct Uri;
}
namespace winrt::Windows::System::Profile::SystemManufacturers
{
    struct IOemSupportInfo;
    struct ISmbiosInformationStatics;
    struct ISystemSupportDeviceInfo;
    struct ISystemSupportInfoStatics;
    struct ISystemSupportInfoStatics2;
    struct OemSupportInfo;
    struct SmbiosInformation;
    struct SystemSupportDeviceInfo;
    struct SystemSupportInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::OemSupportInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::SmbiosInformation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Profile::SystemManufacturers::SystemSupportInfo>
    {
        using type = class_category;
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.IOemSupportInfo" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISystemSupportDeviceInfo" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics2" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::OemSupportInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.OemSupportInfo" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::SmbiosInformation>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SmbiosInformation" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo" };
    };
    template <> struct name<Windows::System::Profile::SystemManufacturers::SystemSupportInfo>
    {
        static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo" };
    };
    template <> struct guid_storage<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        static constexpr guid value{ 0x8D2EAE55,0x87EF,0x4266,{ 0x86,0xD0,0xC4,0xAF,0xBE,0xB2,0x9B,0xB9 } };
    };
    template <> struct guid_storage<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        static constexpr guid value{ 0x080CCA7C,0x637C,0x48C4,{ 0xB7,0x28,0xF9,0x27,0x38,0x12,0xDB,0x8E } };
    };
    template <> struct guid_storage<Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        static constexpr guid value{ 0x05880B99,0x8247,0x441B,{ 0xA9,0x96,0xA1,0x78,0x4B,0xAB,0x79,0xA8 } };
    };
    template <> struct guid_storage<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        static constexpr guid value{ 0xEF750974,0xC422,0x45D7,{ 0xA4,0x4D,0x5C,0x1C,0x00,0x43,0xA2,0xB3 } };
    };
    template <> struct guid_storage<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        static constexpr guid value{ 0x33F349A4,0x3FA1,0x4986,{ 0xAA,0x4B,0x05,0x74,0x20,0x45,0x5E,0x6D } };
    };
    template <> struct default_interface<Windows::System::Profile::SystemManufacturers::OemSupportInfo>
    {
        using type = Windows::System::Profile::SystemManufacturers::IOemSupportInfo;
    };
    template <> struct default_interface<Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>
    {
        using type = Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo;
    };
    template <> struct abi<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportAppLink(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperatingSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemManufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemProductName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemSku(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemHardwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemFirmwareVersion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalSystemEdition(void**) noexcept = 0;
            virtual int32_t __stdcall get_OemSupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalDeviceInfo(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo
    {
        [[nodiscard]] auto SupportLink() const;
        [[nodiscard]] auto SupportAppLink() const;
        [[nodiscard]] auto SupportProvider() const;
    };
    template <> struct consume<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics
    {
        [[nodiscard]] auto SerialNumber() const;
    };
    template <> struct consume<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo
    {
        [[nodiscard]] auto OperatingSystem() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto SystemManufacturer() const;
        [[nodiscard]] auto SystemProductName() const;
        [[nodiscard]] auto SystemSku() const;
        [[nodiscard]] auto SystemHardwareVersion() const;
        [[nodiscard]] auto SystemFirmwareVersion() const;
    };
    template <> struct consume<Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics
    {
        [[nodiscard]] auto LocalSystemEdition() const;
        [[nodiscard]] auto OemSupportInfo() const;
    };
    template <> struct consume<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2
    {
        [[nodiscard]] auto LocalDeviceInfo() const;
    };
    template <> struct consume<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2<D>;
    };
}
#endif
