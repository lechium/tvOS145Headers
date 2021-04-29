/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVMediaController.h>

@protocol TVMediaControllerDelegate;
@class TVMediaInfo, UIImage, UIImageView, TVImageProxy, _TVPlayer, UIViewController;

@interface TVBackgroundMediaViewController : UIViewController <TVMediaController> {

	struct {
		BOOL hasCoverImageDidChange;
		BOOL hasDidFinishPlayback;
		BOOL hasStateDidChange;
		BOOL hasShouldShowStillAfterStoppingForReason;
	}  _delegateFlags;
	BOOL _playbackEnabled;
	BOOL _showsVideoControls;
	BOOL _shouldZoomWhenTransitioningToBackground;
	TVMediaInfo* _mediaInfo;
	id<TVMediaControllerDelegate> _delegate;
	long long _state;
	UIImageView* _backgroundImageView;
	TVImageProxy* _imageProxy;
	UIImage* _backgroundImage;
	_TVPlayer* _player;
	UIViewController* _playbackViewController;
	long long _mediaControllerState;

}

@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundImageView;                        //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) TVImageProxy * imageProxy;                                //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,readonly) _TVPlayer * player;                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UIViewController * playbackViewController;                //@synthesize playbackViewController=_playbackViewController - In the implementation block
@property (assign,nonatomic) long long mediaControllerState;                             //@synthesize mediaControllerState=_mediaControllerState - In the implementation block
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled;              //@synthesize playbackEnabled=_playbackEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsVideoControls;                                    //@synthesize showsVideoControls=_showsVideoControls - In the implementation block
@property (nonatomic,copy) TVMediaInfo * mediaInfo;                                      //@synthesize mediaInfo=_mediaInfo - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground;               //@synthesize shouldZoomWhenTransitioningToBackground=_shouldZoomWhenTransitioningToBackground - In the implementation block
@property (nonatomic,readonly) UIImage * coverImage; 
+(id)_makePlayerViewControllerWithPlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TVMediaControllerDelegate>)delegate;
-(void)setDelegate:(id<TVMediaControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(_TVPlayer *)player;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)viewDidLoad;
-(void)play;
-(void)_resetTimers;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(TVImageProxy *)imageProxy;
-(UIImageView *)backgroundImageView;
-(void)setPlaybackEnabled:(BOOL)arg1 ;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(UIImage *)coverImage;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TVMediaInfo *)mediaInfo;
-(void)setMediaInfo:(TVMediaInfo *)arg1 ;
-(UIViewController *)playbackViewController;
-(void)processMediaControllerEvent:(long long)arg1 ;
-(void)_mediaControllerStateWillChange;
-(void)_mediaControllerStateDidChange;
-(long long)mediaControllerState;
-(long long)_processInitialStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToLoadingStateForEvent:(long long)arg1 ;
-(long long)_processLoadingStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToImageStateForEvent:(long long)arg1 ;
-(long long)_processShowImageStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToPlayingStateMediaForEvent:(long long)arg1 ;
-(long long)_processPlayingMediaStateForEvent:(long long)arg1 ;
-(long long)_processPlayAudioStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToVideoStateForEvent:(long long)arg1 ;
-(long long)_processPlayVideoStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToForegroundVideoStateForEvent:(long long)arg1 ;
-(long long)_processTransitionToPlayVideoForegroundStateForEvent:(long long)arg1 ;
-(void)setMediaControllerState:(long long)arg1 ;
-(id)_tvPlayingUIViewController;
-(void)_transitionToPlayingMediaIfNeeded;
-(BOOL)isPlaybackEnabled;
-(void)_processMediaInfo;
-(void)_playMedia;
-(void)_setImageProxy:(id)arg1 ;
-(BOOL)shouldZoomWhenTransitioningToBackground;
@end

