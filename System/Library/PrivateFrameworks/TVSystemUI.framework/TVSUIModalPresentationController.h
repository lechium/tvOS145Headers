/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface TVSUIModalPresentationController : UIPresentationController {

	UIVisualEffectView* _visualEffectView;
	long long _blurStyle;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) long long blurStyle;                                //@synthesize blurStyle=_blurStyle - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(UIVisualEffectView *)visualEffectView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(long long)arg3 ;
-(void)dismissalTransitionWillBegin;
-(long long)blurStyle;
-(void)_configureSubviews;
-(void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2 ;
@end

