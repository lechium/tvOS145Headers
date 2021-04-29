//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUTunTimingEvent-Protocol.h"

@class NSString;

@interface IDSUTunTimingEventKernelTest : NSObject <IDSUTunTimingEvent>
{
    double _timestamp;	// 8 = 0x8
    double _kernelTime;	// 16 = 0x10
    long long _bytes;	// 24 = 0x18
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)appendToString:(id)arg1;	// IMP=0x00000001004c8ff8
- (id)initWithTimestamp:(double)arg1 kernelTime:(double)arg2 bytes:(long long)arg3;	// IMP=0x00000001004c8f24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

