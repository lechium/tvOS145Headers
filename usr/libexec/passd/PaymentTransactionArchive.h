//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionArchive : SQLiteEntity
{
}

+ (id)_propertySettersForTransactionArchive;	// IMP=0x00000001001dd3ac
+ (id)_archivesForQuery:(id)arg1;	// IMP=0x00000001001dd1f4
+ (id)_archiveForQuery:(id)arg1;	// IMP=0x00000001001dd000
+ (id)transactionArchivesWithCloudStoreZone:(id)arg1 isArchived:(_Bool)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001dcb8c
+ (id)transactionArchivesWithType:(unsigned long long)arg1 isArchived:(_Bool)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001dc924
+ (id)anyInDatabase:(id)arg1 forTransactionIdentifier:(id)arg2;	// IMP=0x00000001001dc894
+ (id)anyInDatabase:(id)arg1 forTransaction:(id)arg2;	// IMP=0x00000001001dc7f4
+ (void)deleteArchiveForPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001dc6b8
+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x00000001001dc698
+ (id)_predicateForPID:(long long)arg1;	// IMP=0x00000001001dc624
+ (id)_predicateForLocationType:(unsigned long long)arg1;	// IMP=0x00000001001dc5b0
+ (id)_predicateForIsArchived:(_Bool)arg1;	// IMP=0x00000001001dc53c
+ (id)_predicateForCloudStoreZonePID:(long long)arg1;	// IMP=0x00000001001dc4c8
+ (id)_predicateForTransactionIdentifier:(id)arg1;	// IMP=0x00000001001dc4a8
+ (id)_predicateForTransactionPID:(long long)arg1;	// IMP=0x00000001001dc434
+ (id)insertTransactionArchiveForTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001dc170
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001dc0d8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001dc0a0
+ (id)databaseTable;	// IMP=0x00000001001dc094
- (id)transactionArchive;	// IMP=0x00000001001dce08
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001dc758
- (void)updateWithTransactionArchive:(id)arg1;	// IMP=0x00000001001dc30c
- (id)initWithTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001dc1e8

@end
