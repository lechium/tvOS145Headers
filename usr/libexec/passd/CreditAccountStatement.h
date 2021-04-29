//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountStatement : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountStatement;	// IMP=0x00000001000dfa94
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x00000001000dfa74
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00000001000dfa00
+ (id)_predicateForCreditAccountSummaryPID:(long long)arg1;	// IMP=0x00000001000df98c
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00000001000df96c
+ (void)updateCreditAccountStatement:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000df00c
+ (id)creditAccountStatementWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000def7c
+ (id)creditAccountStatementsWithIdentifier:(id)arg1 withAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000decb4
+ (id)insertCreditAccountStatement:(id)arg1 withAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000dea88
+ (id)creditAccountStatementsForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000de844
+ (id)creditAccountStatementsWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000de600
+ (void)deleteCreditAccountStatementForEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000de560
+ (id)insertCreditAccountStatement:(id)arg1 forEventPID:(long long)arg2 withAccountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00000001000de2e0
+ (id)creditAccountStatementForCreditAccountSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000de22c
+ (void)deleteCreditAccountStatementForCreditAccountSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000de18c
+ (id)insertCreditAccountStatement:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000de110
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000dd540
+ (id)databaseTable;	// IMP=0x00000001000dd534
- (id)creditAccountStatement;	// IMP=0x00000001000e04b0
- (void)updateWithCreditAccountStatement:(id)arg1;	// IMP=0x00000001000df10c
- (void)populateDictionary:(id)arg1 forStatement:(id)arg2;	// IMP=0x00000001000dd8dc
- (id)initWithCreditAccountStatement:(id)arg1 withAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000dd7ec
- (id)initWithCreditAccountStatement:(id)arg1 forEventPID:(long long)arg2 withAccountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00000001000dd6a4
- (id)initWithCreditAccountStatement:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000dd598

@end

