//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSActivityMonitorStateManagerListener-Protocol.h"
#import "IDSXPCActivityMonitor-Protocol.h"

@class IDSActivityMonitorStateManager, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCActivityMonitor : NSObject <IDSActivityMonitorStateManagerListener, IDSXPCActivityMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_activityMonitorEntitlements;	// 16 = 0x10
    NSMutableDictionary *_clientRemoteObjectByActivity;	// 24 = 0x18
    IDSActivityMonitorStateManager *_stateManager;	// 32 = 0x20
}

+ (_Bool)isActivityMonitorSupported;	// IMP=0x00000001002e40b0
- (void).cxx_destruct;	// IMP=0x00000001002e47d0
@property(retain, nonatomic) IDSActivityMonitorStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) NSMutableDictionary *clientRemoteObjectByActivity; // @synthesize clientRemoteObjectByActivity=_clientRemoteObjectByActivity;
@property(retain, nonatomic) NSArray *activityMonitorEntitlements; // @synthesize activityMonitorEntitlements=_activityMonitorEntitlements;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)activityMonitorManager:(id)arg1 receivedUpdate:(id)arg2 forActivity:(id)arg3;	// IMP=0x00000001002e45dc
- (void)unsubscribeActivity:(id)arg1 andSubActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002e43c8
- (void)subscribeInfo:(id)arg1 forActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002e4100
- (void)currentSubscriptionsForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e3f40
- (void)setShouldListen:(_Bool)arg1 forActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002e3ccc
- (void)checkIfListeningForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002e3a80
- (void)setupActivityMonitorClient:(id)arg1 forActivity:(id)arg2;	// IMP=0x00000001002e34c0
- (void)_handleUpdate:(id)arg1 forActivity:(id)arg2;	// IMP=0x00000001002e321c
- (_Bool)_entitledForActivity:(id)arg1;	// IMP=0x00000001002e30c8
- (id)initWithQueue:(id)arg1 connection:(id)arg2 activityMonitorStateManager:(id)arg3;	// IMP=0x00000001002e2a44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

