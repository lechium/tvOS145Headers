//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSSocketPairConnectionProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol IDSSocketPairConnectionDelegate, OS_dispatch_queue, OS_nw_connection;

@interface IDSNWSocketPairConnection : NSObject <IDSSocketPairConnectionProtocol>
{
    unsigned char _connectionID[16];	// 8 = 0x8
    double _lastSocketActivityTime;	// 24 = 0x18
    unsigned int _sendMessageCounter;	// 32 = 0x20
    NSMutableArray *_outgoingMessageArray;	// 40 = 0x28
    struct os_unfair_lock_s _outgoingMessageArrayLock;	// 48 = 0x30
    unsigned char _loggingSequenceIncoming;	// 52 = 0x34
    unsigned char _loggingSequenceOutgoing;	// 53 = 0x35
    _Bool _hasEndedSession;	// 54 = 0x36
    _Bool _shouldUseCrossLayerLogging;	// 55 = 0x37
    unsigned int _currentOutgoingFragmentedMessageID;	// 56 = 0x38
    unsigned int _fragmentationSize;	// 60 = 0x3c
    NSObject<OS_dispatch_queue> *_priorityQueue;	// 64 = 0x40
    id <IDSSocketPairConnectionDelegate> _delegate;	// 72 = 0x48
    long long _priority;	// 80 = 0x50
    NSObject<OS_nw_connection> *_nwConnection;	// 88 = 0x58
    NSMutableDictionary *_incomingDataFragments;	// 96 = 0x60
    CDUnknownBlockType _encryptionBlock;	// 104 = 0x68
    CDUnknownBlockType _decryptionBlock;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001005d8fd4
@property(nonatomic) _Bool shouldUseCrossLayerLogging; // @synthesize shouldUseCrossLayerLogging=_shouldUseCrossLayerLogging;
@property(nonatomic) _Bool hasEndedSession; // @synthesize hasEndedSession=_hasEndedSession;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType decryptionBlock; // @synthesize decryptionBlock=_decryptionBlock;
@property(copy, nonatomic) CDUnknownBlockType encryptionBlock; // @synthesize encryptionBlock=_encryptionBlock;
@property(retain, nonatomic) NSMutableDictionary *incomingDataFragments; // @synthesize incomingDataFragments=_incomingDataFragments;
@property(nonatomic) unsigned char loggingSequenceOutgoing; // @synthesize loggingSequenceOutgoing=_loggingSequenceOutgoing;
@property(nonatomic) unsigned char loggingSequenceIncoming; // @synthesize loggingSequenceIncoming=_loggingSequenceIncoming;
@property(nonatomic) unsigned int fragmentationSize; // @synthesize fragmentationSize=_fragmentationSize;
@property(nonatomic) unsigned int currentOutgoingFragmentedMessageID; // @synthesize currentOutgoingFragmentedMessageID=_currentOutgoingFragmentedMessageID;
@property(retain, nonatomic) NSObject<OS_nw_connection> *nwConnection; // @synthesize nwConnection=_nwConnection;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <IDSSocketPairConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *priorityQueue; // @synthesize priorityQueue=_priorityQueue;
- (void)_sendDataViaNWConnection:(id)arg1 isLargeTransfer:(_Bool)arg2;	// IMP=0x00000001005d8490
@property(readonly, nonatomic) NSSet *inFlightMessages;
- (void)_dequeueNextMessageFromOutgoingQueue;	// IMP=0x00000001005d7d6c
- (double)lastSocketActivityTime;	// IMP=0x00000001005d7d50
- (_Bool)sendDataMessage:(id)arg1 canFragment:(_Bool)arg2;	// IMP=0x00000001005d7688
- (_Bool)sendDataMessage:(id)arg1;	// IMP=0x00000001005d7610
- (void)_processIncomingRawMessage:(id)arg1;	// IMP=0x00000001005d6460
- (void)processStoredIncomingMessage:(id)arg1;	// IMP=0x00000001005d6400
- (void)_receiveFromNWConnection:(id)arg1;	// IMP=0x00000001005d5634
- (void)setOTREncryptionBlock:(CDUnknownBlockType)arg1 decryptionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001005d5574
- (void)_notifyDelegateAboutClosedConnection;	// IMP=0x00000001005d54e0
- (void)endSession;	// IMP=0x00000001005d51ec
- (void)dealloc;	// IMP=0x00000001005d5100
- (void)start;	// IMP=0x00000001005d4164
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4 identifier:(id)arg5;	// IMP=0x00000001005d3e90

@end

