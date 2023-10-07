// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_0_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_0_H
namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackage;
    enum class DataPackageOperation : uint32_t;
    struct DataPackageView;
}
namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop
{
    enum class DragDropModifiers : uint32_t;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Point;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{
    enum class CoreDragUIContentMode : uint32_t
    {
        Auto = 0,
        Deferred = 0x1,
    };
    struct ICoreDragDropManager;
    struct ICoreDragDropManagerStatics;
    struct ICoreDragInfo;
    struct ICoreDragInfo2;
    struct ICoreDragOperation;
    struct ICoreDragOperation2;
    struct ICoreDragUIOverride;
    struct ICoreDropOperationTarget;
    struct ICoreDropOperationTargetRequestedEventArgs;
    struct CoreDragDropManager;
    struct CoreDragInfo;
    struct CoreDragOperation;
    struct CoreDragUIOverride;
    struct CoreDropOperationTargetRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs" };
    };
    template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>
    {
        static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIContentMode" };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        static constexpr guid value{ 0x7D56D344,0x8464,0x4FAF,{ 0xAA,0x49,0x37,0xEA,0x6E,0x2D,0x7B,0xD1 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        static constexpr guid value{ 0x9542FDCA,0xDA12,0x4C1C,{ 0x8D,0x06,0x04,0x1D,0xB2,0x97,0x33,0xC3 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        static constexpr guid value{ 0x48353A8B,0xCB50,0x464E,{ 0x95,0x75,0xCD,0x4E,0x3A,0x7A,0xB0,0x28 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        static constexpr guid value{ 0xC54691E5,0xE6FB,0x4D74,{ 0xB4,0xB1,0x8A,0x3C,0x17,0xF2,0x5E,0x9E } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        static constexpr guid value{ 0xCC06DE4F,0x6DB0,0x4E62,{ 0xAB,0x1B,0xA7,0x4A,0x02,0xDC,0x6D,0x85 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        static constexpr guid value{ 0x824B1E2C,0xD99A,0x4FC3,{ 0x85,0x07,0x6C,0x18,0x2F,0x33,0xB4,0x6A } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        static constexpr guid value{ 0x89A85064,0x3389,0x4F4F,{ 0x88,0x97,0x7E,0x8A,0x3F,0xFB,0x3C,0x93 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        static constexpr guid value{ 0xD9126196,0x4C5B,0x417D,{ 0xBB,0x37,0x76,0x38,0x1D,0xEF,0x8D,0xB4 } };
    };
    template <> struct guid_storage<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        static constexpr guid value{ 0x2ACA929A,0x5E28,0x4EA6,{ 0x82,0x9E,0x29,0x13,0x4E,0x66,0x5D,0x6D } };
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>
    {
        using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>
    {
        using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>
    {
        using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>
    {
        using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride;
    };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>
    {
        using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs;
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_TargetRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AreConcurrentOperationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreConcurrentOperationsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall SetPointerId(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_DragUIContentMode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DragUIContentMode(uint32_t) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllowedOperations(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_IsContentVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
            virtual int32_t __stdcall put_Caption(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCaptionVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCaptionVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsGlyphVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsGlyphVisible(bool) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall EnterAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall OverAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LeaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DropAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTarget(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager
    {
        auto TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
        using TargetRequested_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager, &impl::abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>::remove_TargetRequested>;
        TargetRequested_revoker TargetRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
        auto TargetRequested(winrt::event_token const& value) const noexcept;
        [[nodiscard]] auto AreConcurrentOperationsEnabled() const;
        auto AreConcurrentOperationsEnabled(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo
    {
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto Modifiers() const;
        [[nodiscard]] auto Position() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2
    {
        [[nodiscard]] auto AllowedOperations() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation
    {
        [[nodiscard]] auto Data() const;
        auto SetPointerId(uint32_t pointerId) const;
        auto SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        auto SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
        [[nodiscard]] auto DragUIContentMode() const;
        auto DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const& value) const;
        auto StartAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2
    {
        [[nodiscard]] auto AllowedOperations() const;
        auto AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride
    {
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        auto SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
        [[nodiscard]] auto IsContentVisible() const;
        auto IsContentVisible(bool value) const;
        [[nodiscard]] auto Caption() const;
        auto Caption(param::hstring const& value) const;
        [[nodiscard]] auto IsCaptionVisible() const;
        auto IsCaptionVisible(bool value) const;
        [[nodiscard]] auto IsGlyphVisible() const;
        auto IsGlyphVisible(bool value) const;
        auto Clear() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget
    {
        auto EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
        auto OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
        auto LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
        auto DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs
    {
        auto SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const& target) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs<D>;
    };
}
#endif
