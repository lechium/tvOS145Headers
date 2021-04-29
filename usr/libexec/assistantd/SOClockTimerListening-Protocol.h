//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFClockTimerSnapshot, NSUUID, SOClockTimerObserver;

@protocol SOClockTimerListening <NSObject>
- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 snapshotDidUpdateFrom:(AFClockTimerSnapshot *)arg2 to:(AFClockTimerSnapshot *)arg3;
- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 timerDidDismiss:(NSUUID *)arg2;
- (void)clockTimerObserver:(SOClockTimerObserver *)arg1 timerDidFire:(NSUUID *)arg2;
@end
