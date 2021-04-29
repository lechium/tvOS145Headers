//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"

@class NSString, PDAssertionManager, PDDatabaseManager, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PDDevicePasscodeManager : NSObject <PDAssertionObserver>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PKPaymentWebService *_paymentWebService;	// 16 = 0x10
    PDAssertionManager *_assertionManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_replyQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_restrictionsQueue;	// 48 = 0x30
    _Bool _hasActivePasscodeUpgradeFlow;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001002666d0
- (_Bool)_requiresUpgradedPasscode;	// IMP=0x00000001002665b0
- (_Bool)_currentPasscodeMeetsUpgradedPasscodePolicy:(id *)arg1;	// IMP=0x0000000100266548
- (void)_enforceUpgradedPasscodePolicy:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100266248
- (void)_updateUpgradedPasscodePolicyEnforcementWithRemovalOnly:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100265fdc
- (void)_updateUpgradedPasscodePolicyEnforcementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265fc8
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x0000000100265f4c
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x0000000100265f10
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100265ee0
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100265ed0
- (void)performUpgradedPasscodeEnforcementUpdateAfterBoot;	// IMP=0x0000000100265c9c
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265b5c
- (void)updateUpgradedPasscodePolicyEnforcementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002659cc
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265738
- (void)dealloc;	// IMP=0x00000001002656e4
- (id)initWithPaymentWebService:(id)arg1 databaseManager:(id)arg2 assertionManager:(id)arg3;	// IMP=0x00000001002655a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
