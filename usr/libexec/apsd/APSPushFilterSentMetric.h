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

@interface APSPushFilterSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    NSString *_guid;	// 8 = 0x8
    unsigned int _connectionType;	// 16 = 0x10
    NSNumber *_linkQuality;	// 24 = 0x18
    unsigned int _reason;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001a74c
@property(readonly, nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 connectionType:(unsigned int)arg2 linkQuality:(id)arg3 reason:(unsigned int)arg4;	// IMP=0x000000010001a1e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

