//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WiFiNetworkStoreController;

@interface WiFiTimeDeferredNetworksAJManager : NSObject
{
    struct __WiFiDeviceManager *_deviceManager;	// 8 = 0x8
    NSMutableArray *_networks;	// 16 = 0x10
    WiFiNetworkStoreController *_networkStore;	// 24 = 0x18
    NSMutableArray *_cumulativeAutoJoinScanResults;	// 32 = 0x20
    struct __WiFiNetwork *_currentNetwork;	// 40 = 0x28
    unsigned long long _usageRankForDeferral;	// 48 = 0x30
    double _deferIntervalSecs;	// 56 = 0x38
    unsigned long long _numDaysSinceAssocOverrideDeferral;	// 64 = 0x40
}

@property(nonatomic) unsigned long long numDaysSinceAssocOverrideDeferral; // @synthesize numDaysSinceAssocOverrideDeferral=_numDaysSinceAssocOverrideDeferral;
@property(nonatomic) double deferIntervalSecs; // @synthesize deferIntervalSecs=_deferIntervalSecs;
@property(nonatomic) unsigned long long usageRankForDeferral; // @synthesize usageRankForDeferral=_usageRankForDeferral;
- (void)printDeferredNetworks;	// IMP=0x0000000100126488
- (_Bool)isTimeDeferredNetworksPresent;	// IMP=0x0000000100126460
- (void)setLinkDown;	// IMP=0x00000001001262ec
- (void)setLinkUpForNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100126160
- (void)setScanResultsWithAutoJoinSessionCompletion:(id)arg1 complete:(_Bool)arg2;	// IMP=0x0000000100125c58
- (void)clearScanResultsForAutoJoinSessionReset;	// IMP=0x0000000100125c48
- (_Bool)deferNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100125a88
- (_Bool)canDeferNetwork:(struct __WiFiNetwork *)arg1 withUsageRank:(unsigned long long)arg2 andMotionState:(int)arg3;	// IMP=0x0000000100125320
- (void)dealloc;	// IMP=0x0000000100125298
- (id)initWithArgs:(struct __WiFiDeviceManager *)arg1;	// IMP=0x0000000100125124

@end

