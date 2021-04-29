/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSTransaction.h>

@protocol HBUILaunchAnimationViewSnapshot;
@class HBUILaunchAnimationContext, HBUILaunchApplicationAnimationDescription, UIWindow, UIView, UIColor;

@interface HBUILaunchApplicationAnimationTransaction : BSTransaction {

	BOOL _needsSetup;
	id<HBUILaunchAnimationViewSnapshot> _viewSnapshot;
	HBUILaunchAnimationContext* _context;
	HBUILaunchApplicationAnimationDescription* _appIconAnimation;
	UIWindow* _animationHostWindow;
	UIView* _appIconSnapshotView;

}

@property (nonatomic,readonly) HBUILaunchAnimationContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) HBUILaunchApplicationAnimationDescription * appIconAnimation;              //@synthesize appIconAnimation=_appIconAnimation - In the implementation block
@property (nonatomic,readonly) UIWindow * animationHostWindow;                                            //@synthesize animationHostWindow=_animationHostWindow - In the implementation block
@property (nonatomic,readonly) UIView * appIconSnapshotView;                                              //@synthesize appIconSnapshotView=_appIconSnapshotView - In the implementation block
@property (nonatomic,readonly) BOOL needsSetup;                                                           //@synthesize needsSetup=_needsSetup - In the implementation block
@property (nonatomic,readonly) UIColor * animationHostWindowBackgroundColor; 
@property (nonatomic,readonly) id<HBUILaunchAnimationViewSnapshot> viewSnapshot;                          //@synthesize viewSnapshot=_viewSnapshot - In the implementation block
+(id)animationTransactionWithContext:(id)arg1 appIconAnimation:(id)arg2 ;
-(id)debugDescription;
-(HBUILaunchAnimationContext *)context;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(BOOL)needsSetup;
-(id<HBUILaunchAnimationViewSnapshot>)viewSnapshot;
-(HBUILaunchApplicationAnimationDescription *)appIconAnimation;
-(id)initWithContext:(id)arg1 appIconAnimation:(id)arg2 ;
-(UIColor *)animationHostWindowBackgroundColor;
-(void)willInterruptTransaction:(id)arg1 ;
-(UIWindow *)animationHostWindow;
-(UIView *)appIconSnapshotView;
@end

