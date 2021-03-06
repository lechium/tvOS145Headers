/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSArray * texts; 
+(id)estimateTTSRequestDuration;
+(id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)texts;
-(void)setTexts:(NSArray *)arg1 ;
@end

