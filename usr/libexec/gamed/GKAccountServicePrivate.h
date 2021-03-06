//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKAccountService.h"

#import "GKAccountServicePrivate-Protocol.h"

@class NSString;

@interface GKAccountServicePrivate : GKAccountService <GKAccountServicePrivate>
{
}

+ (id)lastProfilePrivacyVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010019e6ac
+ (id)lastPersonalizationVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010019e5c0
+ (unsigned long long)lastPrivacyNoticeVersionDisplayedForPlayer:(id)arg1;	// IMP=0x000000010019e4dc
+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010019e4d4
+ (Class)interfaceClass;	// IMP=0x000000010019e4c8
- (void)updateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b3090
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b2be0
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001b27d0
- (oneway void)authenticationCancelled;	// IMP=0x00000001001b2774
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b0e74
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b0af4
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001afcbc
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001aeeb4
- (void)_continueAuthenticationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ad82c
- (void)_notifyAllClientsPlayerAuthenticatedFromClient:(id)arg1 withCredential:(id)arg2 replyGroup:(id)arg3;	// IMP=0x00000001001ad2d8
- (void)_appInitWithGroup:(id)arg1;	// IMP=0x00000001001ac5e4
- (void)_loadProfileWithGroup:(id)arg1;	// IMP=0x00000001001abe88
- (void)notifyClient:(id)arg1 authenticationDidChangeWithError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001abbd0
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001aabf4
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a9dc4
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a8be4
- (void)_preloadDataForGameCenterTabs;	// IMP=0x00000001001a8784
- (void)_fetchCredentialsForNonActivePlayerForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001a7d7c
- (void)_fetchCredentialsForAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a7aa0
- (void)_fetchCredentialsForUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001a70a8
- (void)_primeCacheWithGroup:(id)arg1;	// IMP=0x00000001001a67fc
- (id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(_Bool *)arg3;	// IMP=0x00000001001a5eac
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a5e90
- (void)_initGameForLaunchedApp:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a45e8
- (void)renewAuthToken;	// IMP=0x00000001001a3d2c
- (void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2;	// IMP=0x00000001001a36f8
- (void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4;	// IMP=0x00000001001a3488
- (void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x00000001001a3278
- (void)_removeRecommendationForBundleID:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x00000001001a3118
- (void)_constructAuthenticationResponseWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2920
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a2810
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 active:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a0cec
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 validateOnly:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010019f328
- (void)updateBadgeCounts;	// IMP=0x000000010019ebe8
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010019eb5c
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019e798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

