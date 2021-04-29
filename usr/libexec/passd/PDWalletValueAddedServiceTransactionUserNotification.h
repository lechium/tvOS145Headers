//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWalletUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDWalletValueAddedServiceTransactionUserNotification : PDWalletUserNotification <NSSecureCoding>
{
    NSString *_merchantIdentifier;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010015f95c
- (void).cxx_destruct;	// IMP=0x000000010015fab0
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (unsigned long long)notificationType;	// IMP=0x000000010015fa98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010015fa10
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010015f964
- (id)initWithMerchantIdentifier:(id)arg1 localizedPassDescription:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x000000010015f714

@end
