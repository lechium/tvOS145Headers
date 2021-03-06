//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSHashable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface AMSDRefreshMultiUserOptions : NSObject <AMSHashable, NSCopying>
{
    _Bool _ignoreThrottling;	// 8 = 0x8
    _Bool _shouldUseCloudData;	// 9 = 0x9
    NSString *_reason;	// 16 = 0x10
    double _schedulingInterval;	// 24 = 0x18
    double _throttlingInterval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002d2e4
@property(nonatomic) double throttlingInterval; // @synthesize throttlingInterval=_throttlingInterval;
@property(nonatomic) _Bool shouldUseCloudData; // @synthesize shouldUseCloudData=_shouldUseCloudData;
@property(nonatomic) double schedulingInterval; // @synthesize schedulingInterval=_schedulingInterval;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool ignoreThrottling; // @synthesize ignoreThrottling=_ignoreThrottling;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d164
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithReason:(id)arg1;	// IMP=0x000000010002cf5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

