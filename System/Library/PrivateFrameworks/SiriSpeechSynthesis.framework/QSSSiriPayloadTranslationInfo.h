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

@class NSMutableDictionary, NSData, NSString, QSSRecognitionSausage;

@interface QSSSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SiriPayloadTranslationInfo* _root;

}

@property (nonatomic,readonly) NSString * pre_itn_payload; 
@property (nonatomic,readonly) NSString * post_itn_payload; 
@property (nonatomic,readonly) QSSRecognitionSausage * pre_sausage_payload; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriPayloadTranslationInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriPayloadTranslationInfo*)arg2 ;
-(NSString *)pre_itn_payload;
-(NSString *)post_itn_payload;
-(QSSRecognitionSausage *)pre_sausage_payload;
@end

