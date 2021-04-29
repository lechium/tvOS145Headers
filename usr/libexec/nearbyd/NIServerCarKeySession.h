//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIServerBaseSession.h"

@class NICarKeyConfiguration, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NIServerCarKeySession : NIServerBaseSession
{
    shared_ptr_7f363ebc _pbLogger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSString *_containerUniqueIdentifier;	// 32 = 0x20
    struct shared_ptr<rose::alisha::AlishaManager> _alishaManager;	// 40 = 0x28
    struct shared_ptr<rose::objects::AlishaSubsystem> _alishaSystem;	// 56 = 0x38
    struct shared_ptr<rose::alisha::dck::Coder> _dckCoder;	// 72 = 0x48
    struct shared_ptr<AlishaConfigProvider> _configProvider;	// 88 = 0x58
    struct shared_ptr<rose::alisha::negotiation::ParameterNegotiator> _paramNegotiator;	// 104 = 0x68
    struct shared_ptr<rose::alisha::analytics::AnalyticsManager> _analyticsManager;	// 120 = 0x78
    struct unique_ptr<Rose::RoseSystemAssertion, std::__1::default_delete<Rose::RoseSystemAssertion>> _keepAPAwakeAssertion;	// 136 = 0x88
    struct optional<rose::alisha::hsi::Capabilities> _cachedCapabilities;	// 144 = 0x90
    shared_ptr_31410e9d _passthroughAlishaSession;	// 216 = 0xd8
    struct AlishaPassthroughParameters _passthroughParams;	// 232 = 0xe8
    struct shared_ptr<rose::timeout_management::CarKeyTimeoutManager> _timeoutManager;	// 320 = 0x140
    struct shared_ptr<rose::alisha::health_monitoring::HealthMonitor> _healthMonitor;	// 336 = 0x150
    NICarKeyConfiguration *_configuration;	// 352 = 0x160
}

- (id).cxx_construct;	// IMP=0x000000010019e1b4
- (void).cxx_destruct;	// IMP=0x000000010019e078
@property(readonly) NICarKeyConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_handleTimeoutEvent:(int)arg1 time:(double)arg2;	// IMP=0x000000010019dbb8
- (void)_handleRangingBlockSummary:(struct RangingBlockSummary)arg1;	// IMP=0x000000010019d8d4
- (void)_alishaStateChangedFromState:(unsigned char)arg1 toNewState:(unsigned char)arg2;	// IMP=0x000000010019d728
- (Result_eb71acd8)_passthroughSessionServiceRequest:(id)arg1;	// IMP=0x000000010019cb6c
- (struct RequestConstructionDebugParams)_ownerDeviceServiceRequestDebugParams:(id)arg1;	// IMP=0x000000010019c86c
- (id)_pausePassthroughSession;	// IMP=0x000000010019c6a0
- (id)_runPassthroughSession;	// IMP=0x000000010019c17c
- (id)_runOwnerSession;	// IMP=0x000000010019bf68
- (id)_configureForPassthroughSession;	// IMP=0x000000010019b8d0
- (id)_configureForOwnerDevice;	// IMP=0x000000010019ac44
- (void)_alishaSessionInvalidatedWithReason:(int)arg1;	// IMP=0x000000010019ab00
- (shared_ptr_31410e9d)_buildAlishaSession:(const struct RoseServiceRequest *)arg1;	// IMP=0x000000010019a748
- (id)_setURSKTTL:(unsigned long long)arg1;	// IMP=0x000000010019a524
- (id)_setDebugURSK:(id)arg1 transactionIdentifier:(unsigned int)arg2;	// IMP=0x000000010019a1c0
- (id)deleteURSKs;	// IMP=0x0000000100199f3c
- (id)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2 monotonicTimeSec:(double)arg3;	// IMP=0x0000000100199aec
- (struct NIServerDataResponse)processDCKMessage:(id)arg1;	// IMP=0x00000001001995b4
- (id)pause;	// IMP=0x00000001001993f8
- (id)run;	// IMP=0x00000001001993b4
- (id)configure;	// IMP=0x0000000100198c48
- (duration_6174cf92)nominalCycleRate;	// IMP=0x0000000100198c40
- (id)disableAllServices;	// IMP=0x0000000100198a40
- (void)invalidate;	// IMP=0x00000001001989a4
- (id)lastConfiguration;	// IMP=0x0000000100198994
- (id)initWithResourcesManager:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001985b0

@end

