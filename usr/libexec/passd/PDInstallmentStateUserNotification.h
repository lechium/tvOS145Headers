//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString, PKInstallmentPlan;

@interface PDInstallmentStateUserNotification : PDUserNotification <NSSecureCoding>
{
    PKInstallmentPlan *_installmentPlan;	// 104 = 0x68
    NSString *_accountIdentifier;	// 112 = 0x70
    NSDate *_statementClosingDate;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016e13c
- (void).cxx_destruct;	// IMP=0x000000010016e670
@property(retain, nonatomic) NSDate *statementClosingDate; // @synthesize statementClosingDate=_statementClosingDate;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010016e34c
- (_Bool)isValid;	// IMP=0x000000010016e2f4
- (unsigned long long)notificationType;	// IMP=0x000000010016e2ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010016e240
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010016e144
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x000000010016dee8

@end
