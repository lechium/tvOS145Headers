//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MobileInstallerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MIClientConnection : NSObject <MobileInstallerProtocol>
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000e00c
@property(readonly, nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000deec
- (void)endTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000de04
- (void)setTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dd1c
- (void)dieForTesting;	// IMP=0x000000010000dc78
- (void)getPidForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dc38
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d9d8
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d784
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d530
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cdfc
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010000c944
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c4d8
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c0d8
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bc48
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000b6bc
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b1bc
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ad98
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000aa28
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a608
- (_Bool)_validateArgsForMethodWithName:(const char *)arg1 bundleIdentifier:(id)arg2 data:(id)arg3 optionalOptions:(id)arg4 error:(id *)arg5;	// IMP=0x000000010000a3dc
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009e88
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000096ac
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008dd8
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008a58
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008660
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008288
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007ea4
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007b10
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000741c
- (void)installURL:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006a08
- (void)_doInstallationForURL:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000635c
- (void)_callBlockAfterDelegateMessagesSend:(const char *)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006224
- (void)sendDelegateMessagesComplete;	// IMP=0x00000001000060f0
- (void)sendProgressWithStatus:(id)arg1;	// IMP=0x00000001000060e0
- (void)sendProgressWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x0000000100005fc0
- (void)sendProgressWithDictionary:(id)arg1;	// IMP=0x0000000100005e88
@property(readonly, copy, nonatomic) NSString *clientName;

@end

