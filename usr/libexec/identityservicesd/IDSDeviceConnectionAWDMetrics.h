//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDeviceConnectionAWDMetrics : NSObject
{
    NSMutableDictionary *_metrics;	// 8 = 0x8
    struct os_unfair_lock_s _writeLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001005a5bb4
- (void).cxx_destruct;	// IMP=0x00000001005a91b8
- (id)_currentMetrics;	// IMP=0x00000001005a9130
- (_Bool)_canReportMetric:(id)arg1;	// IMP=0x00000001005a9074
- (void)_setCreatedAt:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a8c84
- (void)setSuccess:(_Bool)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a8888
- (void)setClientOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a849c
- (void)setDaemonOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a80b0
- (void)setFirstPacketReceiveTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a7cc4
- (void)setDaemonOpenSocketTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a7914
- (void)setConnectionInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a7528
- (void)setClientInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a713c
- (void)setServiceName:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005a6d4c
- (void)reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x00000001005a6cec
- (void)_reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x00000001005a6008
- (id)awdMetricsForConnectionUUID:(id)arg1;	// IMP=0x00000001005a5e1c
- (id)init;	// IMP=0x00000001005a5d48

@end

