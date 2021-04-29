/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIView, PKSpringAnimationFactory;

@interface PKPGSVTransitionInterstitialView : UIView {

	BOOL _animated;
	unsigned long long _animationCounter;
	NSMutableArray* _completions;
	BOOL _presentingItemDirty;
	BOOL _presentedItemDirty;
	UIView* _presentingItemSnapshot;
	UIView* _presentedItemSnapshot;
	BOOL _presented;
	BOOL _invalidated;
	PKSpringAnimationFactory* _springFactory;

}

@property (nonatomic,retain) PKSpringAnimationFactory * springFactory;              //@synthesize springFactory=_springFactory - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented;                   //@synthesize presented=_presented - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;               //@synthesize invalidated=_invalidated - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isInvalidated;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)_executeCompletionHandlers:(BOOL)arg1 ;
-(id)_animationForKeyPath:(id)arg1 ;
-(void)_incrementAnimationCount;
-(void)_decrementAnimationCount;
-(id)_snapshotForView:(id)arg1 ;
-(void)_updateFrameForTargetFrame:(CGRect)arg1 animated:(BOOL)arg2 track:(BOOL)arg3 ;
-(CGRect)frameForTargetFrame:(CGRect)arg1 ;
-(id)initWithPresented:(BOOL)arg1 ;
-(void)beginTrackingExternalAnimation;
-(void)endTrackingExternalAnimation;
-(void)addPresentingItem:(id)arg1 ;
-(void)addPresentedItem:(id)arg1 ;
-(void)updateFrameForTargetFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setPresented:(BOOL)arg1 withTargetFrame:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(PKSpringAnimationFactory *)springFactory;
-(void)setSpringFactory:(PKSpringAnimationFactory *)arg1 ;
-(BOOL)isPresented;
@end

