/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSPartialTextToSpeechStreamingResponse.h>

@class NSString, NSData, NSArray, QSSTextToSpeechFeature;

@interface QSSMutablePartialTextToSpeechStreamingResponse : QSSPartialTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int current_pkt_number; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) QSSTextToSpeechFeature * feature; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSTextToSpeechFeature *)feature;
-(void)setFeature:(QSSTextToSpeechFeature *)arg1 ;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(NSString *)stream_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setStream_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(int)error_code;
-(NSString *)error_str;
-(int)current_pkt_number;
-(void)setSession_id:(NSString *)arg1 ;
-(void)audio:(/*^block*/id)arg1 ;
-(NSArray *)word_timing_info;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(void)setCurrent_pkt_number:(int)arg1 ;
@end

