//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd33PurchaseHistoryAppStateDataSource : _TtCs12_SwiftObject
{
    MISSING_TYPE *accounts;	// 16 = 0x10
    MISSING_TYPE *platform;	// 24 = 0x18
    MISSING_TYPE *purchaseHistory;	// 64 = 0x40
    MISSING_TYPE *purchaseHistoryContext;	// 80 = 0x50
    MISSING_TYPE *workQueue;	// 88 = 0x58
    MISSING_TYPE *expectedAppStates;	// 96 = 0x60
    MISSING_TYPE *lastAccountID;	// 104 = 0x68
    MISSING_TYPE *hasRequestedUpdated;	// 113 = 0x71
    MISSING_TYPE *onSynchronizeAppStates;	// 120 = 0x78
}

- (void)activeAccountDidChange:(id)arg1;	// IMP=0x000000010004d55c
- (void)purchaseHistoryUpdated:(id)arg1;	// IMP=0x000000010004d138

@end

