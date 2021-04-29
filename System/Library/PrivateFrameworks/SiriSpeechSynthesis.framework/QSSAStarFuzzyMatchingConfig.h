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

@interface QSSAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AStarFuzzyMatchingConfig* _root;

}

@property (nonatomic,readonly) BOOL enable_completion; 
@property (nonatomic,readonly) unsigned max_results; 
@property (nonatomic,readonly) unsigned max_expand_paths; 
@property (nonatomic,readonly) unsigned max_tm_score; 
@property (nonatomic,readonly) unsigned abs_pruning_threshold; 
@property (nonatomic,readonly) unsigned rel_pruning_threshold; 
@property (nonatomic,readonly) BOOL enable_word_boundary; 
@property (nonatomic,readonly) unsigned max_path_num_at_boundary; 
@property (nonatomic,readonly) float parabolic_error_wide; 
@property (nonatomic,readonly) float parabolic_error_center; 
@property (nonatomic,readonly) float parabolic_error_bias; 
@property (nonatomic,readonly) unsigned parabolic_error_min; 
@property (nonatomic,readonly) unsigned max_latency; 
@property (nonatomic,readonly) unsigned word_penalty; 
@property (nonatomic,readonly) NSString * delimiter; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingConfig*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AStarFuzzyMatchingConfig*)arg2 ;
-(NSString *)delimiter;
-(BOOL)enable_completion;
-(unsigned)max_results;
-(unsigned)max_expand_paths;
-(unsigned)max_tm_score;
-(unsigned)abs_pruning_threshold;
-(unsigned)rel_pruning_threshold;
-(BOOL)enable_word_boundary;
-(unsigned)max_path_num_at_boundary;
-(float)parabolic_error_wide;
-(float)parabolic_error_center;
-(float)parabolic_error_bias;
-(unsigned)parabolic_error_min;
-(unsigned)max_latency;
-(unsigned)word_penalty;
@end

