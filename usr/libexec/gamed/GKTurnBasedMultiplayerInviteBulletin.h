//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTurnBasedMultiplayerBulletin.h"

@interface GKTurnBasedMultiplayerInviteBulletin : GKTurnBasedMultiplayerBulletin
{
}

+ (_Bool)shouldExpirePlayerList;	// IMP=0x000000010010aa20
+ (_Bool)shouldLoadCacheList;	// IMP=0x000000010010aa18
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100109d88
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010b77c
- (void)handleDeclineAction;	// IMP=0x000000010010b600
- (void)handleAcceptAction;	// IMP=0x000000010010b430
- (void)handleAction:(id)arg1;	// IMP=0x000000010010b0ac
- (void)assembleBulletin;	// IMP=0x000000010010aa28

@end

