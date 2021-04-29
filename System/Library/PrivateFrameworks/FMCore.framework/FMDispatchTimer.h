/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FMDispatchTimer : NSObject {

	double _leewayTimeInterval;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign,nonatomic) double leewayTimeInterval;                              //@synthesize leewayTimeInterval=_leewayTimeInterval - In the implementation block
-(void)dealloc;
-(void)setTimeout:(double)arg1 ;
-(id)completion;
-(void)cancel;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)timeout;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(double)leewayTimeInterval;
-(id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLeewayTimeInterval:(double)arg1 ;
@end

