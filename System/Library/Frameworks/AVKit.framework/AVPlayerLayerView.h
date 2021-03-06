/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVFocusProxyViewDelegateProtocol.h>

@class AVPlayerController, UITapGestureRecognizer, AVPlayerLayer, UIMotionEffectGroup, UIImageView, NSString, NSDictionary;

@interface AVPlayerLayerView : UIView <AVFocusProxyViewDelegateProtocol> {

	AVPlayerController* _playerController;
	UITapGestureRecognizer* _selectGestureRecognizer;
	BOOL _acceptsFocus;
	AVPlayerLayer* _playerLayer;
	/*^block*/id _selectionAction;
	UIMotionEffectGroup* _stackMotionEffects;
	UIMotionEffectGroup* _highlightMotionEffects;
	UIImageView* _highlightView;

}

@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled; 
@property (nonatomic,retain) UIMotionEffectGroup * stackMotionEffects;                        //@synthesize stackMotionEffects=_stackMotionEffects - In the implementation block
@property (nonatomic,retain) UIMotionEffectGroup * highlightMotionEffects;                    //@synthesize highlightMotionEffects=_highlightMotionEffects - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * selectGestureRecognizer; 
@property (nonatomic,retain) UIImageView * highlightView;                                     //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic) BOOL acceptsFocus;                                               //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                     //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,copy) id selectionAction;                                                //@synthesize selectionAction=_selectionAction - In the implementation block
+(Class)layerClass;
+(id)highlightViewWithSize:(CGSize)arg1 ;
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoRect;
+(id)keyPathsForValuesAffectingVideoScaled;
-(void)dealloc;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)highlightView;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)didReceiveFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didLoseFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSString *)videoGravity;
-(BOOL)isReadyForDisplay;
-(CGRect)videoRect;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(UITapGestureRecognizer *)selectGestureRecognizer;
-(void)didClickSelect:(id)arg1 ;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(void)_installMotionEffects;
-(void)_uninstallMotionEffects;
-(BOOL)acceptsFocus;
-(id)selectionAction;
-(void)setSelectionAction:(id)arg1 ;
-(UIMotionEffectGroup *)stackMotionEffects;
-(void)setStackMotionEffects:(UIMotionEffectGroup *)arg1 ;
-(UIMotionEffectGroup *)highlightMotionEffects;
-(void)setHighlightMotionEffects:(UIMotionEffectGroup *)arg1 ;
-(void)setHighlightView:(UIImageView *)arg1 ;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
@end

