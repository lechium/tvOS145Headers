//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAAnalyticsEvent.h"

@class UAUserActivityAnalyticsInfo;

@interface UAActivityWasContinuedEvent : UAAnalyticsEvent
{
    UAUserActivityAnalyticsInfo *_info;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100029464
@property(retain) UAUserActivityAnalyticsInfo *info; // @synthesize info=_info;
- (id)stringForInteraction;	// IMP=0x0000000100029334
- (id)reportedActivityType;	// IMP=0x00000001000292ac
- (id)eventPayload;	// IMP=0x0000000100028bc0
- (id)eventName;	// IMP=0x0000000100028bb4
- (id)initWithAnalyticsInfo:(id)arg1;	// IMP=0x0000000100028b40

@end
