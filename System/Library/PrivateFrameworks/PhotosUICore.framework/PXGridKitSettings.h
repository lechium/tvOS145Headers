/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXGridKitSettings : PXSettings {

	BOOL _pauseWhenIdle;
	BOOL _enableXcodeCustomDebugHierarchy;
	BOOL _sortSpritesInXcodeCustomDebugHierarchy;
	BOOL _includeLayoutsLocalSpritesInDebugHierarchy;
	BOOL _simulateMissingMetalDevice;
	BOOL _enableMetalRenderer;
	BOOL _enableViewRenderer;
	BOOL _lowLatency;
	BOOL _lowMemoryMode;
	BOOL _inLowMemoryModePreferMasterThumb;
	BOOL _enableRoundedCorners;
	BOOL _enableColorMatching;
	BOOL _debugExtendedColorRange;
	BOOL _debugOpaque;
	BOOL _debugResolution;
	BOOL _debugColorTransform;
	BOOL _colorCopiedImages;
	BOOL _colorCachedThumbnails;
	BOOL _requestThumbnailsOnly;
	BOOL _requestMasterThumbsOnly;
	BOOL _disableLowResThumbnails;
	BOOL _simulateSomeAssetsInCloud;
	BOOL _loadThumbnailsAsync;
	BOOL _allowBlockingDuringScrolling;
	BOOL _allowBlockingDueToFences;
	BOOL _wantsOrthogonalProjection;
	BOOL _wantsStatsDebugHUD;
	BOOL _wantsRectDiagnosticsDebugHUD;
	BOOL _enableAnchoringRectDiagnostics;
	BOOL _enableAssetsRectDiagnostics;
	BOOL _enableFocusRectDiagnostics;
	BOOL _enableCurrentFocusRectDiagnostics;
	BOOL _enableRectDiagnosticsForUndefinedSprites;
	BOOL _enableRectDiagnosticsForNamedImageSprites;
	BOOL _enableRectDiagnosticsForDisplayAssetSprites;
	BOOL _enableRectDiagnosticsForTextSprites;
	BOOL _enableRectDiagnosticsForTitleSubtitleSprites;
	BOOL _enableRectDiagnosticsForSolidColorSprites;
	BOOL _enableRectDiagnosticsForGradientSprites;
	BOOL _enableRectDiagnosticsForShadowSprites;
	BOOL _enableRectDiagnosticsForDecorationSprites;
	BOOL _enableRectDiagnosticsForViewSprites;
	BOOL _wantsPerspectiveDebug;
	BOOL _shouldShowBoundariesOfTextTextures;
	double _inactivityTimeout;
	long long _sampleCount;
	long long _thumbnailCacheSize;
	double _opportunisticPreheatRequiredIdleTime;
	double _blockingWhileScrollingTimeout;
	double _blockingWhileScrubbingTimeout;
	double _blockingWhileInitialLoadTimeout;
	long long _blockOnMissingThumbnailsAtSpeedRegime;
	long long _videoAllowedAtOrBelowSpeed;
	long long _videoAllowedAtOrBelowSpeedForLowSpec;
	long long _lowSpecProcessorCountLimit;
	double _slowAnimationsSpeed;
	double _maxCornerRadius;
	double _cameraZoomFactor;
	double _perspectiveAngle;
	double _livePhotoInitialCrossfadeDuration;

}

@property (assign,nonatomic) BOOL pauseWhenIdle;                                             //@synthesize pauseWhenIdle=_pauseWhenIdle - In the implementation block
@property (assign,nonatomic) BOOL enableXcodeCustomDebugHierarchy;                           //@synthesize enableXcodeCustomDebugHierarchy=_enableXcodeCustomDebugHierarchy - In the implementation block
@property (assign,nonatomic) BOOL sortSpritesInXcodeCustomDebugHierarchy;                    //@synthesize sortSpritesInXcodeCustomDebugHierarchy=_sortSpritesInXcodeCustomDebugHierarchy - In the implementation block
@property (assign,nonatomic) BOOL includeLayoutsLocalSpritesInDebugHierarchy;                //@synthesize includeLayoutsLocalSpritesInDebugHierarchy=_includeLayoutsLocalSpritesInDebugHierarchy - In the implementation block
@property (assign,nonatomic) BOOL simulateMissingMetalDevice;                                //@synthesize simulateMissingMetalDevice=_simulateMissingMetalDevice - In the implementation block
@property (assign,nonatomic) BOOL enableMetalRenderer;                                       //@synthesize enableMetalRenderer=_enableMetalRenderer - In the implementation block
@property (assign,nonatomic) BOOL enableViewRenderer;                                        //@synthesize enableViewRenderer=_enableViewRenderer - In the implementation block
@property (assign,nonatomic) BOOL lowLatency;                                                //@synthesize lowLatency=_lowLatency - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode;                                             //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL inLowMemoryModePreferMasterThumb;                          //@synthesize inLowMemoryModePreferMasterThumb=_inLowMemoryModePreferMasterThumb - In the implementation block
@property (assign,nonatomic) double inactivityTimeout;                                       //@synthesize inactivityTimeout=_inactivityTimeout - In the implementation block
@property (assign,nonatomic) BOOL enableRoundedCorners;                                      //@synthesize enableRoundedCorners=_enableRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL enableColorMatching;                                       //@synthesize enableColorMatching=_enableColorMatching - In the implementation block
@property (assign,nonatomic) long long sampleCount;                                          //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) BOOL debugExtendedColorRange;                                   //@synthesize debugExtendedColorRange=_debugExtendedColorRange - In the implementation block
@property (assign,nonatomic) BOOL debugOpaque;                                               //@synthesize debugOpaque=_debugOpaque - In the implementation block
@property (assign,nonatomic) BOOL debugResolution;                                           //@synthesize debugResolution=_debugResolution - In the implementation block
@property (assign,nonatomic) BOOL debugColorTransform;                                       //@synthesize debugColorTransform=_debugColorTransform - In the implementation block
@property (assign,nonatomic) BOOL colorCopiedImages;                                         //@synthesize colorCopiedImages=_colorCopiedImages - In the implementation block
@property (assign,nonatomic) BOOL colorCachedThumbnails;                                     //@synthesize colorCachedThumbnails=_colorCachedThumbnails - In the implementation block
@property (assign,nonatomic) BOOL requestThumbnailsOnly;                                     //@synthesize requestThumbnailsOnly=_requestThumbnailsOnly - In the implementation block
@property (assign,nonatomic) BOOL requestMasterThumbsOnly;                                   //@synthesize requestMasterThumbsOnly=_requestMasterThumbsOnly - In the implementation block
@property (assign,nonatomic) BOOL disableLowResThumbnails;                                   //@synthesize disableLowResThumbnails=_disableLowResThumbnails - In the implementation block
@property (assign,nonatomic) BOOL simulateSomeAssetsInCloud;                                 //@synthesize simulateSomeAssetsInCloud=_simulateSomeAssetsInCloud - In the implementation block
@property (assign,nonatomic) BOOL loadThumbnailsAsync;                                       //@synthesize loadThumbnailsAsync=_loadThumbnailsAsync - In the implementation block
@property (assign,nonatomic) long long thumbnailCacheSize;                                   //@synthesize thumbnailCacheSize=_thumbnailCacheSize - In the implementation block
@property (assign,nonatomic) double opportunisticPreheatRequiredIdleTime;                    //@synthesize opportunisticPreheatRequiredIdleTime=_opportunisticPreheatRequiredIdleTime - In the implementation block
@property (assign,nonatomic) BOOL allowBlockingDuringScrolling;                              //@synthesize allowBlockingDuringScrolling=_allowBlockingDuringScrolling - In the implementation block
@property (assign,nonatomic) double blockingWhileScrollingTimeout;                           //@synthesize blockingWhileScrollingTimeout=_blockingWhileScrollingTimeout - In the implementation block
@property (assign,nonatomic) double blockingWhileScrubbingTimeout;                           //@synthesize blockingWhileScrubbingTimeout=_blockingWhileScrubbingTimeout - In the implementation block
@property (assign,nonatomic) double blockingWhileInitialLoadTimeout;                         //@synthesize blockingWhileInitialLoadTimeout=_blockingWhileInitialLoadTimeout - In the implementation block
@property (assign,nonatomic) long long blockOnMissingThumbnailsAtSpeedRegime;                //@synthesize blockOnMissingThumbnailsAtSpeedRegime=_blockOnMissingThumbnailsAtSpeedRegime - In the implementation block
@property (assign,nonatomic) long long videoAllowedAtOrBelowSpeed;                           //@synthesize videoAllowedAtOrBelowSpeed=_videoAllowedAtOrBelowSpeed - In the implementation block
@property (assign,nonatomic) long long videoAllowedAtOrBelowSpeedForLowSpec;                 //@synthesize videoAllowedAtOrBelowSpeedForLowSpec=_videoAllowedAtOrBelowSpeedForLowSpec - In the implementation block
@property (assign,nonatomic) long long lowSpecProcessorCountLimit;                           //@synthesize lowSpecProcessorCountLimit=_lowSpecProcessorCountLimit - In the implementation block
@property (assign,nonatomic) BOOL allowBlockingDueToFences;                                  //@synthesize allowBlockingDueToFences=_allowBlockingDueToFences - In the implementation block
@property (assign,nonatomic) double slowAnimationsSpeed;                                     //@synthesize slowAnimationsSpeed=_slowAnimationsSpeed - In the implementation block
@property (assign,nonatomic) double maxCornerRadius;                                         //@synthesize maxCornerRadius=_maxCornerRadius - In the implementation block
@property (assign,nonatomic) double cameraZoomFactor;                                        //@synthesize cameraZoomFactor=_cameraZoomFactor - In the implementation block
@property (assign,nonatomic) BOOL wantsOrthogonalProjection;                                 //@synthesize wantsOrthogonalProjection=_wantsOrthogonalProjection - In the implementation block
@property (assign,nonatomic) BOOL wantsStatsDebugHUD;                                        //@synthesize wantsStatsDebugHUD=_wantsStatsDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL wantsRectDiagnosticsDebugHUD;                              //@synthesize wantsRectDiagnosticsDebugHUD=_wantsRectDiagnosticsDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL enableAnchoringRectDiagnostics;                            //@synthesize enableAnchoringRectDiagnostics=_enableAnchoringRectDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL enableAssetsRectDiagnostics;                               //@synthesize enableAssetsRectDiagnostics=_enableAssetsRectDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL enableFocusRectDiagnostics;                                //@synthesize enableFocusRectDiagnostics=_enableFocusRectDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL enableCurrentFocusRectDiagnostics;                         //@synthesize enableCurrentFocusRectDiagnostics=_enableCurrentFocusRectDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForUndefinedSprites;                  //@synthesize enableRectDiagnosticsForUndefinedSprites=_enableRectDiagnosticsForUndefinedSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForNamedImageSprites;                 //@synthesize enableRectDiagnosticsForNamedImageSprites=_enableRectDiagnosticsForNamedImageSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForDisplayAssetSprites;               //@synthesize enableRectDiagnosticsForDisplayAssetSprites=_enableRectDiagnosticsForDisplayAssetSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForTextSprites;                       //@synthesize enableRectDiagnosticsForTextSprites=_enableRectDiagnosticsForTextSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForTitleSubtitleSprites;              //@synthesize enableRectDiagnosticsForTitleSubtitleSprites=_enableRectDiagnosticsForTitleSubtitleSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForSolidColorSprites;                 //@synthesize enableRectDiagnosticsForSolidColorSprites=_enableRectDiagnosticsForSolidColorSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForGradientSprites;                   //@synthesize enableRectDiagnosticsForGradientSprites=_enableRectDiagnosticsForGradientSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForShadowSprites;                     //@synthesize enableRectDiagnosticsForShadowSprites=_enableRectDiagnosticsForShadowSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForDecorationSprites;                 //@synthesize enableRectDiagnosticsForDecorationSprites=_enableRectDiagnosticsForDecorationSprites - In the implementation block
@property (assign,nonatomic) BOOL enableRectDiagnosticsForViewSprites;                       //@synthesize enableRectDiagnosticsForViewSprites=_enableRectDiagnosticsForViewSprites - In the implementation block
@property (assign,nonatomic) BOOL wantsPerspectiveDebug;                                     //@synthesize wantsPerspectiveDebug=_wantsPerspectiveDebug - In the implementation block
@property (assign,nonatomic) double perspectiveAngle;                                        //@synthesize perspectiveAngle=_perspectiveAngle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBoundariesOfTextTextures;                        //@synthesize shouldShowBoundariesOfTextTextures=_shouldShowBoundariesOfTextTextures - In the implementation block
@property (assign,nonatomic) double livePhotoInitialCrossfadeDuration;                       //@synthesize livePhotoInitialCrossfadeDuration=_livePhotoInitialCrossfadeDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(BOOL)lowLatency;
-(void)setLowLatency:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setCameraZoomFactor:(double)arg1 ;
-(id)parentSettings;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(double)maxCornerRadius;
-(BOOL)anySpritesRectDiagnosticsEnabled;
-(BOOL)pauseWhenIdle;
-(void)setPauseWhenIdle:(BOOL)arg1 ;
-(BOOL)enableXcodeCustomDebugHierarchy;
-(void)setEnableXcodeCustomDebugHierarchy:(BOOL)arg1 ;
-(BOOL)sortSpritesInXcodeCustomDebugHierarchy;
-(void)setSortSpritesInXcodeCustomDebugHierarchy:(BOOL)arg1 ;
-(BOOL)includeLayoutsLocalSpritesInDebugHierarchy;
-(void)setIncludeLayoutsLocalSpritesInDebugHierarchy:(BOOL)arg1 ;
-(BOOL)simulateMissingMetalDevice;
-(void)setSimulateMissingMetalDevice:(BOOL)arg1 ;
-(BOOL)enableMetalRenderer;
-(void)setEnableMetalRenderer:(BOOL)arg1 ;
-(BOOL)enableViewRenderer;
-(void)setEnableViewRenderer:(BOOL)arg1 ;
-(BOOL)inLowMemoryModePreferMasterThumb;
-(void)setInLowMemoryModePreferMasterThumb:(BOOL)arg1 ;
-(double)inactivityTimeout;
-(void)setInactivityTimeout:(double)arg1 ;
-(BOOL)enableRoundedCorners;
-(void)setEnableRoundedCorners:(BOOL)arg1 ;
-(BOOL)enableColorMatching;
-(void)setEnableColorMatching:(BOOL)arg1 ;
-(BOOL)debugExtendedColorRange;
-(void)setDebugExtendedColorRange:(BOOL)arg1 ;
-(BOOL)debugOpaque;
-(void)setDebugOpaque:(BOOL)arg1 ;
-(BOOL)debugResolution;
-(void)setDebugResolution:(BOOL)arg1 ;
-(BOOL)debugColorTransform;
-(void)setDebugColorTransform:(BOOL)arg1 ;
-(BOOL)colorCopiedImages;
-(void)setColorCopiedImages:(BOOL)arg1 ;
-(BOOL)colorCachedThumbnails;
-(void)setColorCachedThumbnails:(BOOL)arg1 ;
-(BOOL)requestThumbnailsOnly;
-(void)setRequestThumbnailsOnly:(BOOL)arg1 ;
-(BOOL)requestMasterThumbsOnly;
-(void)setRequestMasterThumbsOnly:(BOOL)arg1 ;
-(BOOL)disableLowResThumbnails;
-(void)setDisableLowResThumbnails:(BOOL)arg1 ;
-(BOOL)simulateSomeAssetsInCloud;
-(void)setSimulateSomeAssetsInCloud:(BOOL)arg1 ;
-(BOOL)loadThumbnailsAsync;
-(void)setLoadThumbnailsAsync:(BOOL)arg1 ;
-(long long)thumbnailCacheSize;
-(void)setThumbnailCacheSize:(long long)arg1 ;
-(double)opportunisticPreheatRequiredIdleTime;
-(void)setOpportunisticPreheatRequiredIdleTime:(double)arg1 ;
-(BOOL)allowBlockingDuringScrolling;
-(void)setAllowBlockingDuringScrolling:(BOOL)arg1 ;
-(double)blockingWhileScrollingTimeout;
-(void)setBlockingWhileScrollingTimeout:(double)arg1 ;
-(double)blockingWhileScrubbingTimeout;
-(void)setBlockingWhileScrubbingTimeout:(double)arg1 ;
-(double)blockingWhileInitialLoadTimeout;
-(void)setBlockingWhileInitialLoadTimeout:(double)arg1 ;
-(long long)blockOnMissingThumbnailsAtSpeedRegime;
-(void)setBlockOnMissingThumbnailsAtSpeedRegime:(long long)arg1 ;
-(long long)videoAllowedAtOrBelowSpeed;
-(void)setVideoAllowedAtOrBelowSpeed:(long long)arg1 ;
-(long long)videoAllowedAtOrBelowSpeedForLowSpec;
-(void)setVideoAllowedAtOrBelowSpeedForLowSpec:(long long)arg1 ;
-(long long)lowSpecProcessorCountLimit;
-(void)setLowSpecProcessorCountLimit:(long long)arg1 ;
-(BOOL)allowBlockingDueToFences;
-(void)setAllowBlockingDueToFences:(BOOL)arg1 ;
-(double)slowAnimationsSpeed;
-(void)setSlowAnimationsSpeed:(double)arg1 ;
-(void)setMaxCornerRadius:(double)arg1 ;
-(double)cameraZoomFactor;
-(BOOL)wantsOrthogonalProjection;
-(void)setWantsOrthogonalProjection:(BOOL)arg1 ;
-(BOOL)wantsStatsDebugHUD;
-(void)setWantsStatsDebugHUD:(BOOL)arg1 ;
-(BOOL)wantsRectDiagnosticsDebugHUD;
-(void)setWantsRectDiagnosticsDebugHUD:(BOOL)arg1 ;
-(BOOL)enableAnchoringRectDiagnostics;
-(void)setEnableAnchoringRectDiagnostics:(BOOL)arg1 ;
-(BOOL)enableAssetsRectDiagnostics;
-(void)setEnableAssetsRectDiagnostics:(BOOL)arg1 ;
-(BOOL)enableFocusRectDiagnostics;
-(void)setEnableFocusRectDiagnostics:(BOOL)arg1 ;
-(BOOL)enableCurrentFocusRectDiagnostics;
-(void)setEnableCurrentFocusRectDiagnostics:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForUndefinedSprites;
-(void)setEnableRectDiagnosticsForUndefinedSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForNamedImageSprites;
-(void)setEnableRectDiagnosticsForNamedImageSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForDisplayAssetSprites;
-(void)setEnableRectDiagnosticsForDisplayAssetSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForTextSprites;
-(void)setEnableRectDiagnosticsForTextSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForTitleSubtitleSprites;
-(void)setEnableRectDiagnosticsForTitleSubtitleSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForSolidColorSprites;
-(void)setEnableRectDiagnosticsForSolidColorSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForGradientSprites;
-(void)setEnableRectDiagnosticsForGradientSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForShadowSprites;
-(void)setEnableRectDiagnosticsForShadowSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForDecorationSprites;
-(void)setEnableRectDiagnosticsForDecorationSprites:(BOOL)arg1 ;
-(BOOL)enableRectDiagnosticsForViewSprites;
-(void)setEnableRectDiagnosticsForViewSprites:(BOOL)arg1 ;
-(BOOL)wantsPerspectiveDebug;
-(void)setWantsPerspectiveDebug:(BOOL)arg1 ;
-(double)perspectiveAngle;
-(void)setPerspectiveAngle:(double)arg1 ;
-(BOOL)shouldShowBoundariesOfTextTextures;
-(void)setShouldShowBoundariesOfTextTextures:(BOOL)arg1 ;
-(double)livePhotoInitialCrossfadeDuration;
-(void)setLivePhotoInitialCrossfadeDuration:(double)arg1 ;
@end

