/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class SAUIAudioDescription, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (nonatomic,retain) SAUIAudioDescription * decoderStreamDescription; 
@property (nonatomic,retain) SAUIAudioDescription * playerStreamDescription; 
@property (nonatomic,retain) SATTSSpeechSynthesisResource * speechSynthesisResource; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * speechSynthesisVoice; 
@property (assign,nonatomic) float streamingPlaybackBufferSize; 
@property (nonatomic,copy) NSString * text; 
+(id)speechSynthesisStreamingBegin;
+(id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIAudioDescription *)decoderStreamDescription;
-(void)setDecoderStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SAUIAudioDescription *)playerStreamDescription;
-(void)setPlayerStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SATTSSpeechSynthesisResource *)speechSynthesisResource;
-(void)setSpeechSynthesisResource:(SATTSSpeechSynthesisResource *)arg1 ;
-(SATTSSpeechSynthesisVoice *)speechSynthesisVoice;
-(void)setSpeechSynthesisVoice:(SATTSSpeechSynthesisVoice *)arg1 ;
-(float)streamingPlaybackBufferSize;
-(void)setStreamingPlaybackBufferSize:(float)arg1 ;
@end

