/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
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
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@required
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(double)percentComplete;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(id)viewControllerForKey:(id)arg1;
-(UIView *)containerView;
-(id)viewForKey:(id)arg1;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(long long)completionCurve;
-(BOOL)initiallyInteractive;
-(double)completionVelocity;

@end

