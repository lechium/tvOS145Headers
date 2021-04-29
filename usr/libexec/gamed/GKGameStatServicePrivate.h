//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameStatService.h"

#import "GKGameStatServicePrivate-Protocol.h"

@class NSString;

@interface GKGameStatServicePrivate : GKGameStatService <GKGameStatServicePrivate>
{
}

+ (id)currentFriendsPlayedList:(id)arg1;	// IMP=0x00000001001f6d04
+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001f5130
+ (Class)interfaceClass;	// IMP=0x00000001001f5124
- (oneway void)getReengagementAchievement:(CDUnknownBlockType)arg1;	// IMP=0x00000001001fa39c
- (oneway void)getReengagementAchievements:(CDUnknownBlockType)arg1;	// IMP=0x00000001001fa2fc
- (oneway void)loadReengagementAchievements:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f9350
- (id)processReengagementResults:(id)arg1 localPlayer:(id)arg2 expirationDate:(id)arg3 context:(id)arg4;	// IMP=0x00000001001f8a88
- (id)existingReengagementAchievement:(id)arg1 context:(id)arg2;	// IMP=0x00000001001f8610
- (id)findAchievementInternal:(id)arg1 identifier:(id)arg2 playerID:(id)arg3 context:(id)arg4 existingPercent:(double)arg5 existingDate:(id)arg6;	// IMP=0x00000001001f8044
- (id)getCachedAcievementListForLocalPlayer:(id)arg1 context:(id)arg2;	// IMP=0x00000001001f7ee0
- (oneway void)getGamesFriendsPlayed:(long long)arg1 type:(id)arg2 withinSecs:(long long)arg3 matchingBundleIDs:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f71ec
- (void)loadGamesFriendsPlayed:(id)arg1 matchingBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f58a0
- (id)ensureGameObject:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x00000001001f5798
- (oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f5144
- (oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f5138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

