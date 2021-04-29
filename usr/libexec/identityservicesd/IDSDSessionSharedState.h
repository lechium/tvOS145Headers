//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMPFullLegacyIdentity, IDSMPPublicLegacyIdentity, IMTimer, NSArray, NSData, NSDate, NSError, NSNumber, NSSet, NSString, NSUUID, _IDSSessionConnection;
@protocol IDSDSession;

@interface IDSDSessionSharedState : NSObject
{
    _Atomic _Bool _connectionTimerCleared;	// 8 = 0x8
    _Bool _disableEncryption;	// 9 = 0x9
    _Bool _disableRemoteDeviceEncryption;	// 10 = 0xa
    _Bool _enableQuickRelay;	// 11 = 0xb
    _Bool _enableSingleChannelDirectMode;	// 12 = 0xc
    _Bool _enableSKE;	// 13 = 0xd
    _Bool _encryptionInitialized;	// 14 = 0xe
    _Atomic _Bool _endSessionTimerCleared;	// 15 = 0xf
    _Bool _forceInternetInvitation;	// 16 = 0x10
    _Bool _isInitiator;	// 17 = 0x11
    _Bool _isScreenSharingSession;	// 18 = 0x12
    _Atomic _Bool _inviteTimerCleared;	// 19 = 0x13
    _Bool _sharedSession;	// 20 = 0x14
    _Bool _useBTDatagramPipe;	// 21 = 0x15
    _Bool _useSecureQRControlMessage;	// 22 = 0x16
    _Bool _useQRDirectly;	// 23 = 0x17
    unsigned int _invitationRetryCount;	// 24 = 0x18
    unsigned int _peerProtocolVersion;	// 28 = 0x1c
    unsigned int _seqSend;	// 32 = 0x20
    unsigned int _state;	// 36 = 0x24
    NSString *_accountID;	// 40 = 0x28
    long long _clientType;	// 48 = 0x30
    NSUUID *_clientUUID;	// 56 = 0x38
    _IDSSessionConnection *_connection;	// 64 = 0x40
    unsigned long long _connectionCountHint;	// 72 = 0x48
    double _connectionTimeout;	// 80 = 0x50
    IMTimer *_connectionTimer;	// 88 = 0x58
    NSSet *_destinations;	// 96 = 0x60
    double _endSessionTimeout;	// 104 = 0x68
    IMTimer *_endSessionTimer;	// 112 = 0x70
    NSError *_error;	// 120 = 0x78
    NSString *_fromID;	// 128 = 0x80
    NSString *_groupID;	// 136 = 0x88
    double _inviteSentTime;	// 144 = 0x90
    double _inviteTimeout;	// 152 = 0x98
    IMTimer *_inviteTimer;	// 160 = 0xa0
    double _lastPacketTime;	// 168 = 0xa8
    NSData *_localBlob;	// 176 = 0xb0
    IMTimer *_packetLossTimer;	// 184 = 0xb8
    NSString *_participantID;	// 192 = 0xc0
    NSNumber *_remoteUseCloudPairedControlChannel;	// 200 = 0xc8
    NSNumber *_remoteUsePhoneContinuityLocalMessage;	// 208 = 0xd0
    NSString *_serviceName;	// 216 = 0xd8
    NSDate *_startConnectingDate;	// 224 = 0xe0
    long long _transportType;	// 232 = 0xe8
    NSString *_uniqueID;	// 240 = 0xf0
    NSArray *_pluginRequests;	// 248 = 0xf8
    IDSMPFullLegacyIdentity *_localUnauthenticatedFullIdentity;	// 256 = 0x100
    IDSMPPublicLegacyIdentity *_remoteUnauthenticatedPublicIdentity;	// 264 = 0x108
    id <IDSDSession> _delegate;	// 272 = 0x110
    CDStruct_eff2b79e _encryptionStateStruct;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000010049a334
@property(nonatomic) CDStruct_eff2b79e encryptionStateStruct; // @synthesize encryptionStateStruct=_encryptionStateStruct;
@property(nonatomic) __weak id <IDSDSession> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSMPPublicLegacyIdentity *remoteUnauthenticatedPublicIdentity; // @synthesize remoteUnauthenticatedPublicIdentity=_remoteUnauthenticatedPublicIdentity;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *localUnauthenticatedFullIdentity; // @synthesize localUnauthenticatedFullIdentity=_localUnauthenticatedFullIdentity;
@property(retain, nonatomic) NSArray *pluginRequests; // @synthesize pluginRequests=_pluginRequests;
@property(nonatomic) _Bool useQRDirectly; // @synthesize useQRDirectly=_useQRDirectly;
@property(nonatomic) _Bool useSecureQRControlMessage; // @synthesize useSecureQRControlMessage=_useSecureQRControlMessage;
@property(nonatomic) _Bool useBTDatagramPipe; // @synthesize useBTDatagramPipe=_useBTDatagramPipe;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *startConnectingDate; // @synthesize startConnectingDate=_startConnectingDate;
@property(nonatomic) _Bool sharedSession; // @synthesize sharedSession=_sharedSession;
@property(nonatomic) unsigned int seqSend; // @synthesize seqSend=_seqSend;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSNumber *remoteUsePhoneContinuityLocalMessage; // @synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage;
@property(retain, nonatomic) NSNumber *remoteUseCloudPairedControlChannel; // @synthesize remoteUseCloudPairedControlChannel=_remoteUseCloudPairedControlChannel;
@property(nonatomic) unsigned int peerProtocolVersion; // @synthesize peerProtocolVersion=_peerProtocolVersion;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) IMTimer *packetLossTimer; // @synthesize packetLossTimer=_packetLossTimer;
@property(retain, nonatomic) NSData *localBlob; // @synthesize localBlob=_localBlob;
@property(nonatomic) double lastPacketTime; // @synthesize lastPacketTime=_lastPacketTime;
@property(nonatomic) _Atomic _Bool inviteTimerCleared; // @synthesize inviteTimerCleared=_inviteTimerCleared;
@property(retain, nonatomic) IMTimer *inviteTimer; // @synthesize inviteTimer=_inviteTimer;
@property(nonatomic) double inviteTimeout; // @synthesize inviteTimeout=_inviteTimeout;
@property(nonatomic) unsigned int invitationRetryCount; // @synthesize invitationRetryCount=_invitationRetryCount;
@property(nonatomic) _Bool isScreenSharingSession; // @synthesize isScreenSharingSession=_isScreenSharingSession;
@property(nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(nonatomic) double inviteSentTime; // @synthesize inviteSentTime=_inviteSentTime;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(nonatomic) _Bool forceInternetInvitation; // @synthesize forceInternetInvitation=_forceInternetInvitation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Atomic _Bool endSessionTimerCleared; // @synthesize endSessionTimerCleared=_endSessionTimerCleared;
@property(retain, nonatomic) IMTimer *endSessionTimer; // @synthesize endSessionTimer=_endSessionTimer;
@property(nonatomic) double endSessionTimeout; // @synthesize endSessionTimeout=_endSessionTimeout;
@property(nonatomic) _Bool encryptionInitialized; // @synthesize encryptionInitialized=_encryptionInitialized;
@property(nonatomic) _Bool enableSKE; // @synthesize enableSKE=_enableSKE;
@property(nonatomic) _Bool enableSingleChannelDirectMode; // @synthesize enableSingleChannelDirectMode=_enableSingleChannelDirectMode;
@property(nonatomic) _Bool enableQuickRelay; // @synthesize enableQuickRelay=_enableQuickRelay;
@property(nonatomic) _Bool disableRemoteDeviceEncryption; // @synthesize disableRemoteDeviceEncryption=_disableRemoteDeviceEncryption;
@property(nonatomic) _Bool disableEncryption; // @synthesize disableEncryption=_disableEncryption;
@property(retain, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(nonatomic) _Atomic _Bool connectionTimerCleared; // @synthesize connectionTimerCleared=_connectionTimerCleared;
@property(retain, nonatomic) IMTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(nonatomic) unsigned long long connectionCountHint; // @synthesize connectionCountHint=_connectionCountHint;
@property(retain, nonatomic) _IDSSessionConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *pushTopic;
- (id)publicIdentityFromData:(id)arg1;	// IMP=0x0000000100498e90
- (_Bool)destinationIsDefaultPairedDevice:(id)arg1;	// IMP=0x0000000100498db0
- (_Bool)destinationIsGuestDevice:(id)arg1;	// IMP=0x0000000100498d3c
- (id)getQuickRelayAllocateOptions:(id)arg1;	// IMP=0x0000000100498948
- (_Bool)supportsReinitiate;	// IMP=0x0000000100498880
- (void)_endSessionTimedOut;	// IMP=0x0000000100498704
- (void)setEndSessionTimeoutTimer;	// IMP=0x0000000100498474
- (void)_clearEndSessionTimeoutTimer;	// IMP=0x0000000100498274
- (void)_clearPacketLossTimer;	// IMP=0x00000001004980ec
- (void)_connectionTimedOut;	// IMP=0x0000000100497f94
- (void)setConnectionTimer;	// IMP=0x0000000100497b48
- (void)_clearConnectionTimer;	// IMP=0x0000000100497948
- (void)_clearInvitationTimer;	// IMP=0x0000000100497748
- (void)_inviteTimedOut;	// IMP=0x0000000100497578
- (void)setInvitationTimer;	// IMP=0x00000001004972d0
- (void)clearAllTimers;	// IMP=0x0000000100497270
@property(readonly, nonatomic) CDStruct_eff2b79e *encryptionState;
- (id)initWithDictionary:(id)arg1 serviceName:(id)arg2 isInitiator:(_Bool)arg3 uniqueID:(id)arg4 accountID:(id)arg5 destinations:(id)arg6;	// IMP=0x00000001004950a0

@end

