//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDMediaRemoteClientDelegate-Protocol.h"
#import "MRDPhoneCallControllerDelegate-Protocol.h"
#import "MRDVirtualAudioInputServerDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class FBSDisplayLayoutMonitor, MRDAVRoutingDataSource, MRDAVRoutingServer, MRDBackgroundTasks, MRDBrowsableContentServer, MRDExternalDeviceRemoteServer, MRDMediaRemoteClient, MRDNowPlayingServer, MRDRemoteControlServer, MRDTransactionServer, MRDVirtualAudioInputServer, MRDVolumeController, NSArray, NSMutableDictionary, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, MRDVirtualAudioInputServerDelegate, MRDPhoneCallControllerDelegate, MRDDiagnosticCollecting>
{
    NSObject<OS_xpc_object> *_listenerConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    MRDAVRoutingDataSource *_localRoutingDataSource;	// 32 = 0x20
    MRDNowPlayingServer *_nowPlayingServer;	// 40 = 0x28
    MRDVolumeController *_volumeController;	// 48 = 0x30
    MRDRemoteControlServer *_remoteControlServer;	// 56 = 0x38
    MRDBrowsableContentServer *_browsableContentServer;	// 64 = 0x40
    MRDExternalDeviceRemoteServer *_externalDeviceServer;	// 72 = 0x48
    MRDAVRoutingServer *_routingServer;	// 80 = 0x50
    MRDVirtualAudioInputServer *_virtualAudioInputServer;	// 88 = 0x58
    MRDTransactionServer *_transactionServer;	// 96 = 0x60
    MRDBackgroundTasks *_tasks;	// 104 = 0x68
    NSMutableDictionary *_activeClients;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_termSigHandler;	// 120 = 0x78
    _Bool _shouldSendCommandsDuringPhoneCall;	// 128 = 0x80
    NSArray *_availableOrigins;	// 136 = 0x88
    FBSDisplayLayoutMonitor *_sharedDisplayMonitor;	// 144 = 0x90
}

+ (id)server;	// IMP=0x00000001000864a8
- (void).cxx_destruct;	// IMP=0x000000010008d3b0
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *sharedDisplayMonitor; // @synthesize sharedDisplayMonitor=_sharedDisplayMonitor;
@property(readonly, nonatomic) _Bool shouldSendCommandsDuringPhoneCall; // @synthesize shouldSendCommandsDuringPhoneCall=_shouldSendCommandsDuringPhoneCall;
@property(readonly, nonatomic) MRDTransactionServer *transactionServer; // @synthesize transactionServer=_transactionServer;
@property(readonly, nonatomic) MRDAVRoutingServer *routingServer; // @synthesize routingServer=_routingServer;
@property(readonly, nonatomic) MRDRemoteControlServer *remoteControlServer; // @synthesize remoteControlServer=_remoteControlServer;
@property(readonly, nonatomic) MRDNowPlayingServer *nowPlayingServer; // @synthesize nowPlayingServer=_nowPlayingServer;
@property(readonly, nonatomic) NSArray *availableOrigins; // @synthesize availableOrigins=_availableOrigins;
- (void)_terminationHandler;	// IMP=0x000000010008d300
- (void)_restoreNowPlayingClientState;	// IMP=0x000000010008ca64
- (void)_validateAuditTokens:(id)arg1 pids:(id)arg2 auditTokens:(id)arg3;	// IMP=0x000000010008c6f8
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOrigin:(id)arg2;	// IMP=0x000000010008c6d8
- (_Bool)_internalMediaRemoteNotificationIsLegal:(id)arg1;	// IMP=0x000000010008c57c
- (void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2;	// IMP=0x000000010008c49c
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010008c130
- (void)virtualAudioInputServer:(id)arg1 didUpdateRecordingState:(unsigned int)arg2 forDevice:(id)arg3;	// IMP=0x000000010008bfe8
- (void)mediaRemoteClientInvalidated:(id)arg1;	// IMP=0x000000010008bdf8
- (void)_handleCollectClientDiagnosticsMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008b614
- (void)_handleCollectClientDiagnosticsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008b4ec
- (void)_handleCollectDiagnosticMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008aec4
- (void)_handleGetSupportsSystemPairingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008ae18
- (void)_handleRequestBlessMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008ab30
- (void)_handlePing:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008ab24
- (void)_handleWakePlayerServiceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008a640
- (void)_handleWakeMediaAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008a398
- (void)_handleGetMediaAppIsInstalledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008a23c
- (void)_handleAdjustSystemVolumeByStepMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008a03c
- (void)_handleSetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089dbc
- (void)_handleGetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089ce4
- (void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089abc
- (void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089aa8
- (void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089968
- (void)_collectDiagnosticFromClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100089854
- (void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089624
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100089468
- (void)_clientDidOpenConnection:(id)arg1;	// IMP=0x0000000100089330
@property(readonly, nonatomic) RPCompanionLinkClient *sharedCompanionLinkClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *daemonClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *frontmostClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemPodcastClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemMediaClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *localNowPlayingClient;
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100088bcc
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 predicate:(CDUnknownBlockType)arg3;	// IMP=0x00000001000885b0
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000885a0
- (void)postClientNotificationNamed:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x000000010008858c
- (void)postClientNotificationNamed:(id)arg1;	// IMP=0x000000010008857c
- (id)clientForPlayerPath:(id)arg1;	// IMP=0x0000000100088478
- (id)canBeNowPlayingClients;	// IMP=0x000000010008830c
- (id)allClients;	// IMP=0x00000001000880f8
- (id)mostRecentPlayingClient;	// IMP=0x0000000100087dfc
- (id)mostRecentCanBeNowPlayingClient;	// IMP=0x0000000100087cdc
- (id)clientWithRegisteredCustomOrigin:(id)arg1;	// IMP=0x0000000100087b00
- (id)clientForBundleIdentifier:(id)arg1;	// IMP=0x0000000100087910
- (id)clientForPID:(int)arg1;	// IMP=0x00000001000877b8
- (void)removeClientForPID:(int)arg1;	// IMP=0x00000001000874b8
- (void)addClient:(id)arg1;	// IMP=0x00000001000870f0
- (void)stop;	// IMP=0x000000010008703c
- (void)start;	// IMP=0x0000000100086e0c
- (void)dealloc;	// IMP=0x0000000100086da8
- (void)initializeServer;	// IMP=0x0000000100086614
- (id)_init;	// IMP=0x0000000100086570
- (id)init;	// IMP=0x0000000100086520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
