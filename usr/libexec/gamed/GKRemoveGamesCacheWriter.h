//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKRemoveGamesCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSDictionary *_gameDescriptor;	// 16 = 0x10
}

+ (id)writerWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x0000000100103684
- (void).cxx_destruct;	// IMP=0x00000001001044cc
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100103eac
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x0000000100103ab8
- (void)bindParametersForRemoveGamesStatement:(struct sqlite3_stmt *)arg1 forRemovedBundleID:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x0000000100103a40
- (id)removeGamesInsertSQL;	// IMP=0x00000001001039f8
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 digest:(id)arg3;	// IMP=0x0000000100103870
- (id)requestsInsertSQL;	// IMP=0x0000000100103800
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x000000010010371c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

