//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_AFClockTimerIntentSupportProxy.h"

#import "ADClockTimerIntentSupportChangeTracking-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface _AFClockTimerIntentSupportMutableProxy : _AFClockTimerIntentSupportProxy <ADClockTimerIntentSupportChangeTracking>
{
    NSMutableArray *_trackedChanges;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000e19c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e1874
@property(readonly, nonatomic) NSArray *trackedChanges;
- (void)setDuration:(double)arg1;	// IMP=0x00000001000e16ec
- (void)setState:(unsigned long long)arg1;	// IMP=0x00000001000e15c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
