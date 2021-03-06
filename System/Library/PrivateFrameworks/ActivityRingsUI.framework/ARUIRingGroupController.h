/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObject.h>

@class ARUIRingGroup, ARUISpriteSheet;

@interface ARUIRingGroupController : ARUIAnimatableObject {

	float _ringIconSize;
	ARUIRingGroup* _ringGroup;
	double _backingOrigin;
	double _additionalSpacingAtIndex;

}

@property (nonatomic,readonly) long long numberOfRings; 
@property (nonatomic,readonly) ARUIRingGroup * ringGroup;                  //@synthesize ringGroup=_ringGroup - In the implementation block
@property (nonatomic,retain) ARUISpriteSheet * spriteSheet; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) float emptyOpacity; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) float ringDiameter; 
@property (assign,nonatomic) float ringIconSize;                           //@synthesize ringIconSize=_ringIconSize - In the implementation block
@property (assign,nonatomic) float ringInterspacing; 
@property (assign,nonatomic) float ringThickness; 
@property (assign,nonatomic) float ringScale; 
@property (assign,nonatomic) float trackOpacity; 
@property (assign,nonatomic) float zRotation; 
@property (assign,nonatomic) double backingOrigin;                         //@synthesize backingOrigin=_backingOrigin - In the implementation block
@property (assign,nonatomic) double additionalSpacingAtIndex;              //@synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex - In the implementation block
+(id)animationTimingFunction;
+(double)defaultAnimationDuration;
+(id)ringGroupControllerConfiguredForWatchWithRingType:(long long)arg1 withIcon:(BOOL)arg2 ;
+(id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)arg1 withIcon:(BOOL)arg2 ;
-(id)init;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)zRotation;
-(void)setZRotation:(float)arg1 ;
-(ARUIRingGroup *)ringGroup;
-(void)setTrackOpacity:(float)arg1 ;
-(ARUISpriteSheet *)spriteSheet;
-(float)emptyOpacity;
-(float)trackOpacity;
-(void)setSpriteSheet:(ARUISpriteSheet *)arg1 ;
-(void)setEmptyOpacity:(float)arg1 ;
-(id)initWithNumberOfRings:(long long)arg1 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithRingGroup:(id)arg1 ;
-(long long)numberOfRings;
-(float)ringDiameter;
-(void)setRingDiameter:(float)arg1 ;
-(float)ringInterspacing;
-(void)setRingInterspacing:(float)arg1 ;
-(float)ringThickness;
-(void)setRingThickness:(float)arg1 ;
-(float)ringScale;
-(void)setRingScale:(float)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 contrastColor:(id)arg3 ofRingAtIndex:(long long)arg4 ;
-(void)setOpacity:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingInterspacing:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setRingIconPosition:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2 ;
-(float)diameterForRingAtIndex:(unsigned long long)arg1 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(/*^block*/id)arg6 ;
-(float)ringIconSize;
-(void)setRingIconSize:(float)arg1 ;
-(double)backingOrigin;
-(void)setBackingOrigin:(double)arg1 ;
-(double)additionalSpacingAtIndex;
-(void)setAdditionalSpacingAtIndex:(double)arg1 ;
-(void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setIconDotTextureOrigin:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 ;
-(void)setIconFirstFrameOrigin:(CGPoint)arg1 frameSize:(CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5 ;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)addCelebration:(id)arg1 toRingAtIndex:(long long)arg2 ;
-(void)removeCelebration:(id)arg1 fromRingAtIndex:(long long)arg2 ;
-(void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

