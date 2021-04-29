//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, PKExpressTransactionState;

@interface PDTransitStateFetchRequest : NSObject <NSCopying>
{
    _Bool _forceTransactionGeneration;	// 8 = 0x8
    _Bool _recoverMissingTransactions;	// 9 = 0x9
    NSString *_passUniqueIdentifier;	// 16 = 0x10
    NSString *_secureElementIdentifier;	// 24 = 0x18
    NSString *_paymentApplicationIdentifier;	// 32 = 0x20
    PKExpressTransactionState *_expressState;	// 40 = 0x28
    NSDate *_transactionDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008298c
@property(nonatomic) _Bool recoverMissingTransactions; // @synthesize recoverMissingTransactions=_recoverMissingTransactions;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) _Bool forceTransactionGeneration; // @synthesize forceTransactionGeneration=_forceTransactionGeneration;
@property(retain, nonatomic) PKExpressTransactionState *expressState; // @synthesize expressState=_expressState;
@property(copy, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (unsigned long long)hash;	// IMP=0x00000001000828ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100082800
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100082718

@end

