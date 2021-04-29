/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTranslationResponse.h>

@class NSString, NSArray;

@interface QSSMutableTranslationResponse : QSSTranslationResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSArray * n_best_translated_phrases; 
@property (nonatomic,copy) NSString * engine_input; 
@property (nonatomic,copy) NSArray * engine_output; 
@property (nonatomic,copy) NSString * sequence_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(int)return_code;
-(NSString *)request_id;
-(NSString *)sequence_id;
-(NSString *)return_string;
-(NSArray *)n_best_translated_phrases;
-(NSString *)engine_input;
-(NSArray *)engine_output;
-(void)setReturn_code:(int)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSequence_id:(NSString *)arg1 ;
-(void)setReturn_string:(NSString *)arg1 ;
-(void)setN_best_translated_phrases:(NSArray *)arg1 ;
-(void)setEngine_input:(NSString *)arg1 ;
-(void)setEngine_output:(NSArray *)arg1 ;
@end

