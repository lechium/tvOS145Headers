//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCloudKitDataStoreProtocol-Protocol.h"

@class AFQueue, CKRecordZone, CKServerChangeToken, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADCloudKitMultiUserSharedDataStore : NSObject <ADCloudKitDataStoreProtocol>
{
    NSMutableDictionary *_assetManifestCache;	// 8 = 0x8
    NSDictionary *_languageManifestCache;	// 16 = 0x10
    _Bool _uploadInProgress;	// 24 = 0x18
    _Bool _uploadRequestPended;	// 25 = 0x19
    AFQueue *_completionQueue;	// 32 = 0x20
    NSString *_sharedUserID;	// 40 = 0x28
    _Bool _dataStoreIsOnSharedDatabase;	// 48 = 0x30
    _Bool _dataStoreShouldMirrorData;	// 49 = 0x31
    _Bool _isMirroredDataStore;	// 50 = 0x32
    CKRecordZone *_zone;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
    NSArray *_supportedRecordTypes;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010010fda0
@property(copy, nonatomic) NSArray *supportedRecordTypes; // @synthesize supportedRecordTypes=_supportedRecordTypes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) _Bool isMirroredDataStore; // @synthesize isMirroredDataStore=_isMirroredDataStore;
@property(nonatomic) _Bool dataStoreShouldMirrorData; // @synthesize dataStoreShouldMirrorData=_dataStoreShouldMirrorData;
@property(nonatomic) _Bool dataStoreIsOnSharedDatabase; // @synthesize dataStoreIsOnSharedDatabase=_dataStoreIsOnSharedDatabase;
- (void)setKeyValueRecordsAndVoiceProfile:(id)arg1 records:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010010dac0
- (id)_homeMembershipsFromUnencryptedRecords:(id)arg1;	// IMP=0x000000010010d678
- (_Bool)_errorIsRecoverableForSecondary:(long long)arg1;	// IMP=0x000000010010d668
- (_Bool)_errorIsRecoverableForPrimary:(long long)arg1;	// IMP=0x000000010010d658
- (void)fetchDeviceTypesForAllLanguages:(CDUnknownBlockType)arg1;	// IMP=0x000000010010d4f0
- (void)fetchDeviceTypesForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010010d17c
- (void)deleteUserData:(id)arg1;	// IMP=0x000000010010d0c0
- (void)cleanupCacheDirectory;	// IMP=0x000000010010d058
- (id)_createCacheDirectory;	// IMP=0x000000010010cf7c
- (_Bool)_cleanupCacheDirectory;	// IMP=0x000000010010ce70
- (id)_cacheDirectory;	// IMP=0x000000010010cdec
- (id)_extractRecord:(id)arg1 atPath:(id)arg2 fileManager:(id)arg3;	// IMP=0x000000010010cb78
- (id)_constructRecord:(id)arg1 fileArchives:(id)arg2 assetManifest:(id)arg3 filePath:(id)arg4;	// IMP=0x000000010010c090
- (void)_logRelevantAnalyticsOnMultiUserVoiceProfileDownloadSuccessWithSharedUserID:(id)arg1 isPrimary:(_Bool)arg2 isNewUser:(_Bool)arg3;	// IMP=0x000000010010b9a8
- (void)_updateVoiceIDProfilesForSharedUser:(id)arg1 records:(id)arg2 isPrimary:(_Bool)arg3 isNewUser:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010010a8c0
- (void)_mergeDataWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 containsAllChanges:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010010a588
- (void)mergeDataWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 containsAllChanges:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010010a474
- (void)_synchronizeVoiceIDWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100108898
- (void)_synchronizeUsingActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010010888c
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100108878
- (void)synchronizeUsingActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100108170
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription;
- (id)init;	// IMP=0x0000000100107c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

