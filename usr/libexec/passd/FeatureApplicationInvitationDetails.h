//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface FeatureApplicationInvitationDetails : SQLiteEntity
{
}

+ (id)_propertySettersForFeatureApplicationInvitationDetails;	// IMP=0x000000010005938c
+ (id)_propertyValuesForFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x000000010005915c
+ (id)_predicateForApplicationPID:(id)arg1;	// IMP=0x000000010005913c
+ (void)updateFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100058fb8
+ (id)featureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100058f04
+ (void)deleteFeatureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100058e64
+ (id)insertFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100058dd4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100058cd4
+ (id)databaseTable;	// IMP=0x0000000100058cc8
- (id)featureApplicationInvitationDetails;	// IMP=0x0000000100059544
- (void)updateWithFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x00000001000590c8
- (id)initWithFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100058ce0

@end
