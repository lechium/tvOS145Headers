//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEnumerator, NSMutableArray, XPCRequestToken;

@interface PurchaseBatch : NSObject
{
    NSMutableArray *_purchaseInfo;	// 8 = 0x8
    NSMutableArray *_responseItems;	// 16 = 0x10
    _Bool _machineBased;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    XPCRequestToken *_requestToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010011b12c
@property(readonly) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, getter=isMachineBased) _Bool machineBased; // @synthesize machineBased=_machineBased;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_failPurchaseWithError:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010011ae38
- (void)_completePurchaseBatch;	// IMP=0x000000010011ad54
- (void)queuePurchaseInfo:(id)arg1;	// IMP=0x000000010011ab30
- (void)failPurchaseWithError:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010011a8ac
- (void)completePurchaseWithResults:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010011a5ac
- (void)cancelPurchaseBatchWithError:(id)arg1;	// IMP=0x000000010011a320
@property(readonly) NSEnumerator *infoEnumerator;
- (id)initWithRequestToken:(id)arg1;	// IMP=0x000000010011a264
- (id)initWithPurchaseInfos:(id)arg1 requestToken:(id)arg2;	// IMP=0x000000010011a10c
- (id)initWithPurchaseInfo:(id)arg1 requestToken:(id)arg2;	// IMP=0x000000010011a09c

@end
