//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKPaymentTransaction, PKPaymentTransactionQuestion;

@interface PDPassPaymentFraudTransactionUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _accountSuspended;	// 104 = 0x68
    PKPaymentTransaction *_paymentTransaction;	// 112 = 0x70
    PKPaymentTransactionQuestion *_question;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016b618
- (void).cxx_destruct;	// IMP=0x000000010016bccc
@property(nonatomic) _Bool accountSuspended; // @synthesize accountSuspended=_accountSuspended;
@property(readonly, nonatomic) PKPaymentTransactionQuestion *question; // @synthesize question=_question;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)_messageString;	// IMP=0x000000010016bc48
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010016b94c
- (_Bool)questionIsValid;	// IMP=0x000000010016b8a8
- (_Bool)isValid;	// IMP=0x000000010016b818
- (unsigned long long)notificationType;	// IMP=0x000000010016b810
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010016b740
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010016b620
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010016b394

@end

