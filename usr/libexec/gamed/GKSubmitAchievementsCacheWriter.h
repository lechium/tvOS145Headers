//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKSubmitAchievementsCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSDictionary *_gameDescriptor;	// 16 = 0x10
}

+ (id)writerWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x00000001000a4c74
- (void).cxx_destruct;	// IMP=0x00000001000a5e54
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (unsigned int)refreshDataType;	// IMP=0x00000001000a5e24
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a5748
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a5354
- (void)bindParametersForAchievementsStatement:(struct sqlite3_stmt *)arg1 achievement:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4 requestsRowID:(long long)arg5;	// IMP=0x00000001000a5160
- (id)achievementsInsertSQL;	// IMP=0x00000001000a50f8
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 achievevement:(id)arg2 digest:(id)arg3;	// IMP=0x00000001000a4e6c
- (id)requestsInsertSQL;	// IMP=0x00000001000a4df0
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x00000001000a4d0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

