//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SSAppPurchaseHistoryCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastUpdate;	// 24 = 0x18
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_scheduledTimer;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100051140
- (void).cxx_destruct;	// IMP=0x0000000100052b30
@property(retain) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
- (void)_refreshPurgeableStorage;	// IMP=0x0000000100052880
- (void)_pushUpdatedAvailableStorage;	// IMP=0x00000001000525ec
- (id)_purgeable:(id)arg1 urgency:(int)arg2;	// IMP=0x00000001000521c8
- (id)_purge:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000100051e6c
- (id)_purchaseHistoryCache;	// IMP=0x0000000100051e28
- (id)_periodic:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000100051ba0
- (_Bool)_isStale;	// IMP=0x0000000100051b5c
- (unsigned long long)_currentPurgeable;	// IMP=0x0000000100051ae0
- (void)_cancelPurge;	// IMP=0x0000000100051970
- (void)updatePurgeableStorage;	// IMP=0x0000000100051814
- (void)registerCacheDeleteInfoCallbacks;	// IMP=0x0000000100051308
- (void)dealloc;	// IMP=0x0000000100051278
- (id)init;	// IMP=0x00000001000511dc

@end

