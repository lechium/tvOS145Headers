/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTranslationResponse_TranslationToken.h>

@class NSString, QSSAlignment;

@interface QSSMutableTranslationResponse_TranslationToken : QSSTranslationResponse_TranslationToken

@property (nonatomic,copy) NSString * token; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) QSSAlignment * mt_alignment; 
@property (assign,nonatomic) BOOL add_space_after; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)token;
-(float)confidence;
-(void)setToken:(NSString *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(BOOL)add_space_after;
-(QSSAlignment *)mt_alignment;
-(void)setAdd_space_after:(BOOL)arg1 ;
-(void)setMt_alignment:(QSSAlignment *)arg1 ;
@end

