//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPeerPaymentTransactionUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@interface PDPeerPaymentTransactionReminderUserNotification : PDPeerPaymentTransactionUserNotification <NSSecureCoding>
{
    unsigned long long _reminderPeriod;	// 120 = 0x78
}

@property(readonly, nonatomic) unsigned long long reminderPeriod; // @synthesize reminderPeriod=_reminderPeriod;
- (id)_messageString;	// IMP=0x0000000100165758
- (id)_titleString;	// IMP=0x0000000100165708
- (unsigned long long)notificationType;	// IMP=0x0000000100165700
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 reminderPeriod:(unsigned long long)arg4;	// IMP=0x000000010016550c

@end

