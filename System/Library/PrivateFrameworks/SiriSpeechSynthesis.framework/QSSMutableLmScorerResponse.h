/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSLmScorerResponse.h>

@class NSString, NSArray;

@interface QSSMutableLmScorerResponse : QSSLmScorerResponse

@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSArray * tokens; 
@property (assign,nonatomic) double ppl; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(double)ppl;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(void)setPpl:(double)arg1 ;
@end

