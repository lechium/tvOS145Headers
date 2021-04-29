//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKDatabaseSubscription, NSData, NSDate, NSDictionary, NSSet, NSString, PDCloudStoreContainerDatabase, PKAccount, PKAccountEvent, PKAccountUser, PKCloudStoreZone, PKPass, PKPaymentTransaction, PKPaymentTransactionArchive, PKPeerPaymentAccount, PKSharedAccountCloudStore;

@protocol PDCloudStoreDataSource <NSObject>
- (NSSet *)paymentApplicationsForPassUniqueIdentifier:(NSString *)arg1;
- (PKPaymentTransaction *)insertOrUpdatePaymentTransaction:(PKPaymentTransaction *)arg1 withTransactionSourceIdentifier:(NSString *)arg2 transactionArchive:(PKPaymentTransactionArchive *)arg3 originDeviceID:(NSString *)arg4 insertionMode:(unsigned long long)arg5 performTruncation:(_Bool)arg6;
- (NSSet *)passesOfType:(unsigned long long)arg1;
- (PKPass *)passWithUniqueIdentifier:(NSString *)arg1;
- (NSSet *)passesForCloudKitArchivedState:(_Bool)arg1;
- (void)removeContainerDatabaseForContainerDatabase:(PDCloudStoreContainerDatabase *)arg1;
- (void)insertContainerDatabaseForContainerDatabase:(PDCloudStoreContainerDatabase *)arg1;
- (_Bool)containerDatabaseExistsForContainerDatabase:(PDCloudStoreContainerDatabase *)arg1;
- (void)updateDatabaseSubscription:(CKDatabaseSubscription *)arg1 containerDatabase:(PDCloudStoreContainerDatabase *)arg2;
- (CKDatabaseSubscription *)databaseSubscriptionForContainerDatabase:(PDCloudStoreContainerDatabase *)arg1;
- (NSSet *)cloudStoreZonesForContainerDatabase:(PDCloudStoreContainerDatabase *)arg1;
- (void)removeCloudStoreZone:(PKCloudStoreZone *)arg1 containerDatabase:(PDCloudStoreContainerDatabase *)arg2;
- (NSDate *)fetchTimestampForCloudStore:(PKCloudStoreZone *)arg1 containerDatabase:(PDCloudStoreContainerDatabase *)arg2;
- (NSData *)tokenDataForCloudStore:(PKCloudStoreZone *)arg1 containerDatabase:(PDCloudStoreContainerDatabase *)arg2;
- (void)updateChangeToken:(NSData *)arg1 fetchTimestamp:(NSDate *)arg2 forCloudStoreZone:(PKCloudStoreZone *)arg3 inContainerDatabase:(PDCloudStoreContainerDatabase *)arg4;
- (void)insertOrUpdateCloudStoreZone:(PKCloudStoreZone *)arg1 containerDatabase:(PDCloudStoreContainerDatabase *)arg2;
- (NSDictionary *)sharedAccountCloudStoreByAccountIdentifier;
- (PKSharedAccountCloudStore *)sharedAccountCloudStoreForAccountIdentifier:(NSString *)arg1;
- (PKAccountUser *)accountUserWithAltDSID:(NSString *)arg1 accountIdentifier:(NSString *)arg2;
- (NSDictionary *)accountUsersByAccountIdentifier;
- (NSSet *)accounts;
- (void)syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;
- (PKPeerPaymentAccount *)peerPaymentAccount;
- (PKAccountUser *)accountUserWithTransactionSourceIdentifier:(NSString *)arg1;
- (NSString *)transactionSourceIdentifierForAccountUserAltDSID:(NSString *)arg1 accountIdentifier:(NSString *)arg2;
- (NSSet *)transactionSourceIdentifiersForPassUniqueIdentifier:(NSString *)arg1;
- (NSString *)transactionSourceIdentifierForPeerPaymentAccountIdentifier:(NSString *)arg1;
- (PKPeerPaymentAccount *)peerPaymentAccountForTransactionSourceIdentifier:(NSString *)arg1;
- (NSString *)passUniqueIdentifierForTransactionSourceIdentifier:(NSString *)arg1;
- (unsigned long long)transactionSourceTypeForTransactionSourceIdentifier:(NSString *)arg1;
- (NSString *)transactionSourceIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 accountIdentifier:(NSString *)arg2 accountType:(long long)arg3;
- (_Bool)transactionSourceExistsWithIdentifier:(NSString *)arg1;
- (_Bool)passExistsWithUniqueID:(NSString *)arg1;
- (void)recomputeCategoryVisualizationMagnitudesForPassUniqueID:(NSString *)arg1 withStyle:(long long)arg2;
- (_Bool)insertOrUpdateAccountEvent:(PKAccountEvent *)arg1;
- (PKAccountEvent *)accountEventWithIdentifier:(NSString *)arg1;
- (PKAccount *)accountWithIdentifier:(NSString *)arg1;
- (NSString *)associatedAccountIdentifierForPassWithUniqueIdentifier:(NSString *)arg1;
- (NSString *)passUniqueIdentifierWithAssociatedAccountIdentifier:(NSString *)arg1;
- (NSString *)passUniqueIdentifierWithPrimaryAccountIdentifier:(NSString *)arg1;
- (NSSet *)transactionsWithServiceIdentifier:(NSString *)arg1;
- (NSString *)broadwayOrSurfTransactionSourceIdentifierForAmbiguousServiceIdentifier:(NSString *)arg1;
- (NSString *)passUniqueIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 accountIdentifier:(NSString *)arg2 accountType:(long long)arg3;
- (NSString *)passUniqueIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2;
- (PKPaymentTransaction *)transactionWithReferenceIdentifier:(NSString *)arg1;
- (PKPaymentTransaction *)transactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2;
- (_Bool)hasTransactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2;
- (PKPaymentTransaction *)transactionWithTransactionIdentifier:(NSString *)arg1;
- (NSSet *)transactionArchivesWithCloudStoreZone:(PKCloudStoreZone *)arg1 isArchived:(_Bool)arg2;
- (NSSet *)transactionArchivesWithType:(unsigned long long)arg1 isArchived:(_Bool)arg2;
- (PKPaymentTransactionArchive *)transactionArchiveForTransactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2;
@end
