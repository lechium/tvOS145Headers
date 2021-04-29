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

@class NSMutableDictionary, NSData, NSString, QSSRecognitionResult;

@interface QSSCorrectionsValidatorRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const CorrectionsValidatorRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) QSSRecognitionResult * recognition_result; 
@property (nonatomic,readonly) NSString * original_utterance; 
@property (nonatomic,readonly) NSString * corrected_utterance; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const CorrectionsValidatorRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::CorrectionsValidatorRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const CorrectionsValidatorRequest*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(QSSRecognitionResult *)recognition_result;
-(NSString *)original_utterance;
-(NSString *)corrected_utterance;
@end
