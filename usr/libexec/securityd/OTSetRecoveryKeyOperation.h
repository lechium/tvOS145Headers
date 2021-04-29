//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class NSData, NSOperation, NSString, OTCuttlefishContext, OTOperationDependencies;

__attribute__((visibility("hidden")))
@interface OTSetRecoveryKeyOperation : CKKSGroupOperation
{
    OTCuttlefishContext *_cuttlefishContext;	// 16 = 0x10
    NSString *_salt;	// 24 = 0x18
    NSString *_recoveryKey;	// 32 = 0x20
    NSData *_voucher;	// 40 = 0x28
    NSData *_voucherSig;	// 48 = 0x30
    OTOperationDependencies *_deps;	// 56 = 0x38
    NSOperation *_finishOp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010009c778
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain, nonatomic) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property __weak OTCuttlefishContext *cuttlefishContext; // @synthesize cuttlefishContext=_cuttlefishContext;
- (void)proceedWithKeys:(id)arg1 salt:(id)arg2;	// IMP=0x000000010009c46c
- (void)groupStart;	// IMP=0x000000010009bf84
- (id)initWithDependencies:(id)arg1 recoveryKey:(id)arg2;	// IMP=0x000000010009bed0

@end
