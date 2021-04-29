//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDSessionMessenger, IDSDSessionSharedState, NSData, NSDictionary;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionInvitationManager : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _remoteAssumeRemoteDeviceEncryption;	// 68 = 0x44
    _Bool _useStunMICheck;	// 69 = 0x45
    unsigned int _seqRecvStart;	// 72 = 0x48
    unsigned int _SSRCRecv;	// 76 = 0x4c
    unsigned int _seqSendStart;	// 80 = 0x50
    unsigned int _SSRCSend;	// 84 = 0x54
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 88 = 0x58
    NSDictionary *_preferences;	// 96 = 0x60
    NSData *_quickRelaySessionToken;	// 104 = 0x68
    NSData *_remoteBlob;	// 112 = 0x70
    IDSDSessionMessenger *_messenger;	// 120 = 0x78
    IDSDSessionSharedState *_sharedState;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010041c978
@property(nonatomic) _Bool useStunMICheck; // @synthesize useStunMICheck=_useStunMICheck;
@property(nonatomic) unsigned int SSRCSend; // @synthesize SSRCSend=_SSRCSend;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(nonatomic) unsigned int seqSendStart; // @synthesize seqSendStart=_seqSendStart;
@property(nonatomic) _Bool remoteAssumeRemoteDeviceEncryption; // @synthesize remoteAssumeRemoteDeviceEncryption=_remoteAssumeRemoteDeviceEncryption;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(nonatomic) unsigned int SSRCRecv; // @synthesize SSRCRecv=_SSRCRecv;
@property(nonatomic) unsigned int seqRecvStart; // @synthesize seqRecvStart=_seqRecvStart;
@property(retain, nonatomic) NSData *remoteBlob; // @synthesize remoteBlob=_remoteBlob;
@property(retain, nonatomic) NSData *quickRelaySessionToken; // @synthesize quickRelaySessionToken=_quickRelaySessionToken;
@property(retain, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
- (void)receivedCancelMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x000000010041bcf0
- (_Bool)_isValidDestination:(id)arg1;	// IMP=0x000000010041b764
- (void)receivedDeclineMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x000000010041aaf0
- (void)receivedAcceptMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00000001004174c4
- (id)publicIdentityDataFromLocalFullIdentity;	// IMP=0x0000000100416c08
- (_Bool)_isLocalDeviceSafeviewAdviserInitiatorOnLoboMacOrLaterAndRemoteDeviceIsPreTiboAnyPlatform;	// IMP=0x0000000100416bec
- (void)declineInvitationWithData:(id)arg1 forceFromID:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x0000000100416600
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x0000000100416598
- (void)declineInvitation;	// IMP=0x0000000100416560
- (void)_sendAcceptMessageWithContext:(id)arg1 connectionData:(id)arg2;	// IMP=0x00000001004153ec
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0000000100412968
- (void)acceptInvitation;	// IMP=0x0000000100412930
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x00000001004128b8
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x0000000100412820
- (void)cancelInvitation;	// IMP=0x00000001004127b0
- (id)_acceptedDeviceToken;	// IMP=0x0000000100412350
- (id)_acceptedDeviceUniqueID;	// IMP=0x0000000100411dc4
- (void)sendCancelInvitationToDestinations:(id)arg1 remoteEndReason:(unsigned int)arg2 data:(id)arg3;	// IMP=0x00000001004114d0
- (void)_sendCancelInvitationToDestinations:(id)arg1 withData:(id)arg2;	// IMP=0x000000010041143c
- (void)_setLinkPreferences:(id)arg1;	// IMP=0x00000001004113f0
- (void)_sendInvitationMessageToDestinations:(id)arg1 withOptions:(id)arg2 contextData:(id)arg3 declineOnError:(_Bool)arg4 connectionData:(id)arg5;	// IMP=0x000000010040edc0
- (void)_sendInvitationWithOptions:(id)arg1 data:(id)arg2 declineOnError:(_Bool)arg3;	// IMP=0x000000010040c5a8
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x000000010040c528
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x000000010040c4a8
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2 messenger:(id)arg3;	// IMP=0x000000010040c2e8

@end

