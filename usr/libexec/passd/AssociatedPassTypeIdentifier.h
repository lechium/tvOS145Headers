//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AssociatedPassTypeIdentifier : SQLiteEntity
{
}

+ (id)_propertySettersForAssociatedPassTypeIdentifier;	// IMP=0x00000001002096f0
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100209650
+ (id)associatedPassTypeIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00000001002095c0
+ (id)associatedPassTypeIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x0000000100209530
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00000001002094f4
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0000000100209480
+ (id)_associatedPassTypeIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x000000010020924c
+ (void)insertAssociatedPassTypeIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002090e4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100208ee4
+ (id)databaseTable;	// IMP=0x0000000100208ed8
- (id)initWithPassTypeIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100208f1c

@end
