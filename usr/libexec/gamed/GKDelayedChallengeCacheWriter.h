//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKDelayedChallengeCacheWriter : NSObject <GKDatabaseWriter>
{
    int _requestType;	// 8 = 0x8
    GKDatabaseConnection *_connection;	// 16 = 0x10
    NSDictionary *_gameDescriptor;	// 24 = 0x18
}

+ (id)writerWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3;	// IMP=0x000000010023cad0
- (void).cxx_destruct;	// IMP=0x000000010023dadc
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023d504
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010023d110
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 forAbortingChallenge:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x000000010023d038
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 forIssuingChallenge:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x000000010023ceec
- (id)challengesInsertSQL;	// IMP=0x000000010023ce98
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x000000010023ccd0
- (id)requestsInsertSQL;	// IMP=0x000000010023cc60
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3;	// IMP=0x000000010023cb6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

