/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (assign,nonatomic) double eosLikelihood; 
@property (assign,nonatomic) long long numOfWords; 
@property (nonatomic,copy) NSArray * pauseCounts; 
@property (assign,nonatomic) long long processedAudioDurationMs; 
@property (assign,nonatomic) double silenceProbability; 
@property (nonatomic,copy) NSString * taskName; 
@property (assign,nonatomic) long long trailingSilenceDuration; 
+(id)serverEndpointFeatures;
+(id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(long long)numOfWords;
-(void)setNumOfWords:(long long)arg1 ;
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(long long)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
@end

