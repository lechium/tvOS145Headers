/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSLmScorerToken.h>

@class NSString;

@interface QSSMutableLmScorerToken : QSSLmScorerToken

@property (nonatomic,copy) NSString * token_str; 
@property (assign,nonatomic) double log10_score; 
@property (assign,nonatomic) int ngram_used; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)token_str;
-(double)log10_score;
-(int)ngram_used;
-(void)setToken_str:(NSString *)arg1 ;
-(void)setLog10_score:(double)arg1 ;
-(void)setNgram_used:(int)arg1 ;
@end
