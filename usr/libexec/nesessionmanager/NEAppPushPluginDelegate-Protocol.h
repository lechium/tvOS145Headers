//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDelegate-Protocol.h"

@class NEAppPushPlugin, NSDictionary, NSError, NSUUID;

@protocol NEAppPushPluginDelegate <NEPluginDelegate>
- (void)handleProviderStopped:(NEAppPushPlugin *)arg1;
- (void)didExtensionExit:(NEAppPushPlugin *)arg1;
- (void)plugin:(NEAppPushPlugin *)arg1 didReceiveIncomingCallWithUserInfo:(NSDictionary *)arg2;
- (void)plugin:(NEAppPushPlugin *)arg1 didReceiveProviderError:(NSError *)arg2 forMessageID:(NSUUID *)arg3;
- (void)plugin:(NEAppPushPlugin *)arg1 didReceiveProviderError:(NSError *)arg2;
@end

