//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADPeerLocationConnectionDelegate-Protocol.h"
#import "AFContextSnapshotTransforming-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class ADGreenTeaLogger, ADPeerLocationConnection, CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSString, SAGetRequestOrigin;
@protocol ADLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADLocationManager : NSObject <ADPeerLocationConnectionDelegate, CLLocationManagerDelegate, AFContextSnapshotTransforming>
{
    id <ADLocationManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_externalQueue;	// 16 = 0x10
    _Bool _needsToSendLocation;	// 24 = 0x18
    _Bool _isNavigating;	// 25 = 0x19
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    int _lastLocationAuthorizationStatus;	// 48 = 0x30
    _Bool _lastLocationServicesIsEnabled;	// 52 = 0x34
    _Bool _lastPreciseLocationIsEnabled;	// 53 = 0x35
    _Bool _haveLastAuthorizationAndEnabledValues;	// 54 = 0x36
    ADPeerLocationConnection *_peerLocationConnection;	// 56 = 0x38
    SAGetRequestOrigin *_requestOriginCommand;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_locationTimerSource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_locationSLATimerSource;	// 80 = 0x50
    CLLocation *_lastLocation;	// 88 = 0x58
    CLInUseAssertion *_locationInUseAssertion;	// 96 = 0x60
    unsigned long long _locationInUseAssertionRefCount;	// 104 = 0x68
    GEOLocationShifter *_locationShifter;	// 112 = 0x70
    CLLocation *_lastPeerLocation;	// 120 = 0x78
    CDUnknownBlockType _updateCompletion;	// 128 = 0x80
    ADGreenTeaLogger *_greenTeaLogger;	// 136 = 0x88
}

+ (void)getLocationIsRestricted:(CDUnknownBlockType)arg1;	// IMP=0x000000010012f1c4
+ (_Bool)_shouldUseOneshotLocationRequest;	// IMP=0x000000010012f1c0
- (void).cxx_destruct;	// IMP=0x00000001001341c0
@property(nonatomic) _Bool needsToSendLocation; // @synthesize needsToSendLocation=_needsToSendLocation;
@property(nonatomic) __weak id <ADLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010013416c
- (void)releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x0000000100133f34
- (void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133ccc
- (void)stopLocationUpdates;	// IMP=0x0000000100133c44
- (void)updateLocationForCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133580
- (void)updateLocationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100132f4c
- (void)updateWithLocation:(id)arg1 locationStatus:(id)arg2;	// IMP=0x0000000100132b68
- (void)_setAuthorizationStatusToAuthorizedAndEnabled;	// IMP=0x0000000100132b50
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000010013238c
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100131ffc
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100131d3c
- (void)peerLocationConnectionSuggestsClearingCachedLocation:(id)arg1;	// IMP=0x0000000100131c48
- (void)peerLocationConnection:(id)arg1 didReceiveUnsolicitedLocation:(id)arg2;	// IMP=0x00000001001319b0
- (double)_preferredPlatformLocationAccuracy;	// IMP=0x0000000100131964
- (void)_processUpdatedLocation:(id)arg1;	// IMP=0x00000001001316ac
- (_Bool)_locationUpdateIsCapableOfSucceeding;	// IMP=0x00000001001316a4
- (id)_bestCachedLocation;	// IMP=0x000000010013158c
- (void)_requestLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100131468
- (void)_requestLocationWithBestAccuracy;	// IMP=0x0000000100131154
- (_Bool)_shouldSendLocationUpdate:(id)arg1 fromLocation:(id)arg2 forCommand:(id)arg3;	// IMP=0x0000000100130ec0
- (void)_startMonitoringLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100130d34
- (void)_startMonitoringLocationWithDesiredAccuracy:(double)arg1;	// IMP=0x0000000100130b78
- (void)_scheduleLocationTimerWithTimeout:(double)arg1;	// IMP=0x0000000100130794
- (void)_cancelLocationTimer;	// IMP=0x00000001001306d0
- (void)_scheduleLocationSLATimer;	// IMP=0x0000000100130438
- (void)_triggerLocationABCForSubtype:(id)arg1;	// IMP=0x0000000100130328
- (void)_cancelLocationSLATimer;	// IMP=0x0000000100130264
- (void)_clearCompletionState;	// IMP=0x0000000100130234
- (void)_stopMonitoringLocation;	// IMP=0x000000010013014c
- (void)_generateLocationUnknownResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100130130
- (void)_generateLocationTimedOutResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100130114
- (void)_generateLocationWiFiOffResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001300f8
- (void)_generateLocationDeniedResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001300dc
- (void)_generateLocationDisabledResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001300c0
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withStatus:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012ff60
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withUnshiftedLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012f984
- (void)navStatusChanged:(id)arg1;	// IMP=0x000000010012f904
- (id)_locationShifter;	// IMP=0x000000010012f8c0
- (id)_peerLocationConnection;	// IMP=0x000000010012f86c
- (id)_locationManager;	// IMP=0x000000010012f5d0
- (_Bool)_locationServicesIsEnabled;	// IMP=0x000000010012f5c8
@property(readonly, nonatomic) CLLocation *lastLocation;
- (void)dealloc;	// IMP=0x000000010012f514
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x000000010012f250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
