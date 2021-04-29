//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "NDSessionManagerDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject <LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate, NDSessionManagerDelegate>
{
    NSMutableDictionary *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    _Bool _createdDataVault;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_archiveTimer;	// 32 = 0x20
    _Bool _privileged;	// 40 = 0x28
    _Bool _inSyncBubble;	// 41 = 0x29
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)sharedDaemon;	// IMP=0x0000000100048dd0
- (void).cxx_destruct;	// IMP=0x00000001000480c0
@property(getter=isInSyncBubble) _Bool inSyncBubble; // @synthesize inSyncBubble=_inSyncBubble;
@property(getter=isPrivileged) _Bool privileged; // @synthesize privileged=_privileged;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)start;	// IMP=0x0000000100047dd4
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x0000000100047b64
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000100047ae0
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100047a5c
- (id)bundleIDsForAppProxies:(id)arg1;	// IMP=0x0000000100047740
- (void)releaseTransaction;	// IMP=0x0000000100047730
- (void)addTransaction;	// IMP=0x0000000100047720
- (void)managerBecameEmpty:(id)arg1 bundleID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100047664
- (id)getSessionWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010004754c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100046d14
- (void)setupArchiveTimer;	// IMP=0x0000000100046c44
- (void)archiveState;	// IMP=0x0000000100046ad0
- (void)restoreState;	// IMP=0x0000000100046224
- (void)setupNewClassMappingsForUnarchiver;	// IMP=0x00000001000461e0
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x000000010004604c
- (id)archivePath;	// IMP=0x0000000100045fd0
- (id)init;	// IMP=0x0000000100045e18
- (void)createDaemonDirectory;	// IMP=0x0000000100045a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

