//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseListener.h"

#import "ASDSoftwareUpdateProtocol-Protocol.h"

@class NSString;

@interface SoftwareUpdateListener : BaseListener <ASDSoftwareUpdateProtocol>
{
}

- (void)_initializeConnection:(id)arg1;	// IMP=0x0000000100228b18
- (void)_handleDisconnect:(id)arg1;	// IMP=0x0000000100228a5c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001002288a4
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100228584
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x0000000100228280
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022809c
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100227eb8
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100227b80
- (void)removeUpdateBulletins;	// IMP=0x0000000100227a78
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x000000010022793c
- (void)showApplicationUpdatesBulletin;	// IMP=0x0000000100227834
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100227700
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100227428
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022738c
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x0000000100227250
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022706c
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226e9c
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226c10
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226a2c
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002268f8
- (id)init;	// IMP=0x00000001002268c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

