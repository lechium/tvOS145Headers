/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTranslationRequest.h>

@class NSString, NSArray, QSSSiriTranslationInfo, QSSSpeechTranslationInfo, QSSSiriPayloadTranslationInfo, QSSWebTranslationInfo;

@interface QSSMutableTranslationRequest : QSSTranslationRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * task; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSArray * translation_phrase; 
@property (nonatomic,copy) QSSSiriTranslationInfo * siri_translation_info; 
@property (nonatomic,copy) QSSSpeechTranslationInfo * speech_translation_info; 
@property (nonatomic,copy) QSSSiriPayloadTranslationInfo * siri_payload_translation_info; 
@property (nonatomic,copy) NSString * sequence_id; 
@property (nonatomic,copy) QSSWebTranslationInfo * web_translation_info; 
@property (assign,nonatomic) BOOL disable_log; 
@property (assign,nonatomic) long long opt_in_status; 
@property (nonatomic,copy) NSString * app_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)task;
-(void)setTask:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(NSString *)app_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSArray *)translation_phrase;
-(NSString *)request_id;
-(NSString *)source_language;
-(NSString *)target_language;
-(QSSSiriTranslationInfo *)siri_translation_info;
-(QSSSpeechTranslationInfo *)speech_translation_info;
-(QSSSiriPayloadTranslationInfo *)siri_payload_translation_info;
-(NSString *)sequence_id;
-(QSSWebTranslationInfo *)web_translation_info;
-(BOOL)disable_log;
-(long long)opt_in_status;
-(void)setTranslation_phrase:(NSArray *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setSiri_translation_info:(QSSSiriTranslationInfo *)arg1 ;
-(void)setSpeech_translation_info:(QSSSpeechTranslationInfo *)arg1 ;
-(void)setSiri_payload_translation_info:(QSSSiriPayloadTranslationInfo *)arg1 ;
-(void)setSequence_id:(NSString *)arg1 ;
-(void)setWeb_translation_info:(QSSWebTranslationInfo *)arg1 ;
-(void)setDisable_log:(BOOL)arg1 ;
-(void)setOpt_in_status:(long long)arg1 ;
@end
