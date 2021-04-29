//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PCSIDSMessagingDelegate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, PCSIDSTransport, PCSKeySyncing;
@protocol OS_dispatch_queue;

@interface PCSIDSSyncing : NSObject <PCSIDSMessagingDelegate>
{
    PCSIDSTransport *_transport;	// 8 = 0x8
    PCSKeySyncing *_manager;	// 16 = 0x10
    NSMutableDictionary *_peers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_syncingQueue;	// 32 = 0x20
    NSOperationQueue *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100008db0
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSObject<OS_dispatch_queue> *syncingQueue; // @synthesize syncingQueue=_syncingQueue;
@property(retain) NSMutableDictionary *peers; // @synthesize peers=_peers;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) PCSIDSTransport *transport; // @synthesize transport=_transport;
- (void)devicesAreNoLongerNearby:(id)arg1;	// IMP=0x0000000100008b98
- (void)devicesAreNowNearby:(id)arg1;	// IMP=0x0000000100008984
- (void)newDevices:(id)arg1 removedDevices:(id)arg2;	// IMP=0x00000001000083e8
- (void)triggerIDSSyncing:(id)arg1;	// IMP=0x0000000100007f8c
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000100007d18
- (_Bool)havePeers;	// IMP=0x0000000100007b38
- (void)connectionForDevice:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007740
- (void)incomingMessage:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000001000074c8
- (id)initWithManager:(id)arg1 transport:(id)arg2 serialQueue:(id)arg3;	// IMP=0x0000000100007330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

