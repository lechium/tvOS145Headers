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

@interface QSSBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationResponse* _root;

}

@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_string; 
@property (nonatomic,readonly) NSString * paragraph_id; 
@property (nonatomic,readonly) NSString * translated_text; 
@property (nonatomic,readonly) NSArray * span; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)span;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationResponse*)arg2 ;
-(int)return_code;
-(NSString *)request_id;
-(NSString *)return_string;
-(NSString *)paragraph_id;
-(NSString *)translated_text;
@end

