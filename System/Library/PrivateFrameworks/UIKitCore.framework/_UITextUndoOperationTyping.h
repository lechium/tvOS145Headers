/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : _UIUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(void)undoRedo;
-(BOOL)supportsCoalescing;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(BOOL)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 textStorage:(id)arg4 ;
@end
