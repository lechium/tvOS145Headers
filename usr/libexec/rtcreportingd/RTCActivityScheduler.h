//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCDiskCacheDelegate-Protocol.h"
#import "ReportingSessionEventCacheDelegate-Protocol.h"

@class NSDate, NSString, NSURLSessionDataTask, RTCActivitySchedulerOptions, RTCDiskCache;
@protocol OS_dispatch_queue, OS_xpc_object, ReportingdSessionDelegate;

@interface RTCActivityScheduler : NSObject <ReportingSessionEventCacheDelegate, RTCDiskCacheDelegate>
{
    NSDate *_activityStartTime;	// 8 = 0x8
    int _state;	// 16 = 0x10
    _Bool _isRunning;	// 20 = 0x14
    _Bool _isHoldingXPCTransaction;	// 21 = 0x15
    NSObject<OS_xpc_object> *_activity;	// 24 = 0x18
    NSObject<OS_xpc_object> *_criteria;	// 32 = 0x20
    struct _xpc_activity_eligibility_changed_handler_s *_eligibilityHandler;	// 40 = 0x28
    NSURLSessionDataTask *_task;	// 48 = 0x30
    _Bool _schedulingDisabled;	// 56 = 0x38
    RTCDiskCache *_diskCache;	// 64 = 0x40
    RTCActivitySchedulerOptions *_options;	// 72 = 0x48
    NSString *_lastSessionProcessed;	// 80 = 0x50
    NSString *_activityName;	// 88 = 0x58
    int _exponentialDelay;	// 96 = 0x60
    id <ReportingdSessionDelegate> _delegate;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_stateQueue;	// 112 = 0x70
    id <ReportingdSessionDelegate> _delegat;	// 120 = 0x78
}

@property(readonly, nonatomic) id <ReportingdSessionDelegate> delegat; // @synthesize delegat=_delegat;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *criteria; // @synthesize criteria=_criteria;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) RTCDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly, nonatomic) RTCActivitySchedulerOptions *options; // @synthesize options=_options;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int exponentialDelay; // @synthesize exponentialDelay=_exponentialDelay;
@property(nonatomic) _Bool schedulingDisabled; // @synthesize schedulingDisabled=_schedulingDisabled;
@property(copy, nonatomic) NSDate *activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
- (void)oldestFilePruned:(id)arg1;	// IMP=0x0000000100014bf4
- (void)postURLRequest:(id)arg1 isRealtime:(_Bool)arg2;	// IMP=0x0000000100014938
- (void)releaseXPCTransaction;	// IMP=0x00000001000148f8
- (void)retainXPCTransaction;	// IMP=0x00000001000148c0
- (_Bool)taskDispatched;	// IMP=0x0000000100014574
- (_Bool)performTask:(id)arg1;	// IMP=0x0000000100013700
- (void)dispatchedWorker;	// IMP=0x0000000100013564
- (void)dispatchedStop;	// IMP=0x0000000100013360
- (void)dispatchedStart;	// IMP=0x0000000100012fc8
- (id)xpcActivityState:(long long)arg1;	// IMP=0x0000000100012f58
- (int)randomizedDelay;	// IMP=0x0000000100012d68
- (id)activityDescription;	// IMP=0x0000000100012d0c
- (void)processSuspendActivity:(id)arg1;	// IMP=0x0000000100012c20
- (void)processStartActivity:(id)arg1;	// IMP=0x0000000100012af8
- (void)prepareNextActivity:(int)arg1;	// IMP=0x0000000100012864
- (void)stop;	// IMP=0x00000001000127fc
- (void)start;	// IMP=0x0000000100012744
- (void)dealloc;	// IMP=0x0000000100012668
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000124f8

@end

