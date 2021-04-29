/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechResponse.h>

@class NSString, NSData, OPTTSAudioDescription, NSArray, OPTTSTextToSpeechMeta;

@interface OPTTSMutableTextToSpeechResponse : OPTTSTextToSpeechResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) int sample_rate; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,copy) OPTTSAudioDescription * playback_description; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) OPTTSTextToSpeechMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(OPTTSTextToSpeechMeta *)meta_info;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechMeta *)arg1 ;
-(int)sample_rate;
-(long long)audio_type;
-(void)audio:(/*^block*/id)arg1 ;
-(OPTTSAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setSample_rate:(int)arg1 ;
-(void)setDecoder_description:(OPTTSAudioDescription *)arg1 ;
-(void)setPlayback_description:(OPTTSAudioDescription *)arg1 ;
-(void)setWord_timing_info:(NSArray *)arg1 ;
@end

