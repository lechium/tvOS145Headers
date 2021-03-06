/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAccessibilityHUDGestureDelegate <NSObject>
@optional
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;

@required
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2;

@end

