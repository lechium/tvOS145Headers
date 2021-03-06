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

- (void)sendExtensionFailed;	// IMP=0x00000001000038ec
- (void)handleProviderStopped;	// IMP=0x0000000100003888
- (void)reportIncomingCall:(id)arg1;	// IMP=0x00000001000037f8
- (void)handleProviderError:(id)arg1 forMessageID:(id)arg2;	// IMP=0x000000010000374c
- (void)handleProviderError:(id)arg1;	// IMP=0x00000001000036bc
- (void)sendTimerEvent;	// IMP=0x000000010000367c
- (void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;	// IMP=0x00000001000034c4
- (void)setProviderConfiguration:(id)arg1;	// IMP=0x0000000100003458
- (void)stopWithReason:(int)arg1;	// IMP=0x0000000100003364
- (void)startConnectionWithProviderConfig:(id)arg1;	// IMP=0x0000000100003220
- (void)didReceiveIncomingCallWithUserInfo:(id)arg1;	// IMP=0x000000010000319c
@property(readonly, nonatomic) NSXPCInterface *driverInterface;
@property(readonly, nonatomic) NSXPCInterface *managerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *uuids;

@end

