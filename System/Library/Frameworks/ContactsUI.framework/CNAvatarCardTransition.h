/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIPanGestureRecognizer, UIView, NSString;

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _reversed;
	BOOL _interactive;
	UIPanGestureRecognizer* _gestureRecognizer;
	id<UIViewControllerContextTransitioning> _context;
	UIView* _presentedView;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                    //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * presentedView;                                        //@synthesize presentedView=_presentedView - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (assign) BOOL reversed;                                                           //@synthesize reversed=_reversed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIViewControllerContextTransitioning>)context;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(BOOL)reversed;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)interactive;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)presentedView;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setPresentedView:(UIView *)arg1 ;
@end

