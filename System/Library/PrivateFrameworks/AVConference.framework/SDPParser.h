/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSEnumerator, NSDictionary, NSString;

@interface SDPParser : NSObject {

	NSArray* _lines;
	NSEnumerator* _lineEnumerator;
	NSDictionary* _fieldNameMap;
	NSString* _fieldName;
	NSString* _fieldValue;
	unsigned char _fieldType;
	BOOL _parsingDone;

}

@property (nonatomic,readonly) NSString * fieldName;                 //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldValue;                //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) unsigned char fieldType;              //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,readonly) BOOL parsingDone;                     //@synthesize parsingDone=_parsingDone - In the implementation block
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(NSString *)fieldName;
-(BOOL)nextLine;
-(unsigned char)fieldType;
-(NSString *)fieldValue;
-(BOOL)parseMediaLineHeader:(id)arg1 mediaType:(int*)arg2 supportedPayloads:(id)arg3 rtpPort:(int*)arg4 ;
-(BOOL)parsingDone;
-(int)stringToMediaType:(id)arg1 ;
@end

