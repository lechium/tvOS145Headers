/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSStartSpeechTranslationRequest.h>

@class NSString, NSArray, QSSStartSpeechRequest, QSSTranslationRequest;

@interface QSSMutableStartSpeechTranslationRequest : QSSStartSpeechTranslationRequest

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSArray * translation_locale_pairs; 
@property (nonatomic,copy) QSSStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) QSSTranslationRequest * translation_request; 
@property (nonatomic,copy) NSArray * text_to_speech_requests; 
@property (assign,nonatomic) BOOL restricted_mode; 
@property (nonatomic,copy) NSString * app_id; 
@property (assign,nonatomic) long long opt_in_status; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setApp_id:(NSString *)arg1 ;
-(NSString *)app_id;
-(QSSStartSpeechRequest *)start_speech_request;
-(NSString *)request_id;
-(long long)opt_in_status;
-(NSString *)conversation_id;
-(NSArray *)translation_locale_pairs;
-(QSSTranslationRequest *)translation_request;
-(NSArray *)text_to_speech_requests;
-(BOOL)restricted_mode;
-(void)setStart_speech_request:(QSSStartSpeechRequest *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setOpt_in_status:(long long)arg1 ;
-(void)setConversation_id:(NSString *)arg1 ;
-(void)setTranslation_locale_pairs:(NSArray *)arg1 ;
-(void)setTranslation_request:(QSSTranslationRequest *)arg1 ;
-(void)setText_to_speech_requests:(NSArray *)arg1 ;
-(void)setRestricted_mode:(BOOL)arg1 ;
@end

