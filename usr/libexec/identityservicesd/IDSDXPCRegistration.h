//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSXPCRegistration-Protocol.h"

@class IDSCTAdapter, IDSDAccountController, IDSUserStore, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCRegistration : NSObject <IDSXPCRegistration>
{
    _Bool _onlyAllowReads;	// 8 = 0x8
    IDSUserStore *_userStore;	// 16 = 0x10
    IDSDAccountController *_accountController;	// 24 = 0x18
    IDSCTAdapter *_ctAdapter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001004b2334
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSCTAdapter *ctAdapter; // @synthesize ctAdapter=_ctAdapter;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(nonatomic) _Bool onlyAllowReads; // @synthesize onlyAllowReads=_onlyAllowReads;
- (void)constructRAResponseDictionaryForServices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b20b8
- (void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b19b8
- (void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b12bc
- (void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b0d14
- (void)setSelectedSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b03f0
- (void)unselectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004afb94
- (void)selectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004af2cc
- (void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001004aebe0
- (void)requestSelectedSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ae6c0
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x00000001004ae518
- (id)initWithQueue:(id)arg1 connection:(id)arg2 userStore:(id)arg3 accountController:(id)arg4 ctAdapter:(id)arg5;	// IMP=0x00000001004ae150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

