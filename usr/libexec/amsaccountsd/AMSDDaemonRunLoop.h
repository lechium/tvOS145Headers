//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface AMSDDaemonRunLoop : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_connections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000de54
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_startXPC;	// IMP=0x000000010000dda4
- (void)_setupNotifications;	// IMP=0x000000010000d594
- (void)_setupMultiUser;	// IMP=0x000000010000d010
- (id)_previousBuildVersion;	// IMP=0x000000010000cfb4
- (void)_handleNFCAccessoryNotification:(id)arg1;	// IMP=0x000000010000cfb0
- (void)_syncSandboxAccounts;	// IMP=0x000000010000cfac
- (_Bool)_performStartup;	// IMP=0x000000010000ccbc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000c6bc
- (void)runUntilIdleExit;	// IMP=0x000000010000c4e0
- (id)init;	// IMP=0x000000010000c47c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

