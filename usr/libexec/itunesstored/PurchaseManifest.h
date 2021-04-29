//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PurchaseManifest : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

+ (id)_sharedManifestWithManifestType:(long long)arg1;	// IMP=0x0000000100011104
+ (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010f28
+ (void)removeItemWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100010ca0
+ (void)rebuildWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100010bc4
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0000000100010b44
+ (void)getPathsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000107c8
+ (id)sharedManifestForDownloadKind:(id)arg1;	// IMP=0x000000010000e8b0
+ (void)jetsam;	// IMP=0x000000010000e84c
- (_Bool)_writeToFile;	// IMP=0x0000000100011494
- (id)_dictionary;	// IMP=0x000000010001113c
- (id)removeItemsWithAssetPaths:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000f84c
- (void)rebuildManifest;	// IMP=0x000000010000f06c
@property(readonly) NSArray *purchaseManifestItems;
@property(readonly) NSString *path;
- (void)jetsam;	// IMP=0x000000010000ede8
- (void)addCompletedItem:(id)arg1;	// IMP=0x000000010000eac4
- (void)dealloc;	// IMP=0x000000010000e7f4
- (id)initWithPurchaseDirectory:(id)arg1;	// IMP=0x000000010000e720
- (id)init;	// IMP=0x000000010000e710

@end
