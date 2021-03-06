/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CKVRawSpeechProfileWord : NSObject {

	NSString* _orthography;
	long long _tagType;
	NSString* _tagValue;

}

@property (nonatomic,readonly) NSString * orthography;              //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) long long tagType;                   //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,readonly) NSString * tagValue;                 //@synthesize tagValue=_tagValue - In the implementation block
-(id)init;
-(NSString *)orthography;
-(id)_extractTagFromSpeechWord:(id)arg1 ;
-(id)_extractOrthographyFromSpeechWord:(id)arg1 ;
-(id)initWithSpeechWordDictionary:(id)arg1 ;
-(long long)tagType;
-(NSString *)tagValue;
@end

