//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APSRateLimiter : NSObject
{
    double _startInterval;	// 8 = 0x8
    double _timeLimit;	// 16 = 0x10
    long long _limit;	// 24 = 0x18
    long long _notedCount;	// 32 = 0x20
}

@property(nonatomic) long long notedCount; // @synthesize notedCount=_notedCount;
@property(nonatomic) double startInterval; // @synthesize startInterval=_startInterval;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (id)description;	// IMP=0x000000010004130c
- (_Bool)isUnset;	// IMP=0x00000001000412f0
- (void)clear;	// IMP=0x00000001000412e0
- (_Bool)isUnderLimit;	// IMP=0x00000001000412a8
- (void)note;	// IMP=0x0000000100041248
- (_Bool)_checkIsExpired;	// IMP=0x00000001000411dc
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;	// IMP=0x0000000100041184

@end

