//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAccountManagerObserver-Protocol.h"
#import "PDFamilyCircleManagerObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"

@class NSString, PDAccountManager, PDDatabaseManager, PDFamilyCircleManager, PDNotificationStreamManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDUserNotificationManager, PKFamilyMemberCollection;
@protocol OS_dispatch_queue;

@interface PDAccountNotificationController : NSObject <PDNotificationStreamConsumer, PDFamilyCircleManagerObserver, PDAccountManagerObserver>
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDAccountManager *_accountManager;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyMemberManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 56 = 0x38
    PDNotificationStreamManager *_notificationStreamManager;	// 64 = 0x40
    _Bool _hasAccounts;	// 72 = 0x48
    PKFamilyMemberCollection *_familyMemberCollection;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001a6dd0
- (void)_queue_loadFamilyMemberCollectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a6bfc
- (void)_updateAccountUserIdentityStatusNotificationsWithAccount:(id)arg1 accountUserCollection:(id)arg2 oldAccountUserCollection:(id)arg3;	// IMP=0x00000001001a6aa0
- (void)_updateAccountUserMonthlySpendLimitNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 accountUserCollection:(id)arg3;	// IMP=0x00000001001a5f64
- (void)_updateDailyCashNotificationUntilYesterdayForDate:(id)arg1 accountIdentifier:(id)arg2 monthlyAmount:(id)arg3;	// IMP=0x00000001001a5a1c
- (void)updateDailyCashNotifications;	// IMP=0x00000001001a5888
- (id)_notificationForAccountEvent:(id)arg1 account:(id)arg2;	// IMP=0x00000001001a56e8
- (void)_notificationForAccountEvent:(id)arg1 withManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a51d4
- (id)_paymentDueNotificationsForAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2;	// IMP=0x00000001001a4fb4
- (id)_upcomingScheduledPaymentNotificationsForPayment:(id)arg1 account:(id)arg2;	// IMP=0x00000001001a4de4
- (void)_recomputePaymentNotificationsForScheduledPayments:(id)arg1 account:(id)arg2;	// IMP=0x00000001001a3744
- (void)_updatePastDueNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001001a3250
- (void)_updateInstallmentNotificationsForOldAccount:(id)arg1 newAccount:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001001a2a38
- (void)accountManager:(id)arg1 didSetScheduledPayments:(id)arg2 forAccountIdentifier:(id)arg3;	// IMP=0x00000001001a28d0
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00000001001a2570
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00000001001a1cb4
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00000001001a1c30
- (void)accountManager:(id)arg1 accountUsersChanged:(id)arg2 oldUsers:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00000001001a17a4
- (void)accountManager:(id)arg1 didRemoveAccountEvent:(id)arg2;	// IMP=0x00000001001a1664
- (void)accountManager:(id)arg1 didUpdateAccountEvent:(id)arg2;	// IMP=0x00000001001a14d4
- (void)accountManager:(id)arg1 didAddAccountEvent:(id)arg2;	// IMP=0x00000001001a1388
- (void)familyCircleManagerDidUpdateFamilyMembers:(id)arg1;	// IMP=0x00000001001a1320
- (void)_recomputeSummaryNotificationsForAccountIdentifier:(id)arg1 paymentPass:(id)arg2 dateForSummary:(id)arg3 summaryTypes:(id)arg4 fireImmediately:(_Bool)arg5;	// IMP=0x000000010019fca4
- (void)_recomputeSummaryNotificationsForTransactionSourceIdentifier:(id)arg1 withTransaction:(id)arg2;	// IMP=0x000000010019fa18
- (void)insertSummaryNotificationForAccountIdentifier:(id)arg1 summaryType:(unsigned long long)arg2;	// IMP=0x000000010019f8b0
- (void)_resurfaceRecentNotificationsForAccount:(id)arg1 andPromote:(_Bool)arg2;	// IMP=0x000000010019f448
- (void)_resurfaceRecentNotificationsAndPromote:(_Bool)arg1;	// IMP=0x000000010019f2c0
- (void)paymentTransactionUpdated:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x000000010019f248
- (id)initWithAccountManager:(id)arg1 userNotificationManager:(id)arg2 databaseManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 peerPaymentWebServiceCoordinator:(id)arg5 familyMemberManager:(id)arg6;	// IMP=0x000000010019ef6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

