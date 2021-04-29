/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic,readonly) unsigned long long predicateType; 
+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg1 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg1 ;
+(id)predicateForAssertionUUIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(unsigned long long)predicateType;
@end

