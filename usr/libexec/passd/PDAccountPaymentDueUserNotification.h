//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPaymentDueUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _useGenericMessaging;	// 104 = 0x68
    unsigned long long _featureIdentifier;	// 112 = 0x70
    NSString *_messageString;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001683bc
- (void).cxx_destruct;	// IMP=0x0000000100168f20
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x0000000100168ee8
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100168de8
- (_Bool)isValid;	// IMP=0x0000000100168d68
- (id)_messageString;	// IMP=0x0000000100168ce0
- (id)_messageStringForAccount:(id)arg1 amount:(id)arg2 reminderOffset:(unsigned long long)arg3 fireDate:(id)arg4;	// IMP=0x00000001001685d8
- (id)_titleString;	// IMP=0x000000010016858c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001684bc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001683c4
- (id)initWithAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x0000000100167c18

@end

