/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ENXMLWriter.h>

@interface ENMLWriter : ENXMLWriter
+(BOOL)validateURLComponents:(id)arg1 ;
+(id)emptyNote;
-(id)init;
-(BOOL)startElement:(id)arg1 attributes:(id)arg2 ;
-(void)startDocumentWithAttributes:(id)arg1 ;
-(void)startDocument;
-(void)endDocument;
-(id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2 ;
-(void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3 ;
-(void)writeResource:(id)arg1 ;
-(void)writeEncryptedInfo:(id)arg1 ;
-(void)writeTodoWithCheckedState:(BOOL)arg1 ;
@end
