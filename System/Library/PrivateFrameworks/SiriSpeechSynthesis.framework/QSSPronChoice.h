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

@class NSMutableDictionary, NSData, NSString;

@interface QSSPronChoice : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const PronChoice* _root;

}

@property (nonatomic,readonly) NSString * pron_sequence; 
@property (nonatomic,readonly) float log_weight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const PronChoice*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::PronChoice>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const PronChoice*)arg2 ;
-(NSString *)pron_sequence;
-(float)log_weight;
@end

