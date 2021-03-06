//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, CKAccountInfo, CKContainer, CKNCloudKitDataStore, CKRecordZone, CKRecordZoneSubscription, CKServerChangeToken, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKNCloudKitManager : NSObject <APSConnectionDelegate>
{
    _Bool _cloudSyncEnabled;	// 8 = 0x8
    _Bool _hasSetUpRecordZoneSubscription;	// 9 = 0x9
    NSString *_supportedRecordType;	// 16 = 0x10
    APSConnection *_pushConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    CKAccountInfo *_accountInfo;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
    CKRecordZone *_recordZone;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_recordZoneSetupTimer;	// 64 = 0x40
    CKRecordZoneSubscription *_subscription;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_subscriptionSetupTimer;	// 80 = 0x50
    CKServerChangeToken *_serverChangeToken;	// 88 = 0x58
    CKNCloudKitDataStore *_dataStore;	// 96 = 0x60
    NSString *_applicationIdentifier;	// 104 = 0x68
}

+ (id)getApplicationIdentifierFromEntitlements;	// IMP=0x0000000100003334
+ (id)sharedManager;	// IMP=0x0000000100002930
- (void).cxx_destruct;	// IMP=0x0000000100009f7c
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) CKNCloudKitDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription; // @synthesize hasSetUpRecordZoneSubscription=_hasSetUpRecordZoneSubscription;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *subscriptionSetupTimer; // @synthesize subscriptionSetupTimer=_subscriptionSetupTimer;
@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordZoneSetupTimer; // @synthesize recordZoneSetupTimer=_recordZoneSetupTimer;
@property(retain, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) NSString *supportedRecordType; // @synthesize supportedRecordType=_supportedRecordType;
@property(nonatomic) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
- (void)_disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009d50
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009cb8
- (void)_cancelSubscriptionSetupTimer;	// IMP=0x0000000100009c74
- (void)_setupRecordZoneSubscriptionWithRetryInterval:(double)arg1;	// IMP=0x000000010000949c
- (void)_setupRecordZoneSubscription;	// IMP=0x0000000100009464
- (void)removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009134
- (void)saveRecordsWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008e6c
- (void)saveRecords:(id)arg1 deleteRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008d24
- (void)_saveRecords:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008714
- (id)_createKeysForRecordsIDs:(id)arg1;	// IMP=0x0000000100008560
- (id)_createRecordsIDsForKeys:(id)arg1;	// IMP=0x0000000100008348
- (id)_createDictionaryFromRecords:(id)arg1;	// IMP=0x000000010000810c
- (id)_createRecordsWithDictionary:(id)arg1;	// IMP=0x0000000100007d00
- (void)_cleanUpRecordZonesAndSubscriptions;	// IMP=0x0000000100007cb8
- (void)_cleanUpRecordZoneSubscriptionsTimers;	// IMP=0x0000000100007c78
- (void)_deleteRecordZoneWithID:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000791c
- (void)_createRecordZoneWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000074f4
- (void)_cancelRecordZoneSetupTimer;	// IMP=0x00000001000074a8
- (void)_setupRecordZoneWithRetryInterval:(double)arg1;	// IMP=0x0000000100006d34
- (void)_setupRecordZone;	// IMP=0x0000000100006c94
- (void)_resetZone;	// IMP=0x0000000100006c2c
- (void)_initializeZone;	// IMP=0x0000000100006a68
- (id)_createCloudKitContainer;	// IMP=0x0000000100006854
- (void)fetchAllChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006584
- (void)fetchChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000615c
- (void)_fetchChangesWithRetryCount:(unsigned long long)arg1;	// IMP=0x00000001000058a4
- (void)_fetchChanges;	// IMP=0x0000000100005870
- (void)_fetchChangesFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000046b8
- (id)_underlyingErrorForError:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000001000043c0
- (_Bool)_shouldSync;	// IMP=0x0000000100004384
- (void)_setupAccountState;	// IMP=0x0000000100004300
- (void)_handleAccountStatusChange:(id)arg1;	// IMP=0x0000000100004130
- (void)_setupAccount;	// IMP=0x0000000100003e80
- (void)_cloudSyncPreferenceDidChange;	// IMP=0x0000000100003c3c
- (void)_cloudKitAccountStatusChanged:(id)arg1;	// IMP=0x0000000100003b48
- (void)_handleCloudKitNotification:(id)arg1;	// IMP=0x00000001000038bc
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100003694
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100003560
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100003474
- (void)_disablePush;	// IMP=0x00000001000032e0
- (void)_enablePush;	// IMP=0x00000001000031c4
- (void)disablePushNotifications;	// IMP=0x000000010000315c
- (void)enablePushNotifications;	// IMP=0x00000001000030f4
- (void)dealloc;	// IMP=0x0000000100003010
- (id)init;	// IMP=0x00000001000029cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

