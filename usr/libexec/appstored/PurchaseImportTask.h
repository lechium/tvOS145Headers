//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSString, PurchaseBatch, PurchaseInfo;

@interface PurchaseImportTask : Task
{
    NSString *_fileName;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    PurchaseBatch *_purchaseBatch;	// 24 = 0x18
    PurchaseInfo *_purchaseInfo;	// 32 = 0x20
    NSArray *_storeItems;	// 40 = 0x28
    _Bool _overrideAutomaticType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000b7f1c
- (_Bool)_validateStoreItem:(id)arg1 externalID:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001000b7c70
- (_Bool)_isWatchOnlyStoreItem:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001000b7c68
- (void)main;	// IMP=0x00000001000b6940
@property _Bool overrideAutomaticType; // @synthesize overrideAutomaticType=_overrideAutomaticType;
- (id)initWithStoreItems:(id)arg1 purchaseInfo:(id)arg2 purchaseBatch:(id)arg3;	// IMP=0x00000001000b66dc
- (id)init;	// IMP=0x00000001000b6698

@end

