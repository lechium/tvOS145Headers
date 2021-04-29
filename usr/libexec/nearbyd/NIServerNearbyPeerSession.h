//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIServerBaseSession.h"

@class NINearbyPeerConfiguration, NINearbyUpdatesEngine, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NIServerNearbyPeerSession : NIServerBaseSession
{
    shared_ptr_7f363ebc _pbLogger;	// 8 = 0x8
    NINearbyUpdatesEngine *_updatesEngine;	// 24 = 0x18
    _Bool _shouldDeliverUpdates;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
    NSString *_containerUniqueIdentifier;	// 48 = 0x30
    shared_ptr_359d0959 _grSession;	// 56 = 0x38
    NINearbyPeerConfiguration *_configuration;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000001001ed0b8
- (void).cxx_destruct;	// IMP=0x00000001001ed030
@property(readonly) NINearbyPeerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)cycleElapsed;	// IMP=0x00000001001ecfb4
- (void)peerInactivityPeriodExceeded:(id)arg1;	// IMP=0x00000001001ecf48
- (void)updatesEngine:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;	// IMP=0x00000001001ece04
- (void)updatesEngine:(id)arg1 didUpdateNearbyObjects:(id)arg2;	// IMP=0x00000001001ecc30
- (void)_removePeerObject:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x00000001001ec7e8
- (id)_triggerRanging:(id)arg1;	// IMP=0x00000001001ec5e0
- (_Bool)_shouldInitiate:(id)arg1 peerDiscoveryToken:(id)arg2;	// IMP=0x00000001001ec36c
- (id)_getUWBConfig:(const struct RoseServiceRequest *)arg1 needsConfigurationAssistance:(_Bool)arg2;	// IMP=0x00000001001ec1d8
- (void)_grSessionInvalidatedWithReason:(int)arg1;	// IMP=0x00000001001ec094
- (void)_handleFailedToRemovePeer;	// IMP=0x00000001001ebfc4
- (void)_handleFailedToAddPeer;	// IMP=0x00000001001ebd84
- (id)_removePeers:(id)arg1;	// IMP=0x00000001001ebabc
- (id)_addPeers:(id)arg1;	// IMP=0x00000001001eb874
- (void)_peerHungUp:(id)arg1;	// IMP=0x00000001001eb6cc
- (id)_disableAllServicesAndSendHangupSignal:(_Bool)arg1;	// IMP=0x00000001001eb5cc
- (shared_ptr_359d0959)_buildRoseSession:(const struct RoseServiceRequest *)arg1;	// IMP=0x00000001001eb030
- (struct RoseServiceRequest)_prepareServiceRequest;	// IMP=0x00000001001eaba4
- (void)didReceiveRemoteSessionData:(const struct RemoteSessionData *)arg1;	// IMP=0x00000001001eaa48
- (void)didReceiveNewSolution:(const struct RoseSolution *)arg1;	// IMP=0x00000001001ea858
- (void)deviceLost:(id)arg1;	// IMP=0x00000001001ea838
- (void)device:(id)arg1 rediscovered:(id)arg2;	// IMP=0x00000001001ea558
- (void)deviceDiscovered:(id)arg1;	// IMP=0x00000001001ea4e8
- (duration_6174cf92)nominalCycleRate;	// IMP=0x00000001001ea4e0
- (void)invalidate;	// IMP=0x00000001001ea46c
- (id)disableAllServices;	// IMP=0x00000001001ea45c
- (id)pause;	// IMP=0x00000001001ea358
- (id)run;	// IMP=0x00000001001e9f80
- (id)configure;	// IMP=0x00000001001e9c90
- (id)lastConfiguration;	// IMP=0x00000001001e9c80
- (id)initWithResourcesManager:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001e9808

@end

