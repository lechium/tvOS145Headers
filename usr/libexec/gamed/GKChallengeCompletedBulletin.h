//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeBulletin.h"

@interface GKChallengeCompletedBulletin : GKChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ef00
- (void)handleAction:(id)arg1;	// IMP=0x0000000100030e5c
- (unsigned long long)launchEventType;	// IMP=0x0000000100030e54
- (void)assembleBulletin;	// IMP=0x000000010003096c
- (void)notifyClient:(id)arg1;	// IMP=0x00000001000307b8
- (id)init;	// IMP=0x000000010002eecc

@end

