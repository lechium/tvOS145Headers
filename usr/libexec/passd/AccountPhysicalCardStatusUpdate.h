//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountPhysicalCardStatusUpdate : SQLiteEntity
{
}

+ (id)_propertySettersForAccountPhysicalCardStatusUpdate;	// IMP=0x000000010022d9bc
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x000000010022d948
+ (id)databaseTable;	// IMP=0x000000010022d93c
+ (void)deletePhysicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010022d800
+ (id)insertPhysicalCardStatusUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010022d444
+ (id)physicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010022d200
- (_Bool)deleteFromDatabase;	// IMP=0x000000010022d8a0
- (id)physicalCardStatusUpdate;	// IMP=0x000000010022d5fc

@end

