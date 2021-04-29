//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoutingDataSource.h"

@class MRDOutputDeviceRoutingDataSource;

@interface MRDMediaServerAVRoutingDataSource : MRDAVRoutingDataSource
{
    MRDOutputDeviceRoutingDataSource *_oddsShimDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004f104
- (id)_oddsShimDataSource;	// IMP=0x000000010004f0b8
- (void)_notifyDelegateRoutesDidChange;	// IMP=0x000000010004f05c
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000010004f044
- (void)_unregisterAVSystemControllerNotifications;	// IMP=0x000000010004eec0
- (void)_registerAVSystemControllerNotifications;	// IMP=0x000000010004ecc8
- (id)_mediaServerController;	// IMP=0x000000010004eca4
- (void)_avSessionMediaServicesResetNotification:(id)arg1;	// IMP=0x000000010004eb74
- (void)_portStatusDidChangeNotification:(id)arg1;	// IMP=0x000000010004e758
- (void)_externalScreenDidChangeNotification:(id)arg1;	// IMP=0x000000010004e6fc
- (void)_postCurrentRouteHasVolumeControlDidChangeNotification:(_Bool)arg1;	// IMP=0x000000010004e5d4
- (void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1;	// IMP=0x000000010004e51c
- (void)_pickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x000000010004e510
- (_Bool)unpickAirPlayRoutes;	// IMP=0x000000010004e40c
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x000000010004e36c
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x000000010004e360
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x000000010004e16c
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x000000010004dfb4
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x000000010004dfa8
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x000000010004df98
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004dc44
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x000000010004dc34
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004dab0
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000010004da5c
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x000000010004da4c
- (id)pickedRoutes;	// IMP=0x000000010004da30
- (id)pickedRoute;	// IMP=0x000000010004d9dc
- (_Bool)currentRouteSupportsVolumeControl;	// IMP=0x000000010004d990
- (unsigned int)externalScreenType;	// IMP=0x000000010004d868
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000010004d7ac
- (void)dealloc;	// IMP=0x000000010004d728
- (id)init;	// IMP=0x000000010004d6d0

@end

