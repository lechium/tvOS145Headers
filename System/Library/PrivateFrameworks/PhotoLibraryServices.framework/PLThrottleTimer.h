/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLThrottleTimer : NSObject {

	id _target;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	unsigned long long _timeoutId;
	unsigned long long _maxTimeoutId;
	BOOL _isPingedSinceLastFire;
	BOOL _isPaused;
	BOOL _isInvalid;
	SEL _action;
	double _timeout;
	double _maxTimeout;

}

@property (nonatomic,__weak,readonly) id target; 
@property (nonatomic,readonly) SEL action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;              //@synthesize maxTimeout=_maxTimeout - In the implementation block
-(void)invalidate;
-(id)target;
-(void)ping;
-(double)timeout;
-(SEL)action;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 invocationQueue:(id)arg3 timeout:(double)arg4 maxTimeout:(double)arg5 ;
-(double)maxTimeout;
-(void)_inqFireWithTimeout:(BOOL)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(BOOL)arg3 maxTimeoutId:(unsigned long long)arg4 ;
-(void)_inqScheduleTimeout:(BOOL)arg1 maxTimeout:(BOOL)arg2 ;
@end

