//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, PKAccountUser, PKCurrencyAmount, PKFamilyMember;

@interface PDAccountUserMonthlySpendLimitUserNotification : PDUserNotification <NSSecureCoding>
{
    PKAccountUser *_accountUser;	// 104 = 0x68
    PKFamilyMember *_familyMember;	// 112 = 0x70
    NSString *_accountIdentifier;	// 120 = 0x78
    PKCurrencyAmount *_monthlySpendLimit;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016f980
+ (id)notificationIdentifierForAccountUserAltDSID:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x000000010016f750
- (void).cxx_destruct;	// IMP=0x000000010016ff6c
@property(readonly, nonatomic) PKCurrencyAmount *monthlySpendLimit; // @synthesize monthlySpendLimit=_monthlySpendLimit;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010016fc70
- (_Bool)isValid;	// IMP=0x000000010016fc00
- (unsigned long long)notificationType;	// IMP=0x000000010016fbf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010016fb0c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010016f988
- (id)initWithAccountUser:(id)arg1 familyMember:(id)arg2 monthlySpendLimit:(id)arg3 accountIdentifier:(id)arg4 passUniqueIdentifier:(id)arg5;	// IMP=0x000000010016f7d4

@end
