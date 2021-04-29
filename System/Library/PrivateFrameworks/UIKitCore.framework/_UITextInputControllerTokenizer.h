/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInputStringTokenizer.h>

@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

	UITextInputController* _textInput;
	CFStringTokenizerRef _tokenizer;
	int _tokenizerType;
	BOOL _tokenizerIsInvalid;

}
-(void)dealloc;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(id)initWithTextInputController:(id)arg1 ;
-(void)invalidateTokenizer;
-(long long)_writingDirectionAtPosition:(id)arg1 ;
@end

