/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, NSString;

@interface _TVInlinePlayerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController* _playerViewController;
	CGRect _inlineFrame;

}

@property (nonatomic,readonly) CGRect inlineFrame;                                   //@synthesize inlineFrame=_inlineFrame - In the implementation block
@property (nonatomic,readonly) UIViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIViewController *)playerViewController;
-(CGRect)inlineFrame;
-(id)initWithInlineFrame:(CGRect)arg1 playerViewController:(id)arg2 ;
@end

