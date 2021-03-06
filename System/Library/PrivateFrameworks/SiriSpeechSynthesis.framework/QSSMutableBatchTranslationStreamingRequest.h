/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSBatchTranslationStreamingRequest.h>

@class QSSBatchTranslationRequest, QSSBatchTranslationFeedbackRequest;

@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSBatchTranslationRequest * contentAsQSSBatchTranslationRequest; 
@property (nonatomic,copy) QSSBatchTranslationFeedbackRequest * contentAsQSSBatchTranslationFeedbackRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setContent_type:(long long)arg1 ;
-(long long)content_type;
-(QSSBatchTranslationRequest *)contentAsQSSBatchTranslationRequest;
-(QSSBatchTranslationFeedbackRequest *)contentAsQSSBatchTranslationFeedbackRequest;
-(void)setContentAsQSSBatchTranslationRequest:(QSSBatchTranslationRequest *)arg1 ;
-(void)setContentAsQSSBatchTranslationFeedbackRequest:(QSSBatchTranslationFeedbackRequest *)arg1 ;
@end

