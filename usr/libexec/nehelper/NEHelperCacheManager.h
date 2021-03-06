//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface NEHelperCacheManager : NSObject <NEHelperDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCPreferences *_prefs;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100018f8c
- (void).cxx_destruct;	// IMP=0x000000010001e2c4
@property struct __SCPreferences *prefs; // @synthesize prefs=_prefs;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)onQueueCopyAppPaths;	// IMP=0x000000010001e200
- (void)cleanupAppCache:(id)arg1;	// IMP=0x000000010001df20
- (void)clearCache;	// IMP=0x000000010001de28
- (void)clearUUIDcache;	// IMP=0x000000010001dd9c
- (void)onQueueClearUUIDCache;	// IMP=0x000000010001dcb8
- (id)onQueueCopyPreferredBundleID:(const char *)arg1;	// IMP=0x000000010001dc18
- (id)onQueueCopySigningIdentifierForUUID:(const char *)arg1;	// IMP=0x000000010001db40
- (void)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d930
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4 depth:(unsigned long long)arg5;	// IMP=0x000000010001cb78
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4;	// IMP=0x000000010001cadc
- (void)updateBundleIDCacheWithPreferredBundleID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001c980
- (void)updateUUIDCacheWithSynthesizedUUID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001c78c
- (void)updateUUIDCacheWithUUIDs:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001c4c8
- (id)copyUUIDCache;	// IMP=0x000000010001c484
- (void)saveUUIDCache:(id)arg1;	// IMP=0x000000010001c370
- (void)notifyUUIDCacheChanged;	// IMP=0x000000010001c21c
- (id)onQueueAddUUIDsForBundle:(id)arg1 andPlugins:(id)arg2 toArray:(id)arg3;	// IMP=0x000000010001c03c
- (id)onQueueAddUUIDsForBundle:(id)arg1 toArray:(id)arg2;	// IMP=0x000000010001beac
- (id)onQueueExtraSigningIdentifierForUUID:(id)arg1;	// IMP=0x000000010001bce4
- (id)onQueueExtraUUIDForSigningIdentifier:(id)arg1;	// IMP=0x000000010001bb1c
- (id)onQueueExtraDaemonPathsForSigningIdentifier:(id)arg1;	// IMP=0x000000010001b8c8
- (id)onQueueCopyExtraHardcodedPathForSigningIdentifier:(id)arg1;	// IMP=0x000000010001b8a0
- (id)onQueueReadUUIDsForPaths:(id)arg1;	// IMP=0x000000010001b68c
- (void)clearCacheForServiceID:(id)arg1;	// IMP=0x000000010001b4cc
- (_Bool)onQueueSetRoutes:(id)arg1 forServiceID:(id)arg2 type:(int)arg3;	// IMP=0x000000010001ad70
- (_Bool)onQueueClearDomainDictionariesForServiceID:(id)arg1 type:(int)arg2 interfaceName:(const char *)arg3;	// IMP=0x000000010001a9dc
- (_Bool)onQueueSetDomainDictionaries:(id)arg1 forServiceID:(id)arg2 type:(int)arg3 interfaceName:(const char *)arg4;	// IMP=0x000000010001a628
- (void)onQueueClearRedirectedAddresses:(const char *)arg1;	// IMP=0x000000010001a454
- (_Bool)onQueueAddRedirectedAddress:(const struct sockaddr *)arg1 interfaceName:(const char *)arg2;	// IMP=0x0000000100019ea4
- (void)onQueueNotifyCacheChanged;	// IMP=0x0000000100019e20
- (void)onQueueHandleMessage:(id)arg1;	// IMP=0x0000000100019458
- (void)handleMessage:(id)arg1;	// IMP=0x000000010001935c
- (void)dealloc;	// IMP=0x0000000100018f44
- (id)init;	// IMP=0x0000000100018e98
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x0000000100018e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

