//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PhysicalCard : SQLiteEntity
{
}

+ (id)_propertySettersForPhysicalCard;	// IMP=0x0000000100229c18
+ (id)_physicalCardsWithQuery:(id)arg1;	// IMP=0x000000010022992c
+ (id)_predicateForPhysicalCardIdentifier:(id)arg1;	// IMP=0x00000001002296ac
+ (id)_predicateForPhysicalCardStatusUpdatePID:(long long)arg1;	// IMP=0x0000000100229638
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x00000001002295c4
+ (id)physicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010022950c
+ (id)physicalCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100229454
+ (void)deletePhysicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100229318
+ (void)deletePhysicalCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100229278
+ (void)updatePhysicalCards:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002289f0
+ (id)insertPhysicalCards:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100228824
+ (id)insertPhysicalCards:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100228658
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100227e50
+ (id)databaseTable;	// IMP=0x0000000100227e44
- (id)physicalCard;	// IMP=0x00000001002296cc
- (_Bool)deleteFromDatabase;	// IMP=0x00000001002293b8
- (void)updateWithPhysicalCard:(id)arg1;	// IMP=0x0000000100228ec4
- (id)initWithPhysicalCard:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002282b8
- (id)initWithPhysicalCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100227ea8

@end

