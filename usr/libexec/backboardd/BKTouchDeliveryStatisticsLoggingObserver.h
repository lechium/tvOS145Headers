//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKTouchLifecycleObserver-Protocol.h"

@class BKEventStatisticsLoggingController, BKHexadecimalIntegerEventStatistic, BKIntegerEventStatistic, BKMRUEventStatistics, NSString;
@protocol BSInvalidatable;

@interface BKTouchDeliveryStatisticsLoggingObserver : NSObject <BKTouchLifecycleObserver>
{
    BKEventStatisticsLoggingController *_loggingController;	// 8 = 0x8
    BKIntegerEventStatistic *_touchUpCount;	// 16 = 0x10
    BKIntegerEventStatistic *_touchDownCount;	// 24 = 0x18
    BKIntegerEventStatistic *_hardCancelCount;	// 32 = 0x20
    BKIntegerEventStatistic *_softCancelCount;	// 40 = 0x28
    BKIntegerEventStatistic *_tapToWakeCount;	// 48 = 0x30
    BKIntegerEventStatistic *_stylusTouchCount;	// 56 = 0x38
    BKIntegerEventStatistic *_detachedTouchCount;	// 64 = 0x40
    BKIntegerEventStatistic *_fromEdgeCount;	// 72 = 0x48
    BKHexadecimalIntegerEventStatistic *_lastTouchID;	// 80 = 0x50
    BKHexadecimalIntegerEventStatistic *_lastContextID;	// 88 = 0x58
    BKIntegerEventStatistic *_lastPID;	// 96 = 0x60
    BKMRUEventStatistics *_recentTouches;	// 104 = 0x68
    id <BSInvalidatable> _logTransaction;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010005609c
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x0000000100056068
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x0000000100055fb8
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x0000000100055f58
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x0000000100055ef8
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x0000000100055e98
- (void)touch:(unsigned int)arg1 upAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000100055e38
- (void)touch:(unsigned int)arg1 downAtPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3 transducerType:(unsigned int)arg4;	// IMP=0x0000000100055dd4
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0000000100055dd0
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x0000000100055d68
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x0000000100055d64
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x0000000100055d60
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0000000100055cd8
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x0000000100055910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
