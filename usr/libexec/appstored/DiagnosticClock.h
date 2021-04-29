//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Clock-Protocol.h"

@class NSDate, NSString;

@interface DiagnosticClock : NSObject <Clock>
{
    int _notifyToken;	// 8 = 0x8
    double _timeOffset;	// 16 = 0x10
}

+ (id)defaultClock;	// IMP=0x000000010025f82c
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)_updateTimeOffset;	// IMP=0x000000010025fa94
@property(readonly) NSDate *now;
- (void)dealloc;	// IMP=0x000000010025fa20
- (id)init;	// IMP=0x000000010025f898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
