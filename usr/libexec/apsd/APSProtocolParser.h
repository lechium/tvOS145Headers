//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APNSPackDecoder, APNSPackEncoder;
@protocol APSProtocolParserDelegate;

@interface APSProtocolParser : NSObject
{
    _Bool _isPackedFormat;	// 8 = 0x8
    APNSPackEncoder *_encoderWrapper;	// 16 = 0x10
    APNSPackDecoder *_decoderWrapper;	// 24 = 0x18
    id <APSProtocolParserDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005481c
@property(nonatomic) _Bool isPackedFormat; // @synthesize isPackedFormat=_isPackedFormat;
@property(retain, nonatomic) id <APSProtocolParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id decoder; // @synthesize decoder=_decoderWrapper;
@property(readonly, nonatomic) id encoder; // @synthesize encoder=_encoderWrapper;
- (void)setSerialItemInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 itemData:(id)arg4;	// IMP=0x0000000100053d50
- (void)setSerialNumberInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 Integer:(long long)arg4;	// IMP=0x00000001000535cc
- (_Bool)_parseSerialMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;	// IMP=0x00000001000533ac
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;	// IMP=0x000000010005329c
- (void)APNSPackDecoder:(id)arg1 ReceivedError:(int)arg2;	// IMP=0x0000000100053220
- (void)APNSPackEncoder:(id)arg1 receivedError:(int)arg2;	// IMP=0x00000001000531a4
- (id)copyTaskNotificationMessageWithInput:(id)arg1;	// IMP=0x00000001000530d4
- (id)copyTaskControlMessageWithInput:(id)arg1 messageId:(unsigned long long)arg2;	// IMP=0x0000000100052fb0
- (id)copySetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2;	// IMP=0x0000000100052e84
- (id)copySetActiveIntervalMessageWithInterval:(unsigned int)arg1;	// IMP=0x0000000100052da8
- (id)copyAppTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3;	// IMP=0x0000000100052ba4
- (id)copyFlushResponseMessageWithPaddingLength:(unsigned long long)arg1;	// IMP=0x0000000100052a9c
- (id)copyFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2;	// IMP=0x0000000100052954
- (id)copyMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6;	// IMP=0x0000000100052700
- (id)copyKeepAliveMessageWithMetadata:(id)arg1;	// IMP=0x0000000100052048
- (id)copyMessageTransportAcknowledgeMessage;	// IMP=0x0000000100051fac
- (id)copyMessageTracingAckWithTopic:(id)arg1 status:(int)arg2 tracingUUID:(id)arg3 token:(id)arg4;	// IMP=0x0000000100051dbc
- (id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3;	// IMP=0x0000000100051c24
- (id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2;	// IMP=0x0000000100051c14
- (id)copyFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6;	// IMP=0x0000000100051214
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 interface:(long long)arg4 activeInterval:(unsigned int)arg5 metadata:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9 redirectCount:(unsigned char)arg10 tcpHandshakeTimeMilliseconds:(double)arg11 dnsResolveTimeMilliseconds:(double)arg12 tlsHandshakeTimeMilliseconds:(double)arg13 consecutiveConnectionFailureReason:(id)arg14 lastConnected:(id)arg15 disconnectReason:(unsigned int)arg16;	// IMP=0x0000000100050700
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 lastConnected:(id)arg10 disconnectReason:(unsigned int)arg11;	// IMP=0x0000000100050698
- (id)copyConnectMessageWithToken:(id)arg1 interface:(long long)arg2 presenceFlags:(unsigned int)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 tcpHandshakeTimeMilliseconds:(double)arg10 dnsResolveTimeMilliseconds:(double)arg11 tlsHandshakeTimeMilliseconds:(double)arg12 consecutiveConnectionFailureReason:(id)arg13 lastConnected:(id)arg14 disconnectReason:(unsigned int)arg15;	// IMP=0x000000010005063c
- (id)copyConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4 certificate:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 tcpHandshakeTimeMilliseconds:(double)arg9 dnsResolveTimeMilliseconds:(double)arg10 tlsHandshakeTimeMilliseconds:(double)arg11 consecutiveConnectionFailureReason:(id)arg12 lastConnected:(id)arg13 disconnectReason:(unsigned int)arg14;	// IMP=0x00000001000505d8
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 certificate:(id)arg4 nonce:(id)arg5 signature:(id)arg6 redirectCount:(unsigned char)arg7 lastConnected:(id)arg8 disconnectReason:(unsigned int)arg9;	// IMP=0x000000010005057c
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2;	// IMP=0x0000000100050538
- (void)setIsPackedFormat:(_Bool)arg1 maxEncoderTableSize:(unsigned long long)arg2 maxDecoderTableSize:(unsigned long long)arg3;	// IMP=0x000000010005046c

@end

