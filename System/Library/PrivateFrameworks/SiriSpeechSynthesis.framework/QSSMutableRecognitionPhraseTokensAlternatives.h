/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSRecognitionPhraseTokensAlternatives.h>

@class NSArray;

@interface QSSMutableRecognitionPhraseTokensAlternatives : QSSRecognitionPhraseTokensAlternatives

@property (nonatomic,copy) NSArray * tok_phrases; 
@property (assign,nonatomic) BOOL has_unsuggested_alternatives; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)tok_phrases;
-(BOOL)has_unsuggested_alternatives;
-(void)setTok_phrases:(NSArray *)arg1 ;
-(void)setHas_unsuggested_alternatives:(BOOL)arg1 ;
@end

