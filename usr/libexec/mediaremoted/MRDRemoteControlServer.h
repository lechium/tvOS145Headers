//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDPhoneCallObserverDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class MRDPhoneCallObserver, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MRDRemoteControlServer : NSObject <MRDPhoneCallObserverDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_commandQueuesForDisplayIDs;	// 16 = 0x10
    NSMutableSet *_pendingSendPlaybackSessionDisplayIDs;	// 24 = 0x18
    NSMutableDictionary *_remoteControlContexts;	// 32 = 0x20
    MRDPhoneCallObserver *_callObserver;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_remoteAlertWorkerQueue;	// 48 = 0x30
    int _fadeOutNotificationToken;	// 56 = 0x38
    NSMutableDictionary *_redirectionCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000131c4
- (void)_cleanUpPersistedSessionForSessionPreloadCommand:(id)arg1;	// IMP=0x0000000100012cd8
- (id)_persistPlaybackSessionAndUpdateOptionsForSessionPreloadCommand:(id)arg1 forClient:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100012774
- (void)_performCommandProcessingAfterSend:(id)arg1;	// IMP=0x0000000100012720
- (id)_resolveCommandBeforeSend:(id)arg1 toClient:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001267c
- (_Bool)_isCommandCacheable:(unsigned int)arg1;	// IMP=0x0000000100012658
- (id)_createBroadcastCommandPlayerPathForClient:(id)arg1;	// IMP=0x0000000100012584
- (id)_createBroadcastCommandResponseFromStatuses:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100012224
- (_Bool)_applicationIsRunning:(id)arg1;	// IMP=0x0000000100012068
- (void)_shouldIgnoreCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011d48
- (id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1;	// IMP=0x0000000100011b08
- (id)_remoteControlContextForCommand:(id)arg1;	// IMP=0x0000000100011888
- (id)_destinationClientForRemoteControlCommand:(id)arg1;	// IMP=0x00000001000115dc
- (id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1;	// IMP=0x00000001000114a0
- (id)_enqueuedCommandsForDisplayID:(id)arg1;	// IMP=0x0000000100011378
- (void)_clearAllQueuedCommandsForReason:(id)arg1;	// IMP=0x0000000100010ff4
- (void)_clearQueuedCommandsForApplicationWithDisplayID:(id)arg1;	// IMP=0x0000000100010d10
- (void)_sendQueuedCommandsForDestinationClient:(id)arg1;	// IMP=0x000000010001092c
- (void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2;	// IMP=0x0000000100010394
- (void)_enqueueCommand:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f980
- (void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f370
- (void)_sendExternalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f1b4
- (void)_sendLocalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000eb40
- (void)_forwardCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ea6c
- (void)phoneCallObserver:(id)arg1 callDidChange:(id)arg2;	// IMP=0x000000010000e9ec
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000010000e874
- (void)_clientCanBeNowPlayingAppNotification:(id)arg1;	// IMP=0x000000010000e814
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000dea4
- (void)_handleSendPlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000dd40
- (void)_handleSendPlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000dbcc
- (void)_handleSendPlaybackSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d46c
- (void)_handleGetPendingCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d010
- (void)_handlePresentMediaControlsLanguageOptionsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d00c
- (void)_handleDismissMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d008
- (void)_handlePresentMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d004
- (void)_handlePrewarmMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000d000
- (void)_handleBroadcastCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000cdb0
- (void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000c878
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010000c790
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000c704
@property(readonly, nonatomic) NSArray *remoteControlClients;
- (void)clearContextsForClient:(id)arg1;	// IMP=0x000000010000c2b0
- (void)sendRemoteControlCommand:(id)arg1 toClients:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b64c
- (void)broadcastRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b544
- (void)broadcastRemoteControlCommand:(id)arg1;	// IMP=0x000000010000b534
- (void)sendRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a314
- (void)sendRemoteControlCommand:(id)arg1;	// IMP=0x000000010000a304
- (void)dealloc;	// IMP=0x000000010000a278
- (id)init;	// IMP=0x000000010000a074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

