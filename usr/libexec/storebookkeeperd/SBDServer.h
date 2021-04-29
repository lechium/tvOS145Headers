//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SBDPushNotificationControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSXPCListener, SBDPushNotificationController;
@protocol OS_dispatch_queue;

@interface SBDServer : NSObject <NSXPCListenerDelegate, SBDPushNotificationControllerDelegate>
{
    id _SBKStoreAccountChangedNotificationObserver;	// 8 = 0x8
    id _SBKSBKSharedMusicLibraryImportFinishedObserver;	// 16 = 0x10
    _Bool _accountChangeUpdatePending;	// 24 = 0x18
    _Bool _accountChangeUpdateShouldReloadAccounts;	// 25 = 0x19
    NSMutableArray *_systemSyncHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSXPCListener *_xpcListener;	// 48 = 0x30
    SBDPushNotificationController *_pushNotificationController;	// 56 = 0x38
    NSArray *_serviceConnections;	// 64 = 0x40
}

+ (id)server;	// IMP=0x0000000100002838
- (void).cxx_destruct;	// IMP=0x0000000100004574
@property(readonly) NSArray *serviceConnections; // @synthesize serviceConnections=_serviceConnections;
@property(readonly) SBDPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(readonly) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updatePushNotificationRegistrations;	// IMP=0x0000000100004330
- (void)_performOnDomainSyncServiceHandlerWithBookkeeperDomain:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003f20
- (void)synchronizeForUpdateJobForAccount:(id)arg1 withDomain:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003da0
- (void)pushNotificationController:(id)arg1 didReceiveUpdateRequestForAccount:(id)arg2 withBookkeeperDomain:(id)arg3 toDomainRevision:(id)arg4;	// IMP=0x0000000100003c20
- (void)_accountsDidChangeNotification:(id)arg1;	// IMP=0x0000000100003c10
- (void)_updateForAccountChangeAfterReloadingAccounts:(_Bool)arg1;	// IMP=0x00000001000033c0
- (void)_updateForSharedLibraryImportFinished;	// IMP=0x0000000100003254
- (id)_pushNotificationController;	// IMP=0x0000000100003210
- (void)start;	// IMP=0x00000001000030f4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000303c
- (void)dealloc;	// IMP=0x0000000100002ec0
- (id)_init;	// IMP=0x0000000100002934
- (id)init;	// IMP=0x00000001000028b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
