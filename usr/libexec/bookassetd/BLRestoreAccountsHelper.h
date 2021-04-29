//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BLRestoreAccountsHelper-Protocol.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLRestoreAccountsHelper : NSObject <BLRestoreAccountsHelper>
{
    NSMutableDictionary *_accountIDsByAppleID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authenticationQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100069ad0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authenticationQueue; // @synthesize authenticationQueue=_authenticationQueue;
@property(retain, nonatomic) NSMutableDictionary *accountIDsByAppleID; // @synthesize accountIDsByAppleID=_accountIDsByAppleID;
- (id)_enqueueAuthenticateTask:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100069904
- (id)_newDefaultAuthenticateOptions;	// IMP=0x0000000100069780
- (id)preflightAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000692a8
- (void)_dq_establishPrimaryAccount;	// IMP=0x0000000100068fbc
- (void)establishPrimaryAccount;	// IMP=0x0000000100068f04
- (id)accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000688d8
- (id)initWithAuthenticationQueue:(id)arg1;	// IMP=0x0000000100068820

@end

