//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, PKFamilyMember;

@interface PDAccountPendingFamilyMemberReminderNotification : PDUserNotification <NSSecureCoding>
{
    PKFamilyMember *_familyMember;	// 104 = 0x68
    NSString *_accountIdentifier;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100170224
+ (id)notificationIdentifierForAltDSID:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x000000010016ffd4
- (void).cxx_destruct;	// IMP=0x000000010017054c
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)_messageString;	// IMP=0x0000000100170520
- (id)_titleString;	// IMP=0x0000000100170514
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010017044c
- (_Bool)isValid;	// IMP=0x00000001001703dc
- (unsigned long long)notificationType;	// IMP=0x00000001001703d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100170328
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010017022c
- (id)initWithFamilyMember:(id)arg1 accountIdentifier:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0000000100170058

@end

