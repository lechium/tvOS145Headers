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

@class NSMutableDictionary, NSData, QSSShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSString;

@interface QSSShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ShortcutFuzzyMatchRequest* _root;

}

@property (nonatomic,readonly) QSSShortcutFuzzyMatchRequest_StringTokenPair * utterance; 
@property (nonatomic,readonly) NSArray * shortcuts; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * interaction_id; 
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) NSString * device_type; 
@property (nonatomic,readonly) NSString * context; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locale;
-(NSString *)context;
-(QSSShortcutFuzzyMatchRequest_StringTokenPair *)utterance;
-(NSArray *)shortcuts;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchRequest*)arg2 ;
-(NSString *)device_type;
-(NSString *)session_id;
-(NSString *)request_id;
-(NSString *)interaction_id;
@end
