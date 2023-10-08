// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Maps_2_H
#define WINRT_Windows_UI_Xaml_Controls_Maps_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Services.Maps.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Maps.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps
{
    struct MapZoomLevelRange
    {
        double Min;
        double Max;
    };
    inline bool operator==(MapZoomLevelRange const& left, MapZoomLevelRange const& right) noexcept
    {
        return left.Min == right.Min && left.Max == right.Max;
    }
    inline bool operator!=(MapZoomLevelRange const& left, MapZoomLevelRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CustomMapTileDataSource : Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource,
        impl::base<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CustomMapTileDataSource(std::nullptr_t) noexcept {}
        CustomMapTileDataSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource(ptr, take_ownership_from_abi) {}
        CustomMapTileDataSource();
    };
    struct __declspec(empty_bases) HttpMapTileDataSource : Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource,
        impl::base<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        HttpMapTileDataSource(std::nullptr_t) noexcept {}
        HttpMapTileDataSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource(ptr, take_ownership_from_abi) {}
        HttpMapTileDataSource();
        explicit HttpMapTileDataSource(param::hstring const& uriFormatString);
    };
    struct __declspec(empty_bases) LocalMapTileDataSource : Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource,
        impl::base<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        LocalMapTileDataSource(std::nullptr_t) noexcept {}
        LocalMapTileDataSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource(ptr, take_ownership_from_abi) {}
        LocalMapTileDataSource();
        explicit LocalMapTileDataSource(param::hstring const& uriFormatString);
    };
    struct __declspec(empty_bases) MapActualCameraChangedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs,
        impl::require<MapActualCameraChangedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        MapActualCameraChangedEventArgs(std::nullptr_t) noexcept {}
        MapActualCameraChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs(ptr, take_ownership_from_abi) {}
        MapActualCameraChangedEventArgs();
    };
    struct __declspec(empty_bases) MapActualCameraChangingEventArgs : Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs,
        impl::require<MapActualCameraChangingEventArgs, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        MapActualCameraChangingEventArgs(std::nullptr_t) noexcept {}
        MapActualCameraChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs(ptr, take_ownership_from_abi) {}
        MapActualCameraChangingEventArgs();
    };
    struct __declspec(empty_bases) MapBillboard : Windows::UI::Xaml::Controls::Maps::IMapBillboard,
        impl::base<MapBillboard, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapBillboard(std::nullptr_t) noexcept {}
        MapBillboard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapBillboard(ptr, take_ownership_from_abi) {}
        explicit MapBillboard(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera);
        [[nodiscard]] static auto LocationProperty();
        [[nodiscard]] static auto NormalizedAnchorPointProperty();
        [[nodiscard]] static auto CollisionBehaviorDesiredProperty();
    };
    struct __declspec(empty_bases) MapCamera : Windows::UI::Xaml::Controls::Maps::IMapCamera,
        impl::base<MapCamera, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapCamera, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapCamera(std::nullptr_t) noexcept {}
        MapCamera(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapCamera(ptr, take_ownership_from_abi) {}
        explicit MapCamera(Windows::Devices::Geolocation::Geopoint const& location);
        MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees);
        MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees);
        MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees);
    };
    struct __declspec(empty_bases) MapContextRequestedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs
    {
        MapContextRequestedEventArgs(std::nullptr_t) noexcept {}
        MapContextRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs(ptr, take_ownership_from_abi) {}
        MapContextRequestedEventArgs();
    };
    struct __declspec(empty_bases) MapControl : Windows::UI::Xaml::Controls::Maps::IMapControl,
        impl::base<MapControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControl2, Windows::UI::Xaml::Controls::Maps::IMapControl3, Windows::UI::Xaml::Controls::Maps::IMapControl4, Windows::UI::Xaml::Controls::Maps::IMapControl5, Windows::UI::Xaml::Controls::Maps::IMapControl6, Windows::UI::Xaml::Controls::Maps::IMapControl7, Windows::UI::Xaml::Controls::Maps::IMapControl8, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapControl(std::nullptr_t) noexcept {}
        MapControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControl(ptr, take_ownership_from_abi) {}
        MapControl();
        using Windows::UI::Xaml::Controls::Maps::IMapControl::FindMapElementsAtOffset;
        using impl::consume_t<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControl5>::FindMapElementsAtOffset;
        using Windows::UI::Xaml::Controls::Maps::IMapControl::GetLocationFromOffset;
        using impl::consume_t<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControl5>::GetLocationFromOffset;
        using Windows::UI::Xaml::Controls::Maps::IMapControl::Style;
        using impl::consume_t<MapControl, Windows::UI::Xaml::IFrameworkElement>::Style;
        [[nodiscard]] static auto CenterProperty();
        [[nodiscard]] static auto ChildrenProperty();
        [[nodiscard]] static auto ColorSchemeProperty();
        [[nodiscard]] static auto DesiredPitchProperty();
        [[nodiscard]] static auto HeadingProperty();
        [[nodiscard]] static auto LandmarksVisibleProperty();
        [[nodiscard]] static auto LoadingStatusProperty();
        [[nodiscard]] static auto MapServiceTokenProperty();
        [[nodiscard]] static auto PedestrianFeaturesVisibleProperty();
        [[nodiscard]] static auto PitchProperty();
        [[nodiscard]] static auto StyleProperty();
        [[nodiscard]] static auto TrafficFlowVisibleProperty();
        [[nodiscard]] static auto TransformOriginProperty();
        [[nodiscard]] static auto WatermarkModeProperty();
        [[nodiscard]] static auto ZoomLevelProperty();
        [[nodiscard]] static auto MapElementsProperty();
        [[nodiscard]] static auto RoutesProperty();
        [[nodiscard]] static auto TileSourcesProperty();
        [[nodiscard]] static auto LocationProperty();
        static auto GetLocation(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value);
        [[nodiscard]] static auto NormalizedAnchorPointProperty();
        static auto GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element);
        static auto SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value);
        [[nodiscard]] static auto BusinessLandmarksVisibleProperty();
        [[nodiscard]] static auto TransitFeaturesVisibleProperty();
        [[nodiscard]] static auto PanInteractionModeProperty();
        [[nodiscard]] static auto RotateInteractionModeProperty();
        [[nodiscard]] static auto TiltInteractionModeProperty();
        [[nodiscard]] static auto ZoomInteractionModeProperty();
        [[nodiscard]] static auto Is3DSupportedProperty();
        [[nodiscard]] static auto IsStreetsideSupportedProperty();
        [[nodiscard]] static auto SceneProperty();
        [[nodiscard]] static auto BusinessLandmarksEnabledProperty();
        [[nodiscard]] static auto TransitFeaturesEnabledProperty();
        [[nodiscard]] static auto MapProjectionProperty();
        [[nodiscard]] static auto StyleSheetProperty();
        [[nodiscard]] static auto ViewPaddingProperty();
        [[nodiscard]] static auto LayersProperty();
        [[nodiscard]] static auto RegionProperty();
        [[nodiscard]] static auto CanTiltDownProperty();
        [[nodiscard]] static auto CanTiltUpProperty();
        [[nodiscard]] static auto CanZoomInProperty();
        [[nodiscard]] static auto CanZoomOutProperty();
    };
    struct __declspec(empty_bases) MapControlBusinessLandmarkClickEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs
    {
        MapControlBusinessLandmarkClickEventArgs(std::nullptr_t) noexcept {}
        MapControlBusinessLandmarkClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs(ptr, take_ownership_from_abi) {}
        MapControlBusinessLandmarkClickEventArgs();
    };
    struct __declspec(empty_bases) MapControlBusinessLandmarkPointerEnteredEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs
    {
        MapControlBusinessLandmarkPointerEnteredEventArgs(std::nullptr_t) noexcept {}
        MapControlBusinessLandmarkPointerEnteredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs(ptr, take_ownership_from_abi) {}
        MapControlBusinessLandmarkPointerEnteredEventArgs();
    };
    struct __declspec(empty_bases) MapControlBusinessLandmarkPointerExitedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs
    {
        MapControlBusinessLandmarkPointerExitedEventArgs(std::nullptr_t) noexcept {}
        MapControlBusinessLandmarkPointerExitedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs(ptr, take_ownership_from_abi) {}
        MapControlBusinessLandmarkPointerExitedEventArgs();
    };
    struct __declspec(empty_bases) MapControlBusinessLandmarkRightTappedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs
    {
        MapControlBusinessLandmarkRightTappedEventArgs(std::nullptr_t) noexcept {}
        MapControlBusinessLandmarkRightTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs(ptr, take_ownership_from_abi) {}
        MapControlBusinessLandmarkRightTappedEventArgs();
    };
    struct __declspec(empty_bases) MapControlDataHelper : Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper,
        impl::base<MapControlDataHelper, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapControlDataHelper, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapControlDataHelper(std::nullptr_t) noexcept {}
        MapControlDataHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper(ptr, take_ownership_from_abi) {}
        explicit MapControlDataHelper(Windows::UI::Xaml::Controls::Maps::MapControl const& map);
        static auto CreateMapControl(bool rasterRenderMode);
    };
    struct __declspec(empty_bases) MapControlTransitFeatureClickEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs
    {
        MapControlTransitFeatureClickEventArgs(std::nullptr_t) noexcept {}
        MapControlTransitFeatureClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs(ptr, take_ownership_from_abi) {}
        MapControlTransitFeatureClickEventArgs();
    };
    struct __declspec(empty_bases) MapControlTransitFeaturePointerEnteredEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs
    {
        MapControlTransitFeaturePointerEnteredEventArgs(std::nullptr_t) noexcept {}
        MapControlTransitFeaturePointerEnteredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs(ptr, take_ownership_from_abi) {}
        MapControlTransitFeaturePointerEnteredEventArgs();
    };
    struct __declspec(empty_bases) MapControlTransitFeaturePointerExitedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs
    {
        MapControlTransitFeaturePointerExitedEventArgs(std::nullptr_t) noexcept {}
        MapControlTransitFeaturePointerExitedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs(ptr, take_ownership_from_abi) {}
        MapControlTransitFeaturePointerExitedEventArgs();
    };
    struct __declspec(empty_bases) MapControlTransitFeatureRightTappedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs
    {
        MapControlTransitFeatureRightTappedEventArgs(std::nullptr_t) noexcept {}
        MapControlTransitFeatureRightTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs(ptr, take_ownership_from_abi) {}
        MapControlTransitFeatureRightTappedEventArgs();
    };
    struct __declspec(empty_bases) MapCustomExperience : Windows::UI::Xaml::Controls::Maps::IMapCustomExperience,
        impl::base<MapCustomExperience, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapCustomExperience(std::nullptr_t) noexcept {}
        MapCustomExperience(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapCustomExperience(ptr, take_ownership_from_abi) {}
        MapCustomExperience();
    };
    struct __declspec(empty_bases) MapCustomExperienceChangedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs
    {
        MapCustomExperienceChangedEventArgs(std::nullptr_t) noexcept {}
        MapCustomExperienceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs(ptr, take_ownership_from_abi) {}
        MapCustomExperienceChangedEventArgs();
    };
    struct __declspec(empty_bases) MapElement : Windows::UI::Xaml::Controls::Maps::IMapElement,
        impl::base<MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapElement(std::nullptr_t) noexcept {}
        MapElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElement(ptr, take_ownership_from_abi) {}
        MapElement();
        [[nodiscard]] static auto ZIndexProperty();
        [[nodiscard]] static auto VisibleProperty();
        [[nodiscard]] static auto MapTabIndexProperty();
        [[nodiscard]] static auto MapStyleSheetEntryProperty();
        [[nodiscard]] static auto MapStyleSheetEntryStateProperty();
        [[nodiscard]] static auto TagProperty();
        [[nodiscard]] static auto IsEnabledProperty();
    };
    struct __declspec(empty_bases) MapElement3D : Windows::UI::Xaml::Controls::Maps::IMapElement3D,
        impl::base<MapElement3D, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapElement3D, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapElement3D(std::nullptr_t) noexcept {}
        MapElement3D(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElement3D(ptr, take_ownership_from_abi) {}
        MapElement3D();
        [[nodiscard]] static auto LocationProperty();
        [[nodiscard]] static auto HeadingProperty();
        [[nodiscard]] static auto PitchProperty();
        [[nodiscard]] static auto RollProperty();
        [[nodiscard]] static auto ScaleProperty();
    };
    struct __declspec(empty_bases) MapElementClickEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs
    {
        MapElementClickEventArgs(std::nullptr_t) noexcept {}
        MapElementClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs(ptr, take_ownership_from_abi) {}
        MapElementClickEventArgs();
    };
    struct __declspec(empty_bases) MapElementPointerEnteredEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs
    {
        MapElementPointerEnteredEventArgs(std::nullptr_t) noexcept {}
        MapElementPointerEnteredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs(ptr, take_ownership_from_abi) {}
        MapElementPointerEnteredEventArgs();
    };
    struct __declspec(empty_bases) MapElementPointerExitedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs
    {
        MapElementPointerExitedEventArgs(std::nullptr_t) noexcept {}
        MapElementPointerExitedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs(ptr, take_ownership_from_abi) {}
        MapElementPointerExitedEventArgs();
    };
    struct __declspec(empty_bases) MapElementsLayer : Windows::UI::Xaml::Controls::Maps::IMapElementsLayer,
        impl::base<MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapLayer, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapElementsLayer, Windows::UI::Xaml::Controls::Maps::IMapLayer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapElementsLayer(std::nullptr_t) noexcept {}
        MapElementsLayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementsLayer(ptr, take_ownership_from_abi) {}
        MapElementsLayer();
        [[nodiscard]] static auto MapElementsProperty();
    };
    struct __declspec(empty_bases) MapElementsLayerClickEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs
    {
        MapElementsLayerClickEventArgs(std::nullptr_t) noexcept {}
        MapElementsLayerClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs(ptr, take_ownership_from_abi) {}
        MapElementsLayerClickEventArgs();
    };
    struct __declspec(empty_bases) MapElementsLayerContextRequestedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs
    {
        MapElementsLayerContextRequestedEventArgs(std::nullptr_t) noexcept {}
        MapElementsLayerContextRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs(ptr, take_ownership_from_abi) {}
        MapElementsLayerContextRequestedEventArgs();
    };
    struct __declspec(empty_bases) MapElementsLayerPointerEnteredEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs
    {
        MapElementsLayerPointerEnteredEventArgs(std::nullptr_t) noexcept {}
        MapElementsLayerPointerEnteredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs(ptr, take_ownership_from_abi) {}
        MapElementsLayerPointerEnteredEventArgs();
    };
    struct __declspec(empty_bases) MapElementsLayerPointerExitedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs
    {
        MapElementsLayerPointerExitedEventArgs(std::nullptr_t) noexcept {}
        MapElementsLayerPointerExitedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs(ptr, take_ownership_from_abi) {}
        MapElementsLayerPointerExitedEventArgs();
    };
    struct __declspec(empty_bases) MapIcon : Windows::UI::Xaml::Controls::Maps::IMapIcon,
        impl::base<MapIcon, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapIcon2, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapIcon(std::nullptr_t) noexcept {}
        MapIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapIcon(ptr, take_ownership_from_abi) {}
        MapIcon();
        [[nodiscard]] static auto LocationProperty();
        [[nodiscard]] static auto TitleProperty();
        [[nodiscard]] static auto NormalizedAnchorPointProperty();
        [[nodiscard]] static auto CollisionBehaviorDesiredProperty();
    };
    struct __declspec(empty_bases) MapInputEventArgs : Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs,
        impl::base<MapInputEventArgs, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapInputEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapInputEventArgs(std::nullptr_t) noexcept {}
        MapInputEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs(ptr, take_ownership_from_abi) {}
        MapInputEventArgs();
    };
    struct __declspec(empty_bases) MapItemsControl : Windows::UI::Xaml::Controls::Maps::IMapItemsControl,
        impl::base<MapItemsControl, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapItemsControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapItemsControl(std::nullptr_t) noexcept {}
        MapItemsControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapItemsControl(ptr, take_ownership_from_abi) {}
        MapItemsControl();
        [[nodiscard]] static auto ItemsSourceProperty();
        [[nodiscard]] static auto ItemsProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
    };
    struct __declspec(empty_bases) MapLayer : Windows::UI::Xaml::Controls::Maps::IMapLayer,
        impl::base<MapLayer, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapLayer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapLayer(std::nullptr_t) noexcept {}
        MapLayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapLayer(ptr, take_ownership_from_abi) {}
        MapLayer();
        [[nodiscard]] static auto MapTabIndexProperty();
        [[nodiscard]] static auto VisibleProperty();
        [[nodiscard]] static auto ZIndexProperty();
    };
    struct __declspec(empty_bases) MapModel3D : Windows::UI::Xaml::Controls::Maps::IMapModel3D,
        impl::base<MapModel3D, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapModel3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapModel3D(std::nullptr_t) noexcept {}
        MapModel3D(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapModel3D(ptr, take_ownership_from_abi) {}
        MapModel3D();
        static auto CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source);
        static auto CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption);
    };
    struct __declspec(empty_bases) MapPolygon : Windows::UI::Xaml::Controls::Maps::IMapPolygon,
        impl::base<MapPolygon, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapPolygon2, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapPolygon(std::nullptr_t) noexcept {}
        MapPolygon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapPolygon(ptr, take_ownership_from_abi) {}
        MapPolygon();
        [[nodiscard]] static auto PathProperty();
        [[nodiscard]] static auto StrokeThicknessProperty();
        [[nodiscard]] static auto StrokeDashedProperty();
    };
    struct __declspec(empty_bases) MapPolyline : Windows::UI::Xaml::Controls::Maps::IMapPolyline,
        impl::base<MapPolyline, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapElement3, Windows::UI::Xaml::Controls::Maps::IMapElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapPolyline(std::nullptr_t) noexcept {}
        MapPolyline(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapPolyline(ptr, take_ownership_from_abi) {}
        MapPolyline();
        [[nodiscard]] static auto PathProperty();
        [[nodiscard]] static auto StrokeDashedProperty();
    };
    struct __declspec(empty_bases) MapRightTappedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs
    {
        MapRightTappedEventArgs(std::nullptr_t) noexcept {}
        MapRightTappedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs(ptr, take_ownership_from_abi) {}
        MapRightTappedEventArgs();
    };
    struct __declspec(empty_bases) MapRouteView : Windows::UI::Xaml::Controls::Maps::IMapRouteView,
        impl::base<MapRouteView, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapRouteView, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapRouteView(std::nullptr_t) noexcept {}
        MapRouteView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapRouteView(ptr, take_ownership_from_abi) {}
        explicit MapRouteView(Windows::Services::Maps::MapRoute const& route);
    };
    struct __declspec(empty_bases) MapScene : Windows::UI::Xaml::Controls::Maps::IMapScene,
        impl::base<MapScene, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapScene, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapScene(std::nullptr_t) noexcept {}
        MapScene(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapScene(ptr, take_ownership_from_abi) {}
        static auto CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds);
        static auto CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees);
        static auto CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera);
        static auto CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location);
        static auto CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees);
        static auto CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters);
        static auto CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees);
        static auto CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations);
        static auto CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees);
    };
    struct __declspec(empty_bases) MapStyleSheet : Windows::UI::Xaml::Controls::Maps::IMapStyleSheet,
        impl::base<MapStyleSheet, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapStyleSheet, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapStyleSheet(std::nullptr_t) noexcept {}
        MapStyleSheet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapStyleSheet(ptr, take_ownership_from_abi) {}
        static auto Aerial();
        static auto AerialWithOverlay();
        static auto RoadLight();
        static auto RoadDark();
        static auto RoadHighContrastLight();
        static auto RoadHighContrastDark();
        static auto Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets);
        static auto ParseFromJson(param::hstring const& styleAsJson);
        static auto TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet);
    };
    struct MapStyleSheetEntries
    {
        MapStyleSheetEntries() = delete;
        [[nodiscard]] static auto Area();
        [[nodiscard]] static auto Airport();
        [[nodiscard]] static auto Cemetery();
        [[nodiscard]] static auto Continent();
        [[nodiscard]] static auto Education();
        [[nodiscard]] static auto IndigenousPeoplesReserve();
        [[nodiscard]] static auto Island();
        [[nodiscard]] static auto Medical();
        [[nodiscard]] static auto Military();
        [[nodiscard]] static auto Nautical();
        [[nodiscard]] static auto Neighborhood();
        [[nodiscard]] static auto Runway();
        [[nodiscard]] static auto Sand();
        [[nodiscard]] static auto ShoppingCenter();
        [[nodiscard]] static auto Stadium();
        [[nodiscard]] static auto Vegetation();
        [[nodiscard]] static auto Forest();
        [[nodiscard]] static auto GolfCourse();
        [[nodiscard]] static auto Park();
        [[nodiscard]] static auto PlayingField();
        [[nodiscard]] static auto Reserve();
        [[nodiscard]] static auto Point();
        [[nodiscard]] static auto NaturalPoint();
        [[nodiscard]] static auto Peak();
        [[nodiscard]] static auto VolcanicPeak();
        [[nodiscard]] static auto WaterPoint();
        [[nodiscard]] static auto PointOfInterest();
        [[nodiscard]] static auto Business();
        [[nodiscard]] static auto FoodPoint();
        [[nodiscard]] static auto PopulatedPlace();
        [[nodiscard]] static auto Capital();
        [[nodiscard]] static auto AdminDistrictCapital();
        [[nodiscard]] static auto CountryRegionCapital();
        [[nodiscard]] static auto RoadShield();
        [[nodiscard]] static auto RoadExit();
        [[nodiscard]] static auto Transit();
        [[nodiscard]] static auto Political();
        [[nodiscard]] static auto CountryRegion();
        [[nodiscard]] static auto AdminDistrict();
        [[nodiscard]] static auto District();
        [[nodiscard]] static auto Structure();
        [[nodiscard]] static auto Building();
        [[nodiscard]] static auto EducationBuilding();
        [[nodiscard]] static auto MedicalBuilding();
        [[nodiscard]] static auto TransitBuilding();
        [[nodiscard]] static auto Transportation();
        [[nodiscard]] static auto Road();
        [[nodiscard]] static auto ControlledAccessHighway();
        [[nodiscard]] static auto HighSpeedRamp();
        [[nodiscard]] static auto Highway();
        [[nodiscard]] static auto MajorRoad();
        [[nodiscard]] static auto ArterialRoad();
        [[nodiscard]] static auto Street();
        [[nodiscard]] static auto Ramp();
        [[nodiscard]] static auto UnpavedStreet();
        [[nodiscard]] static auto TollRoad();
        [[nodiscard]] static auto Railway();
        [[nodiscard]] static auto Trail();
        [[nodiscard]] static auto WaterRoute();
        [[nodiscard]] static auto Water();
        [[nodiscard]] static auto River();
        [[nodiscard]] static auto RouteLine();
        [[nodiscard]] static auto WalkingRoute();
        [[nodiscard]] static auto DrivingRoute();
    };
    struct MapStyleSheetEntryStates
    {
        MapStyleSheetEntryStates() = delete;
        [[nodiscard]] static auto Disabled();
        [[nodiscard]] static auto Hover();
        [[nodiscard]] static auto Selected();
    };
    struct __declspec(empty_bases) MapTargetCameraChangedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs,
        impl::require<MapTargetCameraChangedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        MapTargetCameraChangedEventArgs(std::nullptr_t) noexcept {}
        MapTargetCameraChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs(ptr, take_ownership_from_abi) {}
        MapTargetCameraChangedEventArgs();
    };
    struct __declspec(empty_bases) MapTileBitmapRequest : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest
    {
        MapTileBitmapRequest(std::nullptr_t) noexcept {}
        MapTileBitmapRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest(ptr, take_ownership_from_abi) {}
        MapTileBitmapRequest();
    };
    struct __declspec(empty_bases) MapTileBitmapRequestDeferral : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral
    {
        MapTileBitmapRequestDeferral(std::nullptr_t) noexcept {}
        MapTileBitmapRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral(ptr, take_ownership_from_abi) {}
        MapTileBitmapRequestDeferral();
    };
    struct __declspec(empty_bases) MapTileBitmapRequestedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs,
        impl::require<MapTileBitmapRequestedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        MapTileBitmapRequestedEventArgs(std::nullptr_t) noexcept {}
        MapTileBitmapRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs(ptr, take_ownership_from_abi) {}
        MapTileBitmapRequestedEventArgs();
    };
    struct __declspec(empty_bases) MapTileDataSource : Windows::UI::Xaml::Controls::Maps::IMapTileDataSource,
        impl::base<MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapTileDataSource(std::nullptr_t) noexcept {}
        MapTileDataSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileDataSource(ptr, take_ownership_from_abi) {}
        MapTileDataSource();
    };
    struct __declspec(empty_bases) MapTileSource : Windows::UI::Xaml::Controls::Maps::IMapTileSource,
        impl::base<MapTileSource, Windows::UI::Xaml::DependencyObject>,
        impl::require<MapTileSource, Windows::UI::Xaml::Controls::Maps::IMapTileSource2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        MapTileSource(std::nullptr_t) noexcept {}
        MapTileSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileSource(ptr, take_ownership_from_abi) {}
        MapTileSource();
        explicit MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource);
        MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange);
        MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds);
        MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels);
        [[nodiscard]] static auto DataSourceProperty();
        [[nodiscard]] static auto LayerProperty();
        [[nodiscard]] static auto ZoomLevelRangeProperty();
        [[nodiscard]] static auto BoundsProperty();
        [[nodiscard]] static auto AllowOverstretchProperty();
        [[nodiscard]] static auto IsFadingEnabledProperty();
        [[nodiscard]] static auto IsTransparencyEnabledProperty();
        [[nodiscard]] static auto IsRetryEnabledProperty();
        [[nodiscard]] static auto ZIndexProperty();
        [[nodiscard]] static auto TilePixelSizeProperty();
        [[nodiscard]] static auto VisibleProperty();
        [[nodiscard]] static auto AnimationStateProperty();
        [[nodiscard]] static auto AutoPlayProperty();
        [[nodiscard]] static auto FrameCountProperty();
        [[nodiscard]] static auto FrameDurationProperty();
    };
    struct __declspec(empty_bases) MapTileUriRequest : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest
    {
        MapTileUriRequest(std::nullptr_t) noexcept {}
        MapTileUriRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest(ptr, take_ownership_from_abi) {}
        MapTileUriRequest();
    };
    struct __declspec(empty_bases) MapTileUriRequestDeferral : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral
    {
        MapTileUriRequestDeferral(std::nullptr_t) noexcept {}
        MapTileUriRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral(ptr, take_ownership_from_abi) {}
        MapTileUriRequestDeferral();
    };
    struct __declspec(empty_bases) MapTileUriRequestedEventArgs : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs,
        impl::require<MapTileUriRequestedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        MapTileUriRequestedEventArgs(std::nullptr_t) noexcept {}
        MapTileUriRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs(ptr, take_ownership_from_abi) {}
        MapTileUriRequestedEventArgs();
    };
    struct __declspec(empty_bases) StreetsideExperience : Windows::UI::Xaml::Controls::Maps::IStreetsideExperience,
        impl::base<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::MapCustomExperience, Windows::UI::Xaml::DependencyObject>,
        impl::require<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        StreetsideExperience(std::nullptr_t) noexcept {}
        StreetsideExperience(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IStreetsideExperience(ptr, take_ownership_from_abi) {}
        explicit StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama);
        StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees);
    };
    struct __declspec(empty_bases) StreetsidePanorama : Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama,
        impl::base<StreetsidePanorama, Windows::UI::Xaml::DependencyObject>,
        impl::require<StreetsidePanorama, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        StreetsidePanorama(std::nullptr_t) noexcept {}
        StreetsidePanorama(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama(ptr, take_ownership_from_abi) {}
        static auto FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location);
        static auto FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters);
    };
}
#endif
