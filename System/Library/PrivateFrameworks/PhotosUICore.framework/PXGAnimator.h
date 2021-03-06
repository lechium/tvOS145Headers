/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGAnimationDataStore, PXGAnimatorLayout, PXGIndexSetArray, PXGSpriteDataStore;

@interface PXGAnimator : NSObject {

	PXGAnimationDataStore* _animationDataStore;
	PXGAnimatorLayout* _animatorLayout;
	double _lastUpdateTime;
	unsigned _numberOfProlongatedSprites;
	PXGIndexSetArray* _spriteIndexesByGroupIndex;
	PXGSpriteDataStore* _doubleSidedSpriteDataStore;
	PXGSpriteDataStore* _oldAnimationPresentationSpriteDataStore;
	BOOL _isSkippingAnimations;
	BOOL _animating;
	double _speed;
	long long _computeCount;
	long long _preferredFramesPerSecond;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;               //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double speed;                                    //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) long long computeCount;                        //@synthesize computeCount=_computeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCriticalAnimations; 
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(long long)preferredFramesPerSecond;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(id)_animationByAnimationIndexForAnimations:(id)arg1 ;
-(void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(CGPoint)arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id*)arg8 animationLayout:(out id*)arg9 ;
-(void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2 ;
-(BOOL)hasCriticalAnimations;
-(void)_stopAllAnimations;
-(long long)computeCount;
@end

