//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SSRemoteNotification;

@interface PushNotificationDisplayOperation : ISOperation
{
    SSRemoteNotification *_notification;	// 96 = 0x60
}

+ (_Bool)_shouldUseBulletinBoardForNotification:(id)arg1;	// IMP=0x00000001000a5850
- (void).cxx_destruct;	// IMP=0x00000001000a5a30
- (_Bool)_URLHandlerExists;	// IMP=0x00000001000a5948
- (void)_performNotificationAction:(_Bool)arg1;	// IMP=0x00000001000a364c
- (void)_openNotificationURL;	// IMP=0x00000001000a3528
- (long long)_notificationClass;	// IMP=0x00000001000a34c4
- (void)_loadNotificationDownloadManifest;	// IMP=0x00000001000a3368
- (void)_displayBadge;	// IMP=0x00000001000a32a8
- (void)_displayAlert;	// IMP=0x00000001000a2b78
- (id)_clientIdentifierForDownloadKinds:(id)arg1;	// IMP=0x00000001000a29d0
- (_Bool)_clientExistsWithIdentifier:(id)arg1;	// IMP=0x00000001000a2978
- (void)run;	// IMP=0x00000001000a222c
@property(readonly) _Bool requiresClientIdentifier;
@property(readonly) NSDictionary *notificationUserInfo;
- (id)initWithNotificationUserInfo:(id)arg1;	// IMP=0x00000001000a20cc
- (id)init;	// IMP=0x00000001000a20bc

@end

