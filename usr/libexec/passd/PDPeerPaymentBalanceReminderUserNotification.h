//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassReminderUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKCurrencyAmount;

@interface PDPeerPaymentBalanceReminderUserNotification : PDPassReminderUserNotification <NSSecureCoding>
{
    PKCurrencyAmount *_currentBalance;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100165ad4
- (void).cxx_destruct;	// IMP=0x0000000100165de8
@property(readonly, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
- (id)_messageString;	// IMP=0x0000000100165dcc
- (id)_titleString;	// IMP=0x0000000100165d24
- (unsigned long long)notificationType;	// IMP=0x0000000100165d1c
- (_Bool)isValid;	// IMP=0x0000000100165c88
- (void)updateWithNewBalance:(id)arg1 andNewReminderDate:(id)arg2;	// IMP=0x0000000100165c10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100165b88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100165adc
- (id)initWithPassUniqueIdentifier:(id)arg1 currentBalance:(id)arg2 reminderDate:(id)arg3;	// IMP=0x00000001001659bc

@end

