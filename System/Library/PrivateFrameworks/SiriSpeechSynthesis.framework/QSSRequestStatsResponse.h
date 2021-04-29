/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray, NSString;

@interface QSSRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RequestStatsResponse* _root;

}

@property (nonatomic,readonly) NSArray * bool_stats; 
@property (nonatomic,readonly) NSArray * int32_stats; 
@property (nonatomic,readonly) NSArray * double_stats; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_locale; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RequestStatsResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 ;
-(NSString *)speech_id;
-(NSArray *)bool_stats;
-(NSArray *)int32_stats;
-(NSArray *)double_stats;
-(NSString *)request_locale;
@end

