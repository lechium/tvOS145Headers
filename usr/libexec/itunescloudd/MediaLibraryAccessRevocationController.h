//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICMediaLibraryAccessPermissionsHelper-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MediaLibraryAccessRevocationController : NSObject <ICMediaLibraryAccessPermissionsHelper, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSNumber *_activeAccountDSID;	// 16 = 0x10
    NSDictionary *_cookieHeadersForRevokingMusicUserTokens;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_notificationCoalescingTimer;	// 32 = 0x20
    _Bool _isObservingNotificationsForDataNeededUponSignOut;	// 40 = 0x28
    NSDictionary *_identifiersOfApplicationsWithGrantedAccessToMediaLibraryIncludingTCCAcceptanceDates;	// 48 = 0x30
    int _tccAccessChangedNotificationToken;	// 56 = 0x38
    _Bool _isObservingTCCAccessChangedNotification;	// 60 = 0x3c
    NSXPCListener *_listener;	// 64 = 0x40
    NSMutableDictionary *_replyBlocksForPID;	// 72 = 0x48
}

+ (id)_identifiersOfApplicationsWithGrantedAccessToMediaLibrary;	// IMP=0x000000010009bc10
+ (id)sharedController;	// IMP=0x000000010009bbd0
- (void).cxx_destruct;	// IMP=0x000000010009a564
- (id)_storeRequestContextWithIdentity:(id)arg1 clientInfo:(id)arg2;	// IMP=0x000000010009a488
- (void)_updateDataNeededUponSignOut;	// IMP=0x000000010009a15c
- (void)_stopObservingRevocations;	// IMP=0x000000010009a07c
- (void)_startObservingRevocations;	// IMP=0x0000000100099e40
- (void)_notificationCoalescingTimerDidExpire;	// IMP=0x0000000100099de8
- (void)_scheduleUpdateOfDataNeededUponSignOut;	// IMP=0x0000000100099d90
- (void)_registerFailureToRevokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x0000000100099cac
- (void)_revokeMusicUserTokensForApplicationWithIdentifier:(id)arg1 revokeMusicUserTokenURL:(id)arg2 identity:(id)arg3 explicitDSID:(id)arg4 explicitCookieHeaders:(id)arg5;	// IMP=0x0000000100099814
- (void)_revokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1;	// IMP=0x00000001000996d8
- (void)_displayNotificationForBuilder:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100099594
- (void)_checkForRecentRevocations;	// IMP=0x0000000100099224
- (id)_identifiersOfApplicationsWithExpiredAccessToMediaLibrary;	// IMP=0x0000000100098fc0
- (void)validateExpirationForBundleIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000988b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000986d8
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x00000001000986cc
- (void)stopObservingRevocations;	// IMP=0x0000000100098674
- (void)startObservingRevocations;	// IMP=0x000000010009861c
- (void)dealloc;	// IMP=0x00000001000985a0
- (id)_init;	// IMP=0x00000001000984b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

