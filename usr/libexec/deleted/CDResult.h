//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CDResult : NSObject
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    _Bool _timedOut;	// 10 = 0xa
    _Bool _finished;	// 11 = 0xb
    unsigned long long _monotonicBegin;	// 16 = 0x10
    unsigned long long _monotonicEnd;	// 24 = 0x18
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) unsigned long long monotonicEnd; // @synthesize monotonicEnd=_monotonicEnd;
@property(readonly, nonatomic) unsigned long long monotonicBegin; // @synthesize monotonicBegin=_monotonicBegin;
@property(readonly, nonatomic) double duration;
- (void)finish;	// IMP=0x0000000100026814
- (id)init;	// IMP=0x00000001000267c4

@end

