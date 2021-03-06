//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADCloudKitRetryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000e8638
- (void)cancelShareCreationTimer:(id)arg1;	// IMP=0x00000001000e859c
- (void)cancelSubscriptionSetupTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e8500
- (void)cancelRecordZoneSetupTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e8464
- (void)cancelSyncRetryTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e83c8
- (void)cancelRateLimitTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e832c
- (_Bool)handleRateLimitedError:(id)arg1 forZoneInfo:(id)arg2 operationType:(long long)arg3;	// IMP=0x00000001000e81d8
- (void)retryForType:(long long)arg1 zoneInfo:(id)arg2 error:(id)arg3;	// IMP=0x00000001000e80fc
- (void)retryForTypeOnRetryManagerQueue:(long long)arg1 zoneInfo:(id)arg2 error:(id)arg3 retryAfterInterval:(double)arg4;	// IMP=0x00000001000e74b0
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000e7438

@end

