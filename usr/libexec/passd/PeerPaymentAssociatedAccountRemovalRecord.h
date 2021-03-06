//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAssociatedAccountRemovalRecord : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAssociatedAccountRemovalRecord;	// IMP=0x00000001000ed244
+ (id)_peerPaymentAssociatedAccountRemovalRecordWithQuery:(id)arg1;	// IMP=0x00000001000ed080
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x00000001000ece90
+ (id)associatedAccountRemovalRecordsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000ecc00
+ (void)deleteAssociatedAccountRemovalRecordsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000ecb60
+ (id)insertAssociatedAccountRemovalRecords:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000ec974
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000ec93c
+ (id)databaseTable;	// IMP=0x00000001000ec930
- (id)associatedAccountRemovalRecord;	// IMP=0x00000001000ecf04
- (id)initWithPreviousAccountUser:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000eccb8

@end

