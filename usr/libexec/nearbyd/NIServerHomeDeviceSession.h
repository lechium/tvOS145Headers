//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIServerBaseSession.h"

@class NIHomeDeviceConfiguration, NINearbyUpdatesEngine, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NIServerHomeDeviceSession : NIServerBaseSession
{
    shared_ptr_7f363ebc _pbLogger;	// 8 = 0x8
    NINearbyUpdatesEngine *_updatesEngine;	// 24 = 0x18
    _Bool _shouldDeliverUpdates;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
    NSString *_containerUniqueIdentifier;	// 48 = 0x30
    shared_ptr_359d0959 _initiatorSession;	// 56 = 0x38
    struct unordered_map<unsigned long long, std::__1::shared_ptr<rose::objects::GRSession>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<rose::objects::GRSession>>>> _responderSessions;	// 72 = 0x48
    unsigned char _currentSessionRole;	// 112 = 0x70
    struct optional<std::__1::chrono::duration<long long, std::__1::ratio<1, 1000>>> _currentUpdateRate;	// 120 = 0x78
    NIHomeDeviceConfiguration *_configuration;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x000000010017c32c
- (void).cxx_destruct;	// IMP=0x000000010017c294
@property(readonly) NIHomeDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)adjustResponderThrottleRateIfNeeded:(id)arg1 object:(id)arg2;	// IMP=0x000000010017beec
- (void)cycleElapsed;	// IMP=0x000000010017be80
- (void)peerInactivityPeriodExceeded:(id)arg1;	// IMP=0x000000010017bd78
- (void)updatesEngine:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;	// IMP=0x000000010017ba54
- (void)updatesEngine:(id)arg1 didUpdateNearbyObjects:(id)arg2;	// IMP=0x000000010017b880
- (void)_handleBackoffManagerRecommendation:(int)arg1 machContinuousTimeSec:(double)arg2;	// IMP=0x000000010017b664
- (void)_removePeerObject:(id)arg1 uwbIdentifer:(unsigned long long)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000010017b344
- (void)_notifyPeerRemoval:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x000000010017b0d4
- (id)_triggerResponderRangingForSession:(shared_ptr_359d0959)arg1 initiatorDevice:(id)arg2;	// IMP=0x000000010017aedc
- (id)_triggerInitiatorRanging;	// IMP=0x000000010017ae24
- (id)_getUWBConfig:(const struct RoseServiceRequest *)arg1 needsConfigurationAssistance:(_Bool)arg2;	// IMP=0x000000010017ac90
- (_Bool)_shouldRespondToDevice:(id)arg1;	// IMP=0x000000010017ac74
- (void)_roseSession:(shared_ptr_c883cf7f)arg1 invalidatedWithReason:(int)arg2;	// IMP=0x000000010017ab30
- (void)_handleFailedToAddPeer;	// IMP=0x000000010017a8f0
- (id)_addPeers:(id)arg1;	// IMP=0x000000010017a6a8
- (void)_peerHungUp:(unsigned long long)arg1;	// IMP=0x000000010017a494
- (id)_disableAllServicesAndSendHangupSignal:(_Bool)arg1;	// IMP=0x000000010017a24c
- (shared_ptr_359d0959)_buildRoseSession:(const struct RoseServiceRequest *)arg1;	// IMP=0x0000000100179c9c
- (struct RoseServiceRequest)_prepareServiceRequest;	// IMP=0x00000001001798d8
- (void)serviceRequestDidUpdateStatus:(struct ServiceRequestStatusUpdate)arg1;	// IMP=0x0000000100179718
- (void)_roseSession:(shared_ptr_c883cf7f)arg1 didChangeRangingUpdateRate:(int)arg2 newThrottleRate:(float)arg3 prevThrottleRate:(float)arg4 effectiveSinceCycleInde:(int)arg5;	// IMP=0x00000001001793b8
- (void)didReceiveRemoteSessionData:(const struct RemoteSessionData *)arg1;	// IMP=0x00000001001792ec
- (void)didReceiveNewSolution:(const struct RoseSolution *)arg1;	// IMP=0x00000001001790a0
- (void)deviceLost:(id)arg1;	// IMP=0x0000000100179080
- (void)device:(id)arg1 rediscovered:(id)arg2;	// IMP=0x0000000100178aac
- (void)deviceDiscovered:(id)arg1;	// IMP=0x0000000100178458
- (duration_6174cf92)nominalCycleRate;	// IMP=0x0000000100178434
- (void)invalidate;	// IMP=0x00000001001783c0
- (id)disableAllServices;	// IMP=0x00000001001783b0
- (id)removeObject:(id)arg1;	// IMP=0x00000001001780f4
- (id)addObject:(id)arg1;	// IMP=0x0000000100177ee8
- (id)pause;	// IMP=0x0000000100177de4
- (id)run;	// IMP=0x0000000100177b08
- (id)configure;	// IMP=0x00000001001774c4
- (id)lastConfiguration;	// IMP=0x00000001001774b4
- (id)initWithResourcesManager:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000010017713c

@end
