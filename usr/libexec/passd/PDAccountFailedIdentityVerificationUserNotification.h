//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKAccountUser;

@interface PDAccountFailedIdentityVerificationUserNotification : PDUserNotification <NSSecureCoding>
{
    PKAccountUser *_accountUser;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100170cac
- (void).cxx_destruct;	// IMP=0x0000000100170ee8
- (id)_messageString;	// IMP=0x0000000100170edc
- (id)_titleString;	// IMP=0x0000000100170ed0
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100170e08
- (_Bool)isValid;	// IMP=0x0000000100170df0
- (unsigned long long)notificationType;	// IMP=0x0000000100170de8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100170d60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100170cb4
- (id)initWithAccount:(id)arg1 accountUser:(id)arg2;	// IMP=0x0000000100170b64

@end
