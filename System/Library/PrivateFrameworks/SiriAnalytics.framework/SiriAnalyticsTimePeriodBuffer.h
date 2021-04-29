/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet;

@interface SiriAnalyticsTimePeriodBuffer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _bufferTimer;
	double _bufferInterval;
	double _leeway;
	NSMutableSet* _bufferedMessages;
	/*^block*/id _onMessagesProduced;

}
-(id)initWithInterval:(double)arg1 queue:(id)arg2 ;
-(void)onMessagesProduced:(/*^block*/id)arg1 ;
-(void)enqueueMessages:(id)arg1 ;
-(void)_timerElapsed;
-(void)_stopProducing;
-(void)_startProducing;
@end

