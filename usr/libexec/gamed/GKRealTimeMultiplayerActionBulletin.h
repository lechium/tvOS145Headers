//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@class NSString;

@interface GKRealTimeMultiplayerActionBulletin : GKRealTimeMultiplayerBulletin
{
    NSString *_debugLine;	// 112 = 0x70
    NSString *_notificationName;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041b98
- (void).cxx_destruct;	// IMP=0x0000000100044f88
@property(readonly) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) NSString *debugLine; // @synthesize debugLine=_debugLine;
- (_Bool)isAccept;	// IMP=0x0000000100044f2c
- (id)getNotificationName;	// IMP=0x0000000100044ef0
- (id)getDebugLine;	// IMP=0x0000000100044eb4
@property(readonly) NSString *aggregateDictionaryKey;
- (void)assembleBulletin;	// IMP=0x0000000100044c0c
- (void)setInvitedPlayerRespondedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042fbc
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042644

@end

