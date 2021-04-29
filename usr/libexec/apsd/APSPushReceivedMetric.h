//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTAWDMetric-Protocol.h"
#import "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushReceivedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    unsigned int _connectionType;	// 8 = 0x8
    unsigned int _dualChannelState;	// 12 = 0xc
    NSString *_guid;	// 16 = 0x10
    NSNumber *_linkQuality;	// 24 = 0x18
    NSNumber *_receiveOffset;	// 32 = 0x20
    NSNumber *_payloadSize;	// 40 = 0x28
    NSNumber *_isFromStorage;	// 48 = 0x30
    NSString *_topic;	// 56 = 0x38
    NSString *_wakeStatus;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100013b7c
@property(readonly, nonatomic) NSString *wakeStatus; // @synthesize wakeStatus=_wakeStatus;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *isFromStorage; // @synthesize isFromStorage=_isFromStorage;
@property(readonly, nonatomic) NSNumber *payloadSize; // @synthesize payloadSize=_payloadSize;
@property(readonly, nonatomic) NSNumber *receiveOffset; // @synthesize receiveOffset=_receiveOffset;
@property(readonly, nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 connectionType:(unsigned int)arg2 linkQuality:(id)arg3 dualChannelState:(unsigned int)arg4 receiveOffset:(id)arg5 payloadSize:(id)arg6 isFromStorage:(id)arg7 topic:(id)arg8 wakeStatus:(id)arg9;	// IMP=0x0000000100013038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

