/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTokenProns.h>

@class NSString, NSArray;

@interface QSSMutableTokenProns : QSSTokenProns

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * sanitized_sequences; 
@property (nonatomic,copy) NSArray * prons; 
@property (nonatomic,copy) NSArray * normalized_prons; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)prons;
-(NSArray *)sanitized_sequences;
-(NSArray *)normalized_prons;
-(void)setSanitized_sequences:(NSArray *)arg1 ;
-(void)setProns:(NSArray *)arg1 ;
-(void)setNormalized_prons:(NSArray *)arg1 ;
@end

