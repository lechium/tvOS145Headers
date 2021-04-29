//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSUserProfileServiceInterface-Protocol.h"

@class NSString, PBSystemServiceConnection, PBUserProfileManager;
@protocol OS_dispatch_queue, PBSUserProfileServiceDelegateInterface;

@interface PBUserProfileService : NSObject <PBSUserProfileServiceInterface>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    PBSystemServiceConnection *_remoteConnection;	// 16 = 0x10
    PBUserProfileManager *_userProfileManager;	// 24 = 0x18
    id <PBSUserProfileServiceDelegateInterface> _serviceDelegate;	// 32 = 0x20
    long long _ignoreAccountNotificationsAssertionCount;	// 40 = 0x28
    id _userProfileManagerDidUpdateToken;	// 48 = 0x30
    NSString *_clientBundleIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002d3a8
@property(readonly, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) id userProfileManagerDidUpdateToken; // @synthesize userProfileManagerDidUpdateToken=_userProfileManagerDidUpdateToken;
@property(nonatomic) long long ignoreAccountNotificationsAssertionCount; // @synthesize ignoreAccountNotificationsAssertionCount=_ignoreAccountNotificationsAssertionCount;
@property(readonly, nonatomic) id <PBSUserProfileServiceDelegateInterface> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) PBUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_handleUserProfileAccountNotification:(id)arg1;	// IMP=0x000000010002cfdc
- (void)_endIgnoringUserProfileAccountNotifications;	// IMP=0x000000010002ccb0
- (void)_beginIgnoringUserProfileAccountNotifications;	// IMP=0x000000010002c9c0
- (void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c644
- (void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c228
- (void)createUserProfileWithAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002bdc4
- (void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b920
- (void)fetchUserProfilesSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b4b4
- (void)setServiceDelegate:(id)arg1;	// IMP=0x000000010002b38c
- (void)_userProfileManagerDidUpdate;	// IMP=0x000000010002b078
- (void)dealloc;	// IMP=0x000000010002ae40
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000010002aa84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

