//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface ValueAddedServiceTransaction : SQLiteEntity
{
}

+ (id)_propertySettersForValueAddedServiceTransaction;	// IMP=0x0000000100208cb0
+ (id)_valueAddedServiceTransactionsWithQuery:(id)arg1;	// IMP=0x0000000100208b28
+ (id)_predicateForMerchantPID:(id)arg1;	// IMP=0x0000000100208b08
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0000000100208ae8
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0000000100208a5c
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100208a3c
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x00000001002089b0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001002088dc
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100208864
+ (id)databaseTable;	// IMP=0x0000000100208858
+ (id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x00000001002081f0
+ (id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 limit:(long long)arg3;	// IMP=0x0000000100208064
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100207fd4
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100207cfc
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100207c5c
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x0000000100207a24
+ (id)insertValueAddedServiceTransaction:(id)arg1 withPass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5;	// IMP=0x0000000100207954
- (id)valueAddedServiceTransaction;	// IMP=0x000000010020866c
- (void)updateWithValueAddedServiceTransaction:(id)arg1 paymentTransaction:(id)arg2;	// IMP=0x00000001002083cc
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100207d9c
- (id)initWithValueAddedServiceTransaction:(id)arg1 pass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00000001002075a8

@end

