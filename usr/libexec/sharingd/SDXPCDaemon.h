//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SDXPCDaemonProtocol-Protocol.h"

@class NSSet, NSString, NSXPCConnection, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDXPCDaemon : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, SDXPCDaemonProtocol>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    _Bool _activateCalled;	// 16 = 0x10
    _Bool _invalidateCalled;	// 17 = 0x11
    _Bool _invalidateDone;	// 18 = 0x12
    NSSet *_activeConnections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001d5808
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSSet *activeConnections; // @synthesize activeConnections=_activeConnections;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00000001001d5708
- (void)connectionEstablished:(id)arg1;	// IMP=0x00000001001d5624
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001001d5540
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface;
@property(readonly, nonatomic) NSString *machServiceName;
- (void)establishConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d518c
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000001001d5040
- (void)onqueue_connectionInvalidated:(id)arg1;	// IMP=0x00000001001d4ed8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001001d4ac0
- (void)onqueue_invalidate;	// IMP=0x00000001001d496c
- (void)_invalidate;	// IMP=0x00000001001d4904
- (void)onqueue_activate;	// IMP=0x00000001001d4764
- (void)_activate;	// IMP=0x00000001001d46fc
@property(readonly, copy, nonatomic) NSXPCConnection *currentConnection;
- (void)onqueue_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d4564
- (void)remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d4490
- (void)onqueue_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d41fc
- (void)enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d4164
- (void)dealloc;	// IMP=0x00000001001d4074
- (id)init;	// IMP=0x00000001001d4010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

