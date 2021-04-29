//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UACornerActionManagerHandler.h"

#import "NSNetServiceDelegate-Protocol.h"
#import "SFActivityAdvertiserDelegate-Protocol.h"
#import "SFActivityScannerDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, SFPeerDevice, UAActivityReplayAdvertiser, UAActivityReplayReceiver, UAMockActivityAdvertiser, UAMockActivityScanner, UAReplayClientController;
@protocol OS_dispatch_queue;

@interface UAActivityReplay : UACornerActionManagerHandler <NSNetServiceDelegate, SFActivityAdvertiserDelegate, SFActivityScannerDelegate>
{
    NSMutableDictionary *_pendingPayloadFetches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SFPeerDevice *_pairedPeer;	// 24 = 0x18
    UAActivityReplayAdvertiser *_advertiser;	// 32 = 0x20
    UAActivityReplayReceiver *_receiver;	// 40 = 0x28
    UAReplayClientController *_client;	// 48 = 0x30
    UAMockActivityAdvertiser *_mockAdvertiser;	// 56 = 0x38
    UAMockActivityScanner *_mockScanner;	// 64 = 0x40
    NSMutableDictionary *_items;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100041fa0
@property(retain) NSMutableDictionary *items; // @synthesize items=_items;
@property(readonly, retain) UAMockActivityScanner *mockScanner; // @synthesize mockScanner=_mockScanner;
@property(readonly, retain) UAMockActivityAdvertiser *mockAdvertiser; // @synthesize mockAdvertiser=_mockAdvertiser;
@property(retain) UAReplayClientController *client; // @synthesize client=_client;
@property(retain) UAActivityReplayReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) UAActivityReplayAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain) SFPeerDevice *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)terminate;	// IMP=0x00000001000419dc
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100041860
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010004185c
- (_Bool)processCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000415b4
- (_Bool)sendResponse:(id)arg1;	// IMP=0x00000001000415ac
- (_Bool)processCommand:(id)arg1;	// IMP=0x000000010003f3ac
- (id)scanMockAdvertisement:(id)arg1;	// IMP=0x000000010003eae4
- (void)doAdvertiseAdvertisementPayload:(id)arg1 options:(id)arg2;	// IMP=0x000000010003e858
- (id)sharingAdvertiser;	// IMP=0x000000010003e684
- (id)sharingReceiver;	// IMP=0x000000010003e4b0
- (void)dealloc;	// IMP=0x000000010003e248
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x000000010003dca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

