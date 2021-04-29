//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, AMSURLRequestEncoder, NSData, NSString;
@protocol PushNotificationBagContract;

@interface PushRegisterTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    id <PushNotificationBagContract> _bagContract;	// 40 = 0x28
    AMSURLRequestEncoder *_requestEncoder;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010016d65c
- (id)_request:(id *)arg1;	// IMP=0x000000010016d224
- (void)main;	// IMP=0x000000010016ccf8
- (id)initWithAccount:(id)arg1 token:(id)arg2 environment:(id)arg3 logKey:(id)arg4;	// IMP=0x000000010016cbb4

@end

