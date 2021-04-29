//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CloudStoreContainerDatabase : SQLiteEntity
{
}

+ (id)_predicateForPID:(long long)arg1;	// IMP=0x00000001002c7f20
+ (id)_predicateForScope:(long long)arg1;	// IMP=0x00000001002c7eac
+ (id)_predicateForContainerName:(id)arg1;	// IMP=0x00000001002c7e8c
+ (id)_predicateForContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x00000001002c7d7c
+ (id)anyInDatabase:(id)arg1 withPID:(long long)arg2;	// IMP=0x00000001002c7cec
+ (id)anyInDatabase:(id)arg1 withContainerName:(id)arg2 scope:(long long)arg3;	// IMP=0x00000001002c7c4c
+ (void)removeCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002c7b7c
+ (id)_cloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002c7b60
+ (id)insertOrUpdateCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002c7940
+ (id)databaseTable;	// IMP=0x00000001002c7934
- (id)_commonDictionaryFoDatabaseWithScope:(long long)arg1 containerName:(id)arg2;	// IMP=0x00000001002c8078
- (id)databaseSubscription;	// IMP=0x00000001002c8008
- (id)cloudStoreZones;	// IMP=0x00000001002c7f94
- (_Bool)deleteFromDatabase;	// IMP=0x00000001002c7bc4
- (void)updateWithDatabaseSubscription:(id)arg1;	// IMP=0x00000001002c7b08
- (void)updateWithContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x00000001002c7ab0
- (id)initWithCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002c7a18

@end

