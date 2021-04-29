//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "InAppPurchaseIntentDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface InAppPurchaseIntentDatabaseTransaction : InAppPurchaseIntentDatabaseSession <SQLiteDatabaseTransaction>
{
}

- (_Bool)resetPurchaseIntentTimestampsForBundleID:(id)arg1;	// IMP=0x0000000100258738
- (_Bool)clearPurchaseIntentsForBundleID:(id)arg1;	// IMP=0x0000000100258594
- (_Bool)addPurchaseIntent:(id)arg1;	// IMP=0x00000001002584c0

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

