//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary, NSMutableSet;

@interface ADServiceManager : NSObject
{
    _Bool _bundleServicesLoaded;	// 8 = 0x8
    NSMutableDictionary *_serviceMap;	// 16 = 0x10
    NSMutableDictionary *_commandMap;	// 24 = 0x18
    NSMutableDictionary *_syncKeyMap;	// 32 = 0x20
    NSMutableSet *_pendingServiceReloadNotifications;	// 40 = 0x28
    AFInstanceContext *_instanceContext;	// 48 = 0x30
}

+ (id)_serviceBundleIDFromServiceReloadNotification:(id)arg1;	// IMP=0x0000000100093fd0
+ (_Bool)isReloadServiceNotification:(id)arg1;	// IMP=0x0000000100093fb4
- (void).cxx_destruct;	// IMP=0x00000001000949e8
- (void)_reloadServices:(id)arg1;	// IMP=0x000000010009454c
- (void)reloadServicesForAllPendingServiceNotifications;	// IMP=0x000000010009439c
- (void)reloadServiceForNotification:(id)arg1;	// IMP=0x0000000100094254
- (void)pendServiceReloadNotification:(id)arg1;	// IMP=0x000000010009408c
- (void)cancelOperationForRequest:(id)arg1;	// IMP=0x0000000100093e70
- (id)controlCenterLockRestrictedCommands;	// IMP=0x0000000100093cf4
- (void)preheat;	// IMP=0x0000000100093ce8
- (void)preheatBundleServices;	// IMP=0x0000000100093b9c
- (void)preheatServicesForDomain:(id)arg1;	// IMP=0x0000000100093950
- (void)setCommandCenterClient:(id)arg1;	// IMP=0x00000001000938d4
- (id)lockRestrictedCommands;	// IMP=0x0000000100093764
- (id)firstUnlockRestrictedCommands;	// IMP=0x00000001000935e8
- (id)allVocabSyncInfo;	// IMP=0x0000000100093514
- (id)allSyncAnchorKeys;	// IMP=0x00000001000934c0
- (void)reprioritizeService:(id)arg1;	// IMP=0x00000001000934b4
- (void)removeService:(id)arg1;	// IMP=0x00000001000934a8
- (void)addServiceWithLowPrecedence:(id)arg1;	// IMP=0x0000000100093498
- (void)addService:(id)arg1;	// IMP=0x0000000100093488
- (id)serviceForSyncAnchorKey:(id)arg1;	// IMP=0x00000001000931f4
- (id)serviceForDomain:(id)arg1 command:(id)arg2;	// IMP=0x00000001000930b4
- (id)serviceForIdentifier:(id)arg1;	// IMP=0x0000000100093034
- (id)allServices;	// IMP=0x0000000100092fe0
- (id)_pendingServiceReloadNotifications;	// IMP=0x0000000100092f9c
- (id)_syncKeyMap;	// IMP=0x0000000100092f70
- (id)_commandMap;	// IMP=0x0000000100092f44
- (id)_serviceMap;	// IMP=0x0000000100092f18
- (void)_loadServicesIfNeeded;	// IMP=0x0000000100092e6c
- (void)_loadServiceFromBundlePath:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x0000000100092cc8
- (id)_bundleServicesCache;	// IMP=0x0000000100092c98
- (id)_bundleServicesCache:(_Bool *)arg1;	// IMP=0x0000000100092ab0
- (void)_writeBundleServicesCache:(id)arg1 toPath:(id)arg2;	// IMP=0x000000010009295c
- (id)_generatedBundleServicesCache;	// IMP=0x00000001000926a8
- (id)_buildFliteredInfoDictionaryFromBundleURL:(id)arg1;	// IMP=0x00000001000923e8
- (void)_reprioritizeService:(id)arg1;	// IMP=0x0000000100091f6c
- (void)_removeService:(id)arg1;	// IMP=0x0000000100091a14
- (void)_addService:(id)arg1 precedence:(long long)arg2;	// IMP=0x0000000100091998
- (void)_addServiceWithRecord:(id)arg1;	// IMP=0x0000000100091354
- (id)init;	// IMP=0x00000001000912f4
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000001000911f4

@end

