//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassPaymentTransactionUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSDecimalNumber, NSString;

@interface PDPassTransitTransactionUserNotification : PDPassPaymentTransactionUserNotification <NSSecureCoding>
{
    NSDecimalNumber *_transitBalance;	// 128 = 0x80
    NSString *_transitBalanceCurrencyCode;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016201c
- (void).cxx_destruct;	// IMP=0x000000010016301c
@property(readonly, nonatomic) NSString *transitBalanceCurrencyCode; // @synthesize transitBalanceCurrencyCode=_transitBalanceCurrencyCode;
@property(readonly, nonatomic) NSDecimalNumber *transitBalance; // @synthesize transitBalance=_transitBalance;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100162ec0
- (void)invalidateTransitBalance;	// IMP=0x0000000100162e80
- (id)_messageStringWithPass:(id)arg1;	// IMP=0x00000001001628dc
- (id)_titleString;	// IMP=0x0000000100162704
- (id)_amountTitleStringForSubtype:(long long)arg1 transitModifiers:(unsigned long long)arg2 amountString:(id)arg3;	// IMP=0x0000000100162458
- (id)_zeroValueTitleStringForTransitSubtype:(long long)arg1;	// IMP=0x0000000100162304
- (_Bool)isValid;	// IMP=0x0000000100162284
- (unsigned long long)notificationType;	// IMP=0x000000010016227c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001621d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100162024

@end
