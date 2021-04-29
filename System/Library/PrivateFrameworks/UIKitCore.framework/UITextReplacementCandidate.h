/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

@interface UITextReplacementCandidate : TIKeyboardCandidateSingle {

	UITextReplacement* _replacement;

}

@property (nonatomic,readonly) UITextReplacement * replacement;              //@synthesize replacement=_replacement - In the implementation block
+(id)textReplacementCandidateForTextReplacement:(id)arg1 ;
-(id)label;
-(UITextReplacement *)replacement;
-(id)_initWithTextReplacement:(id)arg1 ;
@end

