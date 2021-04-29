//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDate, NSString;

@interface SBDML3UbiquitousDatabase : NSObject
{
    ML3MusicLibrary *_musicLibrary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000a0a4
@property(readonly) __weak ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void)dumpUbiquitousMetadata;	// IMP=0x0000000100009c84
@property(readonly, nonatomic) _Bool hasLocalChangesToPush;
@property(readonly, nonatomic) _Bool hasRemoteChangesToPull;
@property(readonly, nonatomic) _Bool hasSyncedAtleastOnce;
- (id)readUbiquitousDatabaseMetadataValuesForIdentifiers:(id)arg1;	// IMP=0x000000010000947c
- (id)readUbiquitousDatabaseMetadataValuesForIdentifier:(id)arg1;	// IMP=0x0000000100009390
- (void)updateUbiquitousDatabaseByResetingSyncEntityRevisionForItemsWithMetadataIdentifiers:(id)arg1;	// IMP=0x00000001000091d0
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;	// IMP=0x0000000100008b88
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;	// IMP=0x0000000100008998
- (_Bool)_databaseHasEntryForEntity:(id)arg1;	// IMP=0x0000000100008774
- (_Bool)updateUbiquitousDatabaseByPersistingUbiquitousMetadataWithEntity:(id)arg1;	// IMP=0x0000000100007b0c
- (_Bool)updateUbiquitousDatabaseByInsertingUbiquitousMetadataForTrackWithMetadataIdentifier:(id)arg1 hasBeenPlayed:(_Bool)arg2 playCount:(unsigned long long)arg3 bookmarkTime:(double)arg4 timestamp:(double)arg5 syncRevision:(long long)arg6;	// IMP=0x000000010000796c
- (_Bool)_updateUbiquitousDatabase_setBookmarkMetadataWithValuesFromTrackWithMetadataIdentifier:(id)arg1 hasBeenPlayed:(_Bool)arg2 playCount:(unsigned long long)arg3 bookmarkTime:(double)arg4 timestamp:(double)arg5 syncRevision:(long long)arg6 usingConnection:(id)arg7;	// IMP=0x000000010000770c
@property(retain, nonatomic) NSDate *dateToSyncWithUbiquitousStore;
@property(copy, nonatomic) NSString *lastNotificationDomainVersion;
@property(retain, nonatomic) NSDate *dateLastSynced;
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;
@property(nonatomic) unsigned long long lastSyncedEntityRevision;
- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2;	// IMP=0x0000000100007360
- (id)_valueForDatabaseProperty:(id)arg1;	// IMP=0x00000001000072f4
- (void)updateUbiquitousDatabaseByPerformingWriteTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007238
- (id)init;	// IMP=0x00000001000071bc
- (id)initWithMusicLibrary:(id)arg1;	// IMP=0x0000000100007130

@end

