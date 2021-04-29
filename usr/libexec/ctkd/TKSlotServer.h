//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;

@interface TKSlotServer : NSObject <NSXPCListenerDelegate>
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
    NSXPCListener *_registryListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000dac4
@property(readonly, nonatomic) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(readonly, nonatomic) NSXPCListener *registryListener; // @synthesize registryListener=_registryListener;
- (void)removeClient:(id)arg1;	// IMP=0x000000010000da3c
- (void)addClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d65c
- (void)removeSlotRegistration:(id)arg1;	// IMP=0x000000010000d354
- (void)ensureSlotWatchersRunning;	// IMP=0x000000010000d350
- (void)notifyDesktopUp;	// IMP=0x000000010000d2e4
- (void)addSlotRegistration:(id)arg1 name:(id)arg2;	// IMP=0x000000010000cd44
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000cc7c
- (void)stop;	// IMP=0x000000010000cbec
- (void)start;	// IMP=0x000000010000cbb4
- (id)initWithRegistryListener:(id)arg1 clientListener:(id)arg2;	// IMP=0x000000010000ca8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
