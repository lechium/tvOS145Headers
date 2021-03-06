//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IMMultiQueue, NSMutableDictionary;

@interface IDSDSessionController : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    FTMessageDelivery *_messageDelivery;	// 16 = 0x10
    IMMultiQueue *_sessionIDMultiQueue;	// 24 = 0x18
    _Bool _reportedReceivedMKM;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010028d0f0
- (void).cxx_destruct;	// IMP=0x000000010029a238
@property(readonly) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void)updateCriticalReliabilityState;	// IMP=0x0000000100299e2c
- (id)groupSessionGroupIDs;	// IMP=0x0000000100299bf4
- (id)sessionWithGroupUUID:(id)arg1;	// IMP=0x00000001002996dc
- (id)sessionWithGroupID:(id)arg1;	// IMP=0x00000001002991ac
- (id)sessionWithInstanceID:(id)arg1;	// IMP=0x0000000100298d38
- (id)sessionWithUniqueID:(id)arg1;	// IMP=0x0000000100298abc
- (id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3;	// IMP=0x0000000100297dbc
- (void)_handleClientDeath:(id)arg1;	// IMP=0x0000000100297808
- (void)cleanupSessionsForClient:(id)arg1;	// IMP=0x0000000100297138
- (void)cleanupSessionWithChannelDestination:(id)arg1;	// IMP=0x0000000100297070
- (void)cleanupSessionWithInstanceID:(id)arg1;	// IMP=0x0000000100296d60
- (void)cleanupSession:(id)arg1;	// IMP=0x0000000100296980
- (void)processIncomingGroupSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6;	// IMP=0x00000001002949b0
- (void)processIncomingSessionReinitiateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00000001002944bc
- (void)processIncomingSessionEndMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x0000000100293fc8
- (void)processIncomingSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x0000000100293ad4
- (void)processIncomingSessionCancelMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00000001002935e0
- (void)processIncomingSessionDeclineMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00000001002930ec
- (void)processIncomingSessionAcceptMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x0000000100292bf8
- (void)processIncomingInvitationWithPayload:(id)arg1 topic:(id)arg2 fromToken:(id)arg3 fromID:(id)arg4 toID:(id)arg5 shouldFilter:(_Bool)arg6 idsMessageContext:(id)arg7 messageContext:(id)arg8;	// IMP=0x000000010028ee8c
- (id)setupNewIncomingSessionWithOptions:(id)arg1;	// IMP=0x000000010028e32c
- (id)setupNewOutgoingSessionWithOptions:(id)arg1;	// IMP=0x000000010028d5c8
- (void)dealloc;	// IMP=0x000000010028d558
- (id)init;	// IMP=0x000000010028d284

@end

