//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransitNetworkIdentifier : SQLiteEntity
{
}

+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x0000000100086d14
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x0000000100086cac
+ (id)insertTransitNetworkIdentifiers:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000867b0
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0000000100086710
+ (id)_transitNetworkIdentifiersInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x0000000100086498
+ (id)transitNetworkIdentifiersInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x0000000100086408
+ (id)databaseTable;	// IMP=0x00000001000863fc
- (id)initWithTransitNetworkIdentifier:(id)arg1 networkOrder:(long long)arg2 forPaymentApplication:(id)arg3 database:(id)arg4;	// IMP=0x0000000100086ae0

@end

