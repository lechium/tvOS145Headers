//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CEMEventBase, DMDEventStreamEvent, NSDate, NSString;

@protocol DMDEventTypeStream
@property(readonly, copy, nonatomic) NSString *eventType;
- (DMDEventStreamEvent *)eventStatusRollupSinceStartDate:(NSDate *)arg1;
- (void)startNotificationStreamWithEventsHandler:(void (^)(NSArray *))arg1;
- (void)updateEvent:(CEMEventBase *)arg1;
@end

