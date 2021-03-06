/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBAnalyticsDispatcher : NSObject
+(id)currentInputMode;
+(id)preferredEventName:(id)arg1 ;
+(void)globeKeyEducationShown:(double)arg1 ;
+(id)allowedValuesForTextEditingPreferredFieldName:(id)arg1 ;
+(void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(CGPoint)arg4 touchUpPosition:(CGPoint)arg5 ;
+(id)allowedValuesForType:(id)arg1 ;
+(void)deleteKeySelected:(int)arg1 ;
+(void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2 ;
+(void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(CGPoint)arg3 ;
+(void)floatingKeyboardMoved:(id)arg1 toPosition:(CGPoint)arg2 touchPosition:(CGPoint)arg3 ;
+(void)candidateViewExtended:(id)arg1 direction:(id)arg2 ;
+(void)globeKeyLongPress;
+(void)globeKeySelected;
+(void)handwritingResized:(id)arg1 ;
+(void)sessionAnalyticsEnded:(id)arg1 ;
+(void)editingSessionEnded:(unsigned long long)arg1 ;
+(void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(BOOL)arg2 ;
+(void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2 ;
+(void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3 ;
+(void)keyplaneSwitched:(int)arg1 ;
@end

