//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface FeatureApplicationDeclineDetails : SQLiteEntity
{
}

+ (id)_propertySettersForFeatureApplicationDeclineDetails;	// IMP=0x000000010029f2f0
+ (id)_predicateForApplicationPID:(long long)arg1;	// IMP=0x000000010029f27c
+ (void)updateFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010029f0d8
+ (id)featureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010029f024
+ (void)deleteFeatureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010029ef84
+ (id)insertFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010029ef08
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010029edc8
+ (id)databaseTable;	// IMP=0x000000010029edbc
- (id)featureApplicationDeclineDetails;	// IMP=0x000000010029f380
- (void)updateWithFeatureApplicationDeclineDetails:(id)arg1;	// IMP=0x000000010029f1d8
- (id)initWithFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010029edd4

@end
