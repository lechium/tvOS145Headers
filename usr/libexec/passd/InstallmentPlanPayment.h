//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanPayment : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100215a58
+ (id)_propertyValuesForInstallmentPlanPayment:(id)arg1;	// IMP=0x0000000100215768
+ (id)_paymentsWithQuery:(id)arg1;	// IMP=0x0000000100215414
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x00000001002153f4
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00000001002153d4
+ (void)deletePaymentsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100215268
+ (id)insertOrUpdatePayments:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100214a98
+ (id)paymentWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002149e4
+ (id)paymentsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010021492c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010021474c
+ (id)databaseTable;	// IMP=0x0000000100214740
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100215308
- (id)payment;	// IMP=0x0000000100214fac
- (void)updateWithPayment:(id)arg1;	// IMP=0x0000000100214e50
- (id)initWithInstallmentPlanPayment:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100214784

@end
