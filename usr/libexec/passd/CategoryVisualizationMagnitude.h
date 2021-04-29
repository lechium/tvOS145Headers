//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CategoryVisualizationMagnitude : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100033ac8
+ (id)_propertyValuesForMagnitude:(id)arg1;	// IMP=0x000000010003395c
+ (id)_predicateForBucket:(long long)arg1;	// IMP=0x00000001000338e8
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00000001000338c8
+ (id)_predicateForPassUniqueID:(id)arg1 bucket:(long long)arg2;	// IMP=0x00000001000337c4
+ (id)_predicateForPassUniqueID:(id)arg1;	// IMP=0x00000001000337a4
+ (id)_magnitudesMatchingQuery:(id)arg1;	// IMP=0x00000001000335e4
+ (void)deleteAnyInDatabase:(id)arg1 forPassUniqueID:(id)arg2;	// IMP=0x0000000100033354
+ (id)insertOrUpdateMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100033238
+ (id)insertMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000331c4
+ (id)magnitudesForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010003310c
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x000000010003307c
+ (id)databaseTable;	// IMP=0x0000000100032fd4
- (id)magnitude;	// IMP=0x0000000100033468
- (void)updateWithMagnitude:(id)arg1;	// IMP=0x00000001000333f4
- (id)initWithMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100032fe0

@end
