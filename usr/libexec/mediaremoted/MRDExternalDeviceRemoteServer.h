//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRCryptoPairingSessionDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDExternalDeviceServerClientConnectionDelegate-Protocol.h"
#import "MRDNowPlayingStateObserverDelegate-Protocol.h"
#import "MRDPinPairingDialogDelegate-Protocol.h"
#import "MRDRemoteControlServiceDelegate-Protocol.h"
#import "MRDSleepObserverDelegate-Protocol.h"
#import "MRDTextEditingServiceDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"
#import "MRProtocolClientConnectionDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class CUPairingManager, CURunLoopThread, MRDAVRoutingDataSource, MRDNowPlayingStateObserver, MRDPinPairingDialog, MRDRemoteControlService, MRDSleepObserver, MRDSystemHIDEventManager, MRDTelevisionSiriService, MRDTextEditingService, MROutputContextController, NSArray, NSMutableSet, NSRunLoop, NSString;
@protocol OS_dispatch_queue;

@interface MRDExternalDeviceRemoteServer : NSObject <NSStreamDelegate, MRCryptoPairingSessionDelegate, MRDRemoteControlServiceDelegate, MRDExternalDeviceServerClientConnectionDelegate, MRDNowPlayingStateObserverDelegate, MRDPinPairingDialogDelegate, MRDSleepObserverDelegate, MRDTextEditingServiceDelegate, MRProtocolClientConnectionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    MRDRemoteControlService *_remoteControlService;	// 8 = 0x8
    CURunLoopThread *_streamsRunLoopThread;	// 16 = 0x10
    NSRunLoop *_streamsRunLoop;	// 24 = 0x18
    NSMutableSet *_connectedClients;	// 32 = 0x20
    NSMutableSet *_tvEndpoints;	// 40 = 0x28
    NSMutableSet *_activeReconSessions;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
    _Bool _serverIsRunning;	// 64 = 0x40
    unsigned int _gameControllerInputMode;	// 68 = 0x44
    _Bool _hiliteMode;	// 72 = 0x48
    MRDSystemHIDEventManager *_hidEventManager;	// 80 = 0x50
    MRDNowPlayingStateObserver *_stateObserver;	// 88 = 0x58
    MRDPinPairingDialog *_pinPairingDialog;	// 96 = 0x60
    MRDTelevisionSiriService *_siriService;	// 104 = 0x68
    MRDTextEditingService *_textEditingService;	// 112 = 0x70
    MRDSleepObserver *_sleepObserver;	// 120 = 0x78
    CUPairingManager *_pairingManager;	// 128 = 0x80
    double _transactionWaitDuration;	// 136 = 0x88
    MROutputContextController *_outputContextController;	// 144 = 0x90
    MRDAVRoutingDataSource *_routingDataSource;	// 152 = 0x98
}

+ (unsigned long long)minimumSupportedHangdogApplicationVersion;	// IMP=0x000000010005a64c
+ (unsigned long long)minimumSupportedProtocolVersion;	// IMP=0x000000010005a644
- (void).cxx_destruct;	// IMP=0x000000010006e570
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006e2a4
- (void)_handleUpdateActiveSystemEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006df64
- (void)_handlePlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006daf4
- (void)_handlePlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006d6a8
- (void)_handlePlaybackSessionMigrateRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c9d8
- (void)_handlePlaybackSessionRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c738
- (void)_handleSetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c55c
- (void)_handleGetVolumeControlCapabilitiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c3a4
- (void)_handleGetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c1e4
- (void)_handleModifyOutputContextRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006a348
- (void)_handleLyricsEventMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006a1e8
- (void)_handleGenericMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100069d84
- (void)_handleHiliteModeChanged:(id)arg1;	// IMP=0x0000000100069b20
- (void)_handleSetHiliteModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100069a98
- (void)_handleSetConnectionStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000699c8
- (void)_handleDeviceInfoUpdateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000698cc
- (void)_handlePlaybackQueueRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100069368
- (void)_handleReceivedVoiceInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100069260
- (void)_handleRegisterVoiceInputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068f8c
- (void)_handleRemoteTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068ee4
- (void)_handleGetRemoteTextInputSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068de0
- (void)_handleTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068d04
- (void)_handleGetKeyboardSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068b9c
- (void)_addSystemEndpointToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x0000000100068a60
- (void)_addNowPlayingStateToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x00000001000686a8
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 nowPlayingClient:(id)arg3 playerClient:(id)arg4;	// IMP=0x0000000100068244
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 nowPlayingClient:(id)arg3;	// IMP=0x0000000100068008
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 originClient:(id)arg3;	// IMP=0x0000000100067c5c
- (_Bool)_playerPath:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x0000000100067aac
- (_Bool)_origin:(id)arg1 client:(id)arg2 player:(id)arg3 matchesSubscribedPlayerPath:(id)arg4;	// IMP=0x0000000100067834
- (_Bool)_origin:(id)arg1 client:(id)arg2 matchesSubscribedPlayerPath:(id)arg3;	// IMP=0x00000001000675e8
- (_Bool)_origin:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x0000000100067404
- (void)_addVolumeToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100066ae0
- (void)_addOutputDevicesToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x00000001000669f4
- (void)_syncStateToClient:(id)arg1;	// IMP=0x00000001000668b8
- (void)_handleClientUpdatesConfigMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100066158
- (void)_handleRegisterGameControllerMessage:(id)arg1 client:(id)arg2;	// IMP=0x0000000100066064
- (void)_handleTouchEvent:(struct _MRHIDTouchEvent)arg1 withDeviceID:(unsigned long long)arg2 fromClient:(id)arg3;	// IMP=0x0000000100065f70
- (void)_handleReceivedButtonEvent:(struct _MRHIDButtonEvent)arg1 fromClient:(id)arg2;	// IMP=0x0000000100065e28
- (void)_handleRegisterHIDDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100065bc8
- (void)_handleReceivedCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000658fc
- (void)_handleCryptoPairingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100065410
- (void)_handleDeviceInfoRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100065064
- (void)_handleSendTelevisionCustomDataMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064ef0
- (void)_handleTelevisionEndpointAvailableMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064d28
- (void)_handleSetMessageLogging:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064cc8
- (void)_handleDeletePairedDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064b78
- (void)_handleGetPairedDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000647e4
- (void)_handleDeletePairingIdentityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000646b0
- (void)_handleSetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064618
- (void)_handleGetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100064590
- (_Bool)_isConnectionForManagedConfigIDAllowed:(id)arg1;	// IMP=0x00000001000642d8
- (id)_filteredSupportedCommandsForCommands:(id)arg1 destinedForClient:(id)arg2;	// IMP=0x0000000100063ff0
- (void)_registerCallbacks;	// IMP=0x00000001000627f4
- (void)_wakeDevice:(_Bool)arg1 dismissScreenSaver:(_Bool)arg2;	// IMP=0x0000000100062624
- (void)_notifyAndDisconnectClients:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100061fac
- (void)_notifyAndDisconnectClient:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100061ec0
- (id)_unpair:(id)arg1;	// IMP=0x0000000100061d00
- (void)_setGameControllerInputMode:(unsigned int)arg1;	// IMP=0x0000000100061b30
- (void)_broadcastRemoteTextInputMessageWithPayload:(id)arg1;	// IMP=0x0000000100061874
- (void)_broadcastKeyboardMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000100061694
- (_Bool)_shouldSendStateUpdateMessageFromSource:(long long)arg1 toClient:(id)arg2;	// IMP=0x0000000100061630
- (void)_sendStateUpdateMessageFromPlayerPath:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000613e8
- (_Bool)_connection:(id)arg1 canReceiveUpdatesForPlayerPath:(id)arg2;	// IMP=0x0000000100061268
- (_Bool)_verifyClientVersionCompatibility:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100060f78
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x0000000100060e50
- (id)_clientForPairingSession:(id)arg1;	// IMP=0x0000000100060d60
- (id)_findClientIf:(CDUnknownBlockType)arg1;	// IMP=0x0000000100060c00
- (void)_disconnectClient:(id)arg1;	// IMP=0x00000001000604f4
- (void)_prewarmMediaApps;	// IMP=0x00000001000603c0
- (void)_handleClientConnection:(id)arg1;	// IMP=0x000000010006018c
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0000000100060060
- (void)sleepObserverSystemWillSleep:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ffd8
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010005ff40
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x000000010005fd3c
- (void)_addToMessage:(id)arg1 withAllClusterDeviceMembers:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010005fb70
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;	// IMP=0x000000010005f76c
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;	// IMP=0x000000010005f354
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)arg1;	// IMP=0x000000010005ef8c
- (void)outputContextDataSourceDidAddOutputDevice:(id)arg1;	// IMP=0x000000010005ebd4
- (id)_createSkeletonOutputDevices:(id)arg1;	// IMP=0x000000010005ea0c
- (id)_createVolumelessOutputDevices:(id)arg1;	// IMP=0x000000010005e7e8
- (id)_createLocalizedOutputDevices:(id)arg1;	// IMP=0x000000010005e648
- (id)_createLocalizedOutputDevice:(id)arg1;	// IMP=0x000000010005e570
- (void)gameControllerConnectionDidInterrupt:(id)arg1;	// IMP=0x000000010005e560
- (void)externalDeviceClient:(id)arg1 gameController:(unsigned long long)arg2 propertiesChanged:(id)arg3;	// IMP=0x000000010005e4d0
- (void)pinPairingDialogDidClose:(id)arg1 forClient:(id)arg2 userCancelled:(_Bool)arg3;	// IMP=0x000000010005e428
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;	// IMP=0x000000010005e140
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;	// IMP=0x000000010005ddc8
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;	// IMP=0x000000010005dbcc
- (void)textEditingService:(id)arg1 echoWithText:(id)arg2;	// IMP=0x000000010005dbb8
- (void)textEditingServiceTextEditingDidEnd:(id)arg1;	// IMP=0x000000010005db48
- (void)textEditingService:(id)arg1 attributesDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x000000010005dadc
- (void)textEditingService:(id)arg1 textDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x000000010005da70
- (void)textEditingService:(id)arg1 textEditingDidBegin:(id)arg2 withAttributes:(id)arg3 payload:(id)arg4;	// IMP=0x000000010005d9f8
- (void)stateObserver:(id)arg1 didReceiveDefaultSupportedCommandsChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005d898
- (void)stateObserver:(id)arg1 didReceiveVolumeControlCapabilitiesChange:(unsigned int)arg2 playerPath:(id)arg3;	// IMP=0x000000010005d790
- (void)stateObserver:(id)arg1 didReceivePlayStateChange:(id)arg2;	// IMP=0x000000010005d3ec
- (void)stateObserver:(id)arg1 didReceiveSupportedCommandsChange:(id)arg2;	// IMP=0x000000010005d1c8
- (void)stateObserver:(id)arg1 didReceivePlaybackQueueCapabilitiesChange:(id)arg2;	// IMP=0x000000010005d020
- (void)stateObserver:(id)arg1 didReceiveContentItemArtworkChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005cdec
- (void)stateObserver:(id)arg1 didReceiveContentItemChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005ca9c
- (void)stateObserver:(id)arg1 didReceivePlaybackQueueChange:(id)arg2;	// IMP=0x000000010005c6f4
- (void)stateObserver:(id)arg1 didReceiveNowPlayingPlayerChange:(id)arg2;	// IMP=0x000000010005c5f0
- (void)stateObserver:(id)arg1 didReceiveNowPlayingClientChange:(id)arg2;	// IMP=0x000000010005c188
- (void)stateObserver:(id)arg1 didReceivePlayerDidUnregister:(id)arg2;	// IMP=0x000000010005c084
- (void)stateObserver:(id)arg1 didReceiveClientDidUnregister:(id)arg2;	// IMP=0x000000010005bf40
- (void)stateObserver:(id)arg1 didReceivePlayerStateDidChange:(id)arg2;	// IMP=0x000000010005bdd0
- (void)stateObserver:(id)arg1 didReceiveApplicationClientStateDidChange:(id)arg2;	// IMP=0x000000010005bc8c
- (void)stateObserver:(id)arg1 didReceiveDeviceInfoDidChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005bb9c
- (void)nowPlayingStateDidChange:(id)arg1 createMessageBlock:(CDUnknownBlockType)arg2 createLegacyMessageBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010005bb20
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x000000010005ba20
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000010005b28c
- (void)remoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x000000010005b27c
@property(readonly, nonatomic) NSRunLoop *streamsRunLoop;
@property(readonly, nonatomic) NSArray *endpoints;
@property(readonly, nonatomic) NSArray *clients;
- (void)clearEndpointForClient:(id)arg1;	// IMP=0x000000010005ad24
- (void)stop;	// IMP=0x000000010005acf4
- (void)start;	// IMP=0x000000010005acc0
- (void)dealloc;	// IMP=0x000000010005aaf8
- (void)registerNotifications;	// IMP=0x000000010005a9e4
- (id)init;	// IMP=0x000000010005a9d4
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x000000010005a654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

