//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPCompanionLinkClient, SDNotificationManager, SFDeviceDiscovery, SFService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDRemoteInteractionAgent : NSObject <SDSharedRemoteTextInputDelegate>
{
    NSObject<OS_dispatch_source> *_aggressiveTimer;	// 8 = 0x8
    WPNearby *_bleWPNearby;	// 16 = 0x10
    _Bool _clientEnabled;	// 24 = 0x18
    RPCompanionLinkClient *_clinkClient;	// 32 = 0x20
    _Bool _cloudPairedOnly;	// 40 = 0x28
    SFService *_controlService;	// 48 = 0x30
    NSUUID *_currentSessionID;	// 56 = 0x38
    NSString *_currentText;	// 64 = 0x40
    SFDeviceDiscovery *_deviceDiscovery;	// 72 = 0x48
    NSMutableDictionary *_devices;	// 80 = 0x50
    _Bool _idsMonitorInstalled;	// 88 = 0x58
    NSMutableSet *_legacy_sessionDeviceIDs;	// 96 = 0x60
    SDNotificationManager *_notificationManager;	// 104 = 0x68
    long long _rssiThreshold;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_rtiTimer;	// 120 = 0x78
    _Bool _serverEnabled;	// 128 = 0x80
    NSSet *_sessionDeviceIDs;	// 136 = 0x88
    NSMutableSet *_sessions;	// 144 = 0x90
    CUSystemMonitor *_systemMonitor;	// 152 = 0x98
    _Bool _preventNotifications;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
}

+ (id)sharedAgent;	// IMP=0x00000001000d7fa4
- (void).cxx_destruct;	// IMP=0x00000001000dcbbc
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testKeyboardUpdateWithDelay;	// IMP=0x00000001000dcb84
- (void)testKeyboardUpdate;	// IMP=0x00000001000dca78
- (void)testKeyboardRemoveWithDelay;	// IMP=0x00000001000dca5c
- (void)testKeyboardRemove;	// IMP=0x00000001000dc980
- (void)testKeyboardPostWithDelay;	// IMP=0x00000001000dc964
- (void)testKeyboardPostThenUpdate;	// IMP=0x00000001000dc86c
- (void)testKeyboardPost:(id)arg1;	// IMP=0x00000001000dc748
- (void)clientUserDidTapNotification:(id)arg1;	// IMP=0x00000001000dc6d0
- (void)_clientUpdateCoalesceTimerForDevice:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000dc6cc
- (void)clientTextSessionDidBegin:(id)arg1 device:(id)arg2;	// IMP=0x00000001000dc6b4
- (void)clientNotificationUpdateForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00000001000dc534
- (void)clientNotificationUpdateForDevice:(id)arg1 rtiData:(id)arg2;	// IMP=0x00000001000dc3b4
- (void)clientNotificationRemoveForDevice:(id)arg1;	// IMP=0x00000001000dc25c
- (void)clientNotificationPostIfNeededForDevice:(id)arg1;	// IMP=0x00000001000dc0a4
- (_Bool)_clientShouldStart;	// IMP=0x00000001000dbf18
- (void)_clientDeviceLockStatusChanged;	// IMP=0x00000001000dbe10
- (void)_clientDeviceLost:(id)arg1;	// IMP=0x00000001000dbd00
- (void)_clientDeviceFound:(id)arg1;	// IMP=0x00000001000dba10
- (void)_clientClinkDeviceChanged:(id)arg1;	// IMP=0x00000001000db98c
- (void)_clientClinkDeviceLost:(id)arg1;	// IMP=0x00000001000db908
- (void)_clientClinkDeviceFound:(id)arg1;	// IMP=0x00000001000db884
- (void)_clientEnsureStopped;	// IMP=0x00000001000db78c
- (void)_clientEnsureStarted;	// IMP=0x00000001000dad10
- (void)sessionStop:(id)arg1;	// IMP=0x00000001000dac68
- (int)sessionStart:(id)arg1;	// IMP=0x00000001000da8fc
- (void)advertisingTimerStart;	// IMP=0x00000001000da7c4
- (void)advertisingTimerFired;	// IMP=0x00000001000da718
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000da5fc
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000da408
- (void)handleEventWithData:(id)arg1;	// IMP=0x00000001000da348
- (void)_sendRTIPayload:(id)arg1;	// IMP=0x00000001000da008
- (void)_serverSendTextSessionDidEnd:(id)arg1;	// IMP=0x00000001000d9d88
- (void)_serverSendTextSessionDidBegin:(id)arg1;	// IMP=0x00000001000d9a88
- (void)_legacy_serverRespondInfo:(id)arg1;	// IMP=0x00000001000d999c
- (void)_legacy_serverHandleRequest:(id)arg1;	// IMP=0x00000001000d9720
- (void)_legacy_serverHandleEvent:(id)arg1;	// IMP=0x00000001000d92d4
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d9218
- (void)_serverEnsureStopped;	// IMP=0x00000001000d9110
- (void)_serverEnsureStarted;	// IMP=0x00000001000d8d2c
- (void)_commonIDSChanged:(id)arg1;	// IMP=0x00000001000d8c58
- (void)_commonEnsureStopped;	// IMP=0x00000001000d8b60
- (void)_commonEnsureStarted;	// IMP=0x00000001000d8a54
- (void)_update;	// IMP=0x00000001000d89c8
- (void)prefsChanged;	// IMP=0x00000001000d85d8
- (void)invalidate;	// IMP=0x00000001000d84c4
- (void)activate;	// IMP=0x00000001000d82fc
- (id)description;	// IMP=0x00000001000d8074
- (id)init;	// IMP=0x00000001000d8010

@end

