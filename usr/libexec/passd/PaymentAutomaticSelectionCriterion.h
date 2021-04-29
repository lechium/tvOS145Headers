//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentAutomaticSelectionCriterion : SQLiteEntity
{
}

+ (id)_propertySettersForCriterion;	// IMP=0x000000010027ab98
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x000000010027ab24
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x000000010027aabc
+ (id)insertCriteria:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027a41c
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x000000010027a37c
+ (id)_criteriaInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x000000010027a074
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x0000000100279fe4
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0000000100279f54
+ (id)databaseTable;	// IMP=0x0000000100279f48
- (_Bool)deleteFromDatabase;	// IMP=0x000000010027aa24
- (id)initWithCriterion:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x000000010027a78c

@end
