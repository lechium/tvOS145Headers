//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSQLiteStatementStore-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface GKDatabaseConnection : NSObject <GKSQLiteStatementStore>
{
    struct __CFDictionary *_stmtCache;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 32 = 0x20
}

+ (id)connectionWithDatabasePath:(id)arg1;	// IMP=0x00000001000a0360
- (void).cxx_destruct;	// IMP=0x00000001000a26b4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)performAsyncTransaction:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1fb4
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a1dcc
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a1be4
- (void)close;	// IMP=0x00000001000a18a0
- (void)open;	// IMP=0x00000001000a0a1c
- (int)getStatement:(struct sqlite3_stmt **)arg1 forSQL:(id)arg2;	// IMP=0x00000001000a070c
- (void)dealloc;	// IMP=0x00000001000a06a8
- (void)checkAndOpenDatabase;	// IMP=0x00000001000a0580
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00000001000a03b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
