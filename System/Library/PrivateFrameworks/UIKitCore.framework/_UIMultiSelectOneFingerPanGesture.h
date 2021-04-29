/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIMultiSelectOneFingerPanGestureDelegate;
@class UITouch, UIEvent;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer {

	UITouch* _activeTouch;
	UIEvent* _activeEvent;
	id<_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;

}

@property (nonatomic,readonly) UITouch * activeTouch;                                                                //@synthesize activeTouch=_activeTouch - In the implementation block
@property (nonatomic,readonly) UIEvent * activeEvent;                                                                //@synthesize activeEvent=_activeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;              //@synthesize oneFingerPanDelegate=_oneFingerPanDelegate - In the implementation block
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)_preventsDragInteractionGestures;
-(UITouch *)activeTouch;
-(UIEvent *)activeEvent;
-(id<_UIMultiSelectOneFingerPanGestureDelegate>)oneFingerPanDelegate;
-(void)setOneFingerPanDelegate:(id<_UIMultiSelectOneFingerPanGestureDelegate>)arg1 ;
@end

