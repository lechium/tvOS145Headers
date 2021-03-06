//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTTimerIntentSupport-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@interface _AFClockTimerIntentSupportProxy : NSObject <NSCopying, NSMutableCopying, MTTimerIntentSupport>
{
    NSUUID *_timerID;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _remainingTime;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSDictionary *_siriContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000e1578
@property(readonly, nonatomic) NSDictionary *siriContext; // @synthesize siriContext=_siriContext;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *timerID; // @synthesize timerID=_timerID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e14f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e14f4
- (void)setDuration:(double)arg1;	// IMP=0x00000001000e1470
- (void)setState:(unsigned long long)arg1;	// IMP=0x00000001000e144c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long type;
- (id)initWithTimerID:(id)arg1 state:(unsigned long long)arg2 duration:(double)arg3 remainingTime:(double)arg4 lastModifiedDate:(id)arg5 title:(id)arg6 siriContext:(id)arg7;	// IMP=0x00000001000e11e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

