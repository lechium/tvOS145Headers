//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTAWDMetric-Protocol.h"
#import "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushTopicPolicyChangedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    NSString *_guid;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    long long _changedReason;	// 24 = 0x18
    _Bool _didCauseFilterChange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100012fa4
@property(readonly, nonatomic) _Bool didCauseFilterChange; // @synthesize didCauseFilterChange=_didCauseFilterChange;
@property(readonly, nonatomic) long long changedReason; // @synthesize changedReason=_changedReason;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 topic:(id)arg2 changedReason:(long long)arg3 didCauseFilterChange:(_Bool)arg4;	// IMP=0x0000000100012a4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

