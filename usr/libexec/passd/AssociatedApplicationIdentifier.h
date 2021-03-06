//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AssociatedApplicationIdentifier : SQLiteEntity
{
}

+ (id)_propertySettersForAssociatedApplicationIdentifier;	// IMP=0x0000000100262c14
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100262b74
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x0000000100262ae4
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x0000000100262a54
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0000000100262a18
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00000001002629a4
+ (id)_associatedApplicationIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100262770
+ (void)insertAssociatedApplicationIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100262608
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010026248c
+ (id)databaseTable;	// IMP=0x0000000100262480
- (id)initWithApplicationIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002624c4

@end

