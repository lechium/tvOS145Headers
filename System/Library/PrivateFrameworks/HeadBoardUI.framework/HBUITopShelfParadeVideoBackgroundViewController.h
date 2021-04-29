/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HBUITopShelfParadeBackgroundViewController.h>

@protocol HBUITopShelfParadeItem, HBUITopShelfParadeBackgroundViewControllerDelegate;
@class TVSStateMachine, UIImageView, HBUIPlayerView, AVPlayer, HBUIPlayerVolumeAnimator, TVImageProxy, NSTimer, NSString;

@interface HBUITopShelfParadeVideoBackgroundViewController : UIViewController <HBUITopShelfParadeBackgroundViewController> {

	BOOL _isCenterViewController;
	BOOL _audioPlaybackAllowed;
	BOOL _contentOccluded;
	BOOL _preventsDisplaySleepDuringPreviewVideoPlayback;
	BOOL _delaysVideoPlayback;
	id<HBUITopShelfParadeItem> _paradeItem;
	id<HBUITopShelfParadeBackgroundViewControllerDelegate> _delegate;
	TVSStateMachine* _stateMachine;
	UIImageView* _bumperImageView;
	HBUIPlayerView* _bumperCinemagraphView;
	HBUIPlayerView* _previewVideoView;
	AVPlayer* _bumperCinemagraphPlayer;
	AVPlayer* _previewVideoPlayer;
	HBUIPlayerVolumeAnimator* _previewVideoVolumeAnimator;
	TVImageProxy* _bumperImageProxy;
	NSTimer* _beforePreviewVideoTimer;
	NSTimer* _previewVideoTimeoutTimer;
	NSTimer* _afterPreviewVideoTimer;

}

@property (getter=_stateMachine,nonatomic,readonly) TVSStateMachine * stateMachine;                                                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (getter=_bumperImageView,nonatomic,readonly) UIImageView * bumperImageView;                                                               //@synthesize bumperImageView=_bumperImageView - In the implementation block
@property (getter=_bumperCinemagraphView,nonatomic,readonly) HBUIPlayerView * bumperCinemagraphView;                                                //@synthesize bumperCinemagraphView=_bumperCinemagraphView - In the implementation block
@property (getter=_previewVideoView,nonatomic,readonly) HBUIPlayerView * previewVideoView;                                                          //@synthesize previewVideoView=_previewVideoView - In the implementation block
@property (getter=_bumperCinemagraphPlayer,nonatomic,readonly) AVPlayer * bumperCinemagraphPlayer;                                                  //@synthesize bumperCinemagraphPlayer=_bumperCinemagraphPlayer - In the implementation block
@property (getter=_previewVideoPlayer,nonatomic,readonly) AVPlayer * previewVideoPlayer;                                                            //@synthesize previewVideoPlayer=_previewVideoPlayer - In the implementation block
@property (nonatomic,readonly) HBUIPlayerVolumeAnimator * previewVideoVolumeAnimator;                                                               //@synthesize previewVideoVolumeAnimator=_previewVideoVolumeAnimator - In the implementation block
@property (setter=_setBumperImageProxy:,getter=_bumperImageProxy,nonatomic,retain) TVImageProxy * bumperImageProxy;                                 //@synthesize bumperImageProxy=_bumperImageProxy - In the implementation block
@property (setter=_setBeforePreviewVideoTimer:,getter=_beforePreviewVideoTimer,nonatomic,retain) NSTimer * beforePreviewVideoTimer;                 //@synthesize beforePreviewVideoTimer=_beforePreviewVideoTimer - In the implementation block
@property (setter=_setPreviewVideoTimeoutTimer:,getter=_previewVideoTimeoutTimer,nonatomic,retain) NSTimer * previewVideoTimeoutTimer;              //@synthesize previewVideoTimeoutTimer=_previewVideoTimeoutTimer - In the implementation block
@property (setter=_setAfterPreviewVideoTimer:,getter=_afterPreviewVideoTimer,nonatomic,retain) NSTimer * afterPreviewVideoTimer;                    //@synthesize afterPreviewVideoTimer=_afterPreviewVideoTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeBackgroundViewControllerDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeItem> paradeItem;                                                                                 //@synthesize paradeItem=_paradeItem - In the implementation block
@property (assign,nonatomic) BOOL isCenterViewController;                                                                                           //@synthesize isCenterViewController=_isCenterViewController - In the implementation block
@property (assign,getter=isAudioPlaybackAllowed,nonatomic) BOOL audioPlaybackAllowed;                                                               //@synthesize audioPlaybackAllowed=_audioPlaybackAllowed - In the implementation block
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded;                                                                         //@synthesize contentOccluded=_contentOccluded - In the implementation block
@property (nonatomic,readonly) long long contentState; 
@property (assign,nonatomic) BOOL preventsDisplaySleepDuringPreviewVideoPlayback;                                                                   //@synthesize preventsDisplaySleepDuringPreviewVideoPlayback=_preventsDisplaySleepDuringPreviewVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL delaysVideoPlayback;                                                                                              //@synthesize delaysVideoPlayback=_delaysVideoPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(void)dealloc;
-(id<HBUITopShelfParadeBackgroundViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfParadeBackgroundViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(id)_stateMachine;
-(void)_reset:(BOOL)arg1 ;
-(long long)contentState;
-(id<HBUITopShelfParadeItem>)paradeItem;
-(void)setParadeItem:(id<HBUITopShelfParadeItem>)arg1 ;
-(void)setContentOccluded:(BOOL)arg1 ;
-(BOOL)isContentOccluded;
-(void)setAudioPlaybackAllowed:(BOOL)arg1 ;
-(void)setDelaysVideoPlayback:(BOOL)arg1 ;
-(void)setIsCenterViewController:(BOOL)arg1 ;
-(void)setPreventsDisplaySleepDuringPreviewVideoPlayback:(BOOL)arg1 ;
-(void)_createStateMachine;
-(void)_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)_handleInterruptionNotification:(id)arg1 ;
-(void)_handleSecondaryAudioNotification:(id)arg1 ;
-(void)_handleDidBecomeActiveNotification:(id)arg1 ;
-(id)_bumperCinemagraphPlayer;
-(id)_previewVideoPlayer;
-(void)_notifyDelegateContentStateDidChange;
-(void)_scheduleBeforePreviewVideoTimer;
-(void)_setBeforePreviewVideoTimer:(id)arg1 ;
-(void)_schedulePreviewVideoTimeoutTimer;
-(void)_notifyDelegateDidFinish;
-(void)_setPreviewVideoTimeoutTimer:(id)arg1 ;
-(void)_setBumperContentViewsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updatePreviewVideoPlayerVolume:(BOOL)arg1 ;
-(BOOL)_shouldPlayAudio;
-(void)_scheduleAfterPreviewVideoTimer;
-(void)_setAfterPreviewVideoTimer:(id)arg1 ;
-(id)_bumperImageView;
-(id)_bumperCinemagraphView;
-(void)_setBumperImageProxy:(id)arg1 ;
-(BOOL)isCenterViewController;
-(BOOL)isAudioPlaybackAllowed;
-(BOOL)preventsDisplaySleepDuringPreviewVideoPlayback;
-(BOOL)delaysVideoPlayback;
-(id)_previewVideoView;
-(HBUIPlayerVolumeAnimator *)previewVideoVolumeAnimator;
-(id)_bumperImageProxy;
-(id)_beforePreviewVideoTimer;
-(id)_previewVideoTimeoutTimer;
-(id)_afterPreviewVideoTimer;
@end

