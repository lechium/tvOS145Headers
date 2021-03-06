//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRLink, NSUUID;

@interface NRLinkDirectorMessage : NSObject
{
    unsigned char _messageVersion;	// 8 = 0x8
    unsigned short _messageHeaderSize;	// 10 = 0xa
    unsigned short _payloadLength;	// 12 = 0xc
    unsigned int _messageLen;	// 16 = 0x10
    NRLink *_preferredLink;	// 24 = 0x18
    NSUUID *_nrUUID;	// 32 = 0x20
    char *_messageBufferPtr;	// 40 = 0x28
    unsigned long long _identifier;	// 48 = 0x30
}

+ (_Bool)testForNRUUID:(id)arg1;	// IMP=0x000000010000947c
+ (void)testCleanupForNRUUID:(id)arg1;	// IMP=0x0000000100009414
+ (_Bool)testMessage:(id)arg1;	// IMP=0x0000000100008c5c
+ (id)createTestEndpointIPv6;	// IMP=0x0000000100008b90
+ (id)createTestEndpointIPv4;	// IMP=0x0000000100008ac4
+ (id)createArrayFromSubDataArray:(id)arg1;	// IMP=0x0000000100008974
+ (id)createSubDataArrayFromData:(id)arg1;	// IMP=0x0000000100008840
+ (id)testData;	// IMP=0x0000000100008634
+ (id)createMessageWithData:(id)arg1 nrUUID:(id)arg2;	// IMP=0x0000000100008290
- (void).cxx_destruct;	// IMP=0x0000000100008140
@property(nonatomic) unsigned short payloadLength; // @synthesize payloadLength=_payloadLength;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int messageLen; // @synthesize messageLen=_messageLen;
@property(nonatomic) unsigned short messageHeaderSize; // @synthesize messageHeaderSize=_messageHeaderSize;
@property(nonatomic) unsigned char messageVersion; // @synthesize messageVersion=_messageVersion;
@property(nonatomic) char *messageBufferPtr; // @synthesize messageBufferPtr=_messageBufferPtr;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
@property(retain, nonatomic) NRLink *preferredLink; // @synthesize preferredLink=_preferredLink;
- (_Bool)send;	// IMP=0x0000000100007eec
- (id)copySendBuffer;	// IMP=0x0000000100007db8
- (id)copyFirstDataForType:(unsigned char)arg1;	// IMP=0x0000000100007d6c
- (id)copyUpdateWiFiAddressEndpointsForInterfaceIndex:(unsigned int)arg1;	// IMP=0x0000000100007990
- (id)copyFirstBoolForType:(unsigned char)arg1;	// IMP=0x00000001000078fc
- (_Bool)hasType:(unsigned char)arg1;	// IMP=0x00000001000078c8
- (id)copyAllDataForType:(unsigned char)arg1;	// IMP=0x0000000100007394
- (id)copyDeviceLinkState;	// IMP=0x000000010000716c
- (void)addDeviceLinkState:(id)arg1;	// IMP=0x0000000100006e08
- (void)addUpdateWiFiAddressEndpoint:(id)arg1 portHBO:(unsigned short)arg2;	// IMP=0x0000000100006b60
- (void)addType:(unsigned char)arg1;	// IMP=0x0000000100006b50
- (void)addType:(unsigned char)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000100006ad8
- (void)addType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100006668
- (id)description;	// IMP=0x00000001000065d4
- (void)dealloc;	// IMP=0x000000010000631c
- (id)initOutgoingDirectorMessageWithNRUUID:(id)arg1;	// IMP=0x0000000100006298
- (id)initOutgoingDirectorMessageWithNRUUIDInner:(id)arg1 messageVersion:(unsigned char)arg2;	// IMP=0x000000010000606c
- (void)writeMessagePayloadLengthNBOToSendBuffer:(const char *)arg1 len:(unsigned short)arg2;	// IMP=0x0000000100005e00
- (void)writeMessageIdentifierNBOToSendBuffer:(const char *)arg1 len:(unsigned int)arg2;	// IMP=0x0000000100005b60
- (void)writeMessageOptionsToSendBuffer:(const char *)arg1 len:(unsigned char)arg2;	// IMP=0x0000000100005938
- (void)writeMessageVersionToSendBuffer:(unsigned char)arg1;	// IMP=0x0000000100005754
- (id)initDirectorMessageWithNRUUID:(id)arg1 messageLen:(unsigned int)arg2 messageVersion:(unsigned char)arg3;	// IMP=0x00000001000053b4

@end

