/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSNumber * volumeValue; 
+(id)setSpeechSynthesisVolume;
+(id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)volumeValue;
-(void)setVolumeValue:(NSNumber *)arg1 ;
@end

