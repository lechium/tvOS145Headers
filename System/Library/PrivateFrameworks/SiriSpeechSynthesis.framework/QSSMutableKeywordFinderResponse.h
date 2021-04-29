/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSKeywordFinderResponse.h>

@class NSString, QSSRecognitionSausage, NSArray;

@interface QSSMutableKeywordFinderResponse : QSSKeywordFinderResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) QSSRecognitionSausage * corrected_sausage; 
@property (nonatomic,copy) NSArray * n_best_list; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(QSSRecognitionSausage *)corrected_sausage;
-(NSArray *)n_best_list;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(void)setCorrected_sausage:(QSSRecognitionSausage *)arg1 ;
-(void)setN_best_list:(NSArray *)arg1 ;
@end

