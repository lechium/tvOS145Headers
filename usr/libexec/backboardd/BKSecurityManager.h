//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BKSecurityManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_vpidToCacheEntry;	// 16 = 0x10
}

+ (_Bool)hasEntitlement:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010001ec68
+ (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x000000010001ebe4
+ (id)sharedInstance;	// IMP=0x000000010001eba4
- (void).cxx_destruct;	// IMP=0x000000010001eb84
- (void)_processDidTerminate:(long long)arg1;	// IMP=0x000000010001ea68
- (_Bool)_lock_hasEntitlement:(id)arg1 usingCacheForAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x000000010001e78c
- (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x000000010001e714
- (id)init;	// IMP=0x000000010001e6ac

@end

