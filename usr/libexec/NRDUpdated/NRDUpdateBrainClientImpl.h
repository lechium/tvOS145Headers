//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDUpdateBrainInterface-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol NRDUpdateBrainDelegateInterface;

@interface NRDUpdateBrainClientImpl : NSObject <NRDUpdateBrainInterface>
{
    NSXPCConnection *_serverConnection;	// 8 = 0x8
    NSXPCListenerEndpoint *_serverEndpoint;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
    id <NRDUpdateBrainDelegateInterface> _delegate;	// 32 = 0x20
}

- (void)cancelNeRDUpdate:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001000068e0
- (void)calculateCurrentRequiredSpace:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001000067dc
- (void)finishNeRDUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000065d0
- (void)purgeNeRDUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000064d8
- (void)installNeRDUpdate:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000624c
- (void)downloadNeRDUpdate:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005fa4
- (void)queryNeRDUpdate:(id)arg1 build:(id)arg2 options:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005e80
- (void)getListenerEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005d84
- (void)run:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005bac
- (void)ping:(CDUnknownBlockType)arg1;	// IMP=0x000000010000552c
- (void)handleConnectionError:(id)arg1 method:(const char *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005494
- (void)noteConnectionDropped;	// IMP=0x000000010000546c
- (void)connectToServerIfNecessary;	// IMP=0x0000000100005420
- (void)_connectToServerIfNecessary_nolock;	// IMP=0x0000000100004e68
- (void)_invalidateConnection;	// IMP=0x0000000100004e1c
- (void)_invalidateConnection_nolock;	// IMP=0x0000000100004db4
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004c80
- (void)dealloc;	// IMP=0x0000000100004c28
- (id)initWithEndpoint:(id)arg1;	// IMP=0x0000000100004be0
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100004bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

