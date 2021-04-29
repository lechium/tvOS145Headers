/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UISpringTimingParameters, NSString;

@interface AVSlidewaysTransition : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISpringTimingParameters* _springTimingParameters;
	BOOL _shouldMovePresentingViewInParallel;
	long long _transitionDirection;

}

@property (assign,nonatomic) long long transitionDirection;                        //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldMovePresentingViewInParallel;              //@synthesize shouldMovePresentingViewInParallel=_shouldMovePresentingViewInParallel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)springTimingParameters;
+(id)viewPropertyAnimatorWithParameters:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)prepareViewController:(id)arg1 forTransitionInDirection:(long long)arg2 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(long long)transitionDirection;
-(void)setTransitionDirection:(long long)arg1 ;
-(BOOL)shouldMovePresentingViewInParallel;
-(void)setShouldMovePresentingViewInParallel:(BOOL)arg1 ;
@end

