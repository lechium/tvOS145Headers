//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LeDeviceCache : NSObject
{
    struct LeDeviceCacheEventListener *_listener;	// 8 = 0x8
    struct sqlite3 *_pairedDatabase;	// 16 = 0x10
    struct sqlite3 *_otherDatabase;	// 24 = 0x18
    struct sqlite3_stmt *_writePairedDeviceStmt;	// 32 = 0x20
    struct sqlite3_stmt *_writeOtherDeviceStmt;	// 40 = 0x28
    int _maxSeenDevices;	// 48 = 0x30
    int _maxConnectedDevices;	// 52 = 0x34
    int _seenDeviceCount;	// 56 = 0x38
    int _connectedDeviceCount;	// 60 = 0x3c
}

+ (id)sharedInstance;	// IMP=0x00000001001fda2c
@property(nonatomic) int connectedDeviceCount; // @synthesize connectedDeviceCount=_connectedDeviceCount;
@property(nonatomic) int seenDeviceCount; // @synthesize seenDeviceCount=_seenDeviceCount;
@property(readonly, nonatomic) int maxConnectedDevices; // @synthesize maxConnectedDevices=_maxConnectedDevices;
@property(readonly, nonatomic) int maxSeenDevices; // @synthesize maxSeenDevices=_maxSeenDevices;
- (void)printDatabase:(unsigned long long)arg1;	// IMP=0x0000000100203428
- (void)printDebug;	// IMP=0x0000000100203398
- (void)evictIfNeeded:(_Bool)arg1;	// IMP=0x0000000100202fe8
- (id)nameFromSanitizedName:(id)arg1;	// IMP=0x0000000100202e7c
- (struct LeDevice *)readDeviceFromDatabase:(struct sqlite3 *)arg1 statement:(id)arg2;	// IMP=0x0000000100202734
- (_Bool)readIntFromDatabase:(struct sqlite3 *)arg1 statement:(id)arg2 value:(int *)arg3;	// IMP=0x0000000100202668
- (const char *)friendlyNameForType:(unsigned long long)arg1;	// IMP=0x000000010020264c
- (const char *)tableNameForType:(unsigned long long)arg1;	// IMP=0x0000000100202630
- (void)updateProtectedCacheMetrics;	// IMP=0x00000001002023ec
- (void)migratePlistData:(id)arg1 database:(struct sqlite3 *)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000100201864
- (void)createTablesForDatabase:(struct sqlite3 *)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000100201650
- (_Bool)loadDatabase:(unsigned long long)arg1;	// IMP=0x00000001002007f4
- (_Bool)createDatabase:(struct sqlite3 **)arg1 type:(unsigned long long)arg2 path:(const char *)arg3 flags:(int)arg4;	// IMP=0x0000000100200730
- (void)removeDevice:(const struct LeDevice *)arg1 internal:(_Bool)arg2;	// IMP=0x0000000100200100
- (void)writeDevice:(const struct LeDevice *)arg1;	// IMP=0x00000001001ff938
- (int)duplicatePairedDevicesForAddress:(unsigned long long)arg1 originalUuid:(id)arg2;	// IMP=0x00000001001ff7b8
- (struct LeDevice *)readDeviceByAddress:(unsigned long long)arg1;	// IMP=0x00000001001ff410
- (struct LeDevice *)readDevice:(id)arg1;	// IMP=0x00000001001ff0e8
- (struct LeDevice *)loadPairedDevice:(id)arg1 address:(unsigned long long)arg2 ifMissing:(_Bool)arg3;	// IMP=0x00000001001fea88
- (void)removeDevicesDuplicatesOf:(unsigned long long)arg1 originalUuid:(id)arg2;	// IMP=0x00000001001fe63c
- (void)tryLoadProtectedCache;	// IMP=0x00000001001fe5dc
- (id)databaseContainerURL;	// IMP=0x00000001001fe4b8
- (_Bool)initializeDatabases:(struct LeDeviceCacheEventListener *)arg1 queue:(struct dispatch_queue_s *)arg2;	// IMP=0x00000001001fdd88
- (id)init;	// IMP=0x00000001001fdab4

@end

