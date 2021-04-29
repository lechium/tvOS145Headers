/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSNormalizedToken.h>

@class NSString, NSArray;

@interface QSSMutableNormalizedToken : QSSNormalizedToken

@property (nonatomic,copy) NSString * original_token; 
@property (nonatomic,copy) NSArray * nbest_variants; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)original_token;
-(NSArray *)nbest_variants;
-(void)setOriginal_token:(NSString *)arg1 ;
-(void)setNbest_variants:(NSArray *)arg1 ;
@end
