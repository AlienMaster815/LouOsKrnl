// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Maps_0_H
#define WINRT_Windows_UI_Xaml_Controls_Maps_0_H
namespace winrt::Windows::Devices::Geolocation
{
    enum class AltitudeReferenceSystem : int32_t;
    struct GeoboundingBox;
    struct Geopath;
    struct Geopoint;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    struct Point;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVector;
}
namespace winrt::Windows::Foundation::Numerics
{
}
namespace winrt::Windows::Services::Maps
{
    struct MapRoute;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::UI
{
    struct Color;
}
namespace winrt::Windows::UI::Xaml
{
    struct DataTemplate;
    struct DependencyObject;
    struct DependencyProperty;
    struct Thickness;
}
namespace winrt::Windows::UI::Xaml::Controls::Maps
{
    enum class MapAnimationKind : int32_t
    {
        Default = 0,
        None = 1,
        Linear = 2,
        Bow = 3,
    };
    enum class MapCameraChangeReason : int32_t
    {
        System = 0,
        UserInteraction = 1,
        Programmatic = 2,
    };
    enum class MapColorScheme : int32_t
    {
        Light = 0,
        Dark = 1,
    };
    enum class MapElementCollisionBehavior : int32_t
    {
        Hide = 0,
        RemainVisible = 1,
    };
    enum class MapInteractionMode : int32_t
    {
        Auto = 0,
        Disabled = 1,
        GestureOnly = 2,
        PointerAndKeyboard = 2,
        ControlOnly = 3,
        GestureAndControl = 4,
        PointerKeyboardAndControl = 4,
        PointerOnly = 5,
    };
    enum class MapLoadingStatus : int32_t
    {
        Loading = 0,
        Loaded = 1,
        DataUnavailable = 2,
        DownloadedMapsManagerUnavailable = 3,
    };
    enum class MapModel3DShadingOption : int32_t
    {
        Default = 0,
        Flat = 1,
        Smooth = 2,
    };
    enum class MapPanInteractionMode : int32_t
    {
        Auto = 0,
        Disabled = 1,
    };
    enum class MapProjection : int32_t
    {
        WebMercator = 0,
        Globe = 1,
    };
    enum class MapStyle : int32_t
    {
        None = 0,
        Road = 1,
        Aerial = 2,
        AerialWithRoads = 3,
        Terrain = 4,
        Aerial3D = 5,
        Aerial3DWithRoads = 6,
        Custom = 7,
    };
    enum class MapTileAnimationState : int32_t
    {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
    enum class MapTileLayer : int32_t
    {
        LabelOverlay = 0,
        RoadOverlay = 1,
        AreaOverlay = 2,
        BackgroundOverlay = 3,
        BackgroundReplacement = 4,
    };
    enum class MapVisibleRegionKind : int32_t
    {
        Near = 0,
        Full = 1,
    };
    enum class MapWatermarkMode : int32_t
    {
        Automatic = 0,
        On = 1,
    };
    struct ICustomMapTileDataSource;
    struct ICustomMapTileDataSourceFactory;
    struct IHttpMapTileDataSource;
    struct IHttpMapTileDataSourceFactory;
    struct ILocalMapTileDataSource;
    struct ILocalMapTileDataSourceFactory;
    struct IMapActualCameraChangedEventArgs;
    struct IMapActualCameraChangedEventArgs2;
    struct IMapActualCameraChangingEventArgs;
    struct IMapActualCameraChangingEventArgs2;
    struct IMapBillboard;
    struct IMapBillboardFactory;
    struct IMapBillboardStatics;
    struct IMapCamera;
    struct IMapCameraFactory;
    struct IMapContextRequestedEventArgs;
    struct IMapControl;
    struct IMapControl2;
    struct IMapControl3;
    struct IMapControl4;
    struct IMapControl5;
    struct IMapControl6;
    struct IMapControl7;
    struct IMapControl8;
    struct IMapControlBusinessLandmarkClickEventArgs;
    struct IMapControlBusinessLandmarkPointerEnteredEventArgs;
    struct IMapControlBusinessLandmarkPointerExitedEventArgs;
    struct IMapControlBusinessLandmarkRightTappedEventArgs;
    struct IMapControlDataHelper;
    struct IMapControlDataHelper2;
    struct IMapControlDataHelperFactory;
    struct IMapControlDataHelperStatics;
    struct IMapControlStatics;
    struct IMapControlStatics2;
    struct IMapControlStatics4;
    struct IMapControlStatics5;
    struct IMapControlStatics6;
    struct IMapControlStatics7;
    struct IMapControlStatics8;
    struct IMapControlTransitFeatureClickEventArgs;
    struct IMapControlTransitFeaturePointerEnteredEventArgs;
    struct IMapControlTransitFeaturePointerExitedEventArgs;
    struct IMapControlTransitFeatureRightTappedEventArgs;
    struct IMapCustomExperience;
    struct IMapCustomExperienceChangedEventArgs;
    struct IMapCustomExperienceFactory;
    struct IMapElement;
    struct IMapElement2;
    struct IMapElement3;
    struct IMapElement3D;
    struct IMapElement3DStatics;
    struct IMapElement4;
    struct IMapElementClickEventArgs;
    struct IMapElementFactory;
    struct IMapElementPointerEnteredEventArgs;
    struct IMapElementPointerExitedEventArgs;
    struct IMapElementStatics;
    struct IMapElementStatics2;
    struct IMapElementStatics3;
    struct IMapElementStatics4;
    struct IMapElementsLayer;
    struct IMapElementsLayerClickEventArgs;
    struct IMapElementsLayerContextRequestedEventArgs;
    struct IMapElementsLayerPointerEnteredEventArgs;
    struct IMapElementsLayerPointerExitedEventArgs;
    struct IMapElementsLayerStatics;
    struct IMapIcon;
    struct IMapIcon2;
    struct IMapIconStatics;
    struct IMapIconStatics2;
    struct IMapInputEventArgs;
    struct IMapItemsControl;
    struct IMapItemsControlStatics;
    struct IMapLayer;
    struct IMapLayerFactory;
    struct IMapLayerStatics;
    struct IMapModel3D;
    struct IMapModel3DFactory;
    struct IMapModel3DStatics;
    struct IMapPolygon;
    struct IMapPolygon2;
    struct IMapPolygonStatics;
    struct IMapPolyline;
    struct IMapPolylineStatics;
    struct IMapRightTappedEventArgs;
    struct IMapRouteView;
    struct IMapRouteViewFactory;
    struct IMapScene;
    struct IMapSceneStatics;
    struct IMapStyleSheet;
    struct IMapStyleSheetEntriesStatics;
    struct IMapStyleSheetEntryStatesStatics;
    struct IMapStyleSheetStatics;
    struct IMapTargetCameraChangedEventArgs;
    struct IMapTargetCameraChangedEventArgs2;
    struct IMapTileBitmapRequest;
    struct IMapTileBitmapRequestDeferral;
    struct IMapTileBitmapRequestedEventArgs;
    struct IMapTileBitmapRequestedEventArgs2;
    struct IMapTileDataSource;
    struct IMapTileDataSourceFactory;
    struct IMapTileSource;
    struct IMapTileSource2;
    struct IMapTileSourceFactory;
    struct IMapTileSourceStatics;
    struct IMapTileSourceStatics2;
    struct IMapTileUriRequest;
    struct IMapTileUriRequestDeferral;
    struct IMapTileUriRequestedEventArgs;
    struct IMapTileUriRequestedEventArgs2;
    struct IStreetsideExperience;
    struct IStreetsideExperienceFactory;
    struct IStreetsidePanorama;
    struct IStreetsidePanoramaStatics;
    struct CustomMapTileDataSource;
    struct HttpMapTileDataSource;
    struct LocalMapTileDataSource;
    struct MapActualCameraChangedEventArgs;
    struct MapActualCameraChangingEventArgs;
    struct MapBillboard;
    struct MapCamera;
    struct MapContextRequestedEventArgs;
    struct MapControl;
    struct MapControlBusinessLandmarkClickEventArgs;
    struct MapControlBusinessLandmarkPointerEnteredEventArgs;
    struct MapControlBusinessLandmarkPointerExitedEventArgs;
    struct MapControlBusinessLandmarkRightTappedEventArgs;
    struct MapControlDataHelper;
    struct MapControlTransitFeatureClickEventArgs;
    struct MapControlTransitFeaturePointerEnteredEventArgs;
    struct MapControlTransitFeaturePointerExitedEventArgs;
    struct MapControlTransitFeatureRightTappedEventArgs;
    struct MapCustomExperience;
    struct MapCustomExperienceChangedEventArgs;
    struct MapElement;
    struct MapElement3D;
    struct MapElementClickEventArgs;
    struct MapElementPointerEnteredEventArgs;
    struct MapElementPointerExitedEventArgs;
    struct MapElementsLayer;
    struct MapElementsLayerClickEventArgs;
    struct MapElementsLayerContextRequestedEventArgs;
    struct MapElementsLayerPointerEnteredEventArgs;
    struct MapElementsLayerPointerExitedEventArgs;
    struct MapIcon;
    struct MapInputEventArgs;
    struct MapItemsControl;
    struct MapLayer;
    struct MapModel3D;
    struct MapPolygon;
    struct MapPolyline;
    struct MapRightTappedEventArgs;
    struct MapRouteView;
    struct MapScene;
    struct MapStyleSheet;
    struct MapStyleSheetEntries;
    struct MapStyleSheetEntryStates;
    struct MapTargetCameraChangedEventArgs;
    struct MapTileBitmapRequest;
    struct MapTileBitmapRequestDeferral;
    struct MapTileBitmapRequestedEventArgs;
    struct MapTileDataSource;
    struct MapTileSource;
    struct MapTileUriRequest;
    struct MapTileUriRequestDeferral;
    struct MapTileUriRequestedEventArgs;
    struct StreetsideExperience;
    struct StreetsidePanorama;
    struct MapZoomLevelRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapBillboard>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCamera>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement3D>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapIcon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapItemsControl>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLayer>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3D>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolygon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolyline>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRouteView>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapScene>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileSource>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapAnimationKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapColorScheme>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapProjection>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyle>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileAnimationState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileLayer>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>
    {
        using type = struct_category<double, double>;
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboard" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboardFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboardStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCamera" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCameraFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapContextRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl5" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl6" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl7" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl8" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics5" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics6" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics7" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics8" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperience" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3D" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3DStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics3" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics4" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayer" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerContextRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIcon" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIcon2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapInputEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapItemsControl" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapItemsControlStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayer" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayerFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayerStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3D" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3DFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3DStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygon" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygon2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygonStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolyline" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolylineStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRouteView" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRouteViewFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapScene" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapSceneStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheet" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntriesStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntryStatesStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSource2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperience" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperienceFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanorama" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanoramaStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.CustomMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.HttpMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.LocalMapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangingEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapBillboard>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapBillboard" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCamera>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCamera" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapContextRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControl>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControl" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlDataHelper" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCustomExperience" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCustomExperienceChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElement>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElement" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElement3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElement3D" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayer" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerClickEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerContextRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerEnteredEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerExitedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapIcon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapIcon" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapInputEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapItemsControl>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapItemsControl" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapLayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapLayer" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapModel3D>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapModel3D" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPolygon>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPolygon" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPolyline>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPolyline" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapRightTappedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapRouteView>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapRouteView" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapScene>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapScene" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheet" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntries" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntryStates" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTargetCameraChangedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileDataSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileSource>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileSource" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequest" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestDeferral" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.StreetsideExperience" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.StreetsidePanorama" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapAnimationKind>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapAnimationKind" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCameraChangeReason" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapColorScheme>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapColorScheme" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementCollisionBehavior" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapInteractionMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapLoadingStatus" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapModel3DShadingOption" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPanInteractionMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapProjection>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapProjection" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyle>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyle" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileAnimationState>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileAnimationState" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileLayer>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileLayer" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapVisibleRegionKind" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapWatermarkMode" };
    };
    template <> struct name<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapZoomLevelRange" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        static constexpr guid value{ 0x65DA384A,0x2DB1,0x4BE1,{ 0xB1,0x55,0x3D,0x0C,0x9E,0xCF,0x47,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        static constexpr guid value{ 0xC8477947,0xC955,0x4F22,{ 0x94,0x44,0xA1,0xD8,0xD7,0x44,0xAF,0x11 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        static constexpr guid value{ 0x9D03CB5C,0xFD79,0x4795,{ 0x87,0xBE,0x7E,0x54,0xCA,0x0B,0x37,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        static constexpr guid value{ 0x53B4B107,0x84DC,0x4291,{ 0x89,0xF8,0x6D,0x0B,0xB6,0x12,0xA0,0x55 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        static constexpr guid value{ 0x616257B5,0x9108,0x4F12,{ 0x8B,0xF4,0xBB,0x3C,0x8F,0x62,0x74,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        static constexpr guid value{ 0xC5CFE9FC,0x72AC,0x4839,{ 0x8A,0x0D,0x01,0x1F,0x24,0x69,0x3C,0x79 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        static constexpr guid value{ 0xDAA080DA,0xB7F4,0x422C,{ 0xA6,0x18,0xBB,0xAA,0x7C,0x1D,0x81,0x4C } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        static constexpr guid value{ 0x7BA4C7E5,0x10DC,0x455A,{ 0x9D,0x04,0x1D,0x72,0xFB,0x6D,0x9B,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        static constexpr guid value{ 0x6B0DBED6,0x93F7,0x4682,{ 0x8D,0xE5,0xA4,0x7A,0x1C,0xC7,0xA9,0x45 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        static constexpr guid value{ 0xF2867897,0x40AC,0x4E8A,{ 0xA9,0x27,0x51,0x0F,0x38,0x46,0xA4,0x7E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        static constexpr guid value{ 0x1694259D,0x0AE2,0x4F42,{ 0xA0,0x2E,0x29,0x2C,0xA8,0x35,0xD3,0x9D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        static constexpr guid value{ 0xBE45A4C5,0x8F09,0x4B86,{ 0xAE,0x28,0x78,0x37,0x40,0xEB,0x8B,0x31 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        static constexpr guid value{ 0xFDF839FE,0xE1F7,0x4FB0,{ 0x88,0x87,0x7D,0xA6,0x8C,0x64,0x73,0x33 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        static constexpr guid value{ 0x53A6B623,0xC0F8,0x4D8B,{ 0xAD,0x1E,0xA5,0x95,0x98,0xEA,0x84,0x0B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        static constexpr guid value{ 0xEA3B0F16,0x83AF,0x4ACE,{ 0x8E,0x71,0x10,0xAD,0x9F,0x1E,0x9E,0x7F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        static constexpr guid value{ 0xFDD1B423,0xC961,0x4DF2,{ 0xBB,0x57,0x82,0xEE,0x0F,0x0B,0xB5,0x91 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        static constexpr guid value{ 0x42D0B851,0x5256,0x4747,{ 0x9E,0x6C,0x0D,0x11,0xE9,0x66,0x14,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        static constexpr guid value{ 0xE1FD644D,0x96EC,0x4065,{ 0xB0,0xF0,0x75,0x28,0x1D,0xA3,0x65,0x4D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        static constexpr guid value{ 0x586328F8,0x8CDD,0x40AE,{ 0x93,0x38,0xAF,0x2A,0x7B,0xE8,0x45,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        static constexpr guid value{ 0x068F132A,0x1817,0x466D,{ 0xB7,0xCE,0x41,0x9B,0x3F,0x8E,0x24,0x8B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        static constexpr guid value{ 0xDD9B0FFD,0x7823,0x46A2,{ 0x82,0xC9,0x65,0xDD,0xAC,0x4F,0x36,0x5F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        static constexpr guid value{ 0xB0DA89A2,0x1041,0x4BEA,{ 0xB8,0x8A,0x12,0xAC,0x9A,0x82,0xE0,0xE2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        static constexpr guid value{ 0x0D86E453,0x0C1F,0x4F7E,{ 0xAE,0x66,0x4A,0xD0,0xB4,0x98,0x78,0x57 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        static constexpr guid value{ 0x009E9C46,0x724D,0x53CA,{ 0x94,0x21,0x7A,0x48,0xFC,0x73,0x15,0x23 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        static constexpr guid value{ 0x5E464922,0x4A1A,0x4797,{ 0xBE,0xB7,0x5C,0xF7,0x75,0x4C,0xB8,0x67 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        static constexpr guid value{ 0x5E4081A6,0xEA98,0x4F95,{ 0x8C,0xAF,0x5B,0x42,0x69,0x6F,0xF5,0x04 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        static constexpr guid value{ 0x2BB52CAF,0xF24A,0x46D0,{ 0xB4,0x63,0x65,0xF7,0x19,0x73,0x10,0x57 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        static constexpr guid value{ 0x59AB8AE7,0xF184,0x4AB1,{ 0xB0,0xB0,0x35,0xC8,0xBF,0x06,0x54,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        static constexpr guid value{ 0x8BB0F09C,0x14AB,0x486C,{ 0x9D,0xE5,0x5A,0x5D,0xEF,0x02,0x05,0xA2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        static constexpr guid value{ 0x59CE429E,0x562F,0x4C21,{ 0xA6,0x74,0x0F,0x11,0xDE,0xCF,0x0F,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        static constexpr guid value{ 0x3B70AA8E,0x02EF,0x469C,{ 0xBB,0xAF,0xDC,0x21,0x58,0xD4,0x28,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        static constexpr guid value{ 0x7A6632D6,0xE944,0x4110,{ 0x83,0xCF,0x31,0x4D,0x07,0x22,0xE2,0xE5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        static constexpr guid value{ 0xC2C61795,0x2147,0x4F0A,{ 0x94,0x2A,0x54,0x93,0xA8,0x5D,0xE8,0x07 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        static constexpr guid value{ 0x04852B93,0xB446,0x4D31,{ 0x97,0x52,0x1E,0xC6,0x9A,0x59,0x96,0xAE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        static constexpr guid value{ 0xFE785D97,0x5D13,0x4FA1,{ 0xBF,0x1D,0x84,0x06,0x17,0x68,0xC1,0x83 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        static constexpr guid value{ 0x09626F00,0xB7DD,0x4189,{ 0xA7,0xF7,0x83,0x0C,0x41,0x2D,0xEE,0xA3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        static constexpr guid value{ 0x3CCFDD7F,0x24D1,0x40A2,{ 0x83,0x51,0xB3,0x06,0x3A,0x8C,0x95,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        static constexpr guid value{ 0x55F1AC4D,0x72C2,0x46B2,{ 0xB7,0xAE,0x79,0x02,0x60,0xBE,0x64,0x1B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        static constexpr guid value{ 0xADB7A7B0,0x0605,0x592C,{ 0xBF,0x9D,0xD1,0x0B,0xDC,0x2B,0xE4,0x7B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        static constexpr guid value{ 0x76179969,0xB765,0x4622,{ 0xB0,0x8A,0x30,0x72,0x74,0x5A,0x45,0x41 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        static constexpr guid value{ 0x73911A4E,0xEC4F,0x479E,{ 0x94,0xA1,0x36,0xE0,0x81,0xD0,0xD8,0x97 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        static constexpr guid value{ 0x6A11258D,0x448D,0x44E7,{ 0xBC,0x69,0xD1,0x3D,0x49,0x71,0x54,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        static constexpr guid value{ 0xAEA1CC49,0xA729,0x4EAE,{ 0xA5,0x9A,0x3E,0xC9,0xA1,0x25,0xA0,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        static constexpr guid value{ 0x64592866,0x14A3,0x4E5F,{ 0x88,0x83,0x8E,0x9C,0x50,0x0E,0xEE,0xDE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        static constexpr guid value{ 0xB9E6FB9B,0x8FC1,0x4042,{ 0xAC,0x34,0xA6,0x1B,0x38,0xBB,0x75,0x14 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        static constexpr guid value{ 0x7A403FB5,0xA1B1,0x4E7F,{ 0x92,0x1E,0x3E,0x6B,0x8D,0x8E,0xBE,0xD6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        static constexpr guid value{ 0xD61FC4DF,0xB245,0x47F2,{ 0x9A,0xC2,0x43,0xC0,0x58,0xB1,0xC9,0x03 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        static constexpr guid value{ 0x6619F261,0xFBA6,0x4964,{ 0xA7,0xFF,0xF1,0xAF,0x63,0xAB,0x9C,0xB0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        static constexpr guid value{ 0x13EFBC59,0x45ED,0x48B4,{ 0x93,0xAD,0xE3,0xF7,0x8F,0x8C,0xF2,0x18 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        static constexpr guid value{ 0x827AF8D5,0x3843,0x48E2,{ 0xBD,0x00,0x0F,0x06,0x44,0xFB,0xE6,0xA5 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        static constexpr guid value{ 0x6128011A,0x450F,0x442A,{ 0xB9,0xD9,0xAA,0x81,0x5C,0x71,0x90,0x7A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        static constexpr guid value{ 0x645883B6,0x1FC1,0x4CEB,{ 0x93,0xBD,0xDC,0x2C,0x96,0x00,0x72,0xE9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        static constexpr guid value{ 0x40168A11,0xD080,0x4519,{ 0x99,0xA1,0x31,0x49,0xFB,0x89,0x99,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        static constexpr guid value{ 0x4A30D007,0x0BD6,0x47A5,{ 0x86,0x0B,0x7E,0x7C,0xF5,0xF0,0xC5,0x73 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        static constexpr guid value{ 0xAB85DD4E,0x91D7,0x4B31,{ 0x8F,0x0A,0xD3,0x90,0xC7,0xD3,0xA2,0xEF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        static constexpr guid value{ 0xC1A45AF9,0x60C9,0x4679,{ 0x91,0x19,0x20,0xAB,0xC7,0x5D,0x93,0x1F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        static constexpr guid value{ 0xE8C71CF2,0xBFEF,0x4B49,{ 0x8E,0x99,0x41,0xB5,0xE3,0x78,0x9F,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        static constexpr guid value{ 0x9BF72F30,0x80FE,0x4F30,{ 0xBC,0xC1,0xFA,0x89,0x40,0x50,0xF6,0x76 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        static constexpr guid value{ 0xE11EE92F,0x9742,0x49AA,{ 0xAA,0xD8,0x2E,0x46,0x6B,0xFF,0x37,0x96 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        static constexpr guid value{ 0xA4296F0B,0xDFF8,0x467C,{ 0x93,0x15,0x6F,0x6D,0xB9,0x3E,0xE2,0xBA } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        static constexpr guid value{ 0xDE79689A,0x01EF,0x46F4,{ 0xAC,0x60,0x7C,0x20,0x0B,0x55,0x26,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        static constexpr guid value{ 0x2CA7CF66,0xAF1B,0x4C05,{ 0x8C,0x85,0xF7,0x4A,0xE3,0xD4,0x67,0x7F } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        static constexpr guid value{ 0xDA45D0B3,0x7A0E,0x4758,{ 0x80,0x8B,0x3A,0x63,0x76,0x27,0xEB,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        static constexpr guid value{ 0x757FC032,0x4694,0x4404,{ 0x8C,0x89,0x34,0x8B,0x6B,0x76,0xC5,0xE6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        static constexpr guid value{ 0x92F3C6AD,0x03ED,0x4C39,{ 0xAF,0x20,0x2A,0x07,0xEE,0x1C,0xCE,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        static constexpr guid value{ 0x34005727,0xF509,0x4D28,{ 0x91,0x80,0x91,0x1C,0x03,0x41,0x1D,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        static constexpr guid value{ 0xD2096872,0x23D9,0x4A2B,{ 0x8B,0xE0,0x69,0xF3,0xA8,0x54,0x82,0xAB } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        static constexpr guid value{ 0x611254B9,0xD8AA,0x4BBD,{ 0xA3,0x16,0xBA,0xDF,0x06,0x91,0x1D,0x63 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        static constexpr guid value{ 0xDCBC9E56,0x1190,0x4B5D,{ 0x9E,0x56,0xE5,0xB6,0x72,0x4A,0xA3,0x28 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        static constexpr guid value{ 0xFF4C306A,0xCF76,0x46AB,{ 0xA1,0x2F,0xB6,0x03,0xB9,0x86,0xC6,0x96 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        static constexpr guid value{ 0x9FC503A0,0xA8A2,0x4394,{ 0x92,0xE9,0x22,0x47,0x76,0x4F,0x2F,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        static constexpr guid value{ 0x94C2C4D3,0xB335,0x42C5,{ 0xB6,0x60,0xE6,0xA0,0x7E,0xC3,0xBD,0xDC } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        static constexpr guid value{ 0x33A859C7,0x789B,0x425C,{ 0x8A,0x0A,0x32,0x38,0x58,0x96,0xCB,0x4A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        static constexpr guid value{ 0x6D0FF9C1,0xA14D,0x4F97,{ 0x8F,0x57,0x46,0x71,0x5B,0x57,0x68,0x3A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        static constexpr guid value{ 0xE02A2207,0xDEE3,0x47C8,{ 0x98,0x25,0xBD,0x02,0x9C,0x57,0x52,0xF7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        static constexpr guid value{ 0x9CA4A26B,0x5DB9,0x4F0C,{ 0xBD,0xD5,0xB1,0xBF,0xFD,0xCC,0xE9,0x46 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        static constexpr guid value{ 0xF8C541A1,0xCA27,0x4968,{ 0xA2,0xBF,0x9C,0x20,0xF0,0x6A,0x04,0x68 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        static constexpr guid value{ 0xDF7F0BCC,0x580A,0x498B,{ 0x93,0x9B,0x01,0x19,0xA9,0xDA,0xDB,0x9E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        static constexpr guid value{ 0x4834A480,0x8E56,0x4B0F,{ 0x87,0x2D,0x7E,0xAD,0x10,0x31,0x87,0xCD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        static constexpr guid value{ 0xABDA2285,0x4926,0x4C3A,{ 0xA5,0xF9,0x19,0xDF,0x7F,0x69,0xDB,0x3D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        static constexpr guid value{ 0x96C8A11E,0x636B,0x4018,{ 0x9C,0x2E,0xAC,0xC9,0x12,0x2A,0x01,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        static constexpr guid value{ 0x37F573BE,0x097B,0x424C,{ 0x87,0xCC,0x2E,0xE0,0x42,0xFD,0xA6,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        static constexpr guid value{ 0xFBAD24A2,0x24DF,0x4A86,{ 0x8F,0xFA,0x0F,0x8F,0x4D,0x9E,0xC1,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        static constexpr guid value{ 0x61FDE44B,0x1DDF,0x4303,{ 0xB8,0x09,0xEC,0x87,0xF5,0x8A,0xD0,0x65 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        static constexpr guid value{ 0x20943171,0x6FE8,0x40A6,{ 0xAD,0x0E,0x29,0x73,0x79,0xB5,0x75,0xA7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        static constexpr guid value{ 0x740EAEC5,0xBACC,0x41E1,{ 0xA6,0x7E,0xDD,0x65,0x13,0x83,0x20,0x49 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        static constexpr guid value{ 0xF083ADDF,0x0066,0x4628,{ 0x82,0xFE,0xEA,0x78,0xC2,0x3C,0xEC,0x1E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        static constexpr guid value{ 0x8BBA10A9,0x50E7,0x482C,{ 0x97,0x89,0xC6,0x88,0xB1,0x78,0xAC,0x24 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        static constexpr guid value{ 0x03E4AD6C,0x86EC,0x44D9,{ 0x95,0x97,0xFB,0x75,0xB7,0xDE,0xBA,0x0A } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        static constexpr guid value{ 0xAE54B2BF,0x8991,0x42ED,{ 0x8D,0x58,0x20,0x47,0x3D,0xEE,0xDE,0x1D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        static constexpr guid value{ 0xC9636345,0xEF1A,0x41A4,{ 0xA7,0x57,0xBD,0x4F,0x43,0xE1,0xE4,0xD1 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        static constexpr guid value{ 0x23AC5532,0x866D,0x4BFA,{ 0xB4,0x81,0x39,0xBE,0xA1,0xDE,0x35,0x06 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        static constexpr guid value{ 0xABBD00AD,0x0A1C,0x4335,{ 0x82,0xF4,0x61,0xD9,0x36,0xAA,0x19,0x7D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        static constexpr guid value{ 0xDBF00472,0xE953,0x4FA8,{ 0x97,0xD0,0xEA,0x86,0x35,0x90,0x57,0xCF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        static constexpr guid value{ 0x97C0B332,0xF2B6,0x460B,{ 0x8D,0x91,0xAC,0x02,0x0A,0x23,0x83,0xDD } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        static constexpr guid value{ 0x46733FBC,0xD89D,0x472B,{ 0xB5,0xF6,0xD7,0x06,0x6B,0x05,0x84,0xF4 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        static constexpr guid value{ 0xFE370542,0xA4AC,0x4EFA,{ 0x96,0x65,0x04,0x90,0xB0,0xCA,0xFD,0xD2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        static constexpr guid value{ 0x337F691D,0x9B02,0x4AA2,{ 0x8B,0x1E,0xCC,0x4D,0x91,0x71,0x9B,0xF3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        static constexpr guid value{ 0x0261D114,0x246A,0x5296,{ 0xBC,0x85,0x59,0x0F,0x53,0xAA,0x39,0xC8 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        static constexpr guid value{ 0xC03D9F5E,0xBE1F,0x4C69,{ 0x99,0x69,0x79,0x46,0x7A,0x51,0x3C,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        static constexpr guid value{ 0xA3920FBD,0xE446,0x4648,{ 0xA7,0x4D,0xFD,0x2C,0x5D,0x55,0x7C,0x06 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        static constexpr guid value{ 0x88A76E4E,0x2FDF,0x4567,{ 0x92,0x55,0x11,0x00,0x51,0x9C,0x8D,0x62 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        static constexpr guid value{ 0x8E65EBBD,0x4095,0x5C15,{ 0x99,0xF1,0x12,0x60,0xB4,0xE8,0xB0,0xA9 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        static constexpr guid value{ 0xCD7F811F,0x77FA,0x482B,{ 0x9D,0x34,0x71,0xD3,0x1D,0x46,0x5C,0x48 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        static constexpr guid value{ 0x93FCC93C,0x7035,0x4603,{ 0x99,0xB1,0xE6,0x59,0x92,0x1B,0x60,0x93 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        static constexpr guid value{ 0x75CDD47E,0x669C,0x50FD,{ 0xAD,0x85,0x5E,0xA5,0x17,0x4C,0xF5,0x9B } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        static constexpr guid value{ 0x17402335,0x3127,0x45B8,{ 0x87,0xA7,0x99,0xF8,0x7D,0x4E,0x27,0x45 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        static constexpr guid value{ 0xC117ADE0,0xBF3E,0x4C51,{ 0x8F,0xAA,0x4B,0x59,0x3C,0xF6,0x8E,0xB2 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        static constexpr guid value{ 0xD2147B43,0x1BBF,0x4B98,{ 0x8D,0xD3,0xB7,0x83,0x4E,0x40,0x7E,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        static constexpr guid value{ 0x2302185D,0x33B5,0x5A55,{ 0x92,0xF5,0x74,0xA8,0x6A,0x22,0xEF,0xA6 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        static constexpr guid value{ 0xA558AEC9,0xE30C,0x46C8,{ 0x81,0x16,0x48,0x46,0x91,0x67,0x55,0x58 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        static constexpr guid value{ 0x7A5BCF3C,0x649E,0x4342,{ 0x99,0x95,0x68,0xA6,0xCF,0x59,0x61,0xA7 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        static constexpr guid value{ 0x6FE00FD8,0xAD60,0x4664,{ 0xB5,0x39,0xB1,0x06,0x9F,0x16,0xC5,0xAF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        static constexpr guid value{ 0xD3B47F69,0x54B3,0x4EC5,{ 0xB2,0xA0,0x4F,0x82,0x04,0x57,0x65,0x07 } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>
    {
        using type = Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>
    {
        using type = Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapBillboard>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapBillboard;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCamera>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapCamera;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControl>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControl;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperience;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElement;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement3D>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElement3D;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayer;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapIcon>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapIcon;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapItemsControl>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapItemsControl;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapLayer>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapLayer;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapModel3D>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapModel3D;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolygon>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapPolygon;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolyline>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapPolyline;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRouteView>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapRouteView;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapScene>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapScene;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapStyleSheet;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileDataSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileSource>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileSource;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IStreetsideExperience;
    };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>
    {
        using type = Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BitmapRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BitmapRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriFormatString(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriFormatString(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalRequestHeaders(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowCaching(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCaching(bool) noexcept = 0;
            virtual int32_t __stdcall add_UriRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UriRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithUriFormatString(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriFormatString(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriFormatString(void*) noexcept = 0;
            virtual int32_t __stdcall add_UriRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UriRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithUriFormatString(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall get_CollisionBehaviorDesired(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CollisionBehaviorDesired(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceCamera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceFromCamera(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CollisionBehaviorDesiredProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Roll(double*) noexcept = 0;
            virtual int32_t __stdcall put_Roll(double) noexcept = 0;
            virtual int32_t __stdcall get_FieldOfView(double*) noexcept = 0;
            virtual int32_t __stdcall put_FieldOfView(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationAndHeading(void*, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(void*, double, double, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(void**) noexcept = 0;
            virtual int32_t __stdcall put_Center(void*) noexcept = 0;
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorScheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorScheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredPitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_LandmarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LandmarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_LoadingStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MapServiceToken(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapServiceToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_PedestrianFeaturesVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PedestrianFeaturesVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall get_Style(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Style(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TrafficFlowVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TrafficFlowVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransformOrigin(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_TransformOrigin(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_WatermarkMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WatermarkMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomLevel(double) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
            virtual int32_t __stdcall get_Routes(void**) noexcept = 0;
            virtual int32_t __stdcall get_TileSources(void**) noexcept = 0;
            virtual int32_t __stdcall add_CenterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CenterChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HeadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HeadingChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LoadingStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LoadingStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapDoubleTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapDoubleTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapHolding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapHolding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PitchChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PitchChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransformOriginChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransformOriginChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ZoomLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ZoomLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindMapElementsAtOffset(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocationFromOffset(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetOffsetFromLocation(void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall IsLocationInView(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetViewBoundsAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterAndZoomAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterZoomHeadingAndPitchAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BusinessLandmarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransitFeaturesVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_PanInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PanInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RotateInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RotateInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TiltInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Is3DSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStreetsideSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Scene(void**) noexcept = 0;
            virtual int32_t __stdcall put_Scene(void*) noexcept = 0;
            virtual int32_t __stdcall get_ActualCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomExperience(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomExperience(void*) noexcept = 0;
            virtual int32_t __stdcall add_MapElementClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActualCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualCameraChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActualCameraChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualCameraChanging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TargetCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetCameraChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CustomExperienceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CustomExperienceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartContinuousRotate(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousRotate() noexcept = 0;
            virtual int32_t __stdcall StartContinuousTilt(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousTilt() noexcept = 0;
            virtual int32_t __stdcall StartContinuousZoom(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousZoom() noexcept = 0;
            virtual int32_t __stdcall TryRotateAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryRotateToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryTiltAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryTiltToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomInAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomOutAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetSceneAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetSceneWithAnimationAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MapRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapRightTapped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BusinessLandmarksEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransitFeaturesEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall GetVisibleRegion(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapProjection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapProjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StyleSheet(void**) noexcept = 0;
            virtual int32_t __stdcall put_StyleSheet(void*) noexcept = 0;
            virtual int32_t __stdcall get_ViewPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ViewPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall add_MapContextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapContextRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindMapElementsAtOffsetWithRadius(Windows::Foundation::Point, double, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StartContinuousPan(double, double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousPan() noexcept = 0;
            virtual int32_t __stdcall TryPanAsync(double, double, void**) noexcept = 0;
            virtual int32_t __stdcall TryPanToAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Layers(void**) noexcept = 0;
            virtual int32_t __stdcall put_Layers(void*) noexcept = 0;
            virtual int32_t __stdcall TryGetLocationFromOffset(Windows::Foundation::Point, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point, int32_t, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall put_Region(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanTiltDown(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanTiltUp(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomIn(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomOut(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BusinessLandmarkClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeatureClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeatureClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BusinessLandmarkRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkRightTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeatureRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeatureRightTapped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BusinessLandmarkPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeaturePointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeaturePointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BusinessLandmarkPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeaturePointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeaturePointerExited(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMapControl(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorSchemeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeadingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LandmarksVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LoadingStatusProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapServiceTokenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PedestrianFeaturesVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrafficFlowVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransformOriginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_WatermarkModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElementsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoutesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TileSourcesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetLocation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetNormalizedAnchorPoint(void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall SetNormalizedAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PanInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotateInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TiltInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_Is3DSupportedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStreetsideSupportedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SceneProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapProjectionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleSheetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewPaddingProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LayersProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RegionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanTiltDownProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanTiltUpProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomInProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomOutProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapTabIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapStyleSheetEntry(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapStyleSheetEntry(void*) noexcept = 0;
            virtual int32_t __stdcall get_MapStyleSheetEntryState(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapStyleSheetEntryState(void*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall put_Model(void*) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Roll(double*) noexcept = 0;
            virtual int32_t __stdcall put_Roll(double) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeadingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RollProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapStyleSheetEntryProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapStyleSheetEntryStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TagProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapElements(void*) noexcept = 0;
            virtual int32_t __stdcall add_MapElementClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapContextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapContextRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapElementsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollisionBehaviorDesired(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CollisionBehaviorDesired(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollisionBehaviorDesiredProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemsSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemsSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemTemplate(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemsSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapTabIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrom3MFAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrom3MFWithShadingOptionAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashed(bool) noexcept = 0;
            virtual int32_t __stdcall get_FillColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FillColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Paths(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashed(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RouteColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_RouteColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_OutlineColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Route(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithMapRoute(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetCamera(void**) noexcept = 0;
            virtual int32_t __stdcall add_TargetCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetCameraChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBoundingBox(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBoundingBoxWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromCamera(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationAndRadius(void*, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationAndRadiusWithHeadingAndPitch(void*, double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocations(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationsWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Area(void**) noexcept = 0;
            virtual int32_t __stdcall get_Airport(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cemetery(void**) noexcept = 0;
            virtual int32_t __stdcall get_Continent(void**) noexcept = 0;
            virtual int32_t __stdcall get_Education(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndigenousPeoplesReserve(void**) noexcept = 0;
            virtual int32_t __stdcall get_Island(void**) noexcept = 0;
            virtual int32_t __stdcall get_Medical(void**) noexcept = 0;
            virtual int32_t __stdcall get_Military(void**) noexcept = 0;
            virtual int32_t __stdcall get_Nautical(void**) noexcept = 0;
            virtual int32_t __stdcall get_Neighborhood(void**) noexcept = 0;
            virtual int32_t __stdcall get_Runway(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sand(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShoppingCenter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Stadium(void**) noexcept = 0;
            virtual int32_t __stdcall get_Vegetation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Forest(void**) noexcept = 0;
            virtual int32_t __stdcall get_GolfCourse(void**) noexcept = 0;
            virtual int32_t __stdcall get_Park(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlayingField(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reserve(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_NaturalPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_Peak(void**) noexcept = 0;
            virtual int32_t __stdcall get_VolcanicPeak(void**) noexcept = 0;
            virtual int32_t __stdcall get_WaterPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointOfInterest(void**) noexcept = 0;
            virtual int32_t __stdcall get_Business(void**) noexcept = 0;
            virtual int32_t __stdcall get_FoodPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_PopulatedPlace(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capital(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdminDistrictCapital(void**) noexcept = 0;
            virtual int32_t __stdcall get_CountryRegionCapital(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoadShield(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoadExit(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transit(void**) noexcept = 0;
            virtual int32_t __stdcall get_Political(void**) noexcept = 0;
            virtual int32_t __stdcall get_CountryRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdminDistrict(void**) noexcept = 0;
            virtual int32_t __stdcall get_District(void**) noexcept = 0;
            virtual int32_t __stdcall get_Structure(void**) noexcept = 0;
            virtual int32_t __stdcall get_Building(void**) noexcept = 0;
            virtual int32_t __stdcall get_EducationBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_MedicalBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transportation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Road(void**) noexcept = 0;
            virtual int32_t __stdcall get_ControlledAccessHighway(void**) noexcept = 0;
            virtual int32_t __stdcall get_HighSpeedRamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_Highway(void**) noexcept = 0;
            virtual int32_t __stdcall get_MajorRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_ArterialRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_Street(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ramp(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnpavedStreet(void**) noexcept = 0;
            virtual int32_t __stdcall get_TollRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_Railway(void**) noexcept = 0;
            virtual int32_t __stdcall get_Trail(void**) noexcept = 0;
            virtual int32_t __stdcall get_WaterRoute(void**) noexcept = 0;
            virtual int32_t __stdcall get_Water(void**) noexcept = 0;
            virtual int32_t __stdcall get_River(void**) noexcept = 0;
            virtual int32_t __stdcall get_RouteLine(void**) noexcept = 0;
            virtual int32_t __stdcall get_WalkingRoute(void**) noexcept = 0;
            virtual int32_t __stdcall get_DrivingRoute(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hover(void**) noexcept = 0;
            virtual int32_t __stdcall get_Selected(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Aerial(void**) noexcept = 0;
            virtual int32_t __stdcall AerialWithOverlay(void**) noexcept = 0;
            virtual int32_t __stdcall RoadLight(void**) noexcept = 0;
            virtual int32_t __stdcall RoadDark(void**) noexcept = 0;
            virtual int32_t __stdcall RoadHighContrastLight(void**) noexcept = 0;
            virtual int32_t __stdcall RoadHighContrastDark(void**) noexcept = 0;
            virtual int32_t __stdcall Combine(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ParseFromJson(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParseFromJson(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelData(void**) noexcept = 0;
            virtual int32_t __stdcall put_PixelData(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Y(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DataSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_Layer(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Layer(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(void**) noexcept = 0;
            virtual int32_t __stdcall put_Bounds(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowOverstretch(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowOverstretch(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFadingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFadingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsTransparencyEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTransparencyEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRetryEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRetryEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TilePixelSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TilePixelSize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnimationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoPlay(bool) noexcept = 0;
            virtual int32_t __stdcall get_FrameCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameCount(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FrameDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Play() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSource(void*, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceAndZoomRange(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceZoomRangeAndBounds(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, int32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LayerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelRangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_BoundsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowOverstretchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFadingEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTransparencyEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRetryEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TilePixelSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnimationStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlayProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameCountProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameDurationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Y(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AddressTextVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AddressTextVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_CursorVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CursorVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_OverviewMapVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_OverviewMapVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_StreetLabelsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StreetLabelsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExitButtonVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExitButtonVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZoomButtonsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomButtonsVisible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithPanorama(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(void*, double, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindNearbyWithLocationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindNearbyWithLocationAndRadiusAsync(void*, double, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource
    {
        auto BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const;
        using BitmapRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>::remove_BitmapRequested>;
        BitmapRequested_revoker BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const;
        auto BitmapRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource
    {
        [[nodiscard]] auto UriFormatString() const;
        auto UriFormatString(param::hstring const& value) const;
        [[nodiscard]] auto AdditionalRequestHeaders() const;
        [[nodiscard]] auto AllowCaching() const;
        auto AllowCaching(bool value) const;
        auto UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        using UriRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>::remove_UriRequested>;
        UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        auto UriRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource
    {
        [[nodiscard]] auto UriFormatString() const;
        auto UriFormatString(param::hstring const& value) const;
        auto UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        using UriRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>::remove_UriRequested>;
        UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        auto UriRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs
    {
        [[nodiscard]] auto Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2
    {
        [[nodiscard]] auto ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs
    {
        [[nodiscard]] auto Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2
    {
        [[nodiscard]] auto ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard
    {
        [[nodiscard]] auto Location() const;
        auto Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto NormalizedAnchorPoint() const;
        auto NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto CollisionBehaviorDesired() const;
        auto CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
        [[nodiscard]] auto ReferenceCamera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory
    {
        auto CreateInstanceFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics
    {
        [[nodiscard]] auto LocationProperty() const;
        [[nodiscard]] auto NormalizedAnchorPointProperty() const;
        [[nodiscard]] auto CollisionBehaviorDesiredProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCamera
    {
        [[nodiscard]] auto Location() const;
        auto Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto Heading() const;
        auto Heading(double value) const;
        [[nodiscard]] auto Pitch() const;
        auto Pitch(double value) const;
        [[nodiscard]] auto Roll() const;
        auto Roll(double value) const;
        [[nodiscard]] auto FieldOfView() const;
        auto FieldOfView(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory
    {
        auto CreateInstanceWithLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
        auto CreateInstanceWithLocationAndHeading(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) const;
        auto CreateInstanceWithLocationHeadingAndPitch(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
        auto CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl
    {
        [[nodiscard]] auto Center() const;
        auto Center(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto Children() const;
        [[nodiscard]] auto ColorScheme() const;
        auto ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme const& value) const;
        [[nodiscard]] auto DesiredPitch() const;
        auto DesiredPitch(double value) const;
        [[nodiscard]] auto Heading() const;
        auto Heading(double value) const;
        [[nodiscard]] auto LandmarksVisible() const;
        auto LandmarksVisible(bool value) const;
        [[nodiscard]] auto LoadingStatus() const;
        [[nodiscard]] auto MapServiceToken() const;
        auto MapServiceToken(param::hstring const& value) const;
        [[nodiscard]] auto MaxZoomLevel() const;
        [[nodiscard]] auto MinZoomLevel() const;
        [[nodiscard]] auto PedestrianFeaturesVisible() const;
        auto PedestrianFeaturesVisible(bool value) const;
        [[nodiscard]] auto Pitch() const;
        [[nodiscard]] auto Style() const;
        auto Style(Windows::UI::Xaml::Controls::Maps::MapStyle const& value) const;
        [[nodiscard]] auto TrafficFlowVisible() const;
        auto TrafficFlowVisible(bool value) const;
        [[nodiscard]] auto TransformOrigin() const;
        auto TransformOrigin(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto WatermarkMode() const;
        auto WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const& value) const;
        [[nodiscard]] auto ZoomLevel() const;
        auto ZoomLevel(double value) const;
        [[nodiscard]] auto MapElements() const;
        [[nodiscard]] auto Routes() const;
        [[nodiscard]] auto TileSources() const;
        auto CenterChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using CenterChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_CenterChanged>;
        CenterChanged_revoker CenterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto CenterChanged(winrt::event_token const& token) const noexcept;
        auto HeadingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using HeadingChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_HeadingChanged>;
        HeadingChanged_revoker HeadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto HeadingChanged(winrt::event_token const& token) const noexcept;
        auto LoadingStatusChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using LoadingStatusChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_LoadingStatusChanged>;
        LoadingStatusChanged_revoker LoadingStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto LoadingStatusChanged(winrt::event_token const& token) const noexcept;
        auto MapDoubleTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapDoubleTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapDoubleTapped>;
        MapDoubleTapped_revoker MapDoubleTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        auto MapDoubleTapped(winrt::event_token const& token) const noexcept;
        auto MapHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapHolding_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapHolding>;
        MapHolding_revoker MapHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        auto MapHolding(winrt::event_token const& token) const noexcept;
        auto MapTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapTapped>;
        MapTapped_revoker MapTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        auto MapTapped(winrt::event_token const& token) const noexcept;
        auto PitchChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using PitchChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_PitchChanged>;
        PitchChanged_revoker PitchChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto PitchChanged(winrt::event_token const& token) const noexcept;
        auto TransformOriginChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using TransformOriginChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_TransformOriginChanged>;
        TransformOriginChanged_revoker TransformOriginChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto TransformOriginChanged(winrt::event_token const& token) const noexcept;
        auto ZoomLevelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using ZoomLevelChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_ZoomLevelChanged>;
        ZoomLevelChanged_revoker ZoomLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        auto ZoomLevelChanged(winrt::event_token const& token) const noexcept;
        auto FindMapElementsAtOffset(Windows::Foundation::Point const& offset) const;
        auto GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
        auto GetOffsetFromLocation(Windows::Devices::Geolocation::Geopoint const& location, Windows::Foundation::Point& offset) const;
        auto IsLocationInView(Windows::Devices::Geolocation::Geopoint const& location, bool& isInView) const;
        auto TrySetViewBoundsAsync(Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> const& margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
        auto TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center) const;
        auto TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel) const;
        auto TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch) const;
        auto TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl2
    {
        [[nodiscard]] auto BusinessLandmarksVisible() const;
        auto BusinessLandmarksVisible(bool value) const;
        [[nodiscard]] auto TransitFeaturesVisible() const;
        auto TransitFeaturesVisible(bool value) const;
        [[nodiscard]] auto PanInteractionMode() const;
        auto PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const& value) const;
        [[nodiscard]] auto RotateInteractionMode() const;
        auto RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] auto TiltInteractionMode() const;
        auto TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] auto ZoomInteractionMode() const;
        auto ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] auto Is3DSupported() const;
        [[nodiscard]] auto IsStreetsideSupported() const;
        [[nodiscard]] auto Scene() const;
        auto Scene(Windows::UI::Xaml::Controls::Maps::MapScene const& value) const;
        [[nodiscard]] auto ActualCamera() const;
        [[nodiscard]] auto TargetCamera() const;
        [[nodiscard]] auto CustomExperience() const;
        auto CustomExperience(Windows::UI::Xaml::Controls::Maps::MapCustomExperience const& value) const;
        auto MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const;
        using MapElementClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementClick>;
        MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const;
        auto MapElementClick(winrt::event_token const& token) const noexcept;
        auto MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const;
        using MapElementPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerEntered>;
        MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const;
        auto MapElementPointerEntered(winrt::event_token const& token) const noexcept;
        auto MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const;
        using MapElementPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerExited>;
        MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const;
        auto MapElementPointerExited(winrt::event_token const& token) const noexcept;
        auto ActualCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const;
        using ActualCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanged>;
        ActualCameraChanged_revoker ActualCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const;
        auto ActualCameraChanged(winrt::event_token const& token) const noexcept;
        auto ActualCameraChanging(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const;
        using ActualCameraChanging_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanging>;
        ActualCameraChanging_revoker ActualCameraChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const;
        auto ActualCameraChanging(winrt::event_token const& token) const noexcept;
        auto TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        using TargetCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_TargetCameraChanged>;
        TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        auto TargetCameraChanged(winrt::event_token const& token) const noexcept;
        auto CustomExperienceChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const;
        using CustomExperienceChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_CustomExperienceChanged>;
        CustomExperienceChanged_revoker CustomExperienceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const;
        auto CustomExperienceChanged(winrt::event_token const& token) const noexcept;
        auto StartContinuousRotate(double rateInDegreesPerSecond) const;
        auto StopContinuousRotate() const;
        auto StartContinuousTilt(double rateInDegreesPerSecond) const;
        auto StopContinuousTilt() const;
        auto StartContinuousZoom(double rateOfChangePerSecond) const;
        auto StopContinuousZoom() const;
        auto TryRotateAsync(double degrees) const;
        auto TryRotateToAsync(double angleInDegrees) const;
        auto TryTiltAsync(double degrees) const;
        auto TryTiltToAsync(double angleInDegrees) const;
        auto TryZoomInAsync() const;
        auto TryZoomOutAsync() const;
        auto TryZoomToAsync(double zoomLevel) const;
        auto TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene) const;
        auto TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animationKind) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl3
    {
        auto MapRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const;
        using MapRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl3, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl3>::remove_MapRightTapped>;
        MapRightTapped_revoker MapRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const;
        auto MapRightTapped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl4
    {
        [[nodiscard]] auto BusinessLandmarksEnabled() const;
        auto BusinessLandmarksEnabled(bool value) const;
        [[nodiscard]] auto TransitFeaturesEnabled() const;
        auto TransitFeaturesEnabled(bool value) const;
        auto GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const& region) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl5
    {
        [[nodiscard]] auto MapProjection() const;
        auto MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection const& value) const;
        [[nodiscard]] auto StyleSheet() const;
        auto StyleSheet(Windows::UI::Xaml::Controls::Maps::MapStyleSheet const& value) const;
        [[nodiscard]] auto ViewPadding() const;
        auto ViewPadding(Windows::UI::Xaml::Thickness const& value) const;
        auto MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const;
        using MapContextRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl5, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl5>::remove_MapContextRequested>;
        MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const;
        auto MapContextRequested(winrt::event_token const& token) const noexcept;
        auto FindMapElementsAtOffset(Windows::Foundation::Point const& offset, double radius) const;
        auto GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
        auto StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) const;
        auto StopContinuousPan() const;
        auto TryPanAsync(double horizontalPixels, double verticalPixels) const;
        auto TryPanToAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl6
    {
        [[nodiscard]] auto Layers() const;
        auto Layers(param::vector<Windows::UI::Xaml::Controls::Maps::MapLayer> const& value) const;
        auto TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
        auto TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl7
    {
        [[nodiscard]] auto Region() const;
        auto Region(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl8
    {
        [[nodiscard]] auto CanTiltDown() const;
        [[nodiscard]] auto CanTiltUp() const;
        [[nodiscard]] auto CanZoomIn() const;
        [[nodiscard]] auto CanZoomOut() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs
    {
        [[nodiscard]] auto LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs
    {
        [[nodiscard]] auto LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs
    {
        [[nodiscard]] auto LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs
    {
        [[nodiscard]] auto LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper
    {
        auto BusinessLandmarkClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const;
        using BusinessLandmarkClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkClick>;
        BusinessLandmarkClick_revoker BusinessLandmarkClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const;
        auto BusinessLandmarkClick(winrt::event_token const& token) const noexcept;
        auto TransitFeatureClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const;
        using TransitFeatureClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureClick>;
        TransitFeatureClick_revoker TransitFeatureClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const;
        auto TransitFeatureClick(winrt::event_token const& token) const noexcept;
        auto BusinessLandmarkRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const;
        using BusinessLandmarkRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkRightTapped>;
        BusinessLandmarkRightTapped_revoker BusinessLandmarkRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const;
        auto BusinessLandmarkRightTapped(winrt::event_token const& token) const noexcept;
        auto TransitFeatureRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const;
        using TransitFeatureRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureRightTapped>;
        TransitFeatureRightTapped_revoker TransitFeatureRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const;
        auto TransitFeatureRightTapped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2
    {
        auto BusinessLandmarkPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const;
        using BusinessLandmarkPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerEntered>;
        BusinessLandmarkPointerEntered_revoker BusinessLandmarkPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const;
        auto BusinessLandmarkPointerEntered(winrt::event_token const& token) const noexcept;
        auto TransitFeaturePointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const;
        using TransitFeaturePointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerEntered>;
        TransitFeaturePointerEntered_revoker TransitFeaturePointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const;
        auto TransitFeaturePointerEntered(winrt::event_token const& token) const noexcept;
        auto BusinessLandmarkPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const;
        using BusinessLandmarkPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerExited>;
        BusinessLandmarkPointerExited_revoker BusinessLandmarkPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const;
        auto BusinessLandmarkPointerExited(winrt::event_token const& token) const noexcept;
        auto TransitFeaturePointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const;
        using TransitFeaturePointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerExited>;
        TransitFeaturePointerExited_revoker TransitFeaturePointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const;
        auto TransitFeaturePointerExited(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory
    {
        auto CreateInstance(Windows::UI::Xaml::Controls::Maps::MapControl const& map) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics
    {
        auto CreateMapControl(bool rasterRenderMode) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics
    {
        [[nodiscard]] auto CenterProperty() const;
        [[nodiscard]] auto ChildrenProperty() const;
        [[nodiscard]] auto ColorSchemeProperty() const;
        [[nodiscard]] auto DesiredPitchProperty() const;
        [[nodiscard]] auto HeadingProperty() const;
        [[nodiscard]] auto LandmarksVisibleProperty() const;
        [[nodiscard]] auto LoadingStatusProperty() const;
        [[nodiscard]] auto MapServiceTokenProperty() const;
        [[nodiscard]] auto PedestrianFeaturesVisibleProperty() const;
        [[nodiscard]] auto PitchProperty() const;
        [[nodiscard]] auto StyleProperty() const;
        [[nodiscard]] auto TrafficFlowVisibleProperty() const;
        [[nodiscard]] auto TransformOriginProperty() const;
        [[nodiscard]] auto WatermarkModeProperty() const;
        [[nodiscard]] auto ZoomLevelProperty() const;
        [[nodiscard]] auto MapElementsProperty() const;
        [[nodiscard]] auto RoutesProperty() const;
        [[nodiscard]] auto TileSourcesProperty() const;
        [[nodiscard]] auto LocationProperty() const;
        auto GetLocation(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto NormalizedAnchorPointProperty() const;
        auto GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element) const;
        auto SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2
    {
        [[nodiscard]] auto BusinessLandmarksVisibleProperty() const;
        [[nodiscard]] auto TransitFeaturesVisibleProperty() const;
        [[nodiscard]] auto PanInteractionModeProperty() const;
        [[nodiscard]] auto RotateInteractionModeProperty() const;
        [[nodiscard]] auto TiltInteractionModeProperty() const;
        [[nodiscard]] auto ZoomInteractionModeProperty() const;
        [[nodiscard]] auto Is3DSupportedProperty() const;
        [[nodiscard]] auto IsStreetsideSupportedProperty() const;
        [[nodiscard]] auto SceneProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4
    {
        [[nodiscard]] auto BusinessLandmarksEnabledProperty() const;
        [[nodiscard]] auto TransitFeaturesEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5
    {
        [[nodiscard]] auto MapProjectionProperty() const;
        [[nodiscard]] auto StyleSheetProperty() const;
        [[nodiscard]] auto ViewPaddingProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6
    {
        [[nodiscard]] auto LayersProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7
    {
        [[nodiscard]] auto RegionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8
    {
        [[nodiscard]] auto CanTiltDownProperty() const;
        [[nodiscard]] auto CanTiltUpProperty() const;
        [[nodiscard]] auto CanZoomInProperty() const;
        [[nodiscard]] auto CanZoomOutProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement
    {
        [[nodiscard]] auto ZIndex() const;
        auto ZIndex(int32_t value) const;
        [[nodiscard]] auto Visible() const;
        auto Visible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement2
    {
        [[nodiscard]] auto MapTabIndex() const;
        auto MapTabIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3
    {
        [[nodiscard]] auto MapStyleSheetEntry() const;
        auto MapStyleSheetEntry(param::hstring const& value) const;
        [[nodiscard]] auto MapStyleSheetEntryState() const;
        auto MapStyleSheetEntryState(param::hstring const& value) const;
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D
    {
        [[nodiscard]] auto Location() const;
        auto Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto Model() const;
        auto Model(Windows::UI::Xaml::Controls::Maps::MapModel3D const& value) const;
        [[nodiscard]] auto Heading() const;
        auto Heading(double value) const;
        [[nodiscard]] auto Pitch() const;
        auto Pitch(double value) const;
        [[nodiscard]] auto Roll() const;
        auto Roll(double value) const;
        [[nodiscard]] auto Scale() const;
        auto Scale(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics
    {
        [[nodiscard]] auto LocationProperty() const;
        [[nodiscard]] auto HeadingProperty() const;
        [[nodiscard]] auto PitchProperty() const;
        [[nodiscard]] auto RollProperty() const;
        [[nodiscard]] auto ScaleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement4
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics
    {
        [[nodiscard]] auto ZIndexProperty() const;
        [[nodiscard]] auto VisibleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2
    {
        [[nodiscard]] auto MapTabIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3
    {
        [[nodiscard]] auto MapStyleSheetEntryProperty() const;
        [[nodiscard]] auto MapStyleSheetEntryStateProperty() const;
        [[nodiscard]] auto TagProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4
    {
        [[nodiscard]] auto IsEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer
    {
        [[nodiscard]] auto MapElements() const;
        auto MapElements(param::vector<Windows::UI::Xaml::Controls::Maps::MapElement> const& value) const;
        auto MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const;
        using MapElementClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementClick>;
        MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const;
        auto MapElementClick(winrt::event_token const& token) const noexcept;
        auto MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const;
        using MapElementPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementPointerEntered>;
        MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const;
        auto MapElementPointerEntered(winrt::event_token const& token) const noexcept;
        auto MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const;
        using MapElementPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementPointerExited>;
        MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const;
        auto MapElementPointerExited(winrt::event_token const& token) const noexcept;
        auto MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const;
        using MapContextRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapContextRequested>;
        MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const;
        auto MapContextRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
        [[nodiscard]] auto MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics
    {
        [[nodiscard]] auto MapElementsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon
    {
        [[nodiscard]] auto Location() const;
        auto Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto NormalizedAnchorPoint() const;
        auto NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2
    {
        [[nodiscard]] auto CollisionBehaviorDesired() const;
        auto CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics
    {
        [[nodiscard]] auto LocationProperty() const;
        [[nodiscard]] auto TitleProperty() const;
        [[nodiscard]] auto NormalizedAnchorPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2
    {
        [[nodiscard]] auto CollisionBehaviorDesiredProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl
    {
        [[nodiscard]] auto ItemsSource() const;
        auto ItemsSource(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Items() const;
        [[nodiscard]] auto ItemTemplate() const;
        auto ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics
    {
        [[nodiscard]] auto ItemsSourceProperty() const;
        [[nodiscard]] auto ItemsProperty() const;
        [[nodiscard]] auto ItemTemplateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayer
    {
        [[nodiscard]] auto MapTabIndex() const;
        auto MapTabIndex(int32_t value) const;
        [[nodiscard]] auto Visible() const;
        auto Visible(bool value) const;
        [[nodiscard]] auto ZIndex() const;
        auto ZIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics
    {
        [[nodiscard]] auto MapTabIndexProperty() const;
        [[nodiscard]] auto VisibleProperty() const;
        [[nodiscard]] auto ZIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics
    {
        auto CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source) const;
        auto CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon
    {
        [[nodiscard]] auto Path() const;
        auto Path(Windows::Devices::Geolocation::Geopath const& value) const;
        [[nodiscard]] auto StrokeColor() const;
        auto StrokeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto StrokeThickness() const;
        auto StrokeThickness(double value) const;
        [[nodiscard]] auto StrokeDashed() const;
        auto StrokeDashed(bool value) const;
        [[nodiscard]] auto FillColor() const;
        auto FillColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2
    {
        [[nodiscard]] auto Paths() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics
    {
        [[nodiscard]] auto PathProperty() const;
        [[nodiscard]] auto StrokeThicknessProperty() const;
        [[nodiscard]] auto StrokeDashedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline
    {
        [[nodiscard]] auto Path() const;
        auto Path(Windows::Devices::Geolocation::Geopath const& value) const;
        [[nodiscard]] auto StrokeColor() const;
        auto StrokeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto StrokeThickness() const;
        auto StrokeThickness(double value) const;
        [[nodiscard]] auto StrokeDashed() const;
        auto StrokeDashed(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics
    {
        [[nodiscard]] auto PathProperty() const;
        [[nodiscard]] auto StrokeDashedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView
    {
        [[nodiscard]] auto RouteColor() const;
        auto RouteColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto OutlineColor() const;
        auto OutlineColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Route() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory
    {
        auto CreateInstanceWithMapRoute(Windows::Services::Maps::MapRoute const& route, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapScene
    {
        [[nodiscard]] auto TargetCamera() const;
        auto TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        using TargetCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapScene, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapScene>::remove_TargetCameraChanged>;
        TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        auto TargetCameraChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics
    {
        auto CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds) const;
        auto CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees) const;
        auto CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
        auto CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
        auto CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
        auto CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
        auto CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const;
        auto CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations) const;
        auto CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics
    {
        [[nodiscard]] auto Area() const;
        [[nodiscard]] auto Airport() const;
        [[nodiscard]] auto Cemetery() const;
        [[nodiscard]] auto Continent() const;
        [[nodiscard]] auto Education() const;
        [[nodiscard]] auto IndigenousPeoplesReserve() const;
        [[nodiscard]] auto Island() const;
        [[nodiscard]] auto Medical() const;
        [[nodiscard]] auto Military() const;
        [[nodiscard]] auto Nautical() const;
        [[nodiscard]] auto Neighborhood() const;
        [[nodiscard]] auto Runway() const;
        [[nodiscard]] auto Sand() const;
        [[nodiscard]] auto ShoppingCenter() const;
        [[nodiscard]] auto Stadium() const;
        [[nodiscard]] auto Vegetation() const;
        [[nodiscard]] auto Forest() const;
        [[nodiscard]] auto GolfCourse() const;
        [[nodiscard]] auto Park() const;
        [[nodiscard]] auto PlayingField() const;
        [[nodiscard]] auto Reserve() const;
        [[nodiscard]] auto Point() const;
        [[nodiscard]] auto NaturalPoint() const;
        [[nodiscard]] auto Peak() const;
        [[nodiscard]] auto VolcanicPeak() const;
        [[nodiscard]] auto WaterPoint() const;
        [[nodiscard]] auto PointOfInterest() const;
        [[nodiscard]] auto Business() const;
        [[nodiscard]] auto FoodPoint() const;
        [[nodiscard]] auto PopulatedPlace() const;
        [[nodiscard]] auto Capital() const;
        [[nodiscard]] auto AdminDistrictCapital() const;
        [[nodiscard]] auto CountryRegionCapital() const;
        [[nodiscard]] auto RoadShield() const;
        [[nodiscard]] auto RoadExit() const;
        [[nodiscard]] auto Transit() const;
        [[nodiscard]] auto Political() const;
        [[nodiscard]] auto CountryRegion() const;
        [[nodiscard]] auto AdminDistrict() const;
        [[nodiscard]] auto District() const;
        [[nodiscard]] auto Structure() const;
        [[nodiscard]] auto Building() const;
        [[nodiscard]] auto EducationBuilding() const;
        [[nodiscard]] auto MedicalBuilding() const;
        [[nodiscard]] auto TransitBuilding() const;
        [[nodiscard]] auto Transportation() const;
        [[nodiscard]] auto Road() const;
        [[nodiscard]] auto ControlledAccessHighway() const;
        [[nodiscard]] auto HighSpeedRamp() const;
        [[nodiscard]] auto Highway() const;
        [[nodiscard]] auto MajorRoad() const;
        [[nodiscard]] auto ArterialRoad() const;
        [[nodiscard]] auto Street() const;
        [[nodiscard]] auto Ramp() const;
        [[nodiscard]] auto UnpavedStreet() const;
        [[nodiscard]] auto TollRoad() const;
        [[nodiscard]] auto Railway() const;
        [[nodiscard]] auto Trail() const;
        [[nodiscard]] auto WaterRoute() const;
        [[nodiscard]] auto Water() const;
        [[nodiscard]] auto River() const;
        [[nodiscard]] auto RouteLine() const;
        [[nodiscard]] auto WalkingRoute() const;
        [[nodiscard]] auto DrivingRoute() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics
    {
        [[nodiscard]] auto Disabled() const;
        [[nodiscard]] auto Hover() const;
        [[nodiscard]] auto Selected() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics
    {
        auto Aerial() const;
        auto AerialWithOverlay() const;
        auto RoadLight() const;
        auto RoadDark() const;
        auto RoadHighContrastLight() const;
        auto RoadHighContrastDark() const;
        auto Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets) const;
        auto ParseFromJson(param::hstring const& styleAsJson) const;
        auto TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs
    {
        [[nodiscard]] auto Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2
    {
        [[nodiscard]] auto ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest
    {
        [[nodiscard]] auto PixelData() const;
        auto PixelData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs
    {
        [[nodiscard]] auto X() const;
        [[nodiscard]] auto Y() const;
        [[nodiscard]] auto ZoomLevel() const;
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2
    {
        [[nodiscard]] auto FrameIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource
    {
        [[nodiscard]] auto DataSource() const;
        auto DataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& value) const;
        [[nodiscard]] auto Layer() const;
        auto Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer const& value) const;
        [[nodiscard]] auto ZoomLevelRange() const;
        auto ZoomLevelRange(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& value) const;
        [[nodiscard]] auto Bounds() const;
        auto Bounds(Windows::Devices::Geolocation::GeoboundingBox const& value) const;
        [[nodiscard]] auto AllowOverstretch() const;
        auto AllowOverstretch(bool value) const;
        [[nodiscard]] auto IsFadingEnabled() const;
        auto IsFadingEnabled(bool value) const;
        [[nodiscard]] auto IsTransparencyEnabled() const;
        auto IsTransparencyEnabled(bool value) const;
        [[nodiscard]] auto IsRetryEnabled() const;
        auto IsRetryEnabled(bool value) const;
        [[nodiscard]] auto ZIndex() const;
        auto ZIndex(int32_t value) const;
        [[nodiscard]] auto TilePixelSize() const;
        auto TilePixelSize(int32_t value) const;
        [[nodiscard]] auto Visible() const;
        auto Visible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2
    {
        [[nodiscard]] auto AnimationState() const;
        [[nodiscard]] auto AutoPlay() const;
        auto AutoPlay(bool value) const;
        [[nodiscard]] auto FrameCount() const;
        auto FrameCount(int32_t value) const;
        [[nodiscard]] auto FrameDuration() const;
        auto FrameDuration(Windows::Foundation::TimeSpan const& value) const;
        auto Pause() const;
        auto Play() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDataSourceAndZoomRange(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDataSourceZoomRangeAndBounds(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics
    {
        [[nodiscard]] auto DataSourceProperty() const;
        [[nodiscard]] auto LayerProperty() const;
        [[nodiscard]] auto ZoomLevelRangeProperty() const;
        [[nodiscard]] auto BoundsProperty() const;
        [[nodiscard]] auto AllowOverstretchProperty() const;
        [[nodiscard]] auto IsFadingEnabledProperty() const;
        [[nodiscard]] auto IsTransparencyEnabledProperty() const;
        [[nodiscard]] auto IsRetryEnabledProperty() const;
        [[nodiscard]] auto ZIndexProperty() const;
        [[nodiscard]] auto TilePixelSizeProperty() const;
        [[nodiscard]] auto VisibleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2
    {
        [[nodiscard]] auto AnimationStateProperty() const;
        [[nodiscard]] auto AutoPlayProperty() const;
        [[nodiscard]] auto FrameCountProperty() const;
        [[nodiscard]] auto FrameDurationProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest
    {
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs
    {
        [[nodiscard]] auto X() const;
        [[nodiscard]] auto Y() const;
        [[nodiscard]] auto ZoomLevel() const;
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2
    {
        [[nodiscard]] auto FrameIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience
    {
        [[nodiscard]] auto AddressTextVisible() const;
        auto AddressTextVisible(bool value) const;
        [[nodiscard]] auto CursorVisible() const;
        auto CursorVisible(bool value) const;
        [[nodiscard]] auto OverviewMapVisible() const;
        auto OverviewMapVisible(bool value) const;
        [[nodiscard]] auto StreetLabelsVisible() const;
        auto StreetLabelsVisible(bool value) const;
        [[nodiscard]] auto ExitButtonVisible() const;
        auto ExitButtonVisible(bool value) const;
        [[nodiscard]] auto ZoomButtonsVisible() const;
        auto ZoomButtonsVisible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory
    {
        auto CreateInstanceWithPanorama(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) const;
        auto CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama
    {
        [[nodiscard]] auto Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics
    {
        auto FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
        auto FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>;
    };
    struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange
    {
        double Min;
        double Max;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>
    {
        using type = struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange;
    };
}
#endif
