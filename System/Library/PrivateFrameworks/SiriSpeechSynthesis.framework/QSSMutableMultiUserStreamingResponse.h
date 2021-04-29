/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSMultiUserStreamingResponse.h>

@class QSSFinalSpeechRecognitionResponse, QSSPartialSpeechRecognitionResponse, QSSRecognitionProgress, QSSRecognitionCandidate, QSSRequestStatsResponse, QSSServerEndpointFeatures, QSSClientSetupInfo, QSSAudioLimitExceeded, QSSFinalBlazarResponse;

@interface QSSMutableMultiUserStreamingResponse : QSSMultiUserStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSFinalSpeechRecognitionResponse * contentAsQSSFinalSpeechRecognitionResponse; 
@property (nonatomic,copy) QSSPartialSpeechRecognitionResponse * contentAsQSSPartialSpeechRecognitionResponse; 
@property (nonatomic,copy) QSSRecognitionProgress * contentAsQSSRecognitionProgress; 
@property (nonatomic,copy) QSSRecognitionCandidate * contentAsQSSRecognitionCandidate; 
@property (nonatomic,copy) QSSRequestStatsResponse * contentAsQSSRequestStatsResponse; 
@property (nonatomic,copy) QSSServerEndpointFeatures * contentAsQSSServerEndpointFeatures; 
@property (nonatomic,copy) QSSClientSetupInfo * contentAsQSSClientSetupInfo; 
@property (nonatomic,copy) QSSAudioLimitExceeded * contentAsQSSAudioLimitExceeded; 
@property (nonatomic,copy) QSSFinalBlazarResponse * contentAsQSSFinalBlazarResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setContent_type:(long long)arg1 ;
-(long long)content_type;
-(QSSFinalSpeechRecognitionResponse *)contentAsQSSFinalSpeechRecognitionResponse;
-(QSSPartialSpeechRecognitionResponse *)contentAsQSSPartialSpeechRecognitionResponse;
-(QSSRecognitionProgress *)contentAsQSSRecognitionProgress;
-(QSSRecognitionCandidate *)contentAsQSSRecognitionCandidate;
-(QSSRequestStatsResponse *)contentAsQSSRequestStatsResponse;
-(QSSServerEndpointFeatures *)contentAsQSSServerEndpointFeatures;
-(QSSClientSetupInfo *)contentAsQSSClientSetupInfo;
-(QSSAudioLimitExceeded *)contentAsQSSAudioLimitExceeded;
-(QSSFinalBlazarResponse *)contentAsQSSFinalBlazarResponse;
-(void)setContentAsQSSFinalSpeechRecognitionResponse:(QSSFinalSpeechRecognitionResponse *)arg1 ;
-(void)setContentAsQSSPartialSpeechRecognitionResponse:(QSSPartialSpeechRecognitionResponse *)arg1 ;
-(void)setContentAsQSSRecognitionProgress:(QSSRecognitionProgress *)arg1 ;
-(void)setContentAsQSSRecognitionCandidate:(QSSRecognitionCandidate *)arg1 ;
-(void)setContentAsQSSRequestStatsResponse:(QSSRequestStatsResponse *)arg1 ;
-(void)setContentAsQSSServerEndpointFeatures:(QSSServerEndpointFeatures *)arg1 ;
-(void)setContentAsQSSClientSetupInfo:(QSSClientSetupInfo *)arg1 ;
-(void)setContentAsQSSAudioLimitExceeded:(QSSAudioLimitExceeded *)arg1 ;
-(void)setContentAsQSSFinalBlazarResponse:(QSSFinalBlazarResponse *)arg1 ;
@end
