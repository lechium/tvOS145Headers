/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSStartLanguageDetectionRequest.h>

@class NSString, NSArray;

@interface QSSMutableStartLanguageDetectionRequest : QSSStartLanguageDetectionRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) long long codec; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)codec;
-(void)setCodec:(long long)arg1 ;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
@end
