//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEAgentExtension.h>

#import "NEAgentSessionDelegate-Protocol.h"
#import "NEAppPushPluginDriver-Protocol.h"
#import "NEExtensionAppPushProviderHostDelegate-Protocol.h"

@class NSArray, NSString, NSXPCInterface;

@interface NEAgentAppPushExtension : NEAgentExtension <NEExtensionAppPushProviderHostDelegate, NEAgentSessionDelegate, NEAppPushPluginDriver>
{
}

- (void)sendExtensionFailed;	// IMP=0x00000001000030e4
- (void)handleProviderStopped;	// IMP=0x0000000100003080
- (void)reportIncomingCall:(id)arg1;	// IMP=0x0000000100002ff0
- (void)handleProviderError:(id)arg1 forMessageID:(id)arg2;	// IMP=0x0000000100002f44
- (void)handleProviderError:(id)arg1;	// IMP=0x0000000100002eb4
- (void)sendTimerEvent;	// IMP=0x0000000100002e74
- (void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;	// IMP=0x0000000100002cbc
- (void)setProviderConfiguration:(id)arg1;	// IMP=0x0000000100002c50
- (void)stopWithReason:(int)arg1;	// IMP=0x0000000100002b5c
- (void)startConnectionWithProviderConfig:(id)arg1;	// IMP=0x0000000100002a18
- (void)didReceiveIncomingCallWithUserInfo:(id)arg1;	// IMP=0x0000000100002994
@property(readonly, nonatomic) NSXPCInterface *driverInterface;
@property(readonly, nonatomic) NSXPCInterface *managerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *uuids;

@end
