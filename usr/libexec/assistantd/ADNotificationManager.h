//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class ADNotificationOrderedDictionary, BBObserver, NSArray, NSMutableDictionary, NSString;
@protocol ADNotificationManagerDataSource, ADNotificationManagerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface ADNotificationManager : NSObject <BBObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_notificationsGroup;	// 16 = 0x10
    ADNotificationOrderedDictionary *_allBulletins;	// 24 = 0x18
    NSMutableDictionary *_bulletinsOnLockScreen;	// 32 = 0x20
    _Bool _initialFetchSuccess;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_settingsGroup;	// 48 = 0x30
    _Bool _batchedUpdatePending;	// 56 = 0x38
    NSArray *_siriRelatedPreviewRestrictedApps;	// 64 = 0x40
    NSArray *_spokenNotificationEnabledApps;	// 72 = 0x48
    BBObserver *_observer;	// 80 = 0x50
    id <ADNotificationManagerDelegate> _delegate;	// 88 = 0x58
    id <ADNotificationManagerDataSource> _dataSource;	// 96 = 0x60
}

+ (id)_createBBObserverWithQueue:(id)arg1;	// IMP=0x00000001002c605c
+ (id)sharedManager;	// IMP=0x00000001002c5e80
- (void).cxx_destruct;	// IMP=0x00000001002c8884
@property(nonatomic) __weak id <ADNotificationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ADNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isAppRestrictedAndSiriRelated:(id)arg1;	// IMP=0x00000001002c86f4
- (void)_getRestrictedAppsFromBulletinBoard;	// IMP=0x00000001002c80c4
- (id)_displayNameForBulletin:(id)arg1;	// IMP=0x00000001002c7f80
- (void)_bulletinsDidChange;	// IMP=0x00000001002c7f38
- (void)_getNotificationsFromBulletinBoard;	// IMP=0x00000001002c7edc
- (id)_afbulletinForBBBulletin:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x00000001002c7d2c
- (void)_fetchFromDataSourceIfNecessary;	// IMP=0x00000001002c7a90
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x00000001002c7928
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x00000001002c7758
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x00000001002c7618
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;	// IMP=0x00000001002c7408
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002c7180
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x00000001002c7108
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002c6e84
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002c6c0c
- (void)fetchSpokenNotificationEnabledAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c6b5c
- (void)fetchSiriRelatedNotificationPreviewRestrictedAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c6aac
- (id)_siriRelatedRestrictedAppsForApps:(id)arg1;	// IMP=0x00000001002c67f4
- (void)fetchBulletinsAfterBulletinWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002c65f0
- (void)fetchBulletinsOnLockScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c63e8
- (void)fetchAllBulletinsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c6274
- (void)_fetchInitialState;	// IMP=0x00000001002c6148
- (void)_setUpBBObserver;	// IMP=0x00000001002c60b4
- (id)_init;	// IMP=0x00000001002c5ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

