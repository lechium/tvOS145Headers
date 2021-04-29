/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/OKAudioPlaylistDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OKClickWheelViewDelegate;
@class OFUIView, OFUIButton, UIGestureRecognizer, OKCircleGestureRecognizer, OKPresentationViewAllGestureRecognizer, CAShapeLayer, UIImageView, UILabel, NSOperationQueue, OKAudioPlaylist, NSString;

@interface OKClickWheelView : OFUIView <UIGestureRecognizerDelegate, OKAudioPlaylistDelegate, CAAnimationDelegate> {

	OFUIView* _containerView;
	OFUIButton* _playButton;
	BOOL _isAnimating;
	UIGestureRecognizer* _tapGestureRecognizer;
	OKCircleGestureRecognizer* _circleGestureRecognizer;
	OKPresentationViewAllGestureRecognizer* _allGestureRecognizer;
	BOOL _delegateRespondToDidCircleGesture;
	BOOL _delegateRespondWillAppear;
	BOOL _delegateRespondWillDisappear;
	BOOL _delegateRespondShouldAppear;
	CAShapeLayer* _volumeLayer;
	CAShapeLayer* _progressLayer;
	OFUIView* _musicInformationView;
	UIImageView* _thumbnailMusic;
	UILabel* _titleMusic;
	UILabel* _artisteName;
	UILabel* _beatsSentence;
	UIImageView* _chevronView;
	NSOperationQueue* _fetchInformationsQueue;
	BOOL _isInformationLoaded;
	OFUIButton* _closeButton;
	BOOL _wantsProgress;
	id<OKClickWheelViewDelegate> _delegate;
	double _volume;
	double _progress;
	OKAudioPlaylist* _audioPlaylist;

}

@property (assign,nonatomic) BOOL wantsProgress;                                 //@synthesize wantsProgress=_wantsProgress - In the implementation block
@property (assign,nonatomic) id<OKClickWheelViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double volume;                                      //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) OKAudioPlaylist * audioPlaylist;                    //@synthesize audioPlaylist=_audioPlaylist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<OKClickWheelViewDelegate>)delegate;
-(void)setDelegate:(id<OKClickWheelViewDelegate>)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)wantsProgress;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)show;
-(void)hide;
-(void)buttonPressed:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(BOOL)isPresented;
-(OKAudioPlaylist *)audioPlaylist;
-(id)initWithContainerView:(id)arg1 andAuthoringGuidelines:(id)arg2 ;
-(void)setAudioPlaylist:(OKAudioPlaylist *)arg1 ;
-(void)audioStartedPlayingWithAVAsset:(id)arg1 ;
-(void)audioFinishedPlayingWithAVAsset:(id)arg1 ;
-(void)initGesture;
-(void)initButtons;
-(void)initAlbumInformationView;
-(void)_setupLayerShadowForLabel:(id)arg1 ;
-(void)closeButtonPressed:(id)arg1 ;
-(void)notifyProgress:(id)arg1 ;
-(void)handleAllGestures:(id)arg1 ;
-(void)updateMusicInformation:(id)arg1 ;
-(id)animationForKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 timmingFunctionName:(id)arg5 delegate:(id)arg6 ;
-(void)activateProgress:(id)arg1 ;
@end

