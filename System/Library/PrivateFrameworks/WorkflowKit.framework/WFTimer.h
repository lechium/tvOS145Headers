/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFTimerHandler, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface WFTimer : NSObject {

	id<WFTimerHandler> _handler;
	double _duration;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;                 //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<WFTimerHandler> handler;                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) double duration;                                       //@synthesize duration=_duration - In the implementation block
-(void)cancel;
-(void)start;
-(double)duration;
-(id<WFTimerHandler>)handler;
-(void)restart;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(id)initWithHandler:(id)arg1 duration:(double)arg2 ;
-(BOOL)shouldHaveTimeout;
@end

