/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HBUITopShelfContentViewControllerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/HBUITopShelfContentViewController.h>
#import <libobjc.A.dylib/HBUILaunchAnimationEnvironment.h>

@protocol HBUITopShelfContentViewControllerDelegate, HBUITopShelfContentViewController;
@class HBUITopShelfAppleLogoView, HBUITopShelfSwipeUpAffordanceView, UIViewController, HBUITopShelfHostAnimationTransaction, NSString;

@interface HBUITopShelfHostViewController : UIViewController <HBUITopShelfContentViewControllerDelegate, BSTransactionObserver, HBUITopShelfContentViewController, HBUILaunchAnimationEnvironment> {

	BOOL _contentOccluded;
	BOOL _focused;
	id<HBUITopShelfContentViewControllerDelegate> _delegate;
	unsigned long long _contentStyle;
	HBUITopShelfAppleLogoView* _appleLogoView;
	HBUITopShelfSwipeUpAffordanceView* _swipeUpAffordanceView;
	UIViewController*<HBUITopShelfContentViewController> _contentViewController;
	UIViewController*<HBUITopShelfContentViewController> _queuedContentViewController;
	long long _queuedAnimationDirection;
	HBUITopShelfHostAnimationTransaction* _animationTransaction;

}

@property (nonatomic,readonly) HBUITopShelfAppleLogoView * appleLogoView;                                                   //@synthesize appleLogoView=_appleLogoView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfSwipeUpAffordanceView * swipeUpAffordanceView;                                   //@synthesize swipeUpAffordanceView=_swipeUpAffordanceView - In the implementation block
@property (nonatomic,retain) UIViewController*<HBUITopShelfContentViewController> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<HBUITopShelfContentViewController> queuedContentViewController;              //@synthesize queuedContentViewController=_queuedContentViewController - In the implementation block
@property (assign,nonatomic) long long queuedAnimationDirection;                                                            //@synthesize queuedAnimationDirection=_queuedAnimationDirection - In the implementation block
@property (nonatomic,retain) HBUITopShelfHostAnimationTransaction * animationTransaction;                                   //@synthesize animationTransaction=_animationTransaction - In the implementation block
@property (assign,getter=isFocused,nonatomic) BOOL focused;                                                                 //@synthesize focused=_focused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HBUITopShelfContentViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded;                                                 //@synthesize contentOccluded=_contentOccluded - In the implementation block
@property (nonatomic,readonly) unsigned long long contentStyle;                                                             //@synthesize contentStyle=_contentStyle - In the implementation block
-(NSString *)debugDescription;
-(void)dealloc;
-(id<HBUITopShelfContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfContentViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isFocused;
-(UIViewController*<HBUITopShelfContentViewController>)contentViewController;
-(void)setContentViewController:(UIViewController*<HBUITopShelfContentViewController>)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setFocused:(BOOL)arg1 ;
-(id)launchAnimationsWithContext:(id)arg1 ;
-(id)nextLaunchAnimationEnvironments;
-(void)_updateContentViewControllerContentOccluded;
-(void)_updateAppleLogoViewHidden;
-(void)_updateSwipeUpAffordanceViewHidden;
-(unsigned long long)contentStyle;
-(void)_setContentStyle:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)topShelfContentViewController:(id)arg1 contentStyleDidChange:(unsigned long long)arg2 ;
-(void)setContentOccluded:(BOOL)arg1 ;
-(void)setContentViewController:(id)arg1 withAnimationDirection:(long long)arg2 ;
-(void)topShelfContentViewController:(id)arg1 willScrollToFirstItem:(BOOL)arg2 ;
-(void)_setFocused:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isContentOccluded;
-(HBUITopShelfAppleLogoView *)appleLogoView;
-(HBUITopShelfSwipeUpAffordanceView *)swipeUpAffordanceView;
-(UIViewController*<HBUITopShelfContentViewController>)queuedContentViewController;
-(void)setQueuedContentViewController:(UIViewController*<HBUITopShelfContentViewController>)arg1 ;
-(long long)queuedAnimationDirection;
-(void)setQueuedAnimationDirection:(long long)arg1 ;
-(HBUITopShelfHostAnimationTransaction *)animationTransaction;
-(void)setAnimationTransaction:(HBUITopShelfHostAnimationTransaction *)arg1 ;
@end

