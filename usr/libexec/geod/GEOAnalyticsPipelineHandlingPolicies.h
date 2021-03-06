//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineHandlingPolicies : NSObject
{
    NSObject<OS_dispatch_queue> *_isoQueue;	// 8 = 0x8
    NSMutableDictionary *_policyDict;	// 16 = 0x10
}

+ (int)logMessageTypeForHandlingPolicyType:(int)arg1;	// IMP=0x000000010000c2b8
+ (id)sharedPolicies;	// IMP=0x000000010000a840
- (void).cxx_destruct;	// IMP=0x000000010000c2dc
- (id)policyForHandlingPolicyType:(int)arg1;	// IMP=0x000000010000c118
- (void)_updatePolicyConfigForHandlingPolicyConfigType:(int)arg1 configKey:(CDStruct_b8ab16c4)arg2;	// IMP=0x000000010000b4bc
- (id)init;	// IMP=0x000000010000a8ac

@end

