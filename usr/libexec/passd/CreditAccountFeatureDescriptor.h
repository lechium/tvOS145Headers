//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountFeatureDescriptor : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountFeatureDescriptor;	// IMP=0x000000010027f948
+ (id)_propertyValuesForCreditAccountFeatureDescriptor:(id)arg1;	// IMP=0x000000010027f414
+ (id)_creditAccountFeatureDescriptorsWithQuery:(id)arg1;	// IMP=0x000000010027f240
+ (id)_predicateForFeatureIdentifier:(id)arg1;	// IMP=0x000000010027f0a4
+ (id)_predicateForAccountUserPID:(id)arg1;	// IMP=0x000000010027f084
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x000000010027f010
+ (void)updateCreditAccountFeatureDescriptors:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027eac0
+ (void)updateCreditAccountFeatureDescriptors:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027e5ec
+ (id)creditAccountFeatureDescriptorsForAccountUserPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027e334
+ (id)creditAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027e27c
+ (void)deleteCreditAccountFeatureDescriptorsForAccountUserPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027e1dc
+ (void)deleteCreditAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027e13c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010027e0e4
+ (id)databaseTable;	// IMP=0x000000010027e0d8
- (id)creditAccountFeatureDescriptor;	// IMP=0x000000010027f0c4
- (void)updateWithCreditFeatureDescriptor:(id)arg1;	// IMP=0x000000010027ef9c
- (id)initWithCreditAccountFeatureDescriptor:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027e4f8
- (id)initWithCreditAccountFeatureDescriptor:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027e3ec

@end
