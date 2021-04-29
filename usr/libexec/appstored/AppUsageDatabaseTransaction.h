//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUsageDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface AppUsageDatabaseTransaction : AppUsageDatabaseSession <SQLiteDatabaseTransaction>
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010026831c
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)importLaunchSyncMetadataEvent:(id)arg1;	// IMP=0x00000001002680f4
- (id)importLaunchEvents:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100267b44
- (id)importAppUsageSessions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100267620
- (id)importAppMetadata:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x0000000100267358
- (id)importAppEvents:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x0000000100267090
- (id)importAccountEvent:(id)arg1;	// IMP=0x0000000100266efc
- (id)importClusterMappings:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002667ac
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010026672c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

