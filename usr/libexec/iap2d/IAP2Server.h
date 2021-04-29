//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IAP2Server : NSObject
{
    struct __CFRunLoop *_serverRunLoop;	// 8 = 0x8
    struct __serverFlags {
        unsigned int deathBecomesUs:1;
        unsigned int serverExiting:1;
        unsigned int reserved:30;
    } serverFlags;	// 16 = 0x10
    struct __CFString *_deviceClass;	// 24 = 0x18
    struct __CFString *_deviceProductType;	// 32 = 0x20
    struct __CFRunLoopTimer *_sleepAssertionTimer;	// 40 = 0x28
    int _disableSleepAssertions;	// 48 = 0x30
    struct IONotificationPort *_ioaccessoryNotifyPort;	// 56 = 0x38
    struct IONotificationPort *_systemPowerNotifyPortRef;	// 64 = 0x40
    unsigned int _systemPowerIterator;	// 72 = 0x48
    NSObject<OS_xpc_object> *_listener;	// 80 = 0x50
    IAPXPCConnection *_iaptransportd_connection;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_internalListenerQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_iap2dHighPriorityRootQueue;	// 104 = 0x68
    _Bool _isShuttingDown;	// 112 = 0x70
}

+ (void)sendAudioStateChangedNotification;	// IMP=0x000000010001bf1c
+ (id)sharedIAP2Server;	// IMP=0x000000010001bec4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *iap2dhighPriorityRootQueue; // @synthesize iap2dhighPriorityRootQueue=_iap2dHighPriorityRootQueue;
@property(nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(nonatomic) struct IONotificationPort *ioaccessoryNotifyPort; // @synthesize ioaccessoryNotifyPort=_ioaccessoryNotifyPort;
@property(retain, nonatomic) IAPXPCConnection *iaptransportd_connection; // @synthesize iaptransportd_connection=_iaptransportd_connection;
- (void)updateTransportListStates;	// IMP=0x000000010001d5ac
- (void)preventIdleSleep:(int)arg1;	// IMP=0x000000010001d560
- (struct __CFString *)deviceProductType;	// IMP=0x000000010001d518
- (struct __CFString *)deviceClass;	// IMP=0x000000010001d4d0
- (_Bool)isServerStopping;	// IMP=0x000000010001d4c4
- (void)stopServer:(int)arg1 forceExitingImmediately:(_Bool)arg2;	// IMP=0x000000010001d43c
- (void)stopServer:(int)arg1;	// IMP=0x000000010001d42c
- (void)_pollForDeathAfterPromptCompletes;	// IMP=0x000000010001d418
- (void)run;	// IMP=0x000000010001cfd0
- (void)dealloc;	// IMP=0x000000010001cf70
- (void)bringdownPlatform;	// IMP=0x000000010001cc64
- (void)_changeListenerQueuePriorityStop:(id)arg1;	// IMP=0x000000010001ca4c
- (void)_changeListenerQueuePriorityHigh:(id)arg1;	// IMP=0x000000010001c6fc
- (id)init;	// IMP=0x000000010001c1bc
- (void)listenForBTAccessoryDetach;	// IMP=0x000000010001c14c
- (void)listenForBTAccessoryAttach;	// IMP=0x000000010001bf64

@end

