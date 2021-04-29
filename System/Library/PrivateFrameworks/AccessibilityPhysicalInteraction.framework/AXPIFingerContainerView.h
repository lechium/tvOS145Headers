/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXPIFingerAppearanceDelegate;
@class NSMutableArray, UIView, AXPIPinchChainView;

@interface AXPIFingerContainerView : UIView {

	NSMutableArray* _fingerViews;
	UIView* _viewForAnimatingAlpha;
	AXPIPinchChainView* _pinchChainView;
	BOOL _shouldAnimatePress;
	BOOL _shouldSuppressFingerVisuals;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic) BOOL shouldAnimatePress;                                                 //@synthesize shouldAnimatePress=_shouldAnimatePress - In the implementation block
@property (nonatomic,readonly) BOOL isPinchChainVisible; 
@property (assign,nonatomic) BOOL shouldSuppressFingerVisuals;                                        //@synthesize shouldSuppressFingerVisuals=_shouldSuppressFingerVisuals - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(BOOL)isPinchChainVisible;
-(void)clearAllFingersAnimated:(BOOL)arg1 endPointForAnimation:(CGPoint)arg2 ;
-(void)showFingerModels:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 shouldShowPinchChain:(BOOL)arg4 ;
-(void)setShouldAnimatePress:(BOOL)arg1 ;
-(void)updateWithFingerModel:(id)arg1 forFingerAtIndex:(unsigned long long)arg2 ;
-(void)cancelCircularProgressAnimation;
-(void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfFingerAtPoint:(CGPoint)arg1 ;
-(void)setShouldSuppressFingerVisuals:(BOOL)arg1 ;
-(CGRect)rectForFingersAtPoints:(id)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(BOOL)shouldAnimatePress;
-(void)_updatePinchChainAppearance;
-(BOOL)shouldSuppressFingerVisuals;
@end

