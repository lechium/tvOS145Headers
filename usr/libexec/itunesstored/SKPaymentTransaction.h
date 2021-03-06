//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100048b48
- (id)copyXPCEncoding;	// IMP=0x00000001000487ac
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1;	// IMP=0x0000000100048600
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000100047e90
- (_Bool)mergeWithServerTransaction:(id)arg1;	// IMP=0x00000001000476c4
- (id)initWithServerTransaction:(id)arg1;	// IMP=0x0000000100047664
@property(readonly, nonatomic) NSString *_transactionIdentifier;
- (void)_setTransactionState:(long long)arg1;	// IMP=0x000000010004764c
- (void)_setTransactionReceipt:(id)arg1;	// IMP=0x00000001000475d4
- (void)_setTransactionIdentifier:(id)arg1;	// IMP=0x000000010004755c
- (void)_setTransactionDate:(id)arg1;	// IMP=0x0000000100047504
- (void)_setTemporaryIdentifier:(id)arg1;	// IMP=0x000000010004748c
- (void)_setOriginalTransaction:(id)arg1;	// IMP=0x0000000100047434
- (void)_setError:(id)arg1;	// IMP=0x00000001000473dc
- (void)_setDownloads:(id)arg1;	// IMP=0x0000000100047300
- (_Bool)mergeWithTransaction:(id)arg1;	// IMP=0x0000000100047168
@property(readonly, nonatomic) NSString *matchingIdentifier;
- (_Bool)canMergeWithTransaction:(id)arg1;	// IMP=0x0000000100046fec
- (id)UUID;	// IMP=0x0000000100046fe0
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (id)initWithPayment:(id)arg1;	// IMP=0x0000000100046ef4
- (id)init;	// IMP=0x0000000100046e90

@end

