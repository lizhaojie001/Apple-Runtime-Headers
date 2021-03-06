//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPlayerViewControllerContentViewDelegate-Protocol.h>
#import <AVKit/AVRoutePickerViewInternalDelegate-Protocol.h>
#import <AVKit/AVScrubbing-Protocol.h>
#import <AVKit/AVTransportControlsViewDelegate-Protocol.h>

@class AVNowPlayingInfoController, AVObservationController, AVPictureInPictureController, AVPlaybackControlsView, AVPlaybackControlsVisibilityControllerItem, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerControllerVolumeAnimator, AVPlayerViewController, AVRouteDetectorCoordinator, AVSecondScreenContentViewConnection, AVTimeFormatter, AVTurboModePlaybackControlsPlaceholderView, NSArray, NSNumber, NSString, NSTimer, NSUUID, UIAlertController, UIViewPropertyAnimator;
@protocol AVVolumeController;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewInternalDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbing>
{
    BOOL _playerViewControllerIsBeingTransitionedWithResizing;
    BOOL _playerViewControllerIsPresentingFullScreen;
    BOOL _playerViewControllerIsPresentedFullScreen;
    BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
    BOOL _entersFullScreenWhenPlaybackBegins;
    BOOL _allowsEnteringFullScreen;
    BOOL _showsMinimalPlaybackControlsWhenEmbeddedInline;
    BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
    BOOL _volumeControlsCanShowSlider;
    BOOL _showsPictureInPictureButton;
    BOOL _showsPlaybackControls;
    BOOL _hasCustomPlaybackControls;
    BOOL _canIncludePlaybackControlsWhenInline;
    BOOL _showsVideoGravityButton;
    BOOL _requiresLinearPlayback;
    BOOL _updatesNowPlayingInfoCenter;
    BOOL _showsDoneButtonWhenFullScreen;
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _playbackControlsIncludeStartContentTransitionButtons;
    BOOL _playbackControlsShouldControlSystemVolume;
    BOOL _forcePlaybackControlsHidden;
    BOOL _showsTimecodes;
    BOOL _startLeftwardContentTransitionButtonEnabled;
    BOOL _startRightwardContentTransitionButtonEnabled;
    BOOL _showsLoadingIndicator;
    BOOL _prefersVolumeSliderExpanded;
    BOOL _canIncludeVideoGravityButton;
    BOOL _hasStartedUpdates;
    BOOL _coveringWindow;
    BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    BOOL _hasBecomeReadyToPlay;
    BOOL _multipleRoutesDetected;
    BOOL _resumingUpdates;
    BOOL _prefersMuted;
    BOOL _playbackSuspendedForScrubbing;
    BOOL _hasSeekableLiveStreamingContent;
    BOOL _scrubbingOrSeeking;
    BOOL _shouldIgnoreTimeResolverUpdates;
    BOOL _videoScaled;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    NSArray *_customControlItems;
    CDUnknownBlockType _playButtonHandlerForLazyPlayerLoading;
    CDUnknownBlockType _contentTransitionAction;
    AVPictureInPictureController *_pictureInPictureController;
    id <AVVolumeController> _volumeController;
    AVNowPlayingInfoController *_nowPlayingInfoControllerIfLoaded;
    AVSecondScreenContentViewConnection *_secondScreenConnection;
    AVPlayerViewController *_playerViewController;
    AVPlaybackControlsView *_playbackControlsView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    AVObservationController *_observationController;
    AVObservationController *_playbackControlsObservationController;
    AVPlayerControllerTimeResolver *_timeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    UIAlertController *_routePickerAlertController;
    AVRouteDetectorCoordinator *_routeDetectorCoordinator;
    id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
    NSTimer *_loadingIndicatorTimer;
    UIViewPropertyAnimator *_collapseExpandSliderAnimator;
    AVPlayerControllerVolumeAnimator *_volumeAnimator;
    NSUUID *_playerMuteFadeAnimationID;
    AVPlaybackControlsVisibilityControllerItem *_playbackControlsContainerVisibilityItem;
    AVPlaybackControlsVisibilityControllerItem *_volumeControlsContainerVisibilityItem;
    NSArray *_allVisibilityControllerItems;
    NSNumber *_pendingOrientationChange;
    double _loadingIndicatorTimerDelay;
    long long _timeControlStatus;
    long long _videoGravityButtonType;
    NSString *_uniqueIdentifer;
    NSString *_windowSceneSessionIdentifier;
    struct CGRect _playbackViewFrame;
}

+ (id)keyPathsForValuesAffectingNeedsTimeResolver;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingShowsStartContentTransitionButtons;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingFullScreen;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *windowSceneSessionIdentifier; // @synthesize windowSceneSessionIdentifier=_windowSceneSessionIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifer; // @synthesize uniqueIdentifer=_uniqueIdentifer;
@property(nonatomic, getter=isVideoScaled) BOOL videoScaled; // @synthesize videoScaled=_videoScaled;
@property(nonatomic) struct CGRect playbackViewFrame; // @synthesize playbackViewFrame=_playbackViewFrame;
@property(nonatomic) long long videoGravityButtonType; // @synthesize videoGravityButtonType=_videoGravityButtonType;
@property(nonatomic) BOOL shouldIgnoreTimeResolverUpdates; // @synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates;
@property(nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property(nonatomic) BOOL hasSeekableLiveStreamingContent; // @synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent;
@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing; // @synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing;
@property(nonatomic) BOOL prefersMuted; // @synthesize prefersMuted=_prefersMuted;
@property(nonatomic, getter=isResumingUpdates) BOOL resumingUpdates; // @synthesize resumingUpdates=_resumingUpdates;
@property(nonatomic) double loadingIndicatorTimerDelay; // @synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay;
@property(nonatomic) BOOL multipleRoutesDetected; // @synthesize multipleRoutesDetected=_multipleRoutesDetected;
@property(nonatomic) BOOL hasBecomeReadyToPlay; // @synthesize hasBecomeReadyToPlay=_hasBecomeReadyToPlay;
@property(nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // @synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property(nonatomic, getter=isCoveringWindow) BOOL coveringWindow; // @synthesize coveringWindow=_coveringWindow;
@property(nonatomic) BOOL hasStartedUpdates; // @synthesize hasStartedUpdates=_hasStartedUpdates;
@property(retain, nonatomic) NSNumber *pendingOrientationChange; // @synthesize pendingOrientationChange=_pendingOrientationChange;
@property(nonatomic) BOOL canIncludeVideoGravityButton; // @synthesize canIncludeVideoGravityButton=_canIncludeVideoGravityButton;
@property(nonatomic) BOOL prefersVolumeSliderExpanded; // @synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded;
@property(nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(readonly, nonatomic) NSArray *allVisibilityControllerItems; // @synthesize allVisibilityControllerItems=_allVisibilityControllerItems;
@property(readonly, nonatomic) AVPlaybackControlsVisibilityControllerItem *volumeControlsContainerVisibilityItem; // @synthesize volumeControlsContainerVisibilityItem=_volumeControlsContainerVisibilityItem;
@property(readonly, nonatomic) AVPlaybackControlsVisibilityControllerItem *playbackControlsContainerVisibilityItem; // @synthesize playbackControlsContainerVisibilityItem=_playbackControlsContainerVisibilityItem;
@property(retain, nonatomic) NSUUID *playerMuteFadeAnimationID; // @synthesize playerMuteFadeAnimationID=_playerMuteFadeAnimationID;
@property(retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // @synthesize volumeAnimator=_volumeAnimator;
@property(nonatomic) __weak UIViewPropertyAnimator *collapseExpandSliderAnimator; // @synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator;
@property(nonatomic) __weak NSTimer *loadingIndicatorTimer; // @synthesize loadingIndicatorTimer=_loadingIndicatorTimer;
@property(retain, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // @synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property(retain, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // @synthesize routeDetectorCoordinator=_routeDetectorCoordinator;
@property(nonatomic) __weak UIAlertController *routePickerAlertController; // @synthesize routePickerAlertController=_routePickerAlertController;
@property(readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property(readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property(retain, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property(retain, nonatomic) AVObservationController *playbackControlsObservationController; // @synthesize playbackControlsObservationController=_playbackControlsObservationController;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic) __weak AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // @synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView;
@property(retain, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) AVSecondScreenContentViewConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property(retain, nonatomic) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded; // @synthesize nowPlayingInfoControllerIfLoaded=_nowPlayingInfoControllerIfLoaded;
@property(retain, nonatomic) id <AVVolumeController> volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(copy, nonatomic) CDUnknownBlockType contentTransitionAction; // @synthesize contentTransitionAction=_contentTransitionAction;
@property(nonatomic, getter=isStartRightwardContentTransitionButtonEnabled) BOOL startRightwardContentTransitionButtonEnabled; // @synthesize startRightwardContentTransitionButtonEnabled=_startRightwardContentTransitionButtonEnabled;
@property(nonatomic, getter=isStartLeftwardContentTransitionButtonEnabled) BOOL startLeftwardContentTransitionButtonEnabled; // @synthesize startLeftwardContentTransitionButtonEnabled=_startLeftwardContentTransitionButtonEnabled;
@property(copy, nonatomic) CDUnknownBlockType playButtonHandlerForLazyPlayerLoading; // @synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading;
@property(nonatomic) BOOL showsTimecodes; // @synthesize showsTimecodes=_showsTimecodes;
@property(nonatomic) BOOL forcePlaybackControlsHidden; // @synthesize forcePlaybackControlsHidden=_forcePlaybackControlsHidden;
@property(nonatomic) BOOL playbackControlsShouldControlSystemVolume; // @synthesize playbackControlsShouldControlSystemVolume=_playbackControlsShouldControlSystemVolume;
@property(nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons; // @synthesize playbackControlsIncludeStartContentTransitionButtons=_playbackControlsIncludeStartContentTransitionButtons;
@property(nonatomic) BOOL playbackControlsIncludeVolumeControls; // @synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls;
@property(nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // @synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls;
@property(nonatomic) BOOL playbackControlsIncludeTransportControls; // @synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls;
@property(nonatomic) BOOL showsDoneButtonWhenFullScreen; // @synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen;
@property(nonatomic) BOOL updatesNowPlayingInfoCenter; // @synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter;
@property(nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) BOOL showsVideoGravityButton; // @synthesize showsVideoGravityButton=_showsVideoGravityButton;
@property(nonatomic) BOOL canIncludePlaybackControlsWhenInline; // @synthesize canIncludePlaybackControlsWhenInline=_canIncludePlaybackControlsWhenInline;
@property(nonatomic) BOOL hasCustomPlaybackControls; // @synthesize hasCustomPlaybackControls=_hasCustomPlaybackControls;
@property(nonatomic) BOOL showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property(nonatomic) BOOL showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property(copy, nonatomic) NSArray *customControlItems; // @synthesize customControlItems=_customControlItems;
@property(nonatomic) BOOL volumeControlsCanShowSlider; // @synthesize volumeControlsCanShowSlider=_volumeControlsCanShowSlider;
@property(nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // @synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property(nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; // @synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline;
@property(nonatomic) BOOL allowsEnteringFullScreen; // @synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property(nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy; // @synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy;
@property(nonatomic) BOOL playerViewControllerIsPresentedFullScreen; // @synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen;
@property(nonatomic) BOOL playerViewControllerIsPresentingFullScreen; // @synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen;
@property(nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing; // @synthesize playerViewControllerIsBeingTransitionedWithResizing=_playerViewControllerIsBeingTransitionedWithResizing;
@property(nonatomic) __weak AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void)_updateSecondScreenConnectionReadyToConnect;
- (void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1;
- (void)_updateNowPlayingInfoCenter;
- (void)_updatePrefersInspectionSuspended;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3;
- (void)_updateVideoGravityButtonType;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updateContainerInclusion;
- (void)_updateControlInclusion;
- (void)updateControlsInclusion;
- (void)_updateSkipButtonsEnableLongPress;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_startObservingForPlaybackViewUpdates;
- (void)_updatePlaybackControlsVisibleAndObservingUpdates;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (BOOL)_hasVisibilityControllerItemThatPrefersVisible;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)startContentTransitionButtonTouchUpInside:(id)arg1;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (id)overrideRoutingContextUIDForRoutePickerView:(id)arg1;
- (unsigned long long)overrideRouteSharingPolicyForRoutePickerView:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2;
- (id)_volumeButtonMicaPackageState;
- (void)_updateVolumeButtonGlyph;
- (void)_showOrHideDisplayModeControls;
- (void)_showOrHideAudioControls;
- (BOOL)_prefersVolumeSliderExpandedAutomatically;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)endChangingVolume;
- (void)beginChangingVolume;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (void)volumeSliderValueDidChange:(id)arg1;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (void)endScrubbing;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;
- (void)beginScrubbing;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (void)secondScreenConnectionDidResignActive:(id)arg1;
- (void)secondScreenConnectionDidBecomeActive:(id)arg1;
- (void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg1;
- (id)playerViewControllerContentViewOverrideLayoutClass:(id)arg1;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
- (BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (struct UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
- (void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
- (void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
- (void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1;
- (void)playbackControlsViewDidLoad:(id)arg1;
@property(readonly, nonatomic) BOOL tapGestureRecognizersCanReceiveTouches;
@property(readonly, nonatomic) BOOL needsTimeResolver;
@property(readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property(readonly, nonatomic) BOOL canShowLoadingIndicator;
@property(readonly, nonatomic) BOOL showsStartContentTransitionButtons;
@property(readonly, nonatomic) BOOL showsSkipButtons;
@property(readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double targetTime;
@property(readonly, nonatomic) BOOL showsMediaSelectionButton;
@property(readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property(readonly, nonatomic) BOOL showsTransportControls;
@property(readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property(readonly, nonatomic) BOOL showsProminentPlayButton;
@property(readonly, nonatomic) BOOL showsRoutePickerView;
@property(readonly, nonatomic) BOOL entersFullScreenWhenTapped;
@property(readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
- (void)toggleMuted;
- (void)startUpdatesIfNeeded;
- (void)dealloc;
- (id)initWithPlayerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

