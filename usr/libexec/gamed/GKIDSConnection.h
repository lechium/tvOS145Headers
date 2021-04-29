//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNWConnectionWrapperDelegate-Protocol.h"
#import "IDSSessionDelegatePrivate-Protocol.h"

@class GKClientProxy, GKCloudGameSession, IDSAccount, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface GKIDSConnection : NSObject <IDSSessionDelegatePrivate, GKNWConnectionWrapperDelegate>
{
    GKClientProxy *_clientForSession;	// 8 = 0x8
    IDSAccount *_localIDSAccount;	// 16 = 0x10
    NSString *_primaryPlayerCKID;	// 24 = 0x18
    GKCloudGameSession *_cloudSession;	// 32 = 0x20
    long long _connectionState;	// 40 = 0x28
    long long _reasonForDisconnect;	// 48 = 0x30
    CDUnknownBlockType _connectionCompleteHandler;	// 56 = 0x38
    CDUnknownBlockType _disconnectCompleteHandler;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_connectTimeoutTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_backgroundTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_heartbeatTimer;	// 88 = 0x58
    NSMutableDictionary *_heartbeatTimeForCloudIDs;	// 96 = 0x60
    NSMutableDictionary *_pendingSessions;	// 104 = 0x68
    NSMutableDictionary *_reliableSessions;	// 112 = 0x70
    NSMutableDictionary *_unreliableSessions;	// 120 = 0x78
    NSMutableDictionary *_streamConnections;	// 128 = 0x80
    NSMutableDictionary *_datagramConnections;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010003c36c
@property(retain, nonatomic) NSMutableDictionary *datagramConnections; // @synthesize datagramConnections=_datagramConnections;
@property(retain, nonatomic) NSMutableDictionary *streamConnections; // @synthesize streamConnections=_streamConnections;
@property(retain, nonatomic) NSMutableDictionary *unreliableSessions; // @synthesize unreliableSessions=_unreliableSessions;
@property(retain, nonatomic) NSMutableDictionary *reliableSessions; // @synthesize reliableSessions=_reliableSessions;
@property(retain, nonatomic) NSMutableDictionary *pendingSessions; // @synthesize pendingSessions=_pendingSessions;
@property(retain, nonatomic) NSMutableDictionary *heartbeatTimeForCloudIDs; // @synthesize heartbeatTimeForCloudIDs=_heartbeatTimeForCloudIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectTimeoutTimer; // @synthesize connectTimeoutTimer=_connectTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType disconnectCompleteHandler; // @synthesize disconnectCompleteHandler=_disconnectCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionCompleteHandler; // @synthesize connectionCompleteHandler=_connectionCompleteHandler;
@property(nonatomic) long long reasonForDisconnect; // @synthesize reasonForDisconnect=_reasonForDisconnect;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) GKCloudGameSession *cloudSession; // @synthesize cloudSession=_cloudSession;
@property(copy, nonatomic) NSString *primaryPlayerCKID; // @synthesize primaryPlayerCKID=_primaryPlayerCKID;
@property(retain, nonatomic) IDSAccount *localIDSAccount; // @synthesize localIDSAccount=_localIDSAccount;
@property(nonatomic) __weak GKClientProxy *clientForSession; // @synthesize clientForSession=_clientForSession;
- (void)cancelBackgroundTimer;	// IMP=0x000000010003c1cc
- (void)clientEnteredForegroundState:(id)arg1;	// IMP=0x000000010003c10c
- (void)clientEnteredBackgroundState:(id)arg1;	// IMP=0x000000010003bd90
- (void)handleIDSSessionStatusChangeWhileDisconnecting;	// IMP=0x000000010003bb2c
- (void)handleIDSSessionStatusChange;	// IMP=0x000000010003b964
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x000000010003b4f4
- (void)handleDisconnectForClient:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b0ec
- (void)cancelConnectTimeoutTimer;	// IMP=0x000000010003b0a8
- (void)cancelHeartbeatTimer;	// IMP=0x000000010003b064
- (void)receivedHeartbeatFromID:(id)arg1;	// IMP=0x000000010003afe8
- (void)sendHeartbeatToConnections;	// IMP=0x000000010003aa30
- (_Bool)shouldSaveConnectionStateForLostConnectionWithCKID:(id)arg1;	// IMP=0x000000010003a888
- (void)startHeartbeatToMonitorConnections;	// IMP=0x000000010003a73c
- (void)processInternalMessage:(id)arg1;	// IMP=0x000000010003a41c
- (void)connectionWrapper:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000010003a244
- (void)_sendData:(id)arg1 usingConnections:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039f7c
- (void)sendData:(id)arg1 reliably:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039ce0
- (id)clientPacketWithData:(id)arg1 isReliable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100039b68
- (id)internalPacketWithMessage:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000100039a14
- (void)connectionWrapper:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000397a8
- (void)setupDatagramForIDSSession:(id)arg1 fromID:(id)arg2;	// IMP=0x000000010003950c
- (void)setupStreamForIDSSession:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100039270
- (void)acceptUnreliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000100039170
- (void)sendUnreliableIDSSessionInviteToIdentifier:(id)arg1;	// IMP=0x0000000100038ed4
- (void)acceptReliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 context:(id)arg3;	// IMP=0x0000000100038de8
- (void)sessionStarted:(id)arg1;	// IMP=0x0000000100038c2c
- (_Bool)shouldAllowAddingAnotherConnection;	// IMP=0x0000000100038bb8
- (void)invitationAcceptedForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000100038994
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00000001000387bc
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00000001000385e4
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00000001000383dc
- (void)connectToPlayersWithIdentifiers:(id)arg1;	// IMP=0x0000000100037b4c
- (void)connectToGameSessionUsingDelegateQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037198
- (_Bool)isBusyChangingConnectionState;	// IMP=0x0000000100037128
- (void)updateCloudGameSession:(id)arg1;	// IMP=0x000000010003711c
- (void)dealloc;	// IMP=0x0000000100036bf4
- (id)initWithClient:(id)arg1 gameSession:(id)arg2 account:(id)arg3;	// IMP=0x0000000100036a10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

