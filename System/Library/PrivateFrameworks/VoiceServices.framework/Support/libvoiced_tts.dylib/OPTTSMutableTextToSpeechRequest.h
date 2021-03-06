/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequest.h>

@class NSString, NSArray, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestExperiment, OPTTSTTSRequestFeatureFlags;

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) NSString * voice_name; 
@property (nonatomic,copy) NSArray * context_info; 
@property (assign,nonatomic) long long preferred_voice_type; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestContext * context; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,copy) OPTTSTTSRequestFeatureFlags * feature_flags; 
+(id)genderStringFromGender:(long long)arg1 ;
+(id)requestFromVSRequest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(OPTTSTextToSpeechRequestContext *)context;
-(void)setContext:(OPTTSTextToSpeechRequestContext *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(OPTTSTextToSpeechRequestExperiment *)experiment;
-(void)setExperiment:(OPTTSTextToSpeechRequestExperiment *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(NSString *)voice_name;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(long long)preferred_voice_type;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(void)setVoice_name:(NSString *)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechRequestMeta *)arg1 ;
-(void)setPreferred_voice_type:(long long)arg1 ;
-(NSArray *)context_info;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(OPTTSTTSRequestFeatureFlags *)feature_flags;
-(void)setContext_info:(NSArray *)arg1 ;
-(void)setFeature_flags:(OPTTSTTSRequestFeatureFlags *)arg1 ;
@end

