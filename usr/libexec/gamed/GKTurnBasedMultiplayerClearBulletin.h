//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTurnBasedMultiplayerBulletin.h"

@interface GKTurnBasedMultiplayerClearBulletin : GKTurnBasedMultiplayerBulletin
{
    long long _clearType;	// 72 = 0x48
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010c100
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010010c0f8
@property long long clearType; // @synthesize clearType=_clearType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010010c7a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010010c5a4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x000000010010c370

@end
