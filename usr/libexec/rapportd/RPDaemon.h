//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class CUSystemMonitor, NSCountedSet, NSMutableArray, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_event_publisher;

@interface RPDaemon : NSObject <NSXPCListenerDelegate>
{
    NSCountedSet *_assertions;	// 8 = 0x8
    unsigned long long _errorFlagsForceSet;	// 16 = 0x10
    unsigned long long _errorFlagsForceClear;	// 24 = 0x18
    int _languageChangedNotifier;	// 32 = 0x20
    _Bool _prefXPCMatchingTestMode;	// 36 = 0x24
    NSObject<OS_dispatch_source> *_sigTermSource;	// 40 = 0x28
    unsigned long long _stateHandleGeneral;	// 48 = 0x30
    unsigned long long _stateHandleIdentities;	// 56 = 0x38
    unsigned long long _stateHandleKeychain;	// 64 = 0x40
    unsigned long long _stateHandlePrivateDiscovery;	// 72 = 0x48
    NSMutableArray *_subDaemons;	// 80 = 0x50
    CUSystemMonitor *_systemMonitor;	// 88 = 0x58
    NSMutableSet *_xpcConnections;	// 96 = 0x60
    _Bool _xpcEventsRegistered;	// 104 = 0x68
    NSXPCListener *_xpcListener;	// 112 = 0x70
    NSObject<OS_xpc_event_publisher> *_xpcPublisher;	// 120 = 0x78
    _Bool _languageChangePending;	// 128 = 0x80
    _Bool _sigTermPending;	// 129 = 0x81
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 136 = 0x88
    unsigned long long _errorFlags;	// 144 = 0x90
}

+ (id)sharedDaemon;	// IMP=0x000000010002f204
- (void).cxx_destruct;	// IMP=0x0000000100032220
@property(readonly, nonatomic) _Bool sigTermPending; // @synthesize sigTermPending=_sigTermPending;
@property(readonly, nonatomic) _Bool languageChangePending; // @synthesize languageChangePending=_languageChangePending;
@property(readonly, nonatomic) unsigned long long errorFlags; // @synthesize errorFlags=_errorFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcPublisherStateChangedForToken:(unsigned long long)arg1 state:(_Bool)arg2;	// IMP=0x0000000100031fec
- (void)_xpcPublisherTriggeredReply:(id)arg1 token:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031c90
- (void)_xpcPublisherTriggeredToken:(unsigned long long)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000319b0
- (void)_xpcPublisherRemoveToken:(unsigned long long)arg1;	// IMP=0x0000000100031830
- (void)_xpcPublisherAddToken:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000010003138c
- (void)_xpcPublisherAction:(unsigned int)arg1 token:(unsigned long long)arg2 event:(id)arg3;	// IMP=0x00000001000312a4
- (void)_updateErrorFlags;	// IMP=0x0000000100031144
- (void)_prefsChanged;	// IMP=0x0000000100031028
- (void)postDaemonInfoChanges:(unsigned long long)arg1;	// IMP=0x0000000100030e4c
- (id)keychainStateString;	// IMP=0x0000000100030bf8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100030984
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100030848
- (void)invalidate;	// IMP=0x00000001000304f0
- (void)activate;	// IMP=0x000000010002fac4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010002f438
- (id)init;	// IMP=0x000000010002f270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

