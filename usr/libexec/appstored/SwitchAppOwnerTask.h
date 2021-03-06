//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, AMSBagValue, ApplicationProxy, NSString;

@interface SwitchAppOwnerTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_fromUserName;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
    ApplicationProxy *_proxy;	// 32 = 0x20
    AMSBagValue *_swithUserBagUrl;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010024c320
- (_Bool)_swapSINF:(id)arg1;	// IMP=0x000000010024c04c
- (_Bool)_refreshReceiptForAppProxyForMacOS;	// IMP=0x000000010024c044
- (_Bool)_swithUserForMacOS;	// IMP=0x000000010024c03c
- (_Bool)_repairReceiptForAppProxyIOS:(id)arg1 receiptData:(id)arg2;	// IMP=0x000000010024beb0
- (_Bool)_repairSINFUsingContentRestore;	// IMP=0x000000010024b544
- (id)_performRequestWithError:(id *)arg1;	// IMP=0x000000010024b268
- (_Bool)_performRequestForIOS;	// IMP=0x000000010024a964
- (id)_newBaseRequestBodyDictionary;	// IMP=0x000000010024a7b8
- (id)_getSinf;	// IMP=0x000000010024a5cc
- (id)_getReceipt;	// IMP=0x000000010024a4a0
- (void)main;	// IMP=0x000000010024a110
- (id)initWithAccount:(id)arg1 fromUserName:(id)arg2 proxy:(id)arg3;	// IMP=0x0000000100249fdc

@end

