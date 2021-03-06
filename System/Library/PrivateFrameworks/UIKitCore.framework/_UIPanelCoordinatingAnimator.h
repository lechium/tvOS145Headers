/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPropertyAnimator.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>
#import <UIKit/UIViewControllerTransitionCoordinatorContext.h>

@class UIView, NSMutableArray, NSString;

@interface _UIPanelCoordinatingAnimator : UIViewPropertyAnimator <UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext> {

	BOOL _wasCancelled;
	BOOL _isInStartAnimation;
	NSMutableArray* _clientCompletions;
	NSMutableArray* _lateAnimations;
	UIView* _containerView;

}

@property (assign,nonatomic,__weak) UIView * containerView;                        //@synthesize containerView=_containerView - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCancelled;
-(double)percentComplete;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(UIView *)containerView;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)startAnimation;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)completionCurve;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)initiallyInteractive;
-(void)_runCompletions:(long long)arg1 finished:(BOOL)arg2 ;
-(void)_sendPanelCoordinationCompletions;
-(double)completionVelocity;
@end

