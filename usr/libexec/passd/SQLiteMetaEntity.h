//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface SQLiteMetaEntity : SQLiteEntity
{
}

+ (id)_tableNamePredicate:(id)arg1;	// IMP=0x00000001001dc074
+ (id)_namePredicate:(id)arg1;	// IMP=0x00000001001dc054
+ (id)_typePredicate:(id)arg1;	// IMP=0x00000001001dc034
+ (id)entitesMatchingQuery:(id)arg1;	// IMP=0x00000001001dbec0
+ (id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3;	// IMP=0x00000001001dbcf8
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3;	// IMP=0x00000001001dbc20
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2;	// IMP=0x00000001001dbbdc
+ (id)anyInDatabase:(id)arg1 withType:(id)arg2 tableName:(id)arg3;	// IMP=0x00000001001dbb04
+ (id)anyInDatabase:(id)arg1 withType:(id)arg2 name:(id)arg3;	// IMP=0x00000001001dba2c
+ (id)databaseTable;	// IMP=0x00000001001dba20
- (id)SQL;	// IMP=0x00000001001dc020
- (id)tableName;	// IMP=0x00000001001dc00c
- (id)name;	// IMP=0x00000001001dbff8
- (id)type;	// IMP=0x00000001001dbfe4

@end
