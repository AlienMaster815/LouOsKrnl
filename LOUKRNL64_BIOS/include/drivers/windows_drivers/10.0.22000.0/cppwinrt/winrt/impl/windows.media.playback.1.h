// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playback_1_H
#define WINRT_Windows_Media_Playback_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    struct __declspec(empty_bases) IBackgroundMediaPlayerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundMediaPlayerStatics>
    {
        IBackgroundMediaPlayerStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundMediaPlayerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentMediaPlaybackItemChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs>
    {
        ICurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICurrentMediaPlaybackItemChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICurrentMediaPlaybackItemChangedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICurrentMediaPlaybackItemChangedEventArgs2>,
        impl::require<Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
    {
        ICurrentMediaPlaybackItemChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        ICurrentMediaPlaybackItemChangedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreak :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreak>
    {
        IMediaBreak(std::nullptr_t = nullptr) noexcept {}
        IMediaBreak(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakEndedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakEndedEventArgs>
    {
        IMediaBreakEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakEndedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakFactory>
    {
        IMediaBreakFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakManager>
    {
        IMediaBreakManager(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakSchedule :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakSchedule>
    {
        IMediaBreakSchedule(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakSchedule(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakSeekedOverEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakSeekedOverEventArgs>
    {
        IMediaBreakSeekedOverEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakSeekedOverEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakSkippedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakSkippedEventArgs>
    {
        IMediaBreakSkippedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakSkippedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaBreakStartedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaBreakStartedEventArgs>
    {
        IMediaBreakStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaBreakStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaEnginePlaybackSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaEnginePlaybackSource>
    {
        IMediaEnginePlaybackSource(std::nullptr_t = nullptr) noexcept {}
        IMediaEnginePlaybackSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaItemDisplayProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaItemDisplayProperties>
    {
        IMediaItemDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IMediaItemDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManager>
    {
        IMediaPlaybackCommandManager(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerCommandBehavior :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerCommandBehavior>
    {
        IMediaPlaybackCommandManagerCommandBehavior(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerCommandBehavior(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerFastForwardReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerNextReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerNextReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerNextReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerPauseReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerPauseReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerPauseReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerPlayReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerPlayReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerPlayReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerPositionReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerPositionReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerPositionReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerPreviousReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerPreviousReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerRateReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerRateReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerRateReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerRewindReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerRewindReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerRewindReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackCommandManagerShuffleReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
    {
        IMediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackCommandManagerShuffleReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItem>,
        impl::require<Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
    {
        IMediaPlaybackItem(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItem2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItem2>,
        impl::require<Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackSource, Windows::Media::Playback::IMediaPlaybackItem>
    {
        IMediaPlaybackItem2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItem2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItem3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItem3>,
        impl::require<Windows::Media::Playback::IMediaPlaybackItem3, Windows::Media::Playback::IMediaPlaybackSource, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2>
    {
        IMediaPlaybackItem3(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItem3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemError :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemError>
    {
        IMediaPlaybackItemError(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemFactory>
    {
        IMediaPlaybackItemFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemFactory2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemFactory2>,
        impl::require<Windows::Media::Playback::IMediaPlaybackItemFactory2, Windows::Media::Playback::IMediaPlaybackItemFactory>
    {
        IMediaPlaybackItemFactory2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemFactory2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemFailedEventArgs>
    {
        IMediaPlaybackItemFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemOpenedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemOpenedEventArgs>
    {
        IMediaPlaybackItemOpenedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemOpenedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackItemStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackItemStatics>
    {
        IMediaPlaybackItemStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackItemStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackList :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackList>,
        impl::require<Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
    {
        IMediaPlaybackList(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackList2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackList2>,
        impl::require<Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackSource, Windows::Media::Playback::IMediaPlaybackList>
    {
        IMediaPlaybackList2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackList2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackList3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackList3>,
        impl::require<Windows::Media::Playback::IMediaPlaybackList3, Windows::Media::Playback::IMediaPlaybackSource, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2>
    {
        IMediaPlaybackList3(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackList3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSession>
    {
        IMediaPlaybackSession(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSession2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSession2>
    {
        IMediaPlaybackSession2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSession2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSession3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSession3>
    {
        IMediaPlaybackSession3(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSession3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSessionBufferingStartedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSessionBufferingStartedEventArgs>
    {
        IMediaPlaybackSessionBufferingStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSessionBufferingStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSessionOutputDegradationPolicyState :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSessionOutputDegradationPolicyState>
    {
        IMediaPlaybackSessionOutputDegradationPolicyState(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSessionOutputDegradationPolicyState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSource>
    {
        IMediaPlaybackSource(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackSphericalVideoProjection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackSphericalVideoProjection>
    {
        IMediaPlaybackSphericalVideoProjection(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackSphericalVideoProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlaybackTimedMetadataTrackList :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlaybackTimedMetadataTrackList>
    {
        IMediaPlaybackTimedMetadataTrackList(std::nullptr_t = nullptr) noexcept {}
        IMediaPlaybackTimedMetadataTrackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer>
    {
        IMediaPlayer(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer2>
    {
        IMediaPlayer2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer3>
    {
        IMediaPlayer3(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer4>
    {
        IMediaPlayer4(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer5>
    {
        IMediaPlayer5(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer6 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer6>
    {
        IMediaPlayer6(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer6(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayer7 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayer7>
    {
        IMediaPlayer7(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayer7(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerDataReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerDataReceivedEventArgs>
    {
        IMediaPlayerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerDataReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerEffects :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerEffects>
    {
        IMediaPlayerEffects(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerEffects(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerEffects2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerEffects2>
    {
        IMediaPlayerEffects2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerEffects2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerFailedEventArgs>
    {
        IMediaPlayerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerRateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerRateChangedEventArgs>
    {
        IMediaPlayerRateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerRateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerSource>
    {
        IMediaPlayerSource(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerSource2>
    {
        IMediaPlayerSource2(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaPlayerSurface :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaPlayerSurface>
    {
        IMediaPlayerSurface(std::nullptr_t = nullptr) noexcept {}
        IMediaPlayerSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaybackMediaMarker :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackMediaMarker>
    {
        IPlaybackMediaMarker(std::nullptr_t = nullptr) noexcept {}
        IPlaybackMediaMarker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaybackMediaMarkerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackMediaMarkerFactory>
    {
        IPlaybackMediaMarkerFactory(std::nullptr_t = nullptr) noexcept {}
        IPlaybackMediaMarkerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaybackMediaMarkerReachedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackMediaMarkerReachedEventArgs>
    {
        IPlaybackMediaMarkerReachedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPlaybackMediaMarkerReachedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaybackMediaMarkerSequence :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackMediaMarkerSequence>,
        impl::require<Windows::Media::Playback::IPlaybackMediaMarkerSequence, Windows::Foundation::Collections::IIterable<Windows::Media::Playback::PlaybackMediaMarker>>
    {
        IPlaybackMediaMarkerSequence(std::nullptr_t = nullptr) noexcept {}
        IPlaybackMediaMarkerSequence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITimedMetadataPresentationModeChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITimedMetadataPresentationModeChangedEventArgs>
    {
        ITimedMetadataPresentationModeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITimedMetadataPresentationModeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
