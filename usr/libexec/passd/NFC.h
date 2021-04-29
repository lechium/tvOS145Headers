//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface NFC : SQLiteEntity
{
}

+ (id)_propertySettersForNFC;	// IMP=0x00000001001f1724
+ (id)anyInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00000001001f1550
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001f14b0
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00000001001f1474
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00000001001f1400
+ (void)insertNFCPayload:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001f1370
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001f1120
+ (id)databaseTable;	// IMP=0x00000001001f1114
- (id)nfcPayload;	// IMP=0x00000001001f15e0
- (id)initWithNFCPayload:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001f1158

@end
