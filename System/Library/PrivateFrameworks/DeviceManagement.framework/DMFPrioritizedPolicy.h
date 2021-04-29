/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DMFPrioritizedPolicy : NSObject {

	long long _priority;
	long long _policy;

}

@property (assign,nonatomic) long long priority;              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long policy;                //@synthesize policy=_policy - In the implementation block
+(id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6 ;
+(long long)arbitratePolicyForPrioritizedPolicies:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(long long)policy;
-(void)setPolicy:(long long)arg1 ;
-(id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToPrioritizedPolicy:(id)arg1 ;
@end

