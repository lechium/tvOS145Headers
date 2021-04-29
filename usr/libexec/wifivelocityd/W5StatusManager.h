//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CWFInterface, NSMutableArray, NSMutableDictionary, NSOperationQueue, W5BluetoothController, W5IOPowerManagement, W5IOPowerSource, W5Status, W5WiFiInterface;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface W5StatusManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_forceUpdateTimer;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_coalesceUpdateTimer;	// 24 = 0x18
    W5Status *_updateStatus;	// 32 = 0x20
    NSMutableDictionary *_cachedStatusUUIDMap;	// 40 = 0x28
    NSMutableArray *_eventHistory;	// 48 = 0x30
    W5WiFiInterface *_wifi;	// 56 = 0x38
    W5WiFiInterface *_awdl;	// 64 = 0x40
    W5WiFiInterface *_nan;	// 72 = 0x48
    CWFInterface *_corewifi;	// 80 = 0x50
    W5BluetoothController *_bluetooth;	// 88 = 0x58
    _Bool _isMonitoringEvents;	// 96 = 0x60
    W5IOPowerManagement *_pm;	// 104 = 0x68
    W5IOPowerSource *_ps;	// 112 = 0x70
    CDUnknownBlockType _updatedWiFiStatusCallback;	// 120 = 0x78
    CDUnknownBlockType _updatedAWDLStatusCallback;	// 128 = 0x80
    CDUnknownBlockType _updatedNetworkStatusCallback;	// 136 = 0x88
    CDUnknownBlockType _updatedBluetoothStatusCallback;	// 144 = 0x90
    CDUnknownBlockType _updatedPowerStatusCallback;	// 152 = 0x98
    CDUnknownBlockType _updatedWiFiCallback;	// 160 = 0xa0
    CDUnknownBlockType _updatedBluetoothCallback;	// 168 = 0xa8
    CDUnknownBlockType _updatedPowerManagementCallback;	// 176 = 0xb0
    CDUnknownBlockType _updatedPowerSourceCallback;	// 184 = 0xb8
    CDUnknownBlockType _lowBatteryCallback;	// 192 = 0xc0
    NSOperationQueue *_concurrentQueue;	// 200 = 0xc8
}

@property(readonly) NSOperationQueue *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(copy, nonatomic) CDUnknownBlockType lowBatteryCallback; // @synthesize lowBatteryCallback=_lowBatteryCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedPowerSourceCallback; // @synthesize updatedPowerSourceCallback=_updatedPowerSourceCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedPowerManagementCallback; // @synthesize updatedPowerManagementCallback=_updatedPowerManagementCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedBluetoothCallback; // @synthesize updatedBluetoothCallback=_updatedBluetoothCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedWiFiCallback; // @synthesize updatedWiFiCallback=_updatedWiFiCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedPowerStatusCallback; // @synthesize updatedPowerStatusCallback=_updatedPowerStatusCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedBluetoothStatusCallback; // @synthesize updatedBluetoothStatusCallback=_updatedBluetoothStatusCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedNetworkStatusCallback; // @synthesize updatedNetworkStatusCallback=_updatedNetworkStatusCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedAWDLStatusCallback; // @synthesize updatedAWDLStatusCallback=_updatedAWDLStatusCallback;
@property(copy, nonatomic) CDUnknownBlockType updatedWiFiStatusCallback; // @synthesize updatedWiFiStatusCallback=_updatedWiFiStatusCallback;
@property(readonly, retain) W5IOPowerSource *ps; // @synthesize ps=_ps;
@property(readonly, retain) W5IOPowerManagement *pm; // @synthesize pm=_pm;
@property(readonly, retain) W5WiFiInterface *nan; // @synthesize nan=_nan;
@property(readonly, retain) W5WiFiInterface *awdl; // @synthesize awdl=_awdl;
@property(readonly, retain) CWFInterface *corewifi; // @synthesize corewifi=_corewifi;
- (void)__setupCallbacks;	// IMP=0x0000000100032130
- (void)addEvent:(id)arg1;	// IMP=0x00000001000320a0
- (void)__addEvent:(id)arg1;	// IMP=0x0000000100032040
- (void)__updateStatus;	// IMP=0x0000000100031454
- (id)__queryStatusIncludingWiFiScanCache:(_Bool)arg1;	// IMP=0x000000010003135c
- (id)__queryWiFiStatusIncludingScanCache:(_Bool)arg1;	// IMP=0x0000000100030e60
- (id)__queryNetworkStatus;	// IMP=0x0000000100030c74
- (id)__queryBluetoothStatus;	// IMP=0x0000000100030b58
- (id)__queryAWDLStatus;	// IMP=0x00000001000308dc
- (id)__queryPowerStatus;	// IMP=0x000000010003081c
- (long long)__airDropDiscoverableMode;	// IMP=0x0000000100030758
- (void)__updateStatusCoalesce;	// IMP=0x00000001000304fc
- (void)__forceUpdateTrigger;	// IMP=0x00000001000302b8
- (void)stopEventMonitoring;	// IMP=0x00000001000301bc
- (void)startEventMonitoring;	// IMP=0x00000001000300d4
- (id)eventHistory;	// IMP=0x000000010002ffc4
- (void)clearCachedStatusWithUUID:(id)arg1;	// IMP=0x000000010002ff28
- (id)cachedStatusWithUUID:(id)arg1;	// IMP=0x000000010002fdc4
- (id)powerStatus;	// IMP=0x000000010002fcb4
- (id)networkStatus;	// IMP=0x000000010002fba4
- (id)bluetoothStatus;	// IMP=0x000000010002fa94
- (id)awdlStatus;	// IMP=0x000000010002f984
- (id)wifiStatus;	// IMP=0x000000010002f870
- (id)status;	// IMP=0x000000010002f75c
- (void)queryStatusAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f6a4
- (void)dealloc;	// IMP=0x000000010002ecf0
- (id)init;	// IMP=0x000000010002ebc0
@property(readonly, retain) W5BluetoothController *bluetooth; // @dynamic bluetooth;
- (id)__bluetooth;	// IMP=0x000000010002ea40
@property(readonly, retain) W5WiFiInterface *wifi; // @dynamic wifi;
- (id)__wifi;	// IMP=0x000000010002e89c

@end

