//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MediaSocialStatusPollRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSString *_activityIdentifier;	// 16 = 0x10
    double _pollingDuration;	// 24 = 0x18
    double _pollingInterval;	// 32 = 0x20
    long long _postIdentifier;	// 40 = 0x28
    NSString *_sourceApplicationIdentifier;	// 48 = 0x30
    double _postCreateTime;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100027950
@property(nonatomic) double postCreateTime; // @synthesize postCreateTime=_postCreateTime;
@property(copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(nonatomic) long long postIdentifier; // @synthesize postIdentifier=_postIdentifier;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) double pollingDuration; // @synthesize pollingDuration=_pollingDuration;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100027814
- (unsigned long long)hash;	// IMP=0x0000000100027804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100027734

@end

