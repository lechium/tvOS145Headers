//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAccountManager, PDApplyManager, PDDatabaseManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDTransitNotificationService;

@interface PDRuleManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAccountManager *_accountManager;	// 16 = 0x10
    PDApplyManager *_applyManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDTransitNotificationService *_transitNotificationService;	// 48 = 0x30
    PDFamilyCircleManager *_familyCircleManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001002073ac
- (void)deleteRuleWithIdentifier:(id)arg1;	// IMP=0x000000010020739c
- (void)insertRule:(id)arg1;	// IMP=0x0000000100207378
- (void)rulesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010020730c
- (void)evaluateRulesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002067b0
- (void)updateWithRules:(id)arg1;	// IMP=0x000000010020678c
- (id)initWithDatabaseManager:(id)arg1 accountManager:(id)arg2 applyManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 paymentWebServiceCoordinator:(id)arg5 transitNotificationService:(id)arg6 familyCircleManager:(id)arg7;	// IMP=0x0000000100206624
- (id)init;	// IMP=0x000000010020660c

@end

