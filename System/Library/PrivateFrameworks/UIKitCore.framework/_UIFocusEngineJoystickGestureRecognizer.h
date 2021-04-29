/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer {

	CGPoint _stickPosition;
	CGPoint _previousStickPosition;

}

@property (nonatomic,readonly) CGPoint stickPosition;                      //@synthesize stickPosition=_stickPosition - In the implementation block
@property (nonatomic,readonly) CGPoint previousStickPosition;              //@synthesize previousStickPosition=_previousStickPosition - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(CGPoint)stickPosition;
-(CGPoint)previousStickPosition;
@end

