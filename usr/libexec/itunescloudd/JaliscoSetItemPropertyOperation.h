//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSDictionary;

@interface JaliscoSetItemPropertyOperation : CloudLibraryOperation
{
    unsigned long long _purchaseHistoryID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001bb08
- (void)main;	// IMP=0x000000010001b750
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001b6a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001b5d4
- (id)initWithConfiguration:(id)arg1 purchaseHistoryID:(unsigned long long)arg2 properties:(id)arg3;	// IMP=0x000000010001b52c
- (id)initWithPurchaseHistoryID:(unsigned long long)arg1 properties:(id)arg2;	// IMP=0x000000010001b4b0

@end

