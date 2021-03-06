/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * aceAudioData; 
@property (nonatomic,copy) NSArray * dialogStrings; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSArray * streamIds; 
+(id)preSynthesizeTTS;
+(id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)aceAudioData;
-(void)setAceAudioData:(NSArray *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSArray *)dialogStrings;
-(void)setDialogStrings:(NSArray *)arg1 ;
-(NSArray *)streamIds;
-(void)setStreamIds:(NSArray *)arg1 ;
@end

