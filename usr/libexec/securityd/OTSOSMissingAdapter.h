//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTSOSAdapter-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OTSOSMissingAdapter : NSObject <OTSOSAdapter>
{
    _Bool sosEnabled;	// 8 = 0x8
    _Bool _essential;	// 9 = 0x9
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000834b8
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool sosEnabled; // @synthesize sosEnabled;
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100083424
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x000000010008341c
- (id)currentState;	// IMP=0x0000000100083344
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0000000100083340
- (void)sendSelfPeerChangedUpdate;	// IMP=0x000000010008333c
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0000000100083338
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x00000001000832d8
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000100083278
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100083218
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x00000001000831b8
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x0000000100083158
- (int)circleStatus:(id *)arg1;	// IMP=0x0000000100083150
- (id)init;	// IMP=0x00000001000830dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

