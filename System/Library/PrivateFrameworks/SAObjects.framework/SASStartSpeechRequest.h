/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSString, NSNumber;

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic,copy) NSArray * bargeInModes; 
@property (nonatomic,copy) NSString * clientModelVersion; 
@property (nonatomic,copy) NSNumber * durationSincePreviousTTSFinish; 
@property (nonatomic,copy) NSNumber * durationSincePreviousTTSStart; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (assign,nonatomic) BOOL handsFree; 
@property (assign,nonatomic) BOOL talkOnly; 
@property (assign,nonatomic) BOOL textToSpeechIsMuted; 
@property (nonatomic,copy) NSArray * voiceTriggerPhrases; 
@property (assign,nonatomic) BOOL wasLaunchedForRequest; 
+(id)startSpeechRequest;
+(id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSArray *)bargeInModes;
-(void)setBargeInModes:(NSArray *)arg1 ;
-(NSNumber *)durationSincePreviousTTSFinish;
-(void)setDurationSincePreviousTTSFinish:(NSNumber *)arg1 ;
-(NSNumber *)durationSincePreviousTTSStart;
-(void)setDurationSincePreviousTTSStart:(NSNumber *)arg1 ;
-(BOOL)textToSpeechIsMuted;
-(void)setTextToSpeechIsMuted:(BOOL)arg1 ;
-(NSString *)clientModelVersion;
-(void)setClientModelVersion:(NSString *)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(BOOL)talkOnly;
-(void)setTalkOnly:(BOOL)arg1 ;
-(NSArray *)voiceTriggerPhrases;
-(void)setVoiceTriggerPhrases:(NSArray *)arg1 ;
-(BOOL)wasLaunchedForRequest;
-(void)setWasLaunchedForRequest:(BOOL)arg1 ;
@end

