/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarImageView, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {

	_UIStatusBarImageView* _bodyView;
	_UIStatusBarImageView* _shackleView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) _UIStatusBarImageView * bodyView;                                       //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * shackleView;                                    //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setBodyView:(_UIStatusBarImageView *)arg1 ;
-(_UIStatusBarImageView *)bodyView;
-(void)animateUnlockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(_UIStatusBarImageView *)shackleView;
-(void)setShackleView:(_UIStatusBarImageView *)arg1 ;
-(void)resetLock;
-(void)jiggleWithCompletionBlock:(/*^block*/id)arg1 ;
@end

