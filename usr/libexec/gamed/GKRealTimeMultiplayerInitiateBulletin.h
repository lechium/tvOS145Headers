//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@interface GKRealTimeMultiplayerInitiateBulletin : GKRealTimeMultiplayerBulletin
{
    _Bool _isReconnect;	// 112 = 0x70
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e50c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003e504
@property _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000411f8
- (void)handleDeclineAction;	// IMP=0x000000010004107c
- (void)handleAcceptAction;	// IMP=0x0000000100040dd0
- (void)handleAction:(id)arg1;	// IMP=0x0000000100040a50
- (void)assembleBulletin;	// IMP=0x0000000100040194
- (void)parseClientData:(id)arg1;	// IMP=0x000000010003fed8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003fce0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003fae4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x000000010003f8f4

@end

