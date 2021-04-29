/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, NSString, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUISayIt : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAudioData * audioData; 
@property (nonatomic,copy) NSString * audioDataUrl; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,retain) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) BOOL repeatable; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(SAUIAudioData *)audioData;
-(void)setAudioData:(SAUIAudioData *)arg1 ;
-(NSString *)audioDataUrl;
-(void)setAudioDataUrl:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1 ;
-(BOOL)repeatable;
-(void)setRepeatable:(BOOL)arg1 ;
@end

