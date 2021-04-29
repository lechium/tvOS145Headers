/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic,readonly) unsigned long long decisionDepth; 
@property (nonatomic,readonly) double decisionAge; 
@property (nonatomic,readonly) double decisionThreshold; 
@property (nonatomic,readonly) unsigned long long maxPersistenceDepth; 
@property (nonatomic,readonly) double maxPersistenceAge; 
+(id)defaultRules;
-(unsigned long long)decisionDepth;
-(double)decisionAge;
-(double)decisionThreshold;
-(double)weightForEvent:(id)arg1 ;
-(unsigned long long)maxPersistenceDepth;
-(double)maxPersistenceAge;
@end

