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

@class NSMutableDictionary, NSData, QSSQssAckResponse, QSSBeginTextToSpeechStreamingResponse, QSSPartialTextToSpeechStreamingResponse, QSSFinalTextToSpeechStreamingResponse;

@interface QSSTextToSpeechStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechStreamingStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) QSSQssAckResponse * contentAsQSSQssAckResponse; 
@property (nonatomic,readonly) QSSBeginTextToSpeechStreamingResponse * contentAsQSSBeginTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) QSSPartialTextToSpeechStreamingResponse * contentAsQSSPartialTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) QSSFinalTextToSpeechStreamingResponse * contentAsQSSFinalTextToSpeechStreamingResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechStreamingStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechStreamingStreamingResponse*)arg2 ;
-(long long)content_type;
-(QSSBeginTextToSpeechStreamingResponse *)contentAsQSSBeginTextToSpeechStreamingResponse;
-(QSSPartialTextToSpeechStreamingResponse *)contentAsQSSPartialTextToSpeechStreamingResponse;
-(QSSFinalTextToSpeechStreamingResponse *)contentAsQSSFinalTextToSpeechStreamingResponse;
-(QSSQssAckResponse *)contentAsQSSQssAckResponse;
@end

