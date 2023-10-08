// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Maps_OfflineMaps_0_H
#define WINRT_Windows_Services_Maps_OfflineMaps_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct GeoboundingBox;
    struct Geocircle;
    struct Geopoint;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Services::Maps::OfflineMaps
{
    enum class OfflineMapPackageQueryStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        NetworkFailure = 3,
    };
    enum class OfflineMapPackageStartDownloadStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        DeniedWithoutCapability = 3,
    };
    enum class OfflineMapPackageStatus : int32_t
    {
        NotDownloaded = 0,
        Downloading = 1,
        Downloaded = 2,
        Deleting = 3,
    };
    struct IOfflineMapPackage;
    struct IOfflineMapPackageQueryResult;
    struct IOfflineMapPackageStartDownloadResult;
    struct IOfflineMapPackageStatics;
    struct OfflineMapPackage;
    struct OfflineMapPackageQueryResult;
    struct OfflineMapPackageStartDownloadResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryStatus" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadStatus" };
    };
    template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStatus" };
    };
    template <> struct guid_storage<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        static constexpr guid value{ 0xA797673B,0xA5B5,0x4144,{ 0xB5,0x25,0xE6,0x8C,0x88,0x62,0x66,0x4B } };
    };
    template <> struct guid_storage<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        static constexpr guid value{ 0x55585411,0x39E1,0x4E41,{ 0xA4,0xE1,0x5F,0x48,0x72,0xBE,0xE1,0x99 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        static constexpr guid value{ 0xD965B918,0xD4D6,0x4AFE,{ 0x93,0x78,0x3E,0xC7,0x1E,0xF1,0x1C,0x3D } };
    };
    template <> struct guid_storage<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        static constexpr guid value{ 0x185E7922,0xA831,0x4AB0,{ 0x94,0x1F,0x69,0x98,0xFA,0x92,0x92,0x85 } };
    };
    template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>
    {
        using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackage;
    };
    template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>
    {
        using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult;
    };
    template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>
    {
        using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult;
    };
    template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnclosingRegionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall RequestStartDownloadAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Packages(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindPackagesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesInBoundingBoxAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindPackagesInGeocircleAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto EnclosingRegionName() const;
        [[nodiscard]] auto EstimatedSizeInBytes() const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
        auto StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage, &impl::abi_t<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>::remove_StatusChanged>;
        StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const;
        auto RequestStartDownloadAsync() const;
    };
    template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Packages() const;
    };
    template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics
    {
        auto FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const;
        auto FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox) const;
        auto FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle) const;
    };
    template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>;
    };
}
#endif
