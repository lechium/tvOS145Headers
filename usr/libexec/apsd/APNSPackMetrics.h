//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APNSPackMetrics : NSObject
{
    const struct Metrics *_metrics;	// 8 = 0x8
}

@property(nonatomic) const struct Metrics *metrics; // @synthesize metrics=_metrics;
- (unsigned long long)totalPackedSize;	// IMP=0x0000000100064218
- (unsigned long long)totalUnpackedSize;	// IMP=0x000000010006420c
- (unsigned long long)messageCount;	// IMP=0x0000000100064200
- (void)dealloc;	// IMP=0x00000001000641b4
- (id)initWithDecoder:(id)arg1;	// IMP=0x0000000100064108
- (id)initWithEncoder:(id)arg1;	// IMP=0x000000010006405c

@end

