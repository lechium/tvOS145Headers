//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCentralManager;
@protocol OS_dispatch_queue;

@interface W5BluetoothController : NSObject
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    CDUnknownBlockType _updatedBluetoothCallback;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType updatedBluetoothCallback; // @synthesize updatedBluetoothCallback=_updatedBluetoothCallback;
- (id)devices;	// IMP=0x0000000100037710
- (id)__ios__deviceList;	// IMP=0x000000010003711c
- (void)__ios__handleBTAdvertisingNotification:(id)arg1;	// IMP=0x0000000100037034
- (void)__ios__handleBTDiscoveryNotification:(id)arg1;	// IMP=0x0000000100036f4c
- (void)__ios__handleBTConnectabiliyNotification:(id)arg1;	// IMP=0x0000000100036e64
- (void)__ios__handleBTPowerNotification:(id)arg1;	// IMP=0x0000000100036d7c
- (void)__ios__handleBTAvailabilityNotification:(id)arg1;	// IMP=0x0000000100036c94
- (_Bool)isScanning;	// IMP=0x0000000100036bb4
- (_Bool)isAvailable;	// IMP=0x0000000100036ad4
- (_Bool)isConnectable;	// IMP=0x00000001000369f4
- (_Bool)isDiscoverable;	// IMP=0x0000000100036914
- (id)address;	// IMP=0x00000001000367d4
- (_Bool)powerOn;	// IMP=0x00000001000366ec
- (void)stopEventMonitoring;	// IMP=0x0000000100036630
- (void)startEventMonitoring;	// IMP=0x00000001000364a8
- (void)dealloc;	// IMP=0x000000010003644c
- (id)init;	// IMP=0x0000000100036270

@end
