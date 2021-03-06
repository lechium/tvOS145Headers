//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccount : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccount;	// IMP=0x000000010012fb00
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010012f104
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(long long)arg2;	// IMP=0x000000010012f02c
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x000000010012ef54
+ (id)anyInDatabase:(id)arg1;	// IMP=0x000000010012eebc
+ (void)_deleteAssociatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010012ee1c
+ (id)insertOrUpdatePeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010012ed10
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010012e968
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010012e910
+ (id)databaseTable;	// IMP=0x000000010012e904
+ (id)associatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010012e6d8
+ (id)_predicateForAssociatedPeerPaymentAccountIdentifier:(id)arg1;	// IMP=0x000000010012ddc0
+ (id)_predicateForAssociatedPeerPaymentAccountPID:(long long)arg1;	// IMP=0x000000010012dd4c
+ (void)_insertOrUpdateAssociatedPeerPaymentAccounts:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x000000010012d384
- (id)_dictionaryForPeerPaymentAccount:(id)arg1;	// IMP=0x000000010012f298
- (id)_passForPeerPaymentAccount:(id)arg1 database:(id)arg2;	// IMP=0x000000010012f194
- (_Bool)deleteFromDatabase;	// IMP=0x000000010012ea90
- (id)transactionSourceIdentifier;	// IMP=0x000000010012e60c
- (id)identifier;	// IMP=0x000000010012e5f8
- (id)associatedPassUniqueID;	// IMP=0x000000010012e574
- (id)associatedPassSerialNumber;	// IMP=0x000000010012e528
- (id)associatedPassTypeIdentifier;	// IMP=0x000000010012e4dc
- (unsigned long long)state;	// IMP=0x000000010012e488
- (id)associatedAccountInformation;	// IMP=0x000000010012e1b8
- (id)currentBalance;	// IMP=0x000000010012e098
- (id)peerPaymentAccount;	// IMP=0x000000010012dde0
- (void)updateWithPeerPaymentAccount:(id)arg1;	// IMP=0x000000010012d8bc
- (id)_commonInitForPeerPaymentAccount:(id)arg1 dictionary:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010012d100
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2 associatedPeerPaymentAccountPID:(long long)arg3;	// IMP=0x000000010012d02c
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010012cf74

@end

