//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreContainer.h"

#import "PDAccountManagerObserver-Protocol.h"
#import "PDCloudStoreContainerDatabaseDataSource-Protocol.h"

@class NSDictionary, NSMutableSet, NSSet, NSString, PDAccountManager, PDFamilyCircleManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDSpotlightIndexer, PKPeerPaymentAccount;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer <PDAccountManagerObserver, PDCloudStoreContainerDatabaseDataSource>
{
    struct os_unfair_lock_s _fetchLock;	// 8 = 0x8
    _Bool _proactiveFetchInProgress;	// 12 = 0xc
    _Bool _ensuringZoneShareIntegrityInProgress;	// 13 = 0xd
    NSMutableSet *_fetchingTransactionsForTransactionSourceIdentifiers;	// 16 = 0x10
    PDPaymentTransactionProcessor *_transactionProcessor;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyCircleManager;	// 40 = 0x28
    PDAccountManager *_accountManager;	// 48 = 0x30
    PDSpotlightIndexer *_spotlightIndexer;	// 56 = 0x38
    PKPeerPaymentAccount *_peerPaymentAccount;	// 64 = 0x40
    NSSet *_accounts;	// 72 = 0x48
    NSDictionary *_sharedAccountCloudStoreByAccountIdentifier;	// 80 = 0x50
    NSDictionary *_accountUsersByAccountIdentifier;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100078774
- (void)_parseAccountEventsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100078244
- (id)_recordsByFromAccountEvent:(id)arg1 zone:(id)arg2;	// IMP=0x0000000100078050
- (void)_fetchMissingAccountEventsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 carriedOverRecordsByDatabaseIdentifier:(id)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000761b0
- (id)_recordTypeForAccountEventRecord:(id)arg1;	// IMP=0x0000000100076164
- (_Bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;	// IMP=0x0000000100076010
- (_Bool)_isAccountEventFromRecordType:(id)arg1;	// IMP=0x0000000100075ffc
- (void)_saveTransactionFetchRetries:(id)arg1;	// IMP=0x0000000100075fc0
- (id)_transactionFetchRetries;	// IMP=0x0000000100075e08
- (void)_fetchTransactionsAttemptForTransactionSourceIdentifier:(id)arg1;	// IMP=0x0000000100075cf4
- (void)_resetFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x0000000100075c6c
- (_Bool)_shouldFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x0000000100075bb4
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;	// IMP=0x0000000100075b20
- (id)_transactionSourceIdentifierForTransactionCloudStoreRecord:(id)arg1 databaseIdentifier:(id)arg2;	// IMP=0x00000001000752a4
- (id)_transactionSourceIdentifierForTransactionRecordID:(id)arg1 recordType:(id)arg2 databaseIdentifier:(id)arg3;	// IMP=0x00000001000743c0
- (void)_fetchMissingTransactionRecordsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100073684
- (void)_processShareWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100071958
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;	// IMP=0x0000000100071704
- (_Bool)_canFormShareFromCloudStoreRecord:(id)arg1;	// IMP=0x0000000100071690
- (id)_parseTransactionRecords:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 updateReasons:(unsigned long long)arg4;	// IMP=0x00000001000701a8
- (_Bool)_isCloudStoreZoneThePrimaryZoneForCurrentUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x000000010006feac
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000010006f808
- (_Bool)_isTransactionItemFromRecordType:(id)arg1;	// IMP=0x000000010006f794
- (id)_originDeviceID;	// IMP=0x000000010006f780
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;	// IMP=0x000000010006f3d0
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x000000010006f308
- (long long)_numberOfActiveTransactionSources;	// IMP=0x000000010006eee4
- (_Bool)_queue_isRelevantTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010006ead8
- (void)_queue_familyMembersByAltDSIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006e784
- (void)_queue_familyMembersByAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006e470
- (void)_handleFamilyUpdateNotification:(id)arg1;	// IMP=0x000000010006e388
- (id)_cloudStoreZonesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x000000010006d914
- (void)_queue_createOrRemoveZoneSharesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006d520
- (void)_queue_createOrRemoveZoneSharesForAccountsIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006c1d8
- (void)_queue_createOrRemoveZoneSharesForPeerPaymentIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006ae4c
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x000000010006ace0
- (id)_accountZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x000000010006aa0c
- (id)_accountZoneNamesForAccountUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x000000010006a800
- (id)_accountZoneNamesForAccountSet:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x000000010006a654
- (id)_peerPaymentZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x000000010006a544
- (void)_queue_updateWithPossibleNewZonesToAdd:(id)arg1 orphanedZones:(id)arg2 containerDatabase:(id)arg3;	// IMP=0x0000000100069ea4
- (void)_queue_processSharedAccountCloudStoreChangeWithOldSharedAccountCloudStore:(id)arg1 newSharedAccountCloudStore:(id)arg2;	// IMP=0x0000000100069c84
- (void)_queue_processAccountChangeWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x0000000100069af8
- (void)_queue_processPeerPaymentAccountChangeWithOldAccount:(id)arg1 newPeerPaymentAccount:(id)arg2;	// IMP=0x000000010006996c
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x0000000100068a2c
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0000000100068670
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0000000100067748
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00000001000675e4
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x000000010006746c
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x000000010006732c
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x0000000100067140
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x0000000100066f2c
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x0000000100066cb4
- (void)accountManager:(id)arg1 accountUsersChanged:(id)arg2 oldUsers:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x0000000100066a94
- (void)accountManager:(id)arg1 sharedAccountCloudStoreChangedForAccountIdentifier:(id)arg2;	// IMP=0x0000000100066850
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x0000000100066610
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x000000010006640c
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00000001000660b8
- (void)_handlePeerPaymentAccountChanged:(id)arg1;	// IMP=0x0000000100065f28
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100065690
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064a94
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000648e8
- (void)bootstrapZoneWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006455c
- (void)syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x0000000100064514
- (void)passDidDisappear:(id)arg1;	// IMP=0x00000001000643b0
- (_Bool)_queue_canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00000001000640c0
- (void)canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100063f70
- (void)canSyncTransactionFromCloudKitForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063e54
- (void)_fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100062c90
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062b7c
- (void)requestUpdatesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00000001000622e0
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x0000000100061ca4
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060888
- (id)_stripToFirstDash:(id)arg1;	// IMP=0x0000000100060800
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x0000000100060368
- (id)identifierFromRecord:(id)arg1;	// IMP=0x000000010005ff90
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x000000010005fe8c
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x000000010005fce0
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010005fb30
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 request:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010005e778
- (void)_deleteLocalDataFromDeletedRecordsByDatabaseIdentifier:(id)arg1;	// IMP=0x000000010005e0b4
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x000000010005dea4
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x000000010005dbcc
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x000000010005d970
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005cb3c
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x000000010005c418
- (id)cloudStoreSpecificKeysForItem:(id)arg1;	// IMP=0x000000010005c1c0
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x000000010005bf94
- (_Bool)_queue_canInitializeContainer;	// IMP=0x000000010005bb88
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x000000010005ba28
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b984
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x000000010005b820
- (void)dealloc;	// IMP=0x000000010005b7c4
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 accountManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5 spotlightIndexer:(id)arg6;	// IMP=0x000000010005b1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

