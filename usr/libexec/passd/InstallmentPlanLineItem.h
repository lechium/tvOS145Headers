//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanLineItem : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x00000001001df684
+ (id)_propertyValuesForInstallmentPlanLineItem:(id)arg1;	// IMP=0x00000001001df490
+ (id)_lineItemsWithQuery:(id)arg1;	// IMP=0x00000001001df2b0
+ (id)_predicateForInstallmentPlanPaymentPID:(id)arg1;	// IMP=0x00000001001df290
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x00000001001df270
+ (void)deleteLineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001df1d0
+ (void)deleteLineItemsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001df130
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001def00
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001decd0
+ (id)lineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001deb5c
+ (id)lineItemForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001de9e8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001de7c0
+ (id)databaseTable;	// IMP=0x00000001001de7b4
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001de900
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001de818

@end
