/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, NSMutableDictionary, NSString, NSArray;

@interface PCXMPStringParser : NSObject <NSXMLParserDelegate> {

	NSMutableString* tagParent1;
	NSMutableString* tagParent2;
	NSMutableString* tagParent3;
	NSMutableString* valueString;
	NSMutableDictionary* tagDict1;
	NSMutableDictionary* tagDict2;
	NSMutableDictionary* tagDict3;
	NSMutableDictionary* mDict;
	NSString* xmlError;
	NSArray* parentTags1;
	NSArray* parentTags2;
	NSArray* parentTags3;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parseXMPData:(id)arg1 ;
-(void)parseXMPString:(id)arg1 ;
-(id)parsedData;
-(id)parseErrorString;
@end

