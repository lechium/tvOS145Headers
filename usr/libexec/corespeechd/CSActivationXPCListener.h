//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSActivateXPCConnectionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSActivationXPCListener : NSObject <CSActivateXPCConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMutableArray *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100062d90
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSActivationXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x0000000100062bbc
- (void)_handleNewRemoteConnection:(id)arg1;	// IMP=0x0000000100062a3c
- (void)_handleListenerError:(id)arg1;	// IMP=0x00000001000629f4
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00000001000628cc
- (void)listen;	// IMP=0x0000000100062734
- (id)init;	// IMP=0x0000000100062644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

