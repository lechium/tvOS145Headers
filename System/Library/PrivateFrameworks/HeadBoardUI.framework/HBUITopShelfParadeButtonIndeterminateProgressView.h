/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HBUITopShelfParadeButtonIndeterminateProgressView : UIView {

	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)stopAnimating;
-(void)startAnimating;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)isAnimating;
-(CGRect)_contentRect;
-(void)_removeRotationAnimation;
-(void)_addRotationAnimationIfNeeded;
@end
