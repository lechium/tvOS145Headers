/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>
#import <libobjc.A.dylib/OKVideoControllerDelegate.h>
#import <libobjc.A.dylib/OKWidgetEditable.h>
#import <libobjc.A.dylib/OKWidgetMediaViewProxyExports.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUIButton, UIImageView, NSURL, OKWidgetMediaVideoPlayerView, OKVideoPlayerController, AVAsset, NSString, OKAudioDucker, OFUIView;

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate> {

	OFUIButton* _videoPlayButton;
	UIImageView* _thumbnailView;
	UIEdgeInsets _mediaEdgeInsets;
	NSURL* _videoURL;
	OKWidgetMediaVideoPlayerView* _videoPlayerView;
	OKVideoPlayerController* _videoPlayerController;
	AVAsset* _videoAsset;
	BOOL _disablePlayButton;
	float _rate;
	double _seekToTime;
	NSString* _didFinishPlayingActionScript;
	OKAudioDucker* _audioDucker;
	BOOL _isVideoAssetLoaded;
	BOOL _autoplay;
	BOOL _loop;
	BOOL _didPlayInteractively;
	BOOL _shouldPlayVideoWhenAvailable;
	BOOL _readyForDisplayAndPlay;
	float _requiredDuckLevel;
	float _volume;
	NSString* _audioTrackID;
	CGPoint _offset;
	CGPoint _originalOffsetWhilePanning;
	double _scale;
	BOOL _editable;
	BOOL _isEditingPanning;
	BOOL _shouldFitRegionOfInterest;
	BOOL _needsReloadThumbnail;
	OFUIView* _faceRect;
	double _reloadThumbnailContentProgress;

}

@property (assign,nonatomic) BOOL shouldPlayVideoWhenAvailable;              //@synthesize shouldPlayVideoWhenAvailable=_shouldPlayVideoWhenAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(BOOL)shouldDrawRegionOfInterest;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)duration;
-(double)currentTime;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)play;
-(void)layoutSubviews;
-(void)setVideoURL:(id)arg1 ;
-(void)setVideoAsset:(id)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(CGRect)thumbnailRect;
-(void)instantPause;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(long long)settingContentMode;
-(void)setSettingContentMode:(long long)arg1 ;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(BOOL)settingLoop;
-(void)setSettingLoop:(BOOL)arg1 ;
-(double)settingScale;
-(void)setSettingScale:(double)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)networkStatusDidChange:(long long)arg1 ;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)prepareForReload;
-(void)setPlaybackAudioVolume:(double)arg1 ;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)setSettingUrl:(id)arg1 ;
-(void)setSettingDisablePlayButton:(BOOL)arg1 ;
-(id)settingUrl;
-(BOOL)canPerformAction:(id)arg1 ;
-(id)layoutSettingsKeys;
-(BOOL)supportsReadiness;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(double)_localReadyProgress;
-(double)remainingPlayDuration;
-(id)_contentViewToFocus;
-(float)contentAspectRatio;
-(void)playVideo:(id)arg1 ;
-(void)_cancelThumbnailOperations;
-(void)_reloadThumbnailContent;
-(void)_unloadThumbnailContent;
-(void)_setVideoContentMode:(long long)arg1 ;
-(void)calculateOffsetForRegionOfInterest;
-(void)updateOffset;
-(void)_reloadThumbnailContent:(BOOL)arg1 loadVideo:(BOOL)arg2 ;
-(void)drawRegionOfInterestContainerBounds;
-(void)resetVideo;
-(void)showVideoActivityIndicator:(BOOL)arg1 ;
-(void)pauseVideo:(id)arg1 ;
-(void)_hideVideoButton;
-(void)_stopAudioDucking;
-(void)_setupVideoPlayButton;
-(void)_cleanupVideo;
-(void)_setupVideo;
-(void)hideThumbnailAndPlayVideo;
-(void)_showVideoButton;
-(void)setShouldPlayVideoWhenAvailable:(BOOL)arg1 ;
-(void)_beginAudioDucking;
-(void)videoBecomesReady;
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2 ;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2 ;
-(BOOL)endAllEditing:(BOOL)arg1 ;
-(UIEdgeInsets)settingMediaEdgeInsets;
-(void)setSettingMediaEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)settingsAutoplay;
-(double)settingSeekToTime;
-(void)setSettingSeekToTime:(double)arg1 ;
-(CGPoint)settingOffset;
-(void)setSettingOffset:(CGPoint)arg1 ;
-(void)setSettingShouldFitRegionOfInterest:(BOOL)arg1 ;
-(BOOL)settingShouldFitRegionOfInterest;
-(BOOL)settingEditable;
-(void)setSettingEditable:(BOOL)arg1 ;
-(void)setSettingDidFinishPlayingActionScript:(id)arg1 ;
-(void)_showVideoButtonWithDelay;
-(BOOL)shouldPlayVideoWhenAvailable;
@end

