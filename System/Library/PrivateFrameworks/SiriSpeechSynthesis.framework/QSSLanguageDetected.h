/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface QSSLanguageDetected : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const LanguageDetected* _root;

}

@property (nonatomic,readonly) NSString * detected_locale; 
@property (nonatomic,readonly) NSArray * predictions; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)predictions;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const LanguageDetected*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::LanguageDetected>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const LanguageDetected*)arg2 ;
-(NSString *)detected_locale;
@end

