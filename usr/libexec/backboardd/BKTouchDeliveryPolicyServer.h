//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSTouchDeliveryPolicyServerInterface-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BKSTouchDeliveryPolicy, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryPolicyServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, BKSTouchDeliveryPolicyServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableSet *_assertionConnections;	// 24 = 0x18
    BKSTouchDeliveryPolicy *_policy;	// 32 = 0x20
}

+ (id)sharedServer;	// IMP=0x0000000100061350
- (void).cxx_destruct;	// IMP=0x000000010006072c
@property(retain, setter=_queue_setPolicy:) BKSTouchDeliveryPolicy *_policy; // @synthesize _policy;
- (_Bool)shouldCancelTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;	// IMP=0x0000000100060654
- (id)shouldDeliverTouchesToContextIds:(unsigned int *)arg1 count:(long long)arg2;	// IMP=0x0000000100060428
- (id)shouldDeliverToIndexedContextIDs:(unsigned int *)arg1 count:(long long)arg2;	// IMP=0x00000001000602ac
- (void)ipc_addPolicy:(id)arg1;	// IMP=0x0000000100060108
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000010005ff44
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005fde8
- (void)run;	// IMP=0x000000010005fdd8
- (void)dealloc;	// IMP=0x000000010005fd88
- (id)init;	// IMP=0x000000010005fc7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

