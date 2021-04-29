//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, RPCompanionLinkDevice;

@interface ADCompanionServiceRequestTimerInfo : NSObject
{
    double _startTime;	// 8 = 0x8
    AFWatchdogTimer *_heartbeatTimer;	// 16 = 0x10
    AFWatchdogTimer *_requestTimer;	// 24 = 0x18
    RPCompanionLinkDevice *_destination;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001d05c0
@property(retain, nonatomic) RPCompanionLinkDevice *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) AFWatchdogTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) AFWatchdogTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end

