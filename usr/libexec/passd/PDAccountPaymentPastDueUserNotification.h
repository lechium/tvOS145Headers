//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPaymentPastDueUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _useGenericMessaging;	// 104 = 0x68
    NSString *_accountIdentifier;	// 112 = 0x70
    unsigned long long _featureIdentifier;	// 120 = 0x78
    long long _variant;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100169830
- (void).cxx_destruct;	// IMP=0x0000000100169f10
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100169d4c
- (_Bool)needsNotificationSettings;	// IMP=0x0000000100169d44
- (unsigned long long)notificationType;	// IMP=0x0000000100169d3c
- (_Bool)isValid;	// IMP=0x0000000100169cc0
- (id)_title;	// IMP=0x0000000100169c74
- (id)_messageString;	// IMP=0x0000000100169b1c
- (long long)_variantForDay:(long long)arg1 cycle:(long long)arg2;	// IMP=0x0000000100169a4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100169958
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100169838
- (void)_updateForNextPastDueNotificationForAccount:(id)arg1;	// IMP=0x0000000100169114
- (id)initWithPassUniqueIdentifier:(id)arg1 account:(id)arg2;	// IMP=0x0000000100168f34

@end

