/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSSpeechTranslationTextToSpeechResponse.h>

@class NSString, QSSTextToSpeechResponse;

@interface QSSMutableSpeechTranslationTextToSpeechResponse : QSSSpeechTranslationTextToSpeechResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * target_locale; 
@property (nonatomic,copy) QSSTextToSpeechResponse * text_to_speech_response; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)request_id;
-(NSString *)target_locale;
-(NSString *)conversation_id;
-(QSSTextToSpeechResponse *)text_to_speech_response;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setTarget_locale:(NSString *)arg1 ;
-(void)setConversation_id:(NSString *)arg1 ;
-(void)setText_to_speech_response:(QSSTextToSpeechResponse *)arg1 ;
@end

