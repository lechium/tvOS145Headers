//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSNetService, NSNetServiceBrowser, NSString;

@interface UANetworkReplayRendevousHandler : UACornerActionManagerHandler <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
{
    NSString *name;	// 8 = 0x8
    NSNetServiceBrowser *_browserLookup;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_domain;	// 32 = 0x20
    NSNetService *_listeningService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006e558
@property(retain) NSNetService *listeningService; // @synthesize listeningService=_listeningService;
@property(copy) NSString *domain; // @synthesize domain=_domain;
@property(copy) NSString *type; // @synthesize type=_type;
@property(retain) NSNetServiceBrowser *browserLookup; // @synthesize browserLookup=_browserLookup;
@property(copy) NSString *name; // @synthesize name;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x000000010006e388
- (void)netServiceDidStop:(id)arg1;	// IMP=0x000000010006e2a0
- (void)netService:(id)arg1 didNotResolve:(id)arg2;	// IMP=0x000000010006e258
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x000000010006e228
- (void)netServiceWillResolve:(id)arg1;	// IMP=0x000000010006e1f8
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x000000010006e030
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x000000010006e000
- (void)netServiceWillPublish:(id)arg1;	// IMP=0x000000010006dfd0
- (_Bool)listenForIncomingConnections:(id)arg1 port:(int)arg2 type:(id)arg3;	// IMP=0x000000010006db54
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x000000010006d8dc
- (id)statusString;	// IMP=0x000000010006d6f8
- (_Bool)resume;	// IMP=0x000000010006d528
- (_Bool)suspend;	// IMP=0x000000010006d480
- (_Bool)scanForPeersOfType:(id)arg1 domain:(id)arg2;	// IMP=0x000000010006d27c
- (void)dealloc;	// IMP=0x000000010006d17c
- (id)initWithManager:(id)arg1;	// IMP=0x000000010006d140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
