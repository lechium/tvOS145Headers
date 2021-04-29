/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardOutput, TIKeyboardIntermediateText, RTIStyledIntermediateText, NSDictionary, NSAttributedString, NSString, NSMutableDictionary;

@interface RTITextOperations : NSObject <NSSecureCoding> {

	TIKeyboardOutput* _keyboardOutput;
	TIKeyboardIntermediateText* _intermediateText;
	RTIStyledIntermediateText* _styledIntermediateText;
	NSDictionary* _attributedPlaceholders;
	NSAttributedString* _textCheckingAnnotatedString;
	NSString* _textToAssert;
	SEL _editingActionSelector;
	NSString* _textCheckingAnnotationToRemove;
	NSRange _selectionRangeToAssert;
	NSRange _textCheckingAnnotationRange;
	NSRange _textCheckingReplacementRange;
	NSRange _textCheckingAnnotationRemovalRange;

}

@property (nonatomic,retain) NSDictionary * attributedPlaceholders;                              //@synthesize attributedPlaceholders=_attributedPlaceholders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableAttributedPlaceholders; 
@property (nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                                //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;                      //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,retain) RTIStyledIntermediateText * styledIntermediateText;                 //@synthesize styledIntermediateText=_styledIntermediateText - In the implementation block
@property (nonatomic,copy) NSString * textToAssert;                                              //@synthesize textToAssert=_textToAssert - In the implementation block
@property (assign,nonatomic) NSRange selectionRangeToAssert;                                     //@synthesize selectionRangeToAssert=_selectionRangeToAssert - In the implementation block
@property (assign,nonatomic) SEL editingActionSelector;                                          //@synthesize editingActionSelector=_editingActionSelector - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedInsertionText; 
@property (assign,nonatomic) NSRange textCheckingAnnotationRange;                                //@synthesize textCheckingAnnotationRange=_textCheckingAnnotationRange - In the implementation block
@property (assign,nonatomic) NSRange textCheckingReplacementRange;                               //@synthesize textCheckingReplacementRange=_textCheckingReplacementRange - In the implementation block
@property (nonatomic,copy) NSAttributedString * textCheckingAnnotatedString;                     //@synthesize textCheckingAnnotatedString=_textCheckingAnnotatedString - In the implementation block
@property (assign,nonatomic) NSRange textCheckingAnnotationRemovalRange;                         //@synthesize textCheckingAnnotationRemovalRange=_textCheckingAnnotationRemovalRange - In the implementation block
@property (nonatomic,copy) NSString * textCheckingAnnotationToRemove;                            //@synthesize textCheckingAnnotationToRemove=_textCheckingAnnotationToRemove - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardIntermediateText *)intermediateText;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(void)setTextToAssert:(NSString *)arg1 ;
-(TIKeyboardOutput *)keyboardOutput;
-(NSString *)textToAssert;
-(NSAttributedString *)textCheckingAnnotatedString;
-(void)setTextCheckingAnnotatedString:(NSAttributedString *)arg1 ;
-(NSRange)selectionRangeToAssert;
-(RTIStyledIntermediateText *)styledIntermediateText;
-(SEL)editingActionSelector;
-(NSRange)textCheckingAnnotationRange;
-(NSRange)textCheckingReplacementRange;
-(NSRange)textCheckingAnnotationRemovalRange;
-(NSString *)textCheckingAnnotationToRemove;
-(void)setSelectionRangeToAssert:(NSRange)arg1 ;
-(void)_createAttributedPlaceholdersIfNecessary;
-(NSMutableDictionary *)mutableAttributedPlaceholders;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)insertAttributedText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSAttributedString *)attributedInsertionText;
-(void)setStyledIntermediateText:(RTIStyledIntermediateText *)arg1 ;
-(NSDictionary *)attributedPlaceholders;
-(void)setAttributedPlaceholders:(NSDictionary *)arg1 ;
-(void)setEditingActionSelector:(SEL)arg1 ;
-(void)setTextCheckingAnnotationRange:(NSRange)arg1 ;
-(void)setTextCheckingReplacementRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotationRemovalRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotationToRemove:(NSString *)arg1 ;
@end
