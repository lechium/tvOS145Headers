//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ISOperationDelegate-Protocol.h"

@class NSString, PurchaseOperation;

@protocol PurchaseOperationDelegate <ISOperationDelegate>

@optional
- (_Bool)purchaseOperation:(PurchaseOperation *)arg1 shouldContinueWithNewStorefront:(NSString *)arg2;
@end
