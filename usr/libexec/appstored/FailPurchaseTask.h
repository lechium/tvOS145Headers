//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSError, PurchaseInfo;

@interface FailPurchaseTask : Task
{
    NSError *_purchaseError;	// 8 = 0x8
    PurchaseInfo *_purchaseInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001f22d4
- (void)main;	// IMP=0x00000001001f1d10
- (id)initWithPurchaseInfo:(id)arg1 purchaseError:(id)arg2;	// IMP=0x00000001001f1c5c

@end
