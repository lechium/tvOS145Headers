//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPromptForVirtualCardDetailNotification : PDUserNotification <NSSecureCoding>
{
    NSString *_accountIdentifier;	// 104 = 0x68
    NSString *_virtualCardIdentifier;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010016d8c0
- (void).cxx_destruct;	// IMP=0x000000010016d974
@property(readonly, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010016d8d0
- (unsigned long long)notificationType;	// IMP=0x000000010016d8c8
- (id)_notificationIdentifierForAccountIdentifier:(id)arg1 virtualCardIdentifier:(id)arg2;	// IMP=0x000000010016d80c
- (id)initWithAccountIdentifier:(id)arg1 virtualCardIdentifier:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x000000010016d6cc

@end
