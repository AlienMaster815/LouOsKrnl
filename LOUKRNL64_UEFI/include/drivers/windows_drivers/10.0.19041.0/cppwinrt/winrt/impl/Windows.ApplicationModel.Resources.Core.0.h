// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Resources_Core_0_H
#define WINRT_Windows_ApplicationModel_Resources_Core_0_H
namespace winrt::Windows::Foundation
{
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IIterator;
    template <typename K, typename V> struct IKeyValuePair;
    template <typename K, typename V> struct IMapView;
    template <typename K, typename V> struct IObservableMap;
    template <typename T> struct IVectorView;
}
namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
namespace winrt::Windows::UI
{
    struct UIContext;
}
namespace winrt::Windows::ApplicationModel::Resources::Core
{
    enum class ResourceCandidateKind : int32_t
    {
        String = 0,
        File = 1,
        EmbeddedData = 2,
    };
    enum class ResourceQualifierPersistence : int32_t
    {
        None = 0,
        LocalMachine = 1,
    };
    struct INamedResource;
    struct IResourceCandidate;
    struct IResourceCandidate2;
    struct IResourceCandidate3;
    struct IResourceContext;
    struct IResourceContextStatics;
    struct IResourceContextStatics2;
    struct IResourceContextStatics3;
    struct IResourceContextStatics4;
    struct IResourceManager;
    struct IResourceManager2;
    struct IResourceManagerStatics;
    struct IResourceMap;
    struct IResourceQualifier;
    struct NamedResource;
    struct ResourceCandidate;
    struct ResourceCandidateVectorView;
    struct ResourceContext;
    struct ResourceContextLanguagesVectorView;
    struct ResourceManager;
    struct ResourceMap;
    struct ResourceMapIterator;
    struct ResourceMapMapView;
    struct ResourceMapMapViewIterator;
    struct ResourceQualifier;
    struct ResourceQualifierMapView;
    struct ResourceQualifierObservableMap;
    struct ResourceQualifierVectorView;
    struct ResourceLayoutInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::NamedResource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMap>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifier>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidateKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>
    {
        using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t, int32_t>;
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.INamedResource" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceCandidate" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceCandidate2" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceCandidate3" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContext" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics2" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics3" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics4" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManager" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManager2" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceMap" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceQualifier" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::NamedResource>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.NamedResource" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceCandidate>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceCandidate" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceContext>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceContext" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceManager" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMap>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMap" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifier>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifier" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceCandidateKind>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceCandidateKind" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierPersistence" };
    };
    template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceLayoutInfo" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        static constexpr guid value{ 0x1C98C219,0x0B13,0x4240,{ 0x89,0xA5,0xD4,0x95,0xDC,0x18,0x9A,0x00 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        static constexpr guid value{ 0xAF5207D9,0xC433,0x4764,{ 0xB3,0xFD,0x8F,0xA6,0xBF,0xBC,0xBA,0xDC } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        static constexpr guid value{ 0x69E5B468,0xF6FC,0x4013,{ 0xAA,0xA2,0xD5,0x3F,0x17,0x57,0xD3,0xB5 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        static constexpr guid value{ 0x08AE97F8,0x517A,0x4674,{ 0x95,0x8C,0x4A,0x3C,0x7C,0xD2,0xCC,0x6B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        static constexpr guid value{ 0x2FA22F4B,0x707E,0x4B27,{ 0xAD,0x0D,0xD0,0xD8,0xCD,0x46,0x8F,0xD2 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        static constexpr guid value{ 0x98BE9D6C,0x6338,0x4B31,{ 0x99,0xDF,0xB2,0xB4,0x42,0xF1,0x71,0x49 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        static constexpr guid value{ 0x41F752EF,0x12AF,0x41B9,{ 0xAB,0x36,0xB1,0xEB,0x4B,0x51,0x24,0x60 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        static constexpr guid value{ 0x20CF492C,0xAF0F,0x450B,{ 0x9D,0xA6,0x10,0x6D,0xD0,0xC2,0x9A,0x39 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        static constexpr guid value{ 0x22EB9CCD,0xFB31,0x4BFA,{ 0xB8,0x6B,0xDF,0x9D,0x9D,0x7B,0xDC,0x39 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        static constexpr guid value{ 0xF744D97B,0x9988,0x44FB,{ 0xAB,0xD6,0x53,0x78,0x84,0x4C,0xFA,0x8B } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        static constexpr guid value{ 0x9D66FE6C,0xA4D7,0x4C23,{ 0x9E,0x85,0x67,0x5F,0x30,0x4C,0x25,0x2D } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        static constexpr guid value{ 0x1CC0FDFC,0x69EE,0x4E43,{ 0x99,0x01,0x47,0xF1,0x26,0x87,0xBA,0xF7 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        static constexpr guid value{ 0x72284824,0xDB8C,0x42F8,{ 0xB0,0x8C,0x53,0xFF,0x35,0x7D,0xAD,0x82 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        static constexpr guid value{ 0x785DA5B2,0x4AFD,0x4376,{ 0xA8,0x88,0xC5,0xF9,0xA6,0xB7,0xA0,0x5C } };
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::NamedResource>
    {
        using type = Windows::ApplicationModel::Resources::Core::INamedResource;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidate>
    {
        using type = Windows::ApplicationModel::Resources::Core::IResourceCandidate;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>
    {
        using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContext>
    {
        using type = Windows::ApplicationModel::Resources::Core::IResourceContext;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>
    {
        using type = Windows::Foundation::Collections::IVectorView<hstring>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceManager>
    {
        using type = Windows::ApplicationModel::Resources::Core::IResourceManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMap>
    {
        using type = Windows::ApplicationModel::Resources::Core::IResourceMap;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>
    {
        using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>
    {
        using type = Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>
    {
        using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifier>
    {
        using type = Windows::ApplicationModel::Resources::Core::IResourceQualifier;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>
    {
        using type = Windows::Foundation::Collections::IMapView<hstring, hstring>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>
    {
        using type = Windows::Foundation::Collections::IObservableMap<hstring, hstring>;
    };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>
    {
        using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>;
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Candidates(void**) noexcept = 0;
            virtual int32_t __stdcall Resolve(void**) noexcept = 0;
            virtual int32_t __stdcall ResolveForContext(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResolveAll(void**) noexcept = 0;
            virtual int32_t __stdcall ResolveAllForContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Qualifiers(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMatch(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMatchAsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ValueAsString(void**) noexcept = 0;
            virtual int32_t __stdcall GetValueAsFileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetQualifierValue(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetValueAsStreamAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualifierValues(void**) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
            virtual int32_t __stdcall ResetQualifierValues(void*) noexcept = 0;
            virtual int32_t __stdcall OverrideToMatch(void*) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall put_Languages(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMatchingContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall SetGlobalQualifierValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ResetGlobalQualifierValues() noexcept = 0;
            virtual int32_t __stdcall ResetGlobalQualifierValuesForSpecifiedQualifiers(void*) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUse(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetGlobalQualifierValueWithPersistence(void*, void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MainResourceMap(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllResourceMaps(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultContext(void**) noexcept = 0;
            virtual int32_t __stdcall LoadPriFiles(void*) noexcept = 0;
            virtual int32_t __stdcall UnloadPriFiles(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAllNamedResourcesForPackage(void*, struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo, void**) noexcept = 0;
            virtual int32_t __stdcall GetAllSubtreesForPackage(void*, struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall IsResourceReference(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall GetValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetValueForContext(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSubtree(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualifierName(void**) noexcept = 0;
            virtual int32_t __stdcall get_QualifierValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMatch(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Score(double*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_INamedResource
    {
        [[nodiscard]] auto Uri() const;
        [[nodiscard]] auto Candidates() const;
        auto Resolve() const;
        auto Resolve(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
        auto ResolveAll() const;
        auto ResolveAll(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_INamedResource<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate
    {
        [[nodiscard]] auto Qualifiers() const;
        [[nodiscard]] auto IsMatch() const;
        [[nodiscard]] auto IsMatchAsDefault() const;
        [[nodiscard]] auto IsDefault() const;
        [[nodiscard]] auto ValueAsString() const;
        auto GetValueAsFileAsync() const;
        auto GetQualifierValue(param::hstring const& qualifierName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2
    {
        auto GetValueAsStreamAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate3
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContext
    {
        [[nodiscard]] auto QualifierValues() const;
        auto Reset() const;
        auto Reset(param::iterable<hstring> const& qualifierNames) const;
        auto OverrideToMatch(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
        auto Clone() const;
        [[nodiscard]] auto Languages() const;
        auto Languages(param::async_vector_view<hstring> const& languages) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContext<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics
    {
        auto CreateMatchingContext(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2
    {
        auto GetForCurrentView() const;
        auto SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value) const;
        auto ResetGlobalQualifierValues() const;
        auto ResetGlobalQualifierValues(param::iterable<hstring> const& qualifierNames) const;
        auto GetForViewIndependentUse() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3
    {
        auto SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence const& persistence) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics4
    {
        auto GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager
    {
        [[nodiscard]] auto MainResourceMap() const;
        [[nodiscard]] auto AllResourceMaps() const;
        [[nodiscard]] auto DefaultContext() const;
        auto LoadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
        auto UnloadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager2
    {
        auto GetAllNamedResourcesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
        auto GetAllSubtreesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics
    {
        [[nodiscard]] auto Current() const;
        auto IsResourceReference(param::hstring const& resourceReference) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceMap
    {
        [[nodiscard]] auto Uri() const;
        auto GetValue(param::hstring const& resource) const;
        auto GetValue(param::hstring const& resource, Windows::ApplicationModel::Resources::Core::ResourceContext const& context) const;
        auto GetSubtree(param::hstring const& reference) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceMap<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier
    {
        [[nodiscard]] auto QualifierName() const;
        [[nodiscard]] auto QualifierValue() const;
        [[nodiscard]] auto IsDefault() const;
        [[nodiscard]] auto IsMatch() const;
        [[nodiscard]] auto Score() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier<D>;
    };
    struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo
    {
        uint32_t MajorVersion;
        uint32_t MinorVersion;
        uint32_t ResourceSubtreeCount;
        uint32_t NamedResourceCount;
        int32_t Checksum;
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>
    {
        using type = struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo;
    };
}
#endif
