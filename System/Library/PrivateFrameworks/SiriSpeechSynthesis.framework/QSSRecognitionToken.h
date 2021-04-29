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

@class NSMutableDictionary, NSData, NSString;

@interface QSSRecognitionToken : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionToken* _root;

}

@property (nonatomic,readonly) NSString * token_text; 
@property (nonatomic,readonly) int start_milli_seconds; 
@property (nonatomic,readonly) int end_milli_seconds; 
@property (nonatomic,readonly) int silence_start_milli_seconds; 
@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL add_space_after; 
@property (nonatomic,readonly) NSString * phone_seq; 
@property (nonatomic,readonly) NSString * ipa_phone_seq; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)confidence;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionToken*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionToken>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionToken*)arg2 ;
-(NSString *)token_text;
-(int)start_milli_seconds;
-(int)end_milli_seconds;
-(int)silence_start_milli_seconds;
-(BOOL)add_space_after;
-(NSString *)phone_seq;
-(NSString *)ipa_phone_seq;
@end

