//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSEncryptionParameter-Protocol.h"
#import "IDSEndpointResolverParameter-Protocol.h"
#import "IDSFanoutFactoryParameter-Protocol.h"
#import "IDSMadridEndpointFilterParameter-Protocol.h"
#import "IDSMessageFactoryParameter-Protocol.h"

@class IDSPeerMessage, IDSRegistrationProperties, NSArray, NSData, NSDictionary, NSString;

@interface IDSDeliveryPipelineParameter : NSObject <IDSEndpointResolverParameter, IDSMadridEndpointFilterParameter, IDSEncryptionParameter, IDSMessageFactoryParameter, IDSFanoutFactoryParameter>
{
    _Bool _alwaysSkipSelf;	// 8 = 0x8
    _Bool _disallowQueryRefresh;	// 9 = 0x9
    _Bool _sendOnePerToken;	// 10 = 0xa
    _Bool _forceAttachmentMessage;	// 11 = 0xb
    _Bool _forceOnePerFanout;	// 12 = 0xc
    _Bool _wantsDeliveryStatus;	// 13 = 0xd
    _Bool _wantsCertifiedDelivery;	// 14 = 0xe
    _Bool _usedMMCS;	// 15 = 0xf
    NSArray *_uris;	// 16 = 0x10
    NSString *_fromID;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSData *_fromIdentity;	// 40 = 0x28
    IDSRegistrationProperties *_registrationProperties;	// 48 = 0x30
    NSData *_dataToEncrypt;	// 56 = 0x38
    unsigned long long _encryptionType;	// 64 = 0x40
    unsigned long long _maxSize;	// 72 = 0x48
    IDSPeerMessage *_messageToSend;	// 80 = 0x50
    CDUnknownBlockType _willSendBlock;	// 88 = 0x58
    NSString *_guid;	// 96 = 0x60
    NSArray *_endpoints;	// 104 = 0x68
    NSDictionary *_endpointsToEncryptedData;	// 112 = 0x70
    NSArray *_aggregatableMessages;	// 120 = 0x78
    NSArray *_aggregateMessages;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001004ab140
@property(retain, nonatomic) NSArray *aggregateMessages; // @synthesize aggregateMessages=_aggregateMessages;
@property(nonatomic) _Bool usedMMCS; // @synthesize usedMMCS=_usedMMCS;
@property(retain, nonatomic) NSArray *aggregatableMessages; // @synthesize aggregatableMessages=_aggregatableMessages;
@property(retain, nonatomic) NSDictionary *endpointsToEncryptedData; // @synthesize endpointsToEncryptedData=_endpointsToEncryptedData;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) CDUnknownBlockType willSendBlock; // @synthesize willSendBlock=_willSendBlock;
@property(nonatomic) _Bool wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property(nonatomic) _Bool wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
@property(retain, nonatomic) IDSPeerMessage *messageToSend; // @synthesize messageToSend=_messageToSend;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _Bool forceOnePerFanout; // @synthesize forceOnePerFanout=_forceOnePerFanout;
@property(nonatomic) _Bool forceAttachmentMessage; // @synthesize forceAttachmentMessage=_forceAttachmentMessage;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;
@property(retain, nonatomic) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property(retain, nonatomic) IDSRegistrationProperties *registrationProperties; // @synthesize registrationProperties=_registrationProperties;
@property(nonatomic) _Bool sendOnePerToken; // @synthesize sendOnePerToken=_sendOnePerToken;
@property(nonatomic) _Bool disallowQueryRefresh; // @synthesize disallowQueryRefresh=_disallowQueryRefresh;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
@property(retain, nonatomic) NSData *fromIdentity; // @synthesize fromIdentity=_fromIdentity;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
- (id)description;	// IMP=0x00000001004aa900
- (_Bool)overrideSendOnePerTokenForService:(id)arg1;	// IMP=0x00000001004aa870
- (id)initWithInfo:(id)arg1 uris:(id)arg2 service:(id)arg3 maxSize:(unsigned long long)arg4;	// IMP=0x00000001004aa21c

@end

