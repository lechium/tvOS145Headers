//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SHLCloudTaskScheduler.h"

#import "SHLFetchTaskScheduler-Protocol.h"

@class NSArray, NSString, SHLCloudFetchTaskTransformer, SHLCloudSubscriptionTransformer;

__attribute__((visibility("hidden")))
@interface SHLCloudFetchTaskScheduler : SHLCloudTaskScheduler <SHLFetchTaskScheduler>
{
    SHLCloudFetchTaskTransformer *_fetchTaskTransformer;	// 8 = 0x8
    SHLCloudSubscriptionTransformer *_subscriptionTaskTransformer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001c2c4
@property(retain, nonatomic) SHLCloudSubscriptionTransformer *subscriptionTaskTransformer; // @synthesize subscriptionTaskTransformer=_subscriptionTaskTransformer;
@property(retain, nonatomic) SHLCloudFetchTaskTransformer *fetchTaskTransformer; // @synthesize fetchTaskTransformer=_fetchTaskTransformer;
- (void)scheduleFetchTask:(id)arg1;	// IMP=0x000000010001b5ec
@property(readonly, nonatomic) NSArray *preconditions;
- (id)initWithScope:(long long)arg1;	// IMP=0x000000010001b460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

