//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDServiceProtocol-Protocol.h"
#import "XPCNotificationClient-Protocol.h"

@class AMSProcessInfo, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject <ASDServiceProtocol, XPCNotificationClient>
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    _Bool hasSeenAppStore;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

+ (id)newClientForConnection:(id)arg1 withCatalog:(id)arg2;	// IMP=0x000000010013b934
+ (id)currentClient;	// IMP=0x000000010013b758
- (void).cxx_destruct;	// IMP=0x000000010013cb8c
@property(readonly) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void)_provideService:(CDUnknownBlockType)arg1 forEntitlement:(struct _ASDServiceEntitlement)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010013c978
- (_Bool)hasConnection;	// IMP=0x000000010013c948
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c88c
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c7d0
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c6c8
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c5c0
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c4b8
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c428
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c398
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c308
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c278
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c1e8
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c158
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c0c8
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013c038
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013bfa8
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013bf18
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013be88
- (void)getArcadeServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013bdf8
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013bd68
@property(readonly) _Bool enableDiagnostics;
- (id)initWithConnection:(id)arg1 andCatalog:(id)arg2;	// IMP=0x000000010013b9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

