/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class AVPlayerController, AVDelegateManager, AVKeyValueObserverCollection;

@interface AVPlaybackControlsViewController : UIViewController {

	BOOL _playing;
	BOOL _scrubberEnabled;
	BOOL _playPauseButtonEnabled;
	BOOL _showsStreamingControls;
	BOOL _showsLoadingIndicator;
	BOOL _viewHasAppeared;
	float _playbackRate;
	AVPlayerController* _playerController;
	AVDelegateManager* _delegateManager;
	AVKeyValueObserverCollection* _keyValueObservers;

}

@property (readonly) AVKeyValueObserverCollection * keyValueObservers;                                 //@synthesize keyValueObservers=_keyValueObservers - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                                     //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                    //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) AVDelegateManager * delegateManager;                                      //@synthesize delegateManager=_delegateManager - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                            //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float playbackRate;                                                       //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,getter=isScrubberEnabled,nonatomic) BOOL scrubberEnabled;                            //@synthesize scrubberEnabled=_scrubberEnabled - In the implementation block
@property (assign,getter=isPlayPauseButtonEnabled,nonatomic) BOOL playPauseButtonEnabled;              //@synthesize playPauseButtonEnabled=_playPauseButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsStreamingControls;                                              //@synthesize showsStreamingControls=_showsStreamingControls - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                               //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (getter=areControlsVisible,nonatomic,readonly) BOOL controlsVisible; 
-(void)dealloc;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)viewDidLoad;
-(BOOL)isPlaying;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)_beginObservations;
-(void)_endObservations;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)upToNextNavigationMode;
-(void)downToNextNavigationMode;
-(void)skipToNextFrame;
-(void)skipToPreviousFrame;
-(void)_didChangePlayerControllerFrom:(id)arg1 to:(id)arg2 ;
-(void)didChangePlayerController;
-(BOOL)forwardMethodToPlayerViewController:(SEL)arg1 sender:(id)arg2 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)isScrubberEnabled;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(BOOL)isPlayPauseButtonEnabled;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(BOOL)showsStreamingControls;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(AVKeyValueObserverCollection *)keyValueObservers;
-(BOOL)viewHasAppeared;
-(void)setViewHasAppeared:(BOOL)arg1 ;
@end
