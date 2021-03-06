//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INPushNotificationHandling-Protocol.h"

@class ACAccountStore, NSString;

@interface INVerifyTermsPushHandler : NSObject <INPushNotificationHandling>
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100003f98
- (void)_refreshAppleAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003d0c
- (void)handleIncomingPushNotification:(id)arg1;	// IMP=0x00000001000038bc
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0000000100003844
- (id)init;	// IMP=0x000000010000380c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

