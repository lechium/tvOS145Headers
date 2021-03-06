/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewProvidingDelegate.h>

@protocol SUICFlamesViewProviding, SUICFlamesViewDelegate;
@class UIView, UIImage, UIColor, NSString;

@interface SUICFlamesView : UIView <SUICFlamesViewProvidingDelegate> {

	UIView*<SUICFlamesViewProviding> _flamesView;
	id<SUICFlamesViewDelegate> _flamesDelegate;

}

@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewDelegate> flamesDelegate;              //@synthesize flamesDelegate=_flamesDelegate - In the implementation block
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) BOOL showAura; 
@property (assign,nonatomic) BOOL freezesAura; 
@property (assign,nonatomic) BOOL reduceFrameRate; 
@property (assign,nonatomic) BOOL reduceThinkingFramerate; 
@property (assign,nonatomic) CGRect activeFrame; 
@property (nonatomic,retain) UIImage * overlayImage; 
@property (nonatomic,retain) UIColor * dictationColor; 
@property (assign,nonatomic) BOOL renderInBackground; 
@property (assign,nonatomic) BOOL paused; 
@property (assign,nonatomic) double horizontalScaleFactor; 
@property (assign,nonatomic) BOOL accelerateTransitions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isMetalAvailable;
-(void)setDelegate:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)mode;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3 ;
-(void)setRenderInBackground:(BOOL)arg1 ;
-(void)setActiveFrame:(CGRect)arg1 ;
-(BOOL)isRenderingEnabled;
-(void)resetAndReinitialize:(BOOL)arg1 ;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id<SUICFlamesViewDelegate>)flamesDelegate;
-(void)flamesViewAuraDidDisplay:(id)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(void)prewarmShadersForCurrentMode;
-(void)fadeOutCurrentAura;
-(void)setFlamesDelegate:(id<SUICFlamesViewDelegate>)arg1 ;
-(BOOL)showAura;
-(void)setShowAura:(BOOL)arg1 ;
-(BOOL)freezesAura;
-(void)setFreezesAura:(BOOL)arg1 ;
-(BOOL)reduceFrameRate;
-(void)setReduceFrameRate:(BOOL)arg1 ;
-(BOOL)reduceThinkingFramerate;
-(void)setReduceThinkingFramerate:(BOOL)arg1 ;
-(CGRect)activeFrame;
-(UIColor *)dictationColor;
-(void)setDictationColor:(UIColor *)arg1 ;
-(BOOL)renderInBackground;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(BOOL)accelerateTransitions;
-(void)setAccelerateTransitions:(BOOL)arg1 ;
-(void)resetAndReinitializeMetal:(BOOL)arg1 ;
@end

