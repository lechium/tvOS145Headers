//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSUUID;

@protocol AFAnalyticsService <NSObject>
- (oneway void)logInstrumentationOfType:(NSString *)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(NSUUID *)arg3;
- (oneway void)endEventsGrouping;
- (oneway void)beginEventsGrouping;
- (oneway void)stageEvents:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

