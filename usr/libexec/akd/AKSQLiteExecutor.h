//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _shouldAutomaticallyMigrate;	// 24 = 0x18
}

+ (id)_databaseQueue;	// IMP=0x000000010005c7b0
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c6c0
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c5cc
- (void).cxx_destruct;	// IMP=0x000000010005dcd0
- (void)setShouldAutomaticallyMigrate:(_Bool)arg1;	// IMP=0x000000010005dcc8
- (_Bool)shouldAutomaticallyMigrate;	// IMP=0x000000010005dcc0
- (void)_unsafe_closeDatabase;	// IMP=0x000000010005dbf4
- (void)closeDatabase;	// IMP=0x000000010005db80
- (void)_unsafe_wipeDatabase:(id *)arg1;	// IMP=0x000000010005da70
- (void)wipeDatabase:(id *)arg1;	// IMP=0x000000010005d8fc
- (int)_unsafe_createDataBase;	// IMP=0x000000010005d710
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x000000010005d54c
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x000000010005d3a8
- (id)_currentDataBaseError;	// IMP=0x000000010005d230
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x000000010005d090
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x000000010005d004
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005cf5c
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010005ce98
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010005ce34
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005ccf4
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005cb90
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ca90
- (_Bool)performQuery:(id)arg1;	// IMP=0x000000010005ca80
- (long long)performInsertQuery:(id)arg1;	// IMP=0x000000010005ca1c
- (int)_executeQuery:(id)arg1;	// IMP=0x000000010005c920
- (void)rollbackTransaction;	// IMP=0x000000010005c90c
- (void)commitTransaction;	// IMP=0x000000010005c8c0
- (void)openTransaction;	// IMP=0x000000010005c8ac
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c848
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x000000010005c550

@end

