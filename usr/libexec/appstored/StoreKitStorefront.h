//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface StoreKitStorefront : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    _Bool _octane;	// 24 = 0x18
    _Bool _sandbox;	// 25 = 0x19
    NSString *_storefront;	// 32 = 0x20
    NSString *_storefrontCountry;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_updateSemaphore;	// 48 = 0x30
}

+ (id)sandboxManager;	// IMP=0x0000000100211b2c
+ (id)octaneManager;	// IMP=0x0000000100211ab4
+ (id)defaultManager;	// IMP=0x0000000100211a38
- (void).cxx_destruct;	// IMP=0x0000000100212be8
- (void)_fetchStorefrontNotifyClient:(_Bool)arg1;	// IMP=0x0000000100212220
- (void)_bagChanged:(id)arg1;	// IMP=0x0000000100212108
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *identifier;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100211ee0
- (void)addObserver:(id)arg1;	// IMP=0x0000000100211e60
- (id)description;	// IMP=0x0000000100211de8
- (void)dealloc;	// IMP=0x0000000100211d60
- (id)initSandboxed:(_Bool)arg1;	// IMP=0x0000000100211bdc
- (id)initForOctane;	// IMP=0x0000000100211ba8

@end

