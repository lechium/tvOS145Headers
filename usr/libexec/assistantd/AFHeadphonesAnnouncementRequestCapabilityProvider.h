//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFAnnouncementRequestCapabilityProviding-Protocol.h"
#import "AFNotifyObserverDelegate-Protocol.h"
#import "AFSettingsDelegate-Protocol.h"

@class AFNotifyObserver, AFSettingsConnection, AVSystemController, NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding>
{
    _Bool _inWirelessSplitterSession;	// 8 = 0x8
    _Bool _inWirelessSplitterSessionStateValid;	// 9 = 0x9
    _Bool _localVoiceAssetAvailable;	// 10 = 0xa
    AFSettingsConnection *_settingsConnection;	// 16 = 0x10
    AFNotifyObserver *_pairedInfoChangeObserver;	// 24 = 0x18
    AFNotifyObserver *_wirelessSplitterSessionObserver;	// 32 = 0x20
    AFNotifyObserver *_wirelessGuestConnectionObserver;	// 40 = 0x28
    AVSystemController *_avSystemController;	// 48 = 0x30
    AFNotifyObserver *_forcedUpdateObserver;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_group;	// 72 = 0x48
    unsigned long long _lastKnownAvailableAnnouncementRequests;	// 80 = 0x50
    unsigned long long _lastKnownEligibleAnnouncementRequests;	// 88 = 0x58
    NSHashTable *_delegates;	// 96 = 0x60
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x000000010009f634
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x000000010009f530
+ (long long)platform;	// IMP=0x000000010009f528
+ (id)provider;	// IMP=0x000000010009d914
- (void).cxx_destruct;	// IMP=0x00000001000a006c
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009fd34
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009f748
- (unsigned long long)lastKnownAnnouncementRequestEligibilityState;	// IMP=0x000000010009f740
- (void)addDelegate:(id)arg1;	// IMP=0x000000010009f730
- (void)_settingsConnectionDidDisconnect;	// IMP=0x000000010009f45c
- (id)_settingsConnection;	// IMP=0x000000010009f3e8
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x000000010009f32c
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x000000010009f1b8
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009f054
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009eeb4
- (void)notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x000000010009ed60
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;	// IMP=0x000000010009ec54
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)arg1;	// IMP=0x000000010009eb9c
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;	// IMP=0x000000010009e9ec
- (unsigned long long)_routeCapabilitiesForRouteDescription:(id)arg1;	// IMP=0x000000010009e648
- (_Bool)_updateAudioRouteAvailabilityAndBroadcast:(_Bool)arg1;	// IMP=0x000000010009e394
- (void)systemControllerDied:(id)arg1;	// IMP=0x000000010009e288
- (void)updateAudioRouteAvailability:(id)arg1;	// IMP=0x000000010009e184
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009e174
- (void)updateWirelessSplitterSessionInfoAndObserve;	// IMP=0x000000010009df18
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;	// IMP=0x000000010009ded4
- (void)_fetchInitialState;	// IMP=0x000000010009de14
- (id)_init;	// IMP=0x000000010009d9c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

