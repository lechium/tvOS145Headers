//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface TransitAppletStateBalance : SQLiteEntity
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x0000000100233438
+ (id)_propertySettersForBalanceItem;	// IMP=0x000000010023327c
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010023325c
+ (id)_predicateForTransitAppletStatePID:(long long)arg1;	// IMP=0x00000001002331e8
+ (id)_predicateForPaymentPassPID:(long long)arg1;	// IMP=0x0000000100233174
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0000000100233154
+ (id)transitAppletBalancesInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x0000000100232bac
+ (id)transitAppletStateBalancesInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x00000001002328fc
+ (in id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 andTransitAppletStatePID:(long long)arg4;	// IMP=0x0000000100232754
+ (void)deleteEntitiesForPaymentPassPID:(long long)arg1 andTransitAppletStatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002325e4
+ (void)updateWithTransitAppletBalances:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x000000010023252c
+ (id)insertTransitAppletBalances:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0000000100232374
+ (id)insertTransitAppletBalance:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00000001002322e8
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100232238
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001002321e0
+ (id)databaseTable;	// IMP=0x00000001002321d4
- (id)_valuesDictionaryForTransitAppletBalance:(id)arg1 paymentPassPID:(long long)arg2 transitAppletStatePID:(long long)arg3;	// IMP=0x0000000100232e90
- (id)balance;	// IMP=0x0000000100232d40
- (id)initWithTransitAppletBalance:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0000000100232134

@end

