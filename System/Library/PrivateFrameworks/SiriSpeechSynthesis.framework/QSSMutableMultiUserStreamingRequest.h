/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSMultiUserStreamingRequest.h>

@class QSSMultiUserStartSpeechRequest, QSSUpdateAudioInfo, QSSSetRequestOrigin, QSSSetSpeechContext, QSSSetSpeechProfile, QSSSetEndpointerState, QSSAudioPacket, QSSFinishAudio, QSSResetServerEndpointer, QSSSetAlternateRecognitionSausage;

@interface QSSMutableMultiUserStreamingRequest : QSSMultiUserStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSMultiUserStartSpeechRequest * contentAsQSSMultiUserStartSpeechRequest; 
@property (nonatomic,copy) QSSUpdateAudioInfo * contentAsQSSUpdateAudioInfo; 
@property (nonatomic,copy) QSSSetRequestOrigin * contentAsQSSSetRequestOrigin; 
@property (nonatomic,copy) QSSSetSpeechContext * contentAsQSSSetSpeechContext; 
@property (nonatomic,copy) QSSSetSpeechProfile * contentAsQSSSetSpeechProfile; 
@property (nonatomic,copy) QSSSetEndpointerState * contentAsQSSSetEndpointerState; 
@property (nonatomic,copy) QSSAudioPacket * contentAsQSSAudioPacket; 
@property (nonatomic,copy) QSSFinishAudio * contentAsQSSFinishAudio; 
@property (nonatomic,copy) QSSResetServerEndpointer * contentAsQSSResetServerEndpointer; 
@property (nonatomic,copy) QSSSetAlternateRecognitionSausage * contentAsQSSSetAlternateRecognitionSausage; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setContent_type:(long long)arg1 ;
-(long long)content_type;
-(QSSAudioPacket *)contentAsQSSAudioPacket;
-(QSSFinishAudio *)contentAsQSSFinishAudio;
-(QSSUpdateAudioInfo *)contentAsQSSUpdateAudioInfo;
-(QSSSetRequestOrigin *)contentAsQSSSetRequestOrigin;
-(QSSSetSpeechContext *)contentAsQSSSetSpeechContext;
-(QSSSetSpeechProfile *)contentAsQSSSetSpeechProfile;
-(QSSSetEndpointerState *)contentAsQSSSetEndpointerState;
-(QSSResetServerEndpointer *)contentAsQSSResetServerEndpointer;
-(QSSSetAlternateRecognitionSausage *)contentAsQSSSetAlternateRecognitionSausage;
-(QSSMultiUserStartSpeechRequest *)contentAsQSSMultiUserStartSpeechRequest;
-(void)setContentAsQSSAudioPacket:(QSSAudioPacket *)arg1 ;
-(void)setContentAsQSSFinishAudio:(QSSFinishAudio *)arg1 ;
-(void)setContentAsQSSUpdateAudioInfo:(QSSUpdateAudioInfo *)arg1 ;
-(void)setContentAsQSSSetRequestOrigin:(QSSSetRequestOrigin *)arg1 ;
-(void)setContentAsQSSSetSpeechContext:(QSSSetSpeechContext *)arg1 ;
-(void)setContentAsQSSSetSpeechProfile:(QSSSetSpeechProfile *)arg1 ;
-(void)setContentAsQSSSetEndpointerState:(QSSSetEndpointerState *)arg1 ;
-(void)setContentAsQSSResetServerEndpointer:(QSSResetServerEndpointer *)arg1 ;
-(void)setContentAsQSSSetAlternateRecognitionSausage:(QSSSetAlternateRecognitionSausage *)arg1 ;
-(void)setContentAsQSSMultiUserStartSpeechRequest:(QSSMultiUserStartSpeechRequest *)arg1 ;
@end

