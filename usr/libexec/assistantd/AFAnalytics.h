//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    id <AFAnalyticsService> _service;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x00000001001bd378
- (void).cxx_destruct;	// IMP=0x00000001001bef58
- (id)_service:(_Bool)arg1;	// IMP=0x00000001001bef0c
- (void)_stageEvents:(id)arg1;	// IMP=0x00000001001bee94
- (void)_stageEvent:(id)arg1;	// IMP=0x00000001001bedac
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bed08
- (void)logEvents:(id)arg1;	// IMP=0x00000001001bec70
- (void)logEvent:(id)arg1;	// IMP=0x00000001001bebd8
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bea00
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;	// IMP=0x00000001001be620
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x00000001001be314
- (void)setService:(id)arg1;	// IMP=0x00000001001be284
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x00000001001be084
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00000001001bdf70
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;	// IMP=0x00000001001bdf18
- (void)endEventsGrouping;	// IMP=0x00000001001bde78
- (void)beginEventsGrouping;	// IMP=0x00000001001bddd8
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;	// IMP=0x00000001001bd968
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00000001001bd8a8
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;	// IMP=0x00000001001bd83c
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bd7b8
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;	// IMP=0x00000001001bd710
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bd688
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x00000001001bd5f4
- (void)logEventWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00000001001bd56c
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00000001001bd4d4
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000001001bd42c
- (id)init;	// IMP=0x00000001001bd2e0
- (void)configureForDaemon;	// IMP=0x000000010003b708
- (CDUnknownBlockType)_ad_contextLoggerWithEventType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c5030

@end
