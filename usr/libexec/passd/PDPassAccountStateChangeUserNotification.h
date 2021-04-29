//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@interface PDPassAccountStateChangeUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _requiresDebtCollectionNotices;	// 104 = 0x68
    unsigned long long _accountState;	// 112 = 0x70
    unsigned long long _accessLevel;	// 120 = 0x78
    unsigned long long _featureIdentifier;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016677c
@property(readonly, nonatomic) _Bool requiresDebtCollectionNotices; // @synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly, nonatomic) unsigned long long accountState; // @synthesize accountState=_accountState;
- (unsigned long long)notificationType;	// IMP=0x0000000100166b74
- (_Bool)isValid;	// IMP=0x0000000100166b4c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100166a4c
- (id)_messageString;	// IMP=0x00000001001669cc
- (id)_titleString;	// IMP=0x000000010016696c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010016687c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100166784
- (id)initWithPassUniqueIdentifier:(id)arg1 accountState:(unsigned long long)arg2 accessLevel:(unsigned long long)arg3 featureIdentifier:(unsigned long long)arg4 requiresDebtCollectionNotices:(_Bool)arg5;	// IMP=0x00000001001666e8

@end
