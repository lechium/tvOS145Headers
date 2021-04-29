/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPictureViewControllerDelegate.h>
#import <libobjc.A.dylib/PGPictureInPictureProxyDelegate.h>
#import <libobjc.A.dylib/PBSPictureInPictureControllerObserver.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureContentSource;
@class AVPlayerController, AVPictureInPictureViewController, NSUUID, PGPictureInPictureProxy, AVObservationController, NSString;

@interface AVPictureInPicturePlatformAdapter : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, PBSPictureInPictureControllerObserver, AVPictureInPictureControlsStyleAppearance> {

	BOOL _allowsPictureInPicturePlayback;
	BOOL _alwaysStartsAutomaticallyWhenEnteringBackground;
	BOOL _canStartAutomaticallyWhenEnteringBackground;
	BOOL _requiresLinearPlayback;
	BOOL _microphoneEnabled;
	BOOL _managesWiredSecondScreenPlayback;
	BOOL _anyPictureInPictureActive;
	BOOL _shouldUnmuteAudioWhenPictureInPictureStops;
	BOOL _focused;
	BOOL _routingVideoToHostedWindow;
	id<AVPictureInPicturePlatformAdapterDelegate> _delegate;
	AVPlayerController* _playerController;
	long long _controlsStyle;
	AVPictureInPictureViewController* _pictureInPictureViewController;
	long long _status;
	NSUUID* _adapterIdentifier;
	PGPictureInPictureProxy* _pegasusProxy;
	id<AVPictureInPictureContentSource> _source;
	AVObservationController* _observationController;
	CGRect _videoRectInScreen;

}

@property (nonatomic,readonly) NSUUID * adapterIdentifier;                                                               //@synthesize adapterIdentifier=_adapterIdentifier - In the implementation block
@property (nonatomic,readonly) PGPictureInPictureProxy * pegasusProxy;                                                   //@synthesize pegasusProxy=_pegasusProxy - In the implementation block
@property (assign,nonatomic) CGRect videoRectInScreen;                                                                   //@synthesize videoRectInScreen=_videoRectInScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldUnmuteAudioWhenPictureInPictureStops;                                            //@synthesize shouldUnmuteAudioWhenPictureInPictureStops=_shouldUnmuteAudioWhenPictureInPictureStops - In the implementation block
@property (assign,getter=isAnyPictureInPictureActive,nonatomic) BOOL anyPictureInPictureActive;                          //@synthesize anyPictureInPictureActive=_anyPictureInPictureActive - In the implementation block
@property (assign,getter=isFocused,nonatomic) BOOL focused;                                                              //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureContentSource> source;                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) long long status;                                                                           //@synthesize status=_status - In the implementation block
@property (assign,getter=isRoutingVideoToHostedWindow,nonatomic) BOOL routingVideoToHostedWindow;                        //@synthesize routingVideoToHostedWindow=_routingVideoToHostedWindow - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPicturePlatformAdapterDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                        //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (getter=isSystemPictureInPicturePossible,nonatomic,readonly) BOOL systemPictureInPicturePossible; 
@property (assign,nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground;                                       //@synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;                                           //@synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) long long controlsStyle;                                                                    //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                          //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,nonatomic) BOOL managesWiredSecondScreenPlayback;                                                      //@synthesize managesWiredSecondScreenPlayback=_managesWiredSecondScreenPlayback - In the implementation block
@property (nonatomic,readonly) BOOL canAnimatePictureInPictureTransition; 
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController;                        //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureSupported;
+(BOOL)showsDebugBorders;
+(void)setShouldUnsetMixabilityWhenExitingPIP:(BOOL)arg1 ;
+(BOOL)shouldUnsetMixabilityWhenExitingPIP;
+(id)activeAdapters;
+(id)playingAdapters;
+(id)startPictureInPictureButtonImageName;
+(id)stopPictureInPictureButtonImageName;
+(id)imageSymbolConfiguration;
+(BOOL)prohibitsUnmutingWhilePIPIsActive;
-(void)dealloc;
-(id<AVPictureInPicturePlatformAdapterDelegate>)delegate;
-(void)setDelegate:(id<AVPictureInPicturePlatformAdapterDelegate>)arg1 ;
-(id<AVPictureInPictureContentSource>)source;
-(void)setSource:(id<AVPictureInPictureContentSource>)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(BOOL)isFocused;
-(void)setFocused:(BOOL)arg1 ;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(BOOL)isRoutingVideoToHostedWindow;
-(long long)controlsStyle;
-(BOOL)requiresLinearPlayback;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setRoutingVideoToHostedWindow:(BOOL)arg1 ;
-(long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1 ;
-(CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3 ;
-(void)pictureInPictureProxy:(id)arg1 didReceivePlaybackCommand:(id)arg2 ;
-(void)startPictureInPicture;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)setControlsStyle:(long long)arg1 ;
-(AVObservationController *)observationController;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)allowsPictureInPicturePlayback;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void)_setStatusAndNotifyDelegateIfNeeded:(long long)arg1 ;
-(void)_updateStatus;
-(void)_setRoutingVideoToHostedWindow:(BOOL)arg1 pictureInPictureViewController:(id)arg2 source:(id)arg3 ;
-(void)_updateStatusUsingProposedStatus:(long long)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)setCanStartAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(BOOL)isMicrophoneEnabled;
-(BOOL)canStartAutomaticallyWhenEnteringBackground;
-(void)pictureInPictureControllerDidActivatePictureInPicture:(id)arg1 ;
-(void)pictureInPictureControllerDidDestroyPictureInPicture:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 didChangeFocusState:(BOOL)arg2 ;
-(void)pictureInPictureViewControllerViewDidAppear:(id)arg1 ;
-(void)pictureInPictureViewControllerViewWillDisappear:(id)arg1 ;
-(BOOL)canAnimatePictureInPictureTransition;
-(BOOL)isSystemPictureInPicturePossible;
-(void)setAlwaysStartsAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(void)updateLayoutDependentBehaviors;
-(void)_updatePictureInPictureShouldStartWhenEnteringBackground;
-(void)_updateProxyPlaybackState;
-(void)_updateSessionMixabilityForPIPStart;
-(void)_updateSessionMixabilityForPIPStop;
-(void)_addMixabilityOption;
-(void)_removeMixabilityOption;
-(BOOL)alwaysStartsAutomaticallyWhenEnteringBackground;
-(BOOL)managesWiredSecondScreenPlayback;
-(void)setManagesWiredSecondScreenPlayback:(BOOL)arg1 ;
-(BOOL)isAnyPictureInPictureActive;
-(void)setAnyPictureInPictureActive:(BOOL)arg1 ;
-(NSUUID *)adapterIdentifier;
-(PGPictureInPictureProxy *)pegasusProxy;
-(CGRect)videoRectInScreen;
-(void)setVideoRectInScreen:(CGRect)arg1 ;
-(BOOL)shouldUnmuteAudioWhenPictureInPictureStops;
-(void)setShouldUnmuteAudioWhenPictureInPictureStops:(BOOL)arg1 ;
@end

