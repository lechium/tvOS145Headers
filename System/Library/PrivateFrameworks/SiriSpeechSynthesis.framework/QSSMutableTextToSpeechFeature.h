/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTextToSpeechFeature.h>

@class NSArray;

@interface QSSMutableTextToSpeechFeature : QSSTextToSpeechFeature

@property (nonatomic,copy) NSArray * normalized_text; 
@property (nonatomic,copy) NSArray * phoneme_sequence; 
@property (nonatomic,copy) NSArray * prompts; 
@property (nonatomic,copy) NSArray * replacement; 
@property (nonatomic,copy) NSArray * neural_phoneme_sequence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)replacement;
-(void)setReplacement:(NSArray *)arg1 ;
-(NSArray *)prompts;
-(NSArray *)normalized_text;
-(NSArray *)phoneme_sequence;
-(NSArray *)neural_phoneme_sequence;
-(void)setPrompts:(NSArray *)arg1 ;
-(void)setNormalized_text:(NSArray *)arg1 ;
-(void)setPhoneme_sequence:(NSArray *)arg1 ;
-(void)setNeural_phoneme_sequence:(NSArray *)arg1 ;
@end

