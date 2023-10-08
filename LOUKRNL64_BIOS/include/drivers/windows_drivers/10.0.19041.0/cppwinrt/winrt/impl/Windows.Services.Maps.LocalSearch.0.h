// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Maps_LocalSearch_0_H
#define WINRT_Windows_Services_Maps_LocalSearch_0_H
namespace winrt::Windows::Devices::Geolocation
{
    struct Geocircle;
    struct Geopoint;
}
namespace winrt::Windows::Foundation
{
}
namespace winrt::Windows::Globalization
{
    enum class DayOfWeek : int32_t;
}
namespace winrt::Windows::Services::Maps
{
    struct MapAddress;
    struct PlaceInfo;
}
namespace winrt::Windows::Services::Maps::LocalSearch
{
    enum class LocalLocationFinderStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        InvalidCategory = 3,
        InvalidSearchTerm = 4,
        InvalidSearchArea = 5,
        NetworkFailure = 6,
        NotSupported = 7,
    };
    struct ILocalCategoriesStatics;
    struct ILocalLocation;
    struct ILocalLocation2;
    struct ILocalLocationFinderResult;
    struct ILocalLocationFinderStatics;
    struct ILocalLocationHoursOfOperationItem;
    struct ILocalLocationRatingInfo;
    struct IPlaceInfoHelperStatics;
    struct LocalCategories;
    struct LocalLocation;
    struct LocalLocationFinder;
    struct LocalLocationFinderResult;
    struct LocalLocationHoursOfOperationItem;
    struct LocalLocationRatingInfo;
    struct PlaceInfoHelper;
}
namespace winrt::impl
{
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalCategories>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocationFinder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::PlaceInfoHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocation" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocation2" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalCategories>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalCategories" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocation>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocation" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocationFinder>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocationFinder" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocationFinderResult" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::PlaceInfoHelper>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.PlaceInfoHelper" };
    };
    template <> struct name<Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus>
    {
        static constexpr auto & value{ L"Windows.Services.Maps.LocalSearch.LocalLocationFinderStatus" };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        static constexpr guid value{ 0xF49399F5,0x8261,0x4321,{ 0x99,0x74,0xEF,0x92,0xD4,0x9A,0x8D,0xCA } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        static constexpr guid value{ 0xBB0FE9AB,0x4502,0x4F2C,{ 0x94,0xA9,0x0D,0x60,0xDE,0x0E,0x21,0x63 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        static constexpr guid value{ 0x6E9E307C,0xECB5,0x4FFC,{ 0xBB,0x8C,0xBA,0x50,0xBA,0x8C,0x2D,0xC6 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        static constexpr guid value{ 0xD09B6CC6,0xF338,0x4191,{ 0x9F,0xD8,0x54,0x40,0xB9,0xA6,0x8F,0x52 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        static constexpr guid value{ 0xD2EF7344,0xA0DE,0x48CA,{ 0x81,0xA8,0x07,0xC7,0xDC,0xFD,0x37,0xAB } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        static constexpr guid value{ 0x23548C72,0xA1C7,0x43F1,{ 0xA4,0xF0,0x10,0x91,0xC3,0x9E,0xC6,0x40 } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        static constexpr guid value{ 0xCB1DAB56,0x3354,0x4311,{ 0x8B,0xC0,0xA2,0xD4,0xD5,0xEB,0x80,0x6E } };
    };
    template <> struct guid_storage<Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        static constexpr guid value{ 0xDD1CA9A7,0xA9C6,0x491B,{ 0xBC,0x09,0xE8,0x0F,0xCE,0xA4,0x8E,0xE6 } };
    };
    template <> struct default_interface<Windows::Services::Maps::LocalSearch::LocalLocation>
    {
        using type = Windows::Services::Maps::LocalSearch::ILocalLocation;
    };
    template <> struct default_interface<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>
    {
        using type = Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult;
    };
    template <> struct default_interface<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>
    {
        using type = Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem;
    };
    template <> struct default_interface<Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>
    {
        using type = Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo;
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BankAndCreditUnions(void**) noexcept = 0;
            virtual int32_t __stdcall get_EatDrink(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hospitals(void**) noexcept = 0;
            virtual int32_t __stdcall get_HotelsAndMotels(void**) noexcept = 0;
            virtual int32_t __stdcall get_All(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parking(void**) noexcept = 0;
            virtual int32_t __stdcall get_SeeDo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Shop(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall get_Identifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataAttribution(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Category(void**) noexcept = 0;
            virtual int32_t __stdcall get_RatingInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_HoursOfOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindLocalLocationsAsync(void*, void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Day(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Start(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Span(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AggregateRating(void**) noexcept = 0;
            virtual int32_t __stdcall get_RatingCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIdentifier(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLocalLocation(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics
    {
        [[nodiscard]] auto BankAndCreditUnions() const;
        [[nodiscard]] auto EatDrink() const;
        [[nodiscard]] auto Hospitals() const;
        [[nodiscard]] auto HotelsAndMotels() const;
        [[nodiscard]] auto All() const;
        [[nodiscard]] auto Parking() const;
        [[nodiscard]] auto SeeDo() const;
        [[nodiscard]] auto Shop() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocation
    {
        [[nodiscard]] auto Address() const;
        [[nodiscard]] auto Identifier() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Point() const;
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto DataAttribution() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocation2
    {
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto RatingInfo() const;
        [[nodiscard]] auto HoursOfOperation() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocation2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult
    {
        [[nodiscard]] auto LocalLocations() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics
    {
        auto FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults) const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem
    {
        [[nodiscard]] auto Day() const;
        [[nodiscard]] auto Start() const;
        [[nodiscard]] auto Span() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo
    {
        [[nodiscard]] auto AggregateRating() const;
        [[nodiscard]] auto RatingCount() const;
        [[nodiscard]] auto ProviderIdentifier() const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics
    {
        auto CreateFromLocalLocation(Windows::Services::Maps::LocalSearch::LocalLocation const& location) const;
    };
    template <> struct consume<Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics<D>;
    };
}
#endif
