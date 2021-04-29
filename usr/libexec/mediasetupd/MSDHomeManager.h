//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMAccessoryDelegatePrivate-Protocol.h"
#import "HMHomeDelegate-Protocol.h"
#import "HMHomeDelegatePrivate-Protocol.h"
#import "HMHomeManagerDelegate-Protocol.h"
#import "HMHomeManagerDelegatePrivate-Protocol.h"
#import "HMSettingsDelegate-Protocol.h"
#import "HMUserCloudShareManagerDelegate-Protocol.h"

@class HMAccessory, HMHome, HMHomeManager, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MSDHomeManager : NSObject <HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMUserCloudShareManagerDelegate, HMAccessoryDelegatePrivate, HMSettingsDelegate>
{
    HMHomeManager *_homeManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSMutableSet *_delegates;	// 24 = 0x18
    _Bool _homeKitSyncComplete;	// 32 = 0x20
    _Bool _homesLoaded;	// 33 = 0x21
    NSMutableArray *_homesLoadedHandlers;	// 40 = 0x28
    NSMutableDictionary *_userToSettingsMap;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0000000100014eb0
- (void).cxx_destruct;	// IMP=0x0000000100018924
@property(retain, nonatomic) NSMutableDictionary *userToSettingsMap; // @synthesize userToSettingsMap=_userToSettingsMap;
@property(retain) NSMutableArray *homesLoadedHandlers; // @synthesize homesLoadedHandlers=_homesLoadedHandlers;
@property(nonatomic) _Bool homesLoaded; // @synthesize homesLoaded=_homesLoaded;
@property(nonatomic) _Bool homeKitSyncComplete; // @synthesize homeKitSyncComplete=_homeKitSyncComplete;
- (id)_primaryUserSettingData:(id)arg1;	// IMP=0x00000001000187e4
- (void)_handleCurrentUserSetting:(id)arg1;	// IMP=0x00000001000185b0
- (void)_handleHomeKitSyncComplete;	// IMP=0x00000001000183b0
- (void)_updateAllowInHomePreferenceForUser:(id)arg1;	// IMP=0x0000000100018004
- (void)_addUserSettingsDelegate:(id)arg1;	// IMP=0x0000000100017e70
- (void)_updatePrimaryUserForHomePodAccessory:(id)arg1;	// IMP=0x0000000100017d0c
- (void)updatePrimaryUserOnDevice:(id)arg1;	// IMP=0x0000000100017cac
- (void)_addHomeDelegates:(id)arg1;	// IMP=0x0000000100017c0c
- (void)_handleUsersChangedInHome:(id)arg1;	// IMP=0x0000000100017ad0
- (void)_handleHomeManagerDidUpdateStatus:(id)arg1;	// IMP=0x00000001000175bc
- (void)_handleHomeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000100017498
- (void)_notifyManagerLoadedHomes:(id)arg1;	// IMP=0x0000000100017284
- (void)_loadHomes:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016fdc
- (void)_waitForHomesToLoad;	// IMP=0x0000000100016dbc
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x0000000100016c2c
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;	// IMP=0x00000001000169b0
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016730
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x00000001000164d0
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0000000100016214
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x0000000100016044
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x0000000100015f0c
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000100015cf4
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0000000100015b1c
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000010001592c
- (void)updateCachedDataWithUsersInHome:(id)arg1;	// IMP=0x000000010001589c
- (id)getHomeForUserIdentifier:(id)arg1;	// IMP=0x0000000100015654
- (void)registerToAcceptCloudSharesForContainers:(id)arg1;	// IMP=0x0000000100015474
@property(readonly, nonatomic) NSArray *allHomes;
@property(readonly, nonatomic, getter=getPrimaryHome) HMHome *primaryHome;
@property(readonly, nonatomic, getter=getCurrentAccessory) HMAccessory *currentAccessory;
@property(readonly, nonatomic, getter=getCurrentHome) HMHome *currentHome;
- (id)homeWithIdentifier:(id)arg1;	// IMP=0x00000001000151e0
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000100015160
- (void)addDelegate:(id)arg1;	// IMP=0x00000001000150e0
- (id)init;	// IMP=0x0000000100014f4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

