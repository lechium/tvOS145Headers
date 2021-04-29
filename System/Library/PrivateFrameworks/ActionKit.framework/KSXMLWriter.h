/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/KSForwardingWriter.h>

@class KSXMLAttributes, NSMutableArray, KSXMLElementContentsProxy, NSArray;

@interface KSXMLWriter : KSForwardingWriter {

	KSXMLAttributes* _attributes;
	NSMutableArray* _openElements;
	BOOL _elementIsEmpty;
	unsigned long long _inlineWritingLevel;
	KSXMLElementContentsProxy* _contentsProxy;
	long long _indentation;
	unsigned long long _encoding;

}

@property (assign,nonatomic) unsigned long long encoding;                  //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                   //@synthesize indentation=_indentation - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * openElements; 
+(void)initialize;
+(id)stringFromCharacters:(id)arg1 ;
+(id)stringFromAttributeValue:(id)arg1 ;
-(void)close;
-(unsigned long long)encoding;
-(void)flush;
-(void)endElement;
-(void)setEncoding:(unsigned long long)arg1 ;
-(void)writeString:(id)arg1 ;
-(id)currentAttributes;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)indentationLevel;
-(id)initWithOutputWriter:(id)arg1 ;
-(void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)pushAttribute:(id)arg1 value:(id)arg2 ;
-(BOOL)hasCurrentAttributes;
-(BOOL)elementCanBeEmpty:(id)arg1 ;
-(BOOL)canWriteElementInline:(id)arg1 ;
-(BOOL)validateElement:(id)arg1 ;
-(id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3 ;
-(void)startElement:(id)arg1 writeInline:(BOOL)arg2 ;
-(void)closeEmptyElementTag;
-(id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)writeCharacters:(id)arg1 ;
-(id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2 ;
-(void)writeElement:(id)arg1 text:(id)arg2 ;
-(void)startElement:(id)arg1 ;
-(void)startElement:(id)arg1 attributes:(id)arg2 ;
-(void)willStartElement:(id)arg1 ;
-(void)pushElement:(id)arg1 ;
-(void)popElement;
-(void)writeAttributeValue:(id)arg1 ;
-(void)writeAttribute:(id)arg1 value:(id)arg2 ;
-(void)startNewline;
-(void)writeComment:(id)arg1 ;
-(void)openComment;
-(void)closeComment;
-(void)startCDATA;
-(void)endCDATA;
-(void)increaseIndentationLevel;
-(void)decreaseIndentationLevel;
-(NSArray *)openElements;
-(unsigned long long)openElementsCount;
-(BOOL)hasOpenElement:(id)arg1 ;
-(id)topElement;
-(void)didStartElement;
-(void)closeStartTag;
-(void)writeEndTag:(id)arg1 ;
-(BOOL)isWritingInline;
-(void)startWritingInline;
-(void)stopWritingInline;
-(void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(BOOL)arg2 ;
@end

