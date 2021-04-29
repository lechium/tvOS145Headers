/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(BOOL)isActive;
-(BOOL)isMinimized;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isAutomatic;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;

@end

