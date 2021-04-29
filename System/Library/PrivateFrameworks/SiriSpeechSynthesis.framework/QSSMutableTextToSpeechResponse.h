/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTextToSpeechResponse.h>

@class NSString, NSData, QSSAudioDescription, NSArray, QSSTextToSpeechMeta, QSSTextToSpeechFeature;

@interface QSSMutableTextToSpeechResponse : QSSTextToSpeechResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) int sample_rate; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) QSSAudioDescription * decoder_description; 
@property (nonatomic,copy) QSSAudioDescription * playback_description; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) QSSTextToSpeechMeta * meta_info; 
@property (nonatomic,copy) QSSTextToSpeechFeature * feature; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSTextToSpeechFeature *)feature;
-(void)setFeature:(QSSTextToSpeechFeature *)arg1 ;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(QSSTextToSpeechMeta *)meta_info;
-(int)error_code;
-(NSString *)error_str;
-(QSSAudioDescription *)decoder_description;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setMeta_info:(QSSTextToSpeechMeta *)arg1 ;
-(int)sample_rate;
-(long long)audio_type;
-(void)audio:(/*^block*/id)arg1 ;
-(QSSAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setSample_rate:(int)arg1 ;
-(void)setDecoder_description:(QSSAudioDescription *)arg1 ;
-(void)setPlayback_description:(QSSAudioDescription *)arg1 ;
-(void)setWord_timing_info:(NSArray *)arg1 ;
@end

