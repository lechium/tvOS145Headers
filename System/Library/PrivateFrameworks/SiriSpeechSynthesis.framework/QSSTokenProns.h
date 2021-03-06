/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface QSSTokenProns : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TokenProns* _root;

}

@property (nonatomic,readonly) NSString * orthography; 
@property (nonatomic,readonly) NSArray * sanitized_sequences; 
@property (nonatomic,readonly) NSArray * prons; 
@property (nonatomic,readonly) NSArray * normalized_prons; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)orthography;
-(NSArray *)prons;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TokenProns*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TokenProns>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TokenProns*)arg2 ;
-(NSArray *)sanitized_sequences;
-(NSArray *)normalized_prons;
@end

