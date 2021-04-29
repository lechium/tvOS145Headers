/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (nonatomic,retain) NSObject*<OS_xpc_object> assertionEndpoint; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)policyByCombiningPolicies:(id)arg1 ;
+(id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned)arg1 withHostContextId:(unsigned)arg2 ;
+(id)policyCancelingTouchesDeliveredToContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)assertionEndpoint;
-(void)setAssertionEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)policyByMappingContainedPoliciesWithBlock:(/*^block*/id)arg1 ;
-(id)reducePolicyToObjectWithBlock:(/*^block*/id)arg1 ;
-(id)policyIncludingPolicy:(id)arg1 ;
-(id)policyExcludingPolicy:(id)arg1 ;
-(id)policyExcludingPolicyIdenticalTo:(id)arg1 ;
@end
