//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class MRDBrowsableContentAPICoordinator, NSMutableArray, NSMutableDictionary, NSString;

@interface MRDBrowsableContentServer : NSObject <MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSMutableArray *_queuedInitiatePlaybackMessages;	// 8 = 0x8
    NSMutableArray *_queuedRelayableMessages;	// 16 = 0x10
    NSMutableDictionary *_queuedBeginLoadingBlocks;	// 24 = 0x18
    MRDBrowsableContentAPICoordinator *_apiCoordinator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002de44
@property(readonly, nonatomic) MRDBrowsableContentAPICoordinator *apiCoordinator; // @synthesize apiCoordinator=_apiCoordinator;
- (_Bool)_messageRequiresMediaServerBlessing:(id)arg1;	// IMP=0x000000010002de0c
- (_Bool)_messageCanLaunchApp:(id)arg1;	// IMP=0x000000010002dde4
- (void)_scheduleEndProcessAssertionForClient:(id)arg1;	// IMP=0x000000010002dd6c
- (_Bool)_takeProcessAssertionForClient:(id)arg1 withReason:(id)arg2;	// IMP=0x000000010002db40
- (void)_handleSupportedAPIsDidChangeForClient:(id)arg1;	// IMP=0x000000010002d730
- (void)_handleBrowsableContentDidFinishLoadingFromClient:(id)arg1 indexPath:(CDStruct_3716a28a)arg2 withError:(id)arg3;	// IMP=0x000000010002d470
- (void)_sendInitiatePlaybackMessage:(id)arg1;	// IMP=0x000000010002d16c
- (void)_relayMessage:(id)arg1 toClientWithBundleIDAndReply:(id)arg2;	// IMP=0x000000010002cc74
- (void)_handleGetAppsSupportingBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002cbbc
- (void)_handleSetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002cb00
- (void)_handleGetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002ca7c
- (void)_handleRequestPlaybackInitializationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002c758
- (void)_clientCanBeNowPlayingAppNotification:(id)arg1;	// IMP=0x000000010002c6b8
- (void)_clearQueuedBeginLoadingMessagesForApp:(id)arg1;	// IMP=0x000000010002c5b4
- (void)_sendQueuedBeginLoadingMessagesForAvailableApp:(id)arg1;	// IMP=0x000000010002c3e4
- (void)_enqueueCompletion:(CDUnknownBlockType)arg1 forUnavailableDestinationApp:(id)arg2;	// IMP=0x000000010002c2b8
- (void)_handleBeginLoadingBrowsableContentMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002bdd4
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010002bdbc
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010002bcb0
- (id)init;	// IMP=0x000000010002bbac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

