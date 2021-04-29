//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDMediaRemoteUIService, MRDTaskAssertion, MRPlaybackQueueClient, MRXPCConnection, NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, OS_dispatch_queue, OS_dispatch_source;

@interface MRDMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionSerialQueue;	// 24 = 0x18
    NSMutableDictionary *_registeredCustomOrigins;	// 32 = 0x20
    NSArray *_applicationPickedRoutes;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    NSMutableArray *_assertions;	// 56 = 0x38
    NSOperationQueue *_relayingMessages;	// 64 = 0x40
    unsigned long long _entitlements;	// 72 = 0x48
    unsigned long long _messageCount;	// 80 = 0x50
    _Bool _connectionSuspended;	// 88 = 0x58
    unsigned long long _maxPendingMessageCountBeforeConenctionSuspension;	// 96 = 0x60
    double _timeoutBeforeConnectionSuspension;	// 104 = 0x68
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 112 = 0x70
    _Bool _canBeNowPlayingApplication;	// 120 = 0x78
    _Bool _keepAlive;	// 121 = 0x79
    _Bool _hasRequestedLegacyNowPlayingInfo;	// 122 = 0x7a
    _Bool _hasRequestedSupportedCommands;	// 123 = 0x7b
    unsigned int _hardwareRemoteBehavior;	// 124 = 0x7c
    unsigned int _routeDiscoveryMode;	// 128 = 0x80
    unsigned int _outputDeviceDiscoveryMode;	// 132 = 0x84
    id <MRDXPCMessageHandling> _messageHandler;	// 136 = 0x88
    id <MRDMediaRemoteClientDelegate> _delegate;	// 144 = 0x90
    MRXPCConnection *_connection;	// 152 = 0x98
    MRDTaskAssertion *_currentTaskAssertion;	// 160 = 0xa0
    NSString *_processName;	// 168 = 0xa8
    NSDate *_canBeNowPlayingTimestamp;	// 176 = 0xb0
    unsigned long long _routeDiscoveryCount;	// 184 = 0xb8
    MRDMediaRemoteUIService *_remoteUIService;	// 192 = 0xc0
    MRPlaybackQueueClient *_playbackQueueRequests;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000001000afedc
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) _Bool hasRequestedSupportedCommands; // @synthesize hasRequestedSupportedCommands=_hasRequestedSupportedCommands;
@property(nonatomic) _Bool hasRequestedLegacyNowPlayingInfo; // @synthesize hasRequestedLegacyNowPlayingInfo=_hasRequestedLegacyNowPlayingInfo;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) MRDMediaRemoteUIService *remoteUIService; // @synthesize remoteUIService=_remoteUIService;
@property(nonatomic) unsigned int outputDeviceDiscoveryMode; // @synthesize outputDeviceDiscoveryMode=_outputDeviceDiscoveryMode;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) unsigned long long routeDiscoveryCount; // @synthesize routeDiscoveryCount=_routeDiscoveryCount;
@property(retain, nonatomic) NSDate *canBeNowPlayingTimestamp; // @synthesize canBeNowPlayingTimestamp=_canBeNowPlayingTimestamp;
@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(nonatomic) _Bool canBeNowPlayingApplication; // @synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) MRDTaskAssertion *currentTaskAssertion; // @synthesize currentTaskAssertion=_currentTaskAssertion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) MRXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRDMediaRemoteClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MRDXPCMessageHandling> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void)_wakeDevice:(_Bool)arg1 dismissScreenSaver:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00000001000afc1c
- (id)_createNotificationMessage:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000afb44
- (id)_runAssertionName;	// IMP=0x00000001000afaf4
- (void)_invalidate;	// IMP=0x00000001000afa48
- (void)_handleXPCMessage:(id)arg1;	// IMP=0x00000001000af9d4
- (id)createNowPlayingClient;	// IMP=0x00000001000af948
- (_Bool)hasRegisteredCustomOrigin:(id)arg1;	// IMP=0x00000001000af7f8
- (void)removeRegisteredCustomOrigin:(id)arg1;	// IMP=0x00000001000af664
- (void)addRegisteredCustomOrigin:(id)arg1;	// IMP=0x00000001000af4c8
- (id)registeredCustomOrigins;	// IMP=0x00000001000af3c8
- (void)_relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aee2c
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aeb84
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2;	// IMP=0x00000001000aeb74
- (void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000adea4
- (_Bool)takeAssertionAndBlessForReason:(id)arg1;	// IMP=0x00000001000ad7b8
- (void)postNotification:(id)arg1;	// IMP=0x00000001000ad4e4
- (void)_onConnectionQueue_postNotification:(id)arg1;	// IMP=0x00000001000acfec
- (void)_onConnectionQueue_connectionResumed;	// IMP=0x00000001000acc5c
- (void)_onConnectionQueue_connectionSuspended;	// IMP=0x00000001000acba8
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ac91c
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x00000001000ac7a0
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x00000001000ac634
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ac05c
- (id)debugDescription;	// IMP=0x00000001000abe20
- (id)description;	// IMP=0x00000001000abd68
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSData *auditToken;
@property(readonly, nonatomic) int pid;
- (void)dealloc;	// IMP=0x00000001000aba60
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000ab398

@end

