//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSTimer;

@interface DMDEventReportingSchedule : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
    NSString *_localTime;	// 24 = 0x18
    NSNumber *_spread;	// 32 = 0x20
    NSNumber *_day;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100042610
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSNumber *day; // @synthesize day=_day;
@property(readonly, nonatomic) NSNumber *spread; // @synthesize spread=_spread;
@property(readonly, copy, nonatomic) NSString *localTime; // @synthesize localTime=_localTime;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)startWithScheduleElapsedHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004240c
- (unsigned long long)hash;	// IMP=0x00000001000422c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100042048
- (id)description;	// IMP=0x0000000100041f84
- (void)dealloc;	// IMP=0x0000000100041f34
- (id)initWithScheduleRegistration:(id)arg1;	// IMP=0x0000000100041c74

@end

