/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIPress, NSMutableSet;

@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer {

	UIPress* _press;
	BOOL _allowsGroupMode;
	NSMutableSet* _presses;
	BOOL _groupMode;

}

@property (assign,getter=isGroupMode,nonatomic) BOOL groupMode;              //@synthesize groupMode=_groupMode - In the implementation block
-(void)_update;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 allowsGroupMode:(BOOL)arg3 ;
-(BOOL)isGroupMode;
-(void)setGroupMode:(BOOL)arg1 ;
@end
