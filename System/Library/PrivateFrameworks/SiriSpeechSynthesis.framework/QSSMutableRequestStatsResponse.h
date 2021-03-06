/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSRequestStatsResponse.h>

@class NSArray, NSString;

@interface QSSMutableRequestStatsResponse : QSSRequestStatsResponse

@property (nonatomic,copy) NSArray * bool_stats; 
@property (nonatomic,copy) NSArray * int32_stats; 
@property (nonatomic,copy) NSArray * double_stats; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_locale; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSArray *)bool_stats;
-(NSArray *)int32_stats;
-(NSArray *)double_stats;
-(NSString *)request_locale;
-(void)setBool_stats:(NSArray *)arg1 ;
-(void)setInt32_stats:(NSArray *)arg1 ;
-(void)setDouble_stats:(NSArray *)arg1 ;
-(void)setRequest_locale:(NSString *)arg1 ;
@end

