//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPViewController.h>

#import "MPSwipableViewDelegate.h"
#import "MPVideoControllerProtocol.h"
#import "UIModalViewDelegate.h"

@class MPAVController, MPAVItem, MPClosedCaptionDisplay, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoView, NSString, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UIView, UIView<MPVideoOverlay>, _UIHostedWindow;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate, UIModalViewDelegate>
{
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    BOOL _batteryMonitoringWasEnabled;
    MPClosedCaptionDisplay *_captionView;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled:1;
    unsigned int _allowsTVOutInBackground:1;
    unsigned int _itemTypeOverride;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    UIAlertView *_alertSheet;
    UIColor *_backstopColor;
    UIActivityIndicatorView *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    unsigned int _backgroundTaskId;
    int _artworkImageStyle;
    UIImage *_posterImage;
    unsigned int _canAnimateControlsOverlay:1;
    unsigned int _canShowControlsOverlay:1;
    unsigned int _disableControlsAutohide:1;
    unsigned int _playAfterPop:1;
    unsigned int _scheduledLoadingIndicator:1;
    unsigned int _displayPlaybackErrorAlerts:1;
    unsigned int _allowsDetailScrubbing:1;
    unsigned int _attemptAutoPlayWhenControlsHidden:1;
    unsigned int _alwaysAllowHidingControlsOverlay:1;
    unsigned int _hasShownFirstVideoFrame:1;
    unsigned int _allowsWirelessPlayback:1;
    unsigned int _disableAutoRotation:1;
    unsigned int _inlinePlaybackUsesTVOut:1;
}

+ (int)_activityIndicatorViewStyle;
+ (struct CGRect)calculateArtworkImageViewFrameInRect:(struct CGRect)arg1;
+ (BOOL)supportsFullscreenDisplay;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) unsigned int itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(retain, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property(nonatomic) int artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
- (void).cxx_destruct;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (BOOL)_showDestinationPlaceholder;
- (void)_hideLoadingIndicator;
- (void)_delayedUpdateBackgroundView;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (void)backgroundViewDidUpdate;
- (id)newAlternateTracksTransition;
@property(nonatomic) BOOL alwaysAllowHidingControlsOverlay;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
@property(nonatomic) BOOL controlsOverlayVisible;
@property(nonatomic) BOOL canShowControlsOverlay;
@property(nonatomic) BOOL canAnimateControlsOverlay;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)handleScaleModeChange;
- (void)displayVideoViewOnTV;
- (void)displayVideoViewOnScreen;
- (void)displayVideoView;
- (void)tearDownTVOutWindow;
- (void)_delayedShowLoading;
- (void)_delayedPopForTimeJump;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)_exitPlayerForPlaybackError;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_endBackgroundTask;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property(readonly, nonatomic) BOOL canShowQTAudioOnlyUI;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(readonly, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;
@property(readonly, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;
@property(nonatomic) BOOL displayPlaybackErrorAlerts;
@property(readonly, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;
@property(readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, retain, nonatomic) MPVideoView *videoView;
@property(nonatomic) BOOL allowsTVOutInBackground;
@property(nonatomic) BOOL TVOutEnabled;
@property(retain, nonatomic) MPAVController *player;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)prepareToDisplayVideo;
- (void)removeChildViewController:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)loadView;
- (void)exitFullscreen;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
@property(readonly, nonatomic) UIView *artworkImageView;
@property(readonly, nonatomic) BOOL showArtworkForTVOut;
- (void)setControlsNeedLayout;
@property(nonatomic) BOOL inlinePlaybackUsesTVOut;
@property(nonatomic) BOOL disableAutoRotation;
@property(nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property(nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property(nonatomic) BOOL allowsWirelessPlayback;
@property(nonatomic) BOOL allowsDetailScrubbing;
- (void)toggleScaleMode:(BOOL)arg1;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL disableControlsAutohide;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
@property(retain, nonatomic) MPAVItem *item;
- (void)_updateAlwaysPlayWheneverPossible;
@property(readonly, nonatomic) BOOL canChangeScaleMode;
@property(readonly, nonatomic) UIView *backgroundView;
- (void)_fixupViewHierarchyIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)reloadArtworkImageView;
- (id)newArtworkImageView;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) BOOL showArtworkInImageView;
- (unsigned int)_itemTypeWithActualTypePreference;
- (struct CGRect)calculateArtworkImageViewFrame;
- (struct CGRect)calculateFullScreenArtworkImageViewFrame;
- (int)displayArtworkImageStyle;
- (BOOL)isFullscreenForLayoutPurposes;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)_updateClosedCaptionDisplay;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)showAlternateTracksController:(id)arg1;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) int orientation;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end
