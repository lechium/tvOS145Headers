//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeleteClientProtocol-Protocol.h"
#import "CacheDeletePublicClientProtocol-Protocol.h"
#import "CacheDeleteServiceProvider-Protocol.h"

@class CDPurgeableResultCache, CacheDeleteAnalytics, CacheDeleteListener, NSDictionary, NSMutableDictionary, NSMutableSet, NSPointerArray, NSURL, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CacheDelete : NSObject <CacheDeleteClientProtocol, CacheDeletePublicClientProtocol, CacheDeleteServiceProvider>
{
    _Bool _measureElapsedTimes;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_collection_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_defaults_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_operations_queue;	// 32 = 0x20
    CacheDeleteListener *_listener;	// 40 = 0x28
    CacheDeleteListener *_publicListener;	// 48 = 0x30
    id _extensionMatchContext;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_notify_queue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_timer_queue;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_persistence_timer;	// 80 = 0x50
    NSURL *_rootPath;	// 88 = 0x58
    NSMutableDictionary *_lastRefreshTimes;	// 96 = 0x60
    NSUserDefaults *_userDefaults;	// 104 = 0x68
    NSMutableDictionary *_services;	// 112 = 0x70
    NSMutableSet *_daemons;	// 120 = 0x78
    NSDictionary *_default_values;	// 128 = 0x80
    NSMutableDictionary *_purgeOperations;	// 136 = 0x88
    CDPurgeableResultCache *_purgeableResultCache;	// 144 = 0x90
    CacheDeleteAnalytics *_analytics;	// 152 = 0x98
    NSPointerArray *_inFlightOperations;	// 160 = 0xa0
    unsigned long long _pendingLowDiskCount;	// 168 = 0xa8
    NSMutableSet *_pendingLowDiskVolumes;	// 176 = 0xb0
    NSMutableDictionary *_lastUpdateTimes;	// 184 = 0xb8
}

+ (id)sharedCacheDelete;	// IMP=0x00000001000051bc
- (void).cxx_destruct;	// IMP=0x000000010001a984
@property(retain, nonatomic) NSMutableDictionary *lastUpdateTimes; // @synthesize lastUpdateTimes=_lastUpdateTimes;
@property(retain, nonatomic) NSMutableSet *pendingLowDiskVolumes; // @synthesize pendingLowDiskVolumes=_pendingLowDiskVolumes;
@property(nonatomic) unsigned long long pendingLowDiskCount; // @synthesize pendingLowDiskCount=_pendingLowDiskCount;
@property(retain, nonatomic) NSPointerArray *inFlightOperations; // @synthesize inFlightOperations=_inFlightOperations;
@property(retain, nonatomic) CacheDeleteAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) CDPurgeableResultCache *purgeableResultCache; // @synthesize purgeableResultCache=_purgeableResultCache;
@property(retain, nonatomic) NSMutableDictionary *purgeOperations; // @synthesize purgeOperations=_purgeOperations;
@property(retain, nonatomic) NSDictionary *default_values; // @synthesize default_values=_default_values;
@property(retain, nonatomic) NSMutableSet *daemons; // @synthesize daemons=_daemons;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSMutableDictionary *lastRefreshTimes; // @synthesize lastRefreshTimes=_lastRefreshTimes;
@property(readonly, nonatomic) NSURL *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *persistence_timer; // @synthesize persistence_timer=_persistence_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *timer_queue; // @synthesize timer_queue=_timer_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notify_queue; // @synthesize notify_queue=_notify_queue;
@property(retain, nonatomic) id extensionMatchContext; // @synthesize extensionMatchContext=_extensionMatchContext;
@property(readonly) _Bool measureElapsedTimes; // @synthesize measureElapsedTimes=_measureElapsedTimes;
@property(retain, nonatomic) CacheDeleteListener *publicListener; // @synthesize publicListener=_publicListener;
@property(retain, nonatomic) CacheDeleteListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operations_queue; // @synthesize operations_queue=_operations_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *defaults_queue; // @synthesize defaults_queue=_defaults_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *collection_queue; // @synthesize collection_queue=_collection_queue;
- (void)maybeCrashForTest:(id)arg1;	// IMP=0x000000010001a5ec
- (id)servicesDebugState;	// IMP=0x000000010001a4c8
- (id)operationsDebugState;	// IMP=0x000000010001a3c4
- (id)debugState;	// IMP=0x000000010001a0e0
- (void)iteratePendingOperations:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019ea4
- (void)removeOperation:(id)arg1;	// IMP=0x0000000100019ea0
- (void)registerOperation:(id)arg1;	// IMP=0x0000000100019da0
- (void)clientRegisterLowDiskFailure:(id)arg1 failureType:(int)arg2 isRoot:(_Bool)arg3;	// IMP=0x0000000100019d1c
- (void)clientRequestCacheableSpaceGuidance:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001970c
- (void)clientUpdatePurgeable:(id)arg1;	// IMP=0x00000001000194c8
- (void)clientGetState:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001926c
- (void)_clientGetState:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018c9c
- (void)clientSetState:(id)arg1 key:(id)arg2;	// IMP=0x00000001000185c8
- (void)_clientSetState:(id)arg1 key:(id)arg2;	// IMP=0x00000001000182e4
- (_Bool)checkSettingEntitlements:(id)arg1 onConnection:(id)arg2;	// IMP=0x00000001000181a8
- (void)clientPerformOperation:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017f00
- (void)clientPerformVFSEventWithInfo:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017d0c
- (void)clientPerformServiceRequest:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017474
- (void)clientPerformPeriodicsWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016e84
- (void)clientCancelPurge:(id)arg1;	// IMP=0x0000000100016908
- (void)clientPurge:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000165b4
- (void)clientPurgeableSpace:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016354
- (void)clientItemizedPurgeableSpace:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000160f4
- (void)clientCheckin:(id)arg1 endpoint:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001527c
- (void)publicClientAvailableSpaceForVolume:(id)arg1 availableSpaceClass:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014b00
- (void)forcePurgeNotify:(id)arg1;	// IMP=0x0000000100014adc
- (void)notifyRecipients:(id)arg1 value:(id)arg2;	// IMP=0x0000000100014acc
- (void)_notifyRecipients:(id)arg1 value:(id)arg2 force:(_Bool)arg3;	// IMP=0x00000001000140f4
- (void)processPurgeNotification:(id)arg1 forService:(id)arg2 info:(id)arg3 group:(id)arg4 force:(_Bool)arg5;	// IMP=0x000000010001294c
- (void)invokeAfterMaxSeconds:(unsigned int)arg1 min:(unsigned int)arg2 group:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001000126e8
- (id)_purge:(id)arg1 volume:(id)arg2 services:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000100011124
- (id)purge:(id)arg1 volume:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010000fad0
- (id)totalAvailable:(id)arg1;	// IMP=0x000000010000ceb4
- (void)asyncUpdateRecentResultsForAllVolumesWithInfo:(id)arg1;	// IMP=0x000000010000ccc4
- (void)updateRecentResultsForVolumes:(id)arg1 withInfo:(id)arg2 qos:(unsigned int)arg3 receiveResults:(CDUnknownBlockType)arg4;	// IMP=0x000000010000baec
- (void)timestampUpdateForVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000b798
- (id)shouldUpdateVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000b2f8
- (id)keyForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010000b254
- (int)normalizeUrgency:(int)arg1;	// IMP=0x000000010000b240
- (_Bool)validateService:(id)arg1;	// IMP=0x000000010000aff4
- (id)serviceWithID:(id)arg1;	// IMP=0x000000010000af7c
- (id)copyServices;	// IMP=0x000000010000adb4
- (id)fsPurgedVolumes:(id)arg1;	// IMP=0x000000010000ab10
- (void)prunePurgeHistory;	// IMP=0x000000010000a96c
- (id)applicationExtensions;	// IMP=0x0000000100009dd4
- (void)log_recent_info;	// IMP=0x0000000100009d10
- (void)cancelPersistenceTimer;	// IMP=0x0000000100009c08
- (void)startPersistenceTimer;	// IMP=0x000000010000969c
- (void)saveRecentInfo;	// IMP=0x0000000100009624
- (id)registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 runHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009230
- (void)endComfortPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100009138
- (void)beginComfortPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008e94
- (void)endCriticalPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008d88
- (void)beginCriticalPurgeActivityForVolume:(id)arg1;	// IMP=0x0000000100008a24
- (void)handleVFSStreamXPCEvent:(id)arg1;	// IMP=0x0000000100006dd0
- (void)handleVFSStreamXPCEventForVolume:(id)arg1 event:(id)arg2;	// IMP=0x0000000100006c7c
- (void)checkNotificationState;	// IMP=0x000000010000692c
- (void)broadcastLowDiskNotificationForVolume:(id)arg1 key:(id)arg2;	// IMP=0x000000010000661c
- (void)updateFollowup:(id)arg1;	// IMP=0x0000000100006618
- (struct VolumeThresholdsAndGoals)extractThresholdsAndGoals:(id)arg1;	// IMP=0x0000000100006490
- (void)processLowDiskVolume:(id)arg1 key:(id)arg2;	// IMP=0x0000000100005930
- (void)processLowDiskVolumes:(id)arg1 filteringBySet:(id)arg2 key:(id)arg3;	// IMP=0x0000000100005728
- (void)processLowDiskVolumes:(id)arg1 key:(id)arg2;	// IMP=0x00000001000055b4
- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005240
- (void)beginListening;	// IMP=0x00000001000050d8
- (id)init;	// IMP=0x0000000100004364

@end

