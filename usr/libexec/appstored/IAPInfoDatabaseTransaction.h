//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IAPInfoDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseTransaction : IAPInfoDatabaseSession <SQLiteDatabaseTransaction>
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100059834
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010005975c
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100059670
- (_Bool)removeAllIAPsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010005957c
- (_Bool)removeAllIAPsWithError:(id *)arg1;	// IMP=0x0000000100059520
- (_Bool)insertIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100058ec4
- (_Bool)deleteIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100058ac0

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

