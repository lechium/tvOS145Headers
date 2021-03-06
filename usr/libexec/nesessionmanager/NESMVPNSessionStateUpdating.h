//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateUpdating : NESMVPNSessionState
{
}

- (_Bool)handleClearConfiguration;	// IMP=0x000000010006d7e4
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006d6e0
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectingWithReason:(int)arg2;	// IMP=0x000000010006d5a4
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x000000010006d42c
- (void)handleRestart;	// IMP=0x000000010006d32c
- (void)handleUpdateConfiguration;	// IMP=0x000000010006d22c
- (_Bool)handleSleep;	// IMP=0x000000010006d128
- (void)handleStop;	// IMP=0x000000010006d028
- (void)handleTimeout;	// IMP=0x000000010006cfb4
- (void)handleEstablishIPC;	// IMP=0x000000010006ce7c
- (void)leave;	// IMP=0x000000010006cd90
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006cce4
- (id)init;	// IMP=0x000000010006cca8

@end

