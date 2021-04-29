/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSSpeechTranslationMtResponse_TranslationPhrase.h>

@class NSString;

@interface QSSMutableSpeechTranslationMtResponse_TranslationPhrase : QSSSpeechTranslationMtResponse_TranslationPhrase

@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) NSString * translation_phrase; 
@property (nonatomic,copy) NSString * meta_info; 
@property (assign,nonatomic) BOOL low_confidence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(NSString *)meta_info;
-(void)setMeta_info:(NSString *)arg1 ;
-(NSString *)translation_phrase;
-(BOOL)low_confidence;
-(void)setTranslation_phrase:(NSString *)arg1 ;
-(void)setLow_confidence:(BOOL)arg1 ;
@end
